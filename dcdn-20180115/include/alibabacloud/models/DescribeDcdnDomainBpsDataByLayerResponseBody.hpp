// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBPSDATABYLAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBPSDATABYLAYERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainBpsDataByLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainBpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataInterval, bpsDataInterval_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainBpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataInterval, bpsDataInterval_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainBpsDataByLayerResponseBody() = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBody(const DescribeDcdnDomainBpsDataByLayerResponseBody &) = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBody(DescribeDcdnDomainBpsDataByLayerResponseBody &&) = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainBpsDataByLayerResponseBody() = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBody& operator=(const DescribeDcdnDomainBpsDataByLayerResponseBody &) = default ;
    DescribeDcdnDomainBpsDataByLayerResponseBody& operator=(DescribeDcdnDomainBpsDataByLayerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bpsDataInterval_ != nullptr
        && this->dataInterval_ != nullptr && this->requestId_ != nullptr; };
    // bpsDataInterval Field Functions 
    bool hasBpsDataInterval() const { return this->bpsDataInterval_ != nullptr;};
    void deleteBpsDataInterval() { this->bpsDataInterval_ = nullptr;};
    inline const DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataInterval & bpsDataInterval() const { DARABONBA_PTR_GET_CONST(bpsDataInterval_, DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataInterval) };
    inline DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataInterval bpsDataInterval() { DARABONBA_PTR_GET(bpsDataInterval_, DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataInterval) };
    inline DescribeDcdnDomainBpsDataByLayerResponseBody& setBpsDataInterval(const DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataInterval & bpsDataInterval) { DARABONBA_PTR_SET_VALUE(bpsDataInterval_, bpsDataInterval) };
    inline DescribeDcdnDomainBpsDataByLayerResponseBody& setBpsDataInterval(DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataInterval && bpsDataInterval) { DARABONBA_PTR_SET_RVALUE(bpsDataInterval_, bpsDataInterval) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainBpsDataByLayerResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainBpsDataByLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The bandwidth returned at each time interval.
    std::shared_ptr<DescribeDcdnDomainBpsDataByLayerResponseBodyBpsDataInterval> bpsDataInterval_ = nullptr;
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
