/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_ACCEL_KVM_GENERATED_TRACERS_H
#define TRACE_ACCEL_KVM_GENERATED_TRACERS_H

#include "qemu-common.h"
#include "trace/control.h"

extern TraceEvent _TRACE_KVM_IOCTL_EVENT;
extern TraceEvent _TRACE_KVM_VM_IOCTL_EVENT;
extern TraceEvent _TRACE_KVM_VCPU_IOCTL_EVENT;
extern TraceEvent _TRACE_KVM_RUN_EXIT_EVENT;
extern TraceEvent _TRACE_KVM_DEVICE_IOCTL_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_REG_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_REG_SET_EVENT;
extern TraceEvent _TRACE_KVM_IRQCHIP_COMMIT_ROUTES_EVENT;
extern TraceEvent _TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE_EVENT;
extern TraceEvent _TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE_EVENT;
extern TraceEvent _TRACE_KVM_IRQCHIP_RELEASE_VIRQ_EVENT;
extern uint16_t _TRACE_KVM_IOCTL_DSTATE;
extern uint16_t _TRACE_KVM_VM_IOCTL_DSTATE;
extern uint16_t _TRACE_KVM_VCPU_IOCTL_DSTATE;
extern uint16_t _TRACE_KVM_RUN_EXIT_DSTATE;
extern uint16_t _TRACE_KVM_DEVICE_IOCTL_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_REG_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_REG_SET_DSTATE;
extern uint16_t _TRACE_KVM_IRQCHIP_COMMIT_ROUTES_DSTATE;
extern uint16_t _TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE_DSTATE;
extern uint16_t _TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE_DSTATE;
extern uint16_t _TRACE_KVM_IRQCHIP_RELEASE_VIRQ_DSTATE;
#define TRACE_KVM_IOCTL_ENABLED 1
#define TRACE_KVM_VM_IOCTL_ENABLED 1
#define TRACE_KVM_VCPU_IOCTL_ENABLED 1
#define TRACE_KVM_RUN_EXIT_ENABLED 1
#define TRACE_KVM_DEVICE_IOCTL_ENABLED 1
#define TRACE_KVM_FAILED_REG_GET_ENABLED 1
#define TRACE_KVM_FAILED_REG_SET_ENABLED 1
#define TRACE_KVM_IRQCHIP_COMMIT_ROUTES_ENABLED 1
#define TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE_ENABLED 1
#define TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE_ENABLED 1
#define TRACE_KVM_IRQCHIP_RELEASE_VIRQ_ENABLED 1
#include "qemu/log.h"


static inline void trace_kvm_ioctl(int type, void * arg)
{
    if (true) {
        if (trace_event_get_state(TRACE_KVM_IOCTL)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:kvm_ioctl " "type 0x%x, arg %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , type, arg);
        }
    }
}

static inline void trace_kvm_vm_ioctl(int type, void * arg)
{
    if (true) {
        if (trace_event_get_state(TRACE_KVM_VM_IOCTL)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:kvm_vm_ioctl " "type 0x%x, arg %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , type, arg);
        }
    }
}

static inline void trace_kvm_vcpu_ioctl(int cpu_index, int type, void * arg)
{
    if (true) {
        if (trace_event_get_state(TRACE_KVM_VCPU_IOCTL)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:kvm_vcpu_ioctl " "cpu_index %d, type 0x%x, arg %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , cpu_index, type, arg);
        }
    }
}

static inline void trace_kvm_run_exit(int cpu_index, uint32_t reason)
{
    if (true) {
        if (trace_event_get_state(TRACE_KVM_RUN_EXIT)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:kvm_run_exit " "cpu_index %d, reason %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , cpu_index, reason);
        }
    }
}

static inline void trace_kvm_device_ioctl(int fd, int type, void * arg)
{
    if (true) {
        if (trace_event_get_state(TRACE_KVM_DEVICE_IOCTL)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:kvm_device_ioctl " "dev fd %d, type 0x%x, arg %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , fd, type, arg);
        }
    }
}

static inline void trace_kvm_failed_reg_get(uint64_t id, const char * msg)
{
    if (true) {
        if (trace_event_get_state(TRACE_KVM_FAILED_REG_GET)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:kvm_failed_reg_get " "Warning: Unable to retrieve ONEREG %" PRIu64 " from KVM: %s" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , id, msg);
        }
    }
}

static inline void trace_kvm_failed_reg_set(uint64_t id, const char * msg)
{
    if (true) {
        if (trace_event_get_state(TRACE_KVM_FAILED_REG_SET)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:kvm_failed_reg_set " "Warning: Unable to set ONEREG %" PRIu64 " to KVM: %s" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , id, msg);
        }
    }
}

static inline void trace_kvm_irqchip_commit_routes(void)
{
    if (true) {
        if (trace_event_get_state(TRACE_KVM_IRQCHIP_COMMIT_ROUTES)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:kvm_irqchip_commit_routes " "" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          );
        }
    }
}

static inline void trace_kvm_irqchip_add_msi_route(char * name, int vector, int virq)
{
    if (true) {
        if (trace_event_get_state(TRACE_KVM_IRQCHIP_ADD_MSI_ROUTE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:kvm_irqchip_add_msi_route " "dev %s vector %d virq %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , name, vector, virq);
        }
    }
}

static inline void trace_kvm_irqchip_update_msi_route(int virq)
{
    if (true) {
        if (trace_event_get_state(TRACE_KVM_IRQCHIP_UPDATE_MSI_ROUTE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:kvm_irqchip_update_msi_route " "Updating MSI route virq=%d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , virq);
        }
    }
}

static inline void trace_kvm_irqchip_release_virq(int virq)
{
    if (true) {
        if (trace_event_get_state(TRACE_KVM_IRQCHIP_RELEASE_VIRQ)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:kvm_irqchip_release_virq " "virq %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , virq);
        }
    }
}
#endif /* TRACE_ACCEL_KVM_GENERATED_TRACERS_H */
