// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTENERLOGCONFIGREQUESTACCESSLOGTRACINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTENERLOGCONFIGREQUESTACCESSLOGTRACINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateListenerLogConfigRequestAccessLogTracingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListenerLogConfigRequestAccessLogTracingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(TracingEnabled, tracingEnabled_);
      DARABONBA_PTR_TO_JSON(TracingSample, tracingSample_);
      DARABONBA_PTR_TO_JSON(TracingType, tracingType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListenerLogConfigRequestAccessLogTracingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(TracingEnabled, tracingEnabled_);
      DARABONBA_PTR_FROM_JSON(TracingSample, tracingSample_);
      DARABONBA_PTR_FROM_JSON(TracingType, tracingType_);
    };
    UpdateListenerLogConfigRequestAccessLogTracingConfig() = default ;
    UpdateListenerLogConfigRequestAccessLogTracingConfig(const UpdateListenerLogConfigRequestAccessLogTracingConfig &) = default ;
    UpdateListenerLogConfigRequestAccessLogTracingConfig(UpdateListenerLogConfigRequestAccessLogTracingConfig &&) = default ;
    UpdateListenerLogConfigRequestAccessLogTracingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListenerLogConfigRequestAccessLogTracingConfig() = default ;
    UpdateListenerLogConfigRequestAccessLogTracingConfig& operator=(const UpdateListenerLogConfigRequestAccessLogTracingConfig &) = default ;
    UpdateListenerLogConfigRequestAccessLogTracingConfig& operator=(UpdateListenerLogConfigRequestAccessLogTracingConfig &&) = default ;
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
    inline UpdateListenerLogConfigRequestAccessLogTracingConfig& setTracingEnabled(bool tracingEnabled) { DARABONBA_PTR_SET_VALUE(tracingEnabled_, tracingEnabled) };


    // tracingSample Field Functions 
    bool hasTracingSample() const { return this->tracingSample_ != nullptr;};
    void deleteTracingSample() { this->tracingSample_ = nullptr;};
    inline int32_t tracingSample() const { DARABONBA_PTR_GET_DEFAULT(tracingSample_, 0) };
    inline UpdateListenerLogConfigRequestAccessLogTracingConfig& setTracingSample(int32_t tracingSample) { DARABONBA_PTR_SET_VALUE(tracingSample_, tracingSample) };


    // tracingType Field Functions 
    bool hasTracingType() const { return this->tracingType_ != nullptr;};
    void deleteTracingType() { this->tracingType_ = nullptr;};
    inline string tracingType() const { DARABONBA_PTR_GET_DEFAULT(tracingType_, "") };
    inline UpdateListenerLogConfigRequestAccessLogTracingConfig& setTracingType(string tracingType) { DARABONBA_PTR_SET_VALUE(tracingType_, tracingType) };


  protected:
    // Specifies whether to enable the Xtrace feature. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // > You can set this parameter to **true** only if the access log feature is enabled by specifying **AccessLogEnabled**.
    // 
    // This parameter is required.
    std::shared_ptr<bool> tracingEnabled_ = nullptr;
    // The sampling rate of the Xtrace feature.
    // 
    // Valid values: **1 to 10000**.
    // 
    // > This parameter takes effect only if you set **TracingEnabled** to **true**.
    std::shared_ptr<int32_t> tracingSample_ = nullptr;
    // The type of Xtrace. Set the value to **Zipkin**.
    // 
    // > This parameter takes effect only if you set **TracingEnabled** to **true**.
    std::shared_ptr<string> tracingType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
