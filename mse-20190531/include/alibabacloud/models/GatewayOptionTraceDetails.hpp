// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYOPTIONTRACEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYOPTIONTRACEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GatewayOptionTraceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayOptionTraceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(TraceEnabled, traceEnabled_);
      DARABONBA_PTR_TO_JSON(TraceType, traceType_);
    };
    friend void from_json(const Darabonba::Json& j, GatewayOptionTraceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(TraceEnabled, traceEnabled_);
      DARABONBA_PTR_FROM_JSON(TraceType, traceType_);
    };
    GatewayOptionTraceDetails() = default ;
    GatewayOptionTraceDetails(const GatewayOptionTraceDetails &) = default ;
    GatewayOptionTraceDetails(GatewayOptionTraceDetails &&) = default ;
    GatewayOptionTraceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayOptionTraceDetails() = default ;
    GatewayOptionTraceDetails& operator=(const GatewayOptionTraceDetails &) = default ;
    GatewayOptionTraceDetails& operator=(GatewayOptionTraceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sample_ == nullptr
        && return this->serviceId_ == nullptr && return this->servicePort_ == nullptr && return this->traceEnabled_ == nullptr && return this->traceType_ == nullptr; };
    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline int64_t sample() const { DARABONBA_PTR_GET_DEFAULT(sample_, 0L) };
    inline GatewayOptionTraceDetails& setSample(int64_t sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline GatewayOptionTraceDetails& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline string servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
    inline GatewayOptionTraceDetails& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // traceEnabled Field Functions 
    bool hasTraceEnabled() const { return this->traceEnabled_ != nullptr;};
    void deleteTraceEnabled() { this->traceEnabled_ = nullptr;};
    inline bool traceEnabled() const { DARABONBA_PTR_GET_DEFAULT(traceEnabled_, false) };
    inline GatewayOptionTraceDetails& setTraceEnabled(bool traceEnabled) { DARABONBA_PTR_SET_VALUE(traceEnabled_, traceEnabled) };


    // traceType Field Functions 
    bool hasTraceType() const { return this->traceType_ != nullptr;};
    void deleteTraceType() { this->traceType_ = nullptr;};
    inline string traceType() const { DARABONBA_PTR_GET_DEFAULT(traceType_, "") };
    inline GatewayOptionTraceDetails& setTraceType(string traceType) { DARABONBA_PTR_SET_VALUE(traceType_, traceType) };


  protected:
    std::shared_ptr<int64_t> sample_ = nullptr;
    std::shared_ptr<int64_t> serviceId_ = nullptr;
    std::shared_ptr<string> servicePort_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> traceEnabled_ = nullptr;
    std::shared_ptr<string> traceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
