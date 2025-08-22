// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINQPSDATABYLAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINQPSDATABYLAYERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainQpsDataByLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainQpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Layer, layer_);
      DARABONBA_PTR_TO_JSON(QpsDataInterval, qpsDataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainQpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Layer, layer_);
      DARABONBA_PTR_FROM_JSON(QpsDataInterval, qpsDataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainQpsDataByLayerResponseBody() = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBody(const DescribeDcdnDomainQpsDataByLayerResponseBody &) = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBody(DescribeDcdnDomainQpsDataByLayerResponseBody &&) = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainQpsDataByLayerResponseBody() = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBody& operator=(const DescribeDcdnDomainQpsDataByLayerResponseBody &) = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBody& operator=(DescribeDcdnDomainQpsDataByLayerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->layer_ != nullptr && this->qpsDataInterval_ != nullptr && this->requestId_ != nullptr
        && this->startTime_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // layer Field Functions 
    bool hasLayer() const { return this->layer_ != nullptr;};
    void deleteLayer() { this->layer_ = nullptr;};
    inline string layer() const { DARABONBA_PTR_GET_DEFAULT(layer_, "") };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setLayer(string layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


    // qpsDataInterval Field Functions 
    bool hasQpsDataInterval() const { return this->qpsDataInterval_ != nullptr;};
    void deleteQpsDataInterval() { this->qpsDataInterval_ = nullptr;};
    inline const DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval & qpsDataInterval() const { DARABONBA_PTR_GET_CONST(qpsDataInterval_, DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval) };
    inline DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval qpsDataInterval() { DARABONBA_PTR_GET(qpsDataInterval_, DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval) };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setQpsDataInterval(const DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval & qpsDataInterval) { DARABONBA_PTR_SET_VALUE(qpsDataInterval_, qpsDataInterval) };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setQpsDataInterval(DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval && qpsDataInterval) { DARABONBA_PTR_SET_RVALUE(qpsDataInterval_, qpsDataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainQpsDataByLayerResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The layer at which the data was collected.
    std::shared_ptr<string> layer_ = nullptr;
    // The QPS returned at each time interval.
    std::shared_ptr<DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval> qpsDataInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
