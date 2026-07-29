// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteServiceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DeleteServiceTaskRequest() = default ;
    DeleteServiceTaskRequest(const DeleteServiceTaskRequest &) = default ;
    DeleteServiceTaskRequest(DeleteServiceTaskRequest &&) = default ;
    DeleteServiceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceTaskRequest() = default ;
    DeleteServiceTaskRequest& operator=(const DeleteServiceTaskRequest &) = default ;
    DeleteServiceTaskRequest& operator=(DeleteServiceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeleteServiceTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The task type. This parameter is required. Valid values:
    // 
    // - heapdump: heap dump.
    // - LiveDebug Probe: live_debug_log_probe, live_debug_snapshot_probe, live_debug_metric_probe, live_debug_span_probe, live_debug_span_tag_probe.
    // - LiveDebug Command: live_debug_inspect_object, live_debug_search_type, live_debug_search_method, live_debug_decompile, live_debug_get_thread_info, live_debug_get_runtime_info, live_debug_get_memory_info, live_debug_evaluate_expression, live_debug_modify_logger_level.
    // - LiveDebug code hot replacement: live_debug_code_replace.
    // 
    // The value must be the same as the type specified during task creation.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
