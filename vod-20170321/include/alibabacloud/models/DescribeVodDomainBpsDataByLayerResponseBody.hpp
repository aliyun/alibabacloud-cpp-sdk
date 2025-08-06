// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINBPSDATABYLAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINBPSDATABYLAYERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainBpsDataByLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainBpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataInterval, bpsDataInterval_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainBpsDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataInterval, bpsDataInterval_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodDomainBpsDataByLayerResponseBody() = default ;
    DescribeVodDomainBpsDataByLayerResponseBody(const DescribeVodDomainBpsDataByLayerResponseBody &) = default ;
    DescribeVodDomainBpsDataByLayerResponseBody(DescribeVodDomainBpsDataByLayerResponseBody &&) = default ;
    DescribeVodDomainBpsDataByLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainBpsDataByLayerResponseBody() = default ;
    DescribeVodDomainBpsDataByLayerResponseBody& operator=(const DescribeVodDomainBpsDataByLayerResponseBody &) = default ;
    DescribeVodDomainBpsDataByLayerResponseBody& operator=(DescribeVodDomainBpsDataByLayerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bpsDataInterval_ != nullptr
        && this->dataInterval_ != nullptr && this->requestId_ != nullptr; };
    // bpsDataInterval Field Functions 
    bool hasBpsDataInterval() const { return this->bpsDataInterval_ != nullptr;};
    void deleteBpsDataInterval() { this->bpsDataInterval_ = nullptr;};
    inline const DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval & bpsDataInterval() const { DARABONBA_PTR_GET_CONST(bpsDataInterval_, DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval) };
    inline DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval bpsDataInterval() { DARABONBA_PTR_GET(bpsDataInterval_, DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval) };
    inline DescribeVodDomainBpsDataByLayerResponseBody& setBpsDataInterval(const DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval & bpsDataInterval) { DARABONBA_PTR_SET_VALUE(bpsDataInterval_, bpsDataInterval) };
    inline DescribeVodDomainBpsDataByLayerResponseBody& setBpsDataInterval(DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval && bpsDataInterval) { DARABONBA_PTR_SET_RVALUE(bpsDataInterval_, bpsDataInterval) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline int32_t dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, 0) };
    inline DescribeVodDomainBpsDataByLayerResponseBody& setDataInterval(int32_t dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainBpsDataByLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The bandwidth returned at each time interval. Unit: bit/s.
    std::shared_ptr<DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval> bpsDataInterval_ = nullptr;
    // The time interval between the entries returned. Unit: seconds.
    std::shared_ptr<int32_t> dataInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
