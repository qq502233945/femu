/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_SUN4M_CPU_INTERRUPT_DSTATE;
uint16_t _TRACE_SUN4M_CPU_RESET_INTERRUPT_DSTATE;
uint16_t _TRACE_SUN4M_CPU_SET_IRQ_RAISE_DSTATE;
uint16_t _TRACE_SUN4M_CPU_SET_IRQ_LOWER_DSTATE;
uint16_t _TRACE_LEON3_SET_IRQ_DSTATE;
uint16_t _TRACE_LEON3_RESET_IRQ_DSTATE;
TraceEvent _TRACE_SUN4M_CPU_INTERRUPT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sun4m_cpu_interrupt",
    .sstate = TRACE_SUN4M_CPU_INTERRUPT_ENABLED,
    .dstate = &_TRACE_SUN4M_CPU_INTERRUPT_DSTATE 
};
TraceEvent _TRACE_SUN4M_CPU_RESET_INTERRUPT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sun4m_cpu_reset_interrupt",
    .sstate = TRACE_SUN4M_CPU_RESET_INTERRUPT_ENABLED,
    .dstate = &_TRACE_SUN4M_CPU_RESET_INTERRUPT_DSTATE 
};
TraceEvent _TRACE_SUN4M_CPU_SET_IRQ_RAISE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sun4m_cpu_set_irq_raise",
    .sstate = TRACE_SUN4M_CPU_SET_IRQ_RAISE_ENABLED,
    .dstate = &_TRACE_SUN4M_CPU_SET_IRQ_RAISE_DSTATE 
};
TraceEvent _TRACE_SUN4M_CPU_SET_IRQ_LOWER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sun4m_cpu_set_irq_lower",
    .sstate = TRACE_SUN4M_CPU_SET_IRQ_LOWER_ENABLED,
    .dstate = &_TRACE_SUN4M_CPU_SET_IRQ_LOWER_DSTATE 
};
TraceEvent _TRACE_LEON3_SET_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "leon3_set_irq",
    .sstate = TRACE_LEON3_SET_IRQ_ENABLED,
    .dstate = &_TRACE_LEON3_SET_IRQ_DSTATE 
};
TraceEvent _TRACE_LEON3_RESET_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "leon3_reset_irq",
    .sstate = TRACE_LEON3_RESET_IRQ_ENABLED,
    .dstate = &_TRACE_LEON3_RESET_IRQ_DSTATE 
};
TraceEvent *hw_sparc_trace_events[] = {
    &_TRACE_SUN4M_CPU_INTERRUPT_EVENT,
    &_TRACE_SUN4M_CPU_RESET_INTERRUPT_EVENT,
    &_TRACE_SUN4M_CPU_SET_IRQ_RAISE_EVENT,
    &_TRACE_SUN4M_CPU_SET_IRQ_LOWER_EVENT,
    &_TRACE_LEON3_SET_IRQ_EVENT,
    &_TRACE_LEON3_RESET_IRQ_EVENT,
  NULL,
};

static void trace_hw_sparc_register_events(void)
{
    trace_event_register_group(hw_sparc_trace_events);
}
trace_init(trace_hw_sparc_register_events)
