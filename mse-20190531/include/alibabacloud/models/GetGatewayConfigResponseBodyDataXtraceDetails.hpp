// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYCONFIGRESPONSEBODYDATAXTRACEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYCONFIGRESPONSEBODYDATAXTRACEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayConfigResponseBodyDataXtraceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayConfigResponseBodyDataXtraceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(TraceOn, traceOn_);
      DARABONBA_PTR_TO_JSON(TraceType, traceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayConfigResponseBodyDataXtraceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(TraceOn, traceOn_);
      DARABONBA_PTR_FROM_JSON(TraceType, traceType_);
    };
    GetGatewayConfigResponseBodyDataXtraceDetails() = default ;
    GetGatewayConfigResponseBodyDataXtraceDetails(const GetGatewayConfigResponseBodyDataXtraceDetails &) = default ;
    GetGatewayConfigResponseBodyDataXtraceDetails(GetGatewayConfigResponseBodyDataXtraceDetails &&) = default ;
    GetGatewayConfigResponseBodyDataXtraceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayConfigResponseBodyDataXtraceDetails() = default ;
    GetGatewayConfigResponseBodyDataXtraceDetails& operator=(const GetGatewayConfigResponseBodyDataXtraceDetails &) = default ;
    GetGatewayConfigResponseBodyDataXtraceDetails& operator=(GetGatewayConfigResponseBodyDataXtraceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && return this->gatewayUniqueId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->sample_ == nullptr
        && return this->serviceId_ == nullptr && return this->servicePort_ == nullptr && return this->traceOn_ == nullptr && return this->traceType_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline GetGatewayConfigResponseBodyDataXtraceDetails& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetGatewayConfigResponseBodyDataXtraceDetails& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetGatewayConfigResponseBodyDataXtraceDetails& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetGatewayConfigResponseBodyDataXtraceDetails& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetGatewayConfigResponseBodyDataXtraceDetails& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline int32_t sample() const { DARABONBA_PTR_GET_DEFAULT(sample_, 0) };
    inline GetGatewayConfigResponseBodyDataXtraceDetails& setSample(int32_t sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline GetGatewayConfigResponseBodyDataXtraceDetails& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline string servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
    inline GetGatewayConfigResponseBodyDataXtraceDetails& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // traceOn Field Functions 
    bool hasTraceOn() const { return this->traceOn_ != nullptr;};
    void deleteTraceOn() { this->traceOn_ = nullptr;};
    inline bool traceOn() const { DARABONBA_PTR_GET_DEFAULT(traceOn_, false) };
    inline GetGatewayConfigResponseBodyDataXtraceDetails& setTraceOn(bool traceOn) { DARABONBA_PTR_SET_VALUE(traceOn_, traceOn) };


    // traceType Field Functions 
    bool hasTraceType() const { return this->traceType_ != nullptr;};
    void deleteTraceType() { this->traceType_ = nullptr;};
    inline string traceType() const { DARABONBA_PTR_GET_DEFAULT(traceType_, "") };
    inline GetGatewayConfigResponseBodyDataXtraceDetails& setTraceType(string traceType) { DARABONBA_PTR_SET_VALUE(traceType_, traceType) };


  protected:
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> sample_ = nullptr;
    std::shared_ptr<int64_t> serviceId_ = nullptr;
    std::shared_ptr<string> servicePort_ = nullptr;
    std::shared_ptr<bool> traceOn_ = nullptr;
    std::shared_ptr<string> traceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
