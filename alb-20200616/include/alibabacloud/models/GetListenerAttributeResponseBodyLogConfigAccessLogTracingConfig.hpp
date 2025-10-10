// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYLOGCONFIGACCESSLOGTRACINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYLOGCONFIGACCESSLOGTRACINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(TracingEnabled, tracingEnabled_);
      DARABONBA_PTR_TO_JSON(TracingSample, tracingSample_);
      DARABONBA_PTR_TO_JSON(TracingType, tracingType_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(TracingEnabled, tracingEnabled_);
      DARABONBA_PTR_FROM_JSON(TracingSample, tracingSample_);
      DARABONBA_PTR_FROM_JSON(TracingType, tracingType_);
    };
    GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig() = default ;
    GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig(const GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig &) = default ;
    GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig(GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig &&) = default ;
    GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig() = default ;
    GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig& operator=(const GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig &) = default ;
    GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig& operator=(GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tracingEnabled_ != nullptr
        && this->tracingSample_ != nullptr && this->tracingType_ != nullptr; };
    // tracingEnabled Field Functions 
    bool hasTracingEnabled() const { return this->tracingEnabled_ != nullptr;};
    void deleteTracingEnabled() { this->tracingEnabled_ = nullptr;};
    inline bool tracingEnabled() const { DARABONBA_PTR_GET_DEFAULT(tracingEnabled_, false) };
    inline GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig& setTracingEnabled(bool tracingEnabled) { DARABONBA_PTR_SET_VALUE(tracingEnabled_, tracingEnabled) };


    // tracingSample Field Functions 
    bool hasTracingSample() const { return this->tracingSample_ != nullptr;};
    void deleteTracingSample() { this->tracingSample_ = nullptr;};
    inline int32_t tracingSample() const { DARABONBA_PTR_GET_DEFAULT(tracingSample_, 0) };
    inline GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig& setTracingSample(int32_t tracingSample) { DARABONBA_PTR_SET_VALUE(tracingSample_, tracingSample) };


    // tracingType Field Functions 
    bool hasTracingType() const { return this->tracingType_ != nullptr;};
    void deleteTracingType() { this->tracingType_ = nullptr;};
    inline string tracingType() const { DARABONBA_PTR_GET_DEFAULT(tracingType_, "") };
    inline GetListenerAttributeResponseBodyLogConfigAccessLogTracingConfig& setTracingType(string tracingType) { DARABONBA_PTR_SET_VALUE(tracingType_, tracingType) };


  protected:
    // Indicates whether Xtrace is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > You can set this parameter to **true** only if the AccessLogEnabled parameter is set to true.
    std::shared_ptr<bool> tracingEnabled_ = nullptr;
    // The sampling rate of Xtrace. Valid values: 1 to 10000.
    // 
    // > If **TracingEnabled** is set to **true**, this parameter is valid.
    std::shared_ptr<int32_t> tracingSample_ = nullptr;
    // The Xtrace type. Supported Xtrace type: **Zipkin**.
    // 
    // > If **TracingEnabled** is set to **true**, this parameter is valid.
    std::shared_ptr<string> tracingType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
