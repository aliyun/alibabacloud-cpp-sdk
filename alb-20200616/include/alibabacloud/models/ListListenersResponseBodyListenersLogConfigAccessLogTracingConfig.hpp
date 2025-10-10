// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERSLOGCONFIGACCESSLOGTRACINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERSLOGCONFIGACCESSLOGTRACINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(TracingEnabled, tracingEnabled_);
      DARABONBA_PTR_TO_JSON(TracingSample, tracingSample_);
      DARABONBA_PTR_TO_JSON(TracingType, tracingType_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(TracingEnabled, tracingEnabled_);
      DARABONBA_PTR_FROM_JSON(TracingSample, tracingSample_);
      DARABONBA_PTR_FROM_JSON(TracingType, tracingType_);
    };
    ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig() = default ;
    ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig(const ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig &) = default ;
    ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig(ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig &&) = default ;
    ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig() = default ;
    ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig& operator=(const ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig &) = default ;
    ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig& operator=(ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig &&) = default ;
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
    inline ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig& setTracingEnabled(bool tracingEnabled) { DARABONBA_PTR_SET_VALUE(tracingEnabled_, tracingEnabled) };


    // tracingSample Field Functions 
    bool hasTracingSample() const { return this->tracingSample_ != nullptr;};
    void deleteTracingSample() { this->tracingSample_ = nullptr;};
    inline int32_t tracingSample() const { DARABONBA_PTR_GET_DEFAULT(tracingSample_, 0) };
    inline ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig& setTracingSample(int32_t tracingSample) { DARABONBA_PTR_SET_VALUE(tracingSample_, tracingSample) };


    // tracingType Field Functions 
    bool hasTracingType() const { return this->tracingType_ != nullptr;};
    void deleteTracingType() { this->tracingType_ = nullptr;};
    inline string tracingType() const { DARABONBA_PTR_GET_DEFAULT(tracingType_, "") };
    inline ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig& setTracingType(string tracingType) { DARABONBA_PTR_SET_VALUE(tracingType_, tracingType) };


  protected:
    // Indicates whether xtrace is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter can be set to **true** only when the access log feature of ALB is enabled by setting **AccessLogEnabled** to true.
    std::shared_ptr<bool> tracingEnabled_ = nullptr;
    // The sampling rate of xtrace. Valid values: **1 to 10000**.
    // 
    // >  This parameter takes effect when **TracingEnabled** is set to **true**.
    std::shared_ptr<int32_t> tracingSample_ = nullptr;
    // The type of xtrace. The value is set to **Zipkin**.
    // 
    // >  This parameter takes effect when **TracingEnabled** is set to **true**.
    std::shared_ptr<string> tracingType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
