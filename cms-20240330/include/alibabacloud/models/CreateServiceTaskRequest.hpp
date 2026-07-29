// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateServiceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ip, ip_);
      DARABONBA_PTR_TO_JSON(taskConfig, taskConfig_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ip, ip_);
      DARABONBA_PTR_FROM_JSON(taskConfig, taskConfig_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateServiceTaskRequest() = default ;
    CreateServiceTaskRequest(const CreateServiceTaskRequest &) = default ;
    CreateServiceTaskRequest(CreateServiceTaskRequest &&) = default ;
    CreateServiceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceTaskRequest() = default ;
    CreateServiceTaskRequest& operator=(const CreateServiceTaskRequest &) = default ;
    CreateServiceTaskRequest& operator=(CreateServiceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && this->taskConfig_ == nullptr && this->type_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline CreateServiceTaskRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // taskConfig Field Functions 
    bool hasTaskConfig() const { return this->taskConfig_ != nullptr;};
    void deleteTaskConfig() { this->taskConfig_ = nullptr;};
    inline string getTaskConfig() const { DARABONBA_PTR_GET_DEFAULT(taskConfig_, "") };
    inline CreateServiceTaskRequest& setTaskConfig(string taskConfig) { DARABONBA_PTR_SET_VALUE(taskConfig_, taskConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateServiceTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The IP address of the target instance. This parameter is optional. If not specified, some tasks can match instances by scope (such as instanceIds). This parameter is typically required for heap dump scenarios.
    // 
    // This parameter is required.
    shared_ptr<string> ip_ {};
    // The task configuration. The value is a JSON string with a maximum length of 65536 characters. This parameter is required for LiveDebug task types. Use a flat JSON structure and pass a single command or probe object directly. Do not wrap it in a commands or probes array. Probe example (dynamic log): {"probeType":"LOG","language":"java","target":{"typeName":"com.example.UserService","methodName":"getUser","location":"exit","instanceIds":["*"]},"action":{"type":"LOG","template":"userId=${args[0]}","templateSegments":[{"type":"TEXT","value":"userId="},{"type":"EXPRESSION","value":"args[0]"]},"ttl":"1h","captureCount":100}. Command example (OGNL): {"commandType":"EVALUATE_EXPRESSION","language":"java","params":{"expression":"@java.lang.System@getProperty(\\"java.home\\")"},"instanceIds":["*"]}. Note: The Command type must include instanceIds at the top level. For Probe types, instanceIds is placed inside the target object. The action.metricType for METRIC probes can be set to COUNTER, GAUGE, HISTOGRAM, or SUMMARY. The Java Agent supports only COUNTER and GAUGE.
    shared_ptr<string> taskConfig_ {};
    // The task type. This parameter is required. Valid values: heapdump (heap dump). LiveDebug Probe: live_debug_log_probe, live_debug_snapshot_probe, live_debug_metric_probe, live_debug_span_probe, live_debug_span_tag_probe. LiveDebug Command: live_debug_inspect_object, live_debug_search_type, live_debug_search_method, live_debug_decompile, live_debug_get_thread_info, live_debug_get_runtime_info, live_debug_get_memory_info, live_debug_evaluate_expression, live_debug_modify_logger_level. LiveDebug Code Replace: live_debug_code_replace.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
