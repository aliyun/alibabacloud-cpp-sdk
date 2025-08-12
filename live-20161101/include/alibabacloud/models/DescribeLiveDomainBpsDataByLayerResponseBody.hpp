// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATABYLAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATABYLAYERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainBpsDataByLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainBpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataInterval, bpsDataInterval_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainBpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataInterval, bpsDataInterval_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDomainBpsDataByLayerResponseBody() = default ;
    DescribeLiveDomainBpsDataByLayerResponseBody(const DescribeLiveDomainBpsDataByLayerResponseBody &) = default ;
    DescribeLiveDomainBpsDataByLayerResponseBody(DescribeLiveDomainBpsDataByLayerResponseBody &&) = default ;
    DescribeLiveDomainBpsDataByLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainBpsDataByLayerResponseBody() = default ;
    DescribeLiveDomainBpsDataByLayerResponseBody& operator=(const DescribeLiveDomainBpsDataByLayerResponseBody &) = default ;
    DescribeLiveDomainBpsDataByLayerResponseBody& operator=(DescribeLiveDomainBpsDataByLayerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bpsDataInterval_ != nullptr
        && this->dataInterval_ != nullptr && this->requestId_ != nullptr; };
    // bpsDataInterval Field Functions 
    bool hasBpsDataInterval() const { return this->bpsDataInterval_ != nullptr;};
    void deleteBpsDataInterval() { this->bpsDataInterval_ = nullptr;};
    inline const DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval & bpsDataInterval() const { DARABONBA_PTR_GET_CONST(bpsDataInterval_, DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval) };
    inline DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval bpsDataInterval() { DARABONBA_PTR_GET(bpsDataInterval_, DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval) };
    inline DescribeLiveDomainBpsDataByLayerResponseBody& setBpsDataInterval(const DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval & bpsDataInterval) { DARABONBA_PTR_SET_VALUE(bpsDataInterval_, bpsDataInterval) };
    inline DescribeLiveDomainBpsDataByLayerResponseBody& setBpsDataInterval(DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval && bpsDataInterval) { DARABONBA_PTR_SET_RVALUE(bpsDataInterval_, bpsDataInterval) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeLiveDomainBpsDataByLayerResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainBpsDataByLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned at each time interval.
    std::shared_ptr<DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval> bpsDataInterval_ = nullptr;
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
