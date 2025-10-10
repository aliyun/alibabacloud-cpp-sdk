// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYLOGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYLOGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerAttributeResponseBodyLogConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerAttributeResponseBodyLogConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
      DARABONBA_PTR_TO_JSON(AccessLogTracingConfig, accessLogTracingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerAttributeResponseBodyLogConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
      DARABONBA_PTR_FROM_JSON(AccessLogTracingConfig, accessLogTracingConfig_);
    };
    GetListenerAttributeResponseBodyLogConfig() = default ;
    GetListenerAttributeResponseBodyLogConfig(const GetListenerAttributeResponseBodyLogConfig &) = default ;
    GetListenerAttributeResponseBodyLogConfig(GetListenerAttributeResponseBodyLogConfig &&) = default ;
    GetListenerAttributeResponseBodyLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerAttributeResponseBodyLogConfig() = default ;
    GetListenerAttributeResponseBodyLogConfig& operator=(const GetListenerAttributeResponseBodyLogConfig &) = default ;
    GetListenerAttributeResponseBodyLogConfig& operator=(GetListenerAttributeResponseBodyLogConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessLogRecordCustomizedHeadersEnabled_ != nullptr
        && this->accessLogTracingConfig_ != nullptr; };
    // accessLogRecordCustomizedHeadersEnabled Field Functions 
    bool hasAccessLogRecordCustomizedHeadersEnabled() const { return this->accessLogRecordCustomizedHeadersEnabled_ != nullptr;};
    void deleteAccessLogRecordCustomizedHeadersEnabled() { this->accessLogRecordCustomizedHeadersEnabled_ = nullptr;};
    inline bool accessLogRecordCustomizedHeadersEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogRecordCustomizedHeadersEnabled_, false) };
    inline GetListenerAttributeResponseBodyLogConfig& setAccessLogRecordCustomizedHeadersEnabled(bool accessLogRecordCustomizedHeadersEnabled) { DARABONBA_PTR_SET_VALUE(accessLogRecordCustomizedHeadersEnabled_, accessLogRecordCustomizedHeadersEnabled) };


    // accessLogTracingConfig Field Functions 
    bool hasAccessLogTracingConfig() const { return this->accessLogTracingConfig_ != nullptr;};
    void deleteAccessLogTracingConfig() { this->accessLogTracingConfig_ = nullptr;};
    inline const Models::GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig & accessLogTracingConfig() const { DARABONBA_PTR_GET_CONST(accessLogTracingConfig_, Models::GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig) };
    inline Models::GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig accessLogTracingConfig() { DARABONBA_PTR_GET(accessLogTracingConfig_, Models::GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig) };
    inline GetListenerAttributeResponseBodyLogConfig& setAccessLogTracingConfig(const Models::GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig & accessLogTracingConfig) { DARABONBA_PTR_SET_VALUE(accessLogTracingConfig_, accessLogTracingConfig) };
    inline GetListenerAttributeResponseBodyLogConfig& setAccessLogTracingConfig(Models::GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig && accessLogTracingConfig) { DARABONBA_PTR_SET_RVALUE(accessLogTracingConfig_, accessLogTracingConfig) };


  protected:
    // Indicates whether custom headers are recorded in the access log. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> accessLogRecordCustomizedHeadersEnabled_ = nullptr;
    // The configuration of Xtrace. Xtrace is used to record requests sent to ALB.
    std::shared_ptr<Models::GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig> accessLogTracingConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
