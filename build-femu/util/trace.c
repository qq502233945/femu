/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_RUN_POLL_HANDLERS_BEGIN_DSTATE;
uint16_t _TRACE_RUN_POLL_HANDLERS_END_DSTATE;
uint16_t _TRACE_POLL_SHRINK_DSTATE;
uint16_t _TRACE_POLL_GROW_DSTATE;
uint16_t _TRACE_AIO_CO_SCHEDULE_DSTATE;
uint16_t _TRACE_AIO_CO_SCHEDULE_BH_CB_DSTATE;
uint16_t _TRACE_THREAD_POOL_SUBMIT_DSTATE;
uint16_t _TRACE_THREAD_POOL_COMPLETE_DSTATE;
uint16_t _TRACE_THREAD_POOL_CANCEL_DSTATE;
uint16_t _TRACE_BUFFER_RESIZE_DSTATE;
uint16_t _TRACE_BUFFER_MOVE_EMPTY_DSTATE;
uint16_t _TRACE_BUFFER_MOVE_DSTATE;
uint16_t _TRACE_BUFFER_FREE_DSTATE;
uint16_t _TRACE_QEMU_AIO_COROUTINE_ENTER_DSTATE;
uint16_t _TRACE_QEMU_COROUTINE_YIELD_DSTATE;
uint16_t _TRACE_QEMU_COROUTINE_TERMINATE_DSTATE;
uint16_t _TRACE_QEMU_CO_QUEUE_RUN_RESTART_DSTATE;
uint16_t _TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED_DSTATE;
uint16_t _TRACE_QEMU_CO_MUTEX_LOCK_ENTRY_DSTATE;
uint16_t _TRACE_QEMU_CO_MUTEX_LOCK_RETURN_DSTATE;
uint16_t _TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY_DSTATE;
uint16_t _TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN_DSTATE;
uint16_t _TRACE_QEMU_MEMALIGN_DSTATE;
uint16_t _TRACE_QEMU_ANON_RAM_ALLOC_DSTATE;
uint16_t _TRACE_QEMU_VFREE_DSTATE;
uint16_t _TRACE_QEMU_ANON_RAM_FREE_DSTATE;
uint16_t _TRACE_HBITMAP_ITER_SKIP_WORDS_DSTATE;
uint16_t _TRACE_HBITMAP_RESET_DSTATE;
uint16_t _TRACE_HBITMAP_SET_DSTATE;
uint16_t _TRACE_LOCKCNT_FAST_PATH_ATTEMPT_DSTATE;
uint16_t _TRACE_LOCKCNT_FAST_PATH_SUCCESS_DSTATE;
uint16_t _TRACE_LOCKCNT_UNLOCK_ATTEMPT_DSTATE;
uint16_t _TRACE_LOCKCNT_UNLOCK_SUCCESS_DSTATE;
uint16_t _TRACE_LOCKCNT_FUTEX_WAIT_PREPARE_DSTATE;
uint16_t _TRACE_LOCKCNT_FUTEX_WAIT_DSTATE;
uint16_t _TRACE_LOCKCNT_FUTEX_WAIT_RESUME_DSTATE;
uint16_t _TRACE_LOCKCNT_FUTEX_WAKE_DSTATE;
TraceEvent _TRACE_RUN_POLL_HANDLERS_BEGIN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "run_poll_handlers_begin",
    .sstate = TRACE_RUN_POLL_HANDLERS_BEGIN_ENABLED,
    .dstate = &_TRACE_RUN_POLL_HANDLERS_BEGIN_DSTATE 
};
TraceEvent _TRACE_RUN_POLL_HANDLERS_END_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "run_poll_handlers_end",
    .sstate = TRACE_RUN_POLL_HANDLERS_END_ENABLED,
    .dstate = &_TRACE_RUN_POLL_HANDLERS_END_DSTATE 
};
TraceEvent _TRACE_POLL_SHRINK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "poll_shrink",
    .sstate = TRACE_POLL_SHRINK_ENABLED,
    .dstate = &_TRACE_POLL_SHRINK_DSTATE 
};
TraceEvent _TRACE_POLL_GROW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "poll_grow",
    .sstate = TRACE_POLL_GROW_ENABLED,
    .dstate = &_TRACE_POLL_GROW_DSTATE 
};
TraceEvent _TRACE_AIO_CO_SCHEDULE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "aio_co_schedule",
    .sstate = TRACE_AIO_CO_SCHEDULE_ENABLED,
    .dstate = &_TRACE_AIO_CO_SCHEDULE_DSTATE 
};
TraceEvent _TRACE_AIO_CO_SCHEDULE_BH_CB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "aio_co_schedule_bh_cb",
    .sstate = TRACE_AIO_CO_SCHEDULE_BH_CB_ENABLED,
    .dstate = &_TRACE_AIO_CO_SCHEDULE_BH_CB_DSTATE 
};
TraceEvent _TRACE_THREAD_POOL_SUBMIT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "thread_pool_submit",
    .sstate = TRACE_THREAD_POOL_SUBMIT_ENABLED,
    .dstate = &_TRACE_THREAD_POOL_SUBMIT_DSTATE 
};
TraceEvent _TRACE_THREAD_POOL_COMPLETE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "thread_pool_complete",
    .sstate = TRACE_THREAD_POOL_COMPLETE_ENABLED,
    .dstate = &_TRACE_THREAD_POOL_COMPLETE_DSTATE 
};
TraceEvent _TRACE_THREAD_POOL_CANCEL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "thread_pool_cancel",
    .sstate = TRACE_THREAD_POOL_CANCEL_ENABLED,
    .dstate = &_TRACE_THREAD_POOL_CANCEL_DSTATE 
};
TraceEvent _TRACE_BUFFER_RESIZE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "buffer_resize",
    .sstate = TRACE_BUFFER_RESIZE_ENABLED,
    .dstate = &_TRACE_BUFFER_RESIZE_DSTATE 
};
TraceEvent _TRACE_BUFFER_MOVE_EMPTY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "buffer_move_empty",
    .sstate = TRACE_BUFFER_MOVE_EMPTY_ENABLED,
    .dstate = &_TRACE_BUFFER_MOVE_EMPTY_DSTATE 
};
TraceEvent _TRACE_BUFFER_MOVE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "buffer_move",
    .sstate = TRACE_BUFFER_MOVE_ENABLED,
    .dstate = &_TRACE_BUFFER_MOVE_DSTATE 
};
TraceEvent _TRACE_BUFFER_FREE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "buffer_free",
    .sstate = TRACE_BUFFER_FREE_ENABLED,
    .dstate = &_TRACE_BUFFER_FREE_DSTATE 
};
TraceEvent _TRACE_QEMU_AIO_COROUTINE_ENTER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_aio_coroutine_enter",
    .sstate = TRACE_QEMU_AIO_COROUTINE_ENTER_ENABLED,
    .dstate = &_TRACE_QEMU_AIO_COROUTINE_ENTER_DSTATE 
};
TraceEvent _TRACE_QEMU_COROUTINE_YIELD_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_coroutine_yield",
    .sstate = TRACE_QEMU_COROUTINE_YIELD_ENABLED,
    .dstate = &_TRACE_QEMU_COROUTINE_YIELD_DSTATE 
};
TraceEvent _TRACE_QEMU_COROUTINE_TERMINATE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_coroutine_terminate",
    .sstate = TRACE_QEMU_COROUTINE_TERMINATE_ENABLED,
    .dstate = &_TRACE_QEMU_COROUTINE_TERMINATE_DSTATE 
};
TraceEvent _TRACE_QEMU_CO_QUEUE_RUN_RESTART_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_co_queue_run_restart",
    .sstate = TRACE_QEMU_CO_QUEUE_RUN_RESTART_ENABLED,
    .dstate = &_TRACE_QEMU_CO_QUEUE_RUN_RESTART_DSTATE 
};
TraceEvent _TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_co_mutex_lock_uncontended",
    .sstate = TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED_ENABLED,
    .dstate = &_TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED_DSTATE 
};
TraceEvent _TRACE_QEMU_CO_MUTEX_LOCK_ENTRY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_co_mutex_lock_entry",
    .sstate = TRACE_QEMU_CO_MUTEX_LOCK_ENTRY_ENABLED,
    .dstate = &_TRACE_QEMU_CO_MUTEX_LOCK_ENTRY_DSTATE 
};
TraceEvent _TRACE_QEMU_CO_MUTEX_LOCK_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_co_mutex_lock_return",
    .sstate = TRACE_QEMU_CO_MUTEX_LOCK_RETURN_ENABLED,
    .dstate = &_TRACE_QEMU_CO_MUTEX_LOCK_RETURN_DSTATE 
};
TraceEvent _TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_co_mutex_unlock_entry",
    .sstate = TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY_ENABLED,
    .dstate = &_TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY_DSTATE 
};
TraceEvent _TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_co_mutex_unlock_return",
    .sstate = TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN_ENABLED,
    .dstate = &_TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN_DSTATE 
};
TraceEvent _TRACE_QEMU_MEMALIGN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_memalign",
    .sstate = TRACE_QEMU_MEMALIGN_ENABLED,
    .dstate = &_TRACE_QEMU_MEMALIGN_DSTATE 
};
TraceEvent _TRACE_QEMU_ANON_RAM_ALLOC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_anon_ram_alloc",
    .sstate = TRACE_QEMU_ANON_RAM_ALLOC_ENABLED,
    .dstate = &_TRACE_QEMU_ANON_RAM_ALLOC_DSTATE 
};
TraceEvent _TRACE_QEMU_VFREE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_vfree",
    .sstate = TRACE_QEMU_VFREE_ENABLED,
    .dstate = &_TRACE_QEMU_VFREE_DSTATE 
};
TraceEvent _TRACE_QEMU_ANON_RAM_FREE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_anon_ram_free",
    .sstate = TRACE_QEMU_ANON_RAM_FREE_ENABLED,
    .dstate = &_TRACE_QEMU_ANON_RAM_FREE_DSTATE 
};
TraceEvent _TRACE_HBITMAP_ITER_SKIP_WORDS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "hbitmap_iter_skip_words",
    .sstate = TRACE_HBITMAP_ITER_SKIP_WORDS_ENABLED,
    .dstate = &_TRACE_HBITMAP_ITER_SKIP_WORDS_DSTATE 
};
TraceEvent _TRACE_HBITMAP_RESET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "hbitmap_reset",
    .sstate = TRACE_HBITMAP_RESET_ENABLED,
    .dstate = &_TRACE_HBITMAP_RESET_DSTATE 
};
TraceEvent _TRACE_HBITMAP_SET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "hbitmap_set",
    .sstate = TRACE_HBITMAP_SET_ENABLED,
    .dstate = &_TRACE_HBITMAP_SET_DSTATE 
};
TraceEvent _TRACE_LOCKCNT_FAST_PATH_ATTEMPT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "lockcnt_fast_path_attempt",
    .sstate = TRACE_LOCKCNT_FAST_PATH_ATTEMPT_ENABLED,
    .dstate = &_TRACE_LOCKCNT_FAST_PATH_ATTEMPT_DSTATE 
};
TraceEvent _TRACE_LOCKCNT_FAST_PATH_SUCCESS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "lockcnt_fast_path_success",
    .sstate = TRACE_LOCKCNT_FAST_PATH_SUCCESS_ENABLED,
    .dstate = &_TRACE_LOCKCNT_FAST_PATH_SUCCESS_DSTATE 
};
TraceEvent _TRACE_LOCKCNT_UNLOCK_ATTEMPT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "lockcnt_unlock_attempt",
    .sstate = TRACE_LOCKCNT_UNLOCK_ATTEMPT_ENABLED,
    .dstate = &_TRACE_LOCKCNT_UNLOCK_ATTEMPT_DSTATE 
};
TraceEvent _TRACE_LOCKCNT_UNLOCK_SUCCESS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "lockcnt_unlock_success",
    .sstate = TRACE_LOCKCNT_UNLOCK_SUCCESS_ENABLED,
    .dstate = &_TRACE_LOCKCNT_UNLOCK_SUCCESS_DSTATE 
};
TraceEvent _TRACE_LOCKCNT_FUTEX_WAIT_PREPARE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "lockcnt_futex_wait_prepare",
    .sstate = TRACE_LOCKCNT_FUTEX_WAIT_PREPARE_ENABLED,
    .dstate = &_TRACE_LOCKCNT_FUTEX_WAIT_PREPARE_DSTATE 
};
TraceEvent _TRACE_LOCKCNT_FUTEX_WAIT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "lockcnt_futex_wait",
    .sstate = TRACE_LOCKCNT_FUTEX_WAIT_ENABLED,
    .dstate = &_TRACE_LOCKCNT_FUTEX_WAIT_DSTATE 
};
TraceEvent _TRACE_LOCKCNT_FUTEX_WAIT_RESUME_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "lockcnt_futex_wait_resume",
    .sstate = TRACE_LOCKCNT_FUTEX_WAIT_RESUME_ENABLED,
    .dstate = &_TRACE_LOCKCNT_FUTEX_WAIT_RESUME_DSTATE 
};
TraceEvent _TRACE_LOCKCNT_FUTEX_WAKE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "lockcnt_futex_wake",
    .sstate = TRACE_LOCKCNT_FUTEX_WAKE_ENABLED,
    .dstate = &_TRACE_LOCKCNT_FUTEX_WAKE_DSTATE 
};
TraceEvent *util_trace_events[] = {
    &_TRACE_RUN_POLL_HANDLERS_BEGIN_EVENT,
    &_TRACE_RUN_POLL_HANDLERS_END_EVENT,
    &_TRACE_POLL_SHRINK_EVENT,
    &_TRACE_POLL_GROW_EVENT,
    &_TRACE_AIO_CO_SCHEDULE_EVENT,
    &_TRACE_AIO_CO_SCHEDULE_BH_CB_EVENT,
    &_TRACE_THREAD_POOL_SUBMIT_EVENT,
    &_TRACE_THREAD_POOL_COMPLETE_EVENT,
    &_TRACE_THREAD_POOL_CANCEL_EVENT,
    &_TRACE_BUFFER_RESIZE_EVENT,
    &_TRACE_BUFFER_MOVE_EMPTY_EVENT,
    &_TRACE_BUFFER_MOVE_EVENT,
    &_TRACE_BUFFER_FREE_EVENT,
    &_TRACE_QEMU_AIO_COROUTINE_ENTER_EVENT,
    &_TRACE_QEMU_COROUTINE_YIELD_EVENT,
    &_TRACE_QEMU_COROUTINE_TERMINATE_EVENT,
    &_TRACE_QEMU_CO_QUEUE_RUN_RESTART_EVENT,
    &_TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED_EVENT,
    &_TRACE_QEMU_CO_MUTEX_LOCK_ENTRY_EVENT,
    &_TRACE_QEMU_CO_MUTEX_LOCK_RETURN_EVENT,
    &_TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY_EVENT,
    &_TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN_EVENT,
    &_TRACE_QEMU_MEMALIGN_EVENT,
    &_TRACE_QEMU_ANON_RAM_ALLOC_EVENT,
    &_TRACE_QEMU_VFREE_EVENT,
    &_TRACE_QEMU_ANON_RAM_FREE_EVENT,
    &_TRACE_HBITMAP_ITER_SKIP_WORDS_EVENT,
    &_TRACE_HBITMAP_RESET_EVENT,
    &_TRACE_HBITMAP_SET_EVENT,
    &_TRACE_LOCKCNT_FAST_PATH_ATTEMPT_EVENT,
    &_TRACE_LOCKCNT_FAST_PATH_SUCCESS_EVENT,
    &_TRACE_LOCKCNT_UNLOCK_ATTEMPT_EVENT,
    &_TRACE_LOCKCNT_UNLOCK_SUCCESS_EVENT,
    &_TRACE_LOCKCNT_FUTEX_WAIT_PREPARE_EVENT,
    &_TRACE_LOCKCNT_FUTEX_WAIT_EVENT,
    &_TRACE_LOCKCNT_FUTEX_WAIT_RESUME_EVENT,
    &_TRACE_LOCKCNT_FUTEX_WAKE_EVENT,
  NULL,
};

static void trace_util_register_events(void)
{
    trace_event_register_group(util_trace_events);
}
trace_init(trace_util_register_events)
