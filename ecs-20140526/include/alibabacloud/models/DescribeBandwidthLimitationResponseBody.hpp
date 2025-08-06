// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHLIMITATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHLIMITATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBandwidthLimitationResponseBodyBandwidths.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeBandwidthLimitationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBandwidthLimitationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidths, bandwidths_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBandwidthLimitationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidths, bandwidths_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBandwidthLimitationResponseBody() = default ;
    DescribeBandwidthLimitationResponseBody(const DescribeBandwidthLimitationResponseBody &) = default ;
    DescribeBandwidthLimitationResponseBody(DescribeBandwidthLimitationResponseBody &&) = default ;
    DescribeBandwidthLimitationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBandwidthLimitationResponseBody() = default ;
    DescribeBandwidthLimitationResponseBody& operator=(const DescribeBandwidthLimitationResponseBody &) = default ;
    DescribeBandwidthLimitationResponseBody& operator=(DescribeBandwidthLimitationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidths_ != nullptr
        && this->requestId_ != nullptr; };
    // bandwidths Field Functions 
    bool hasBandwidths() const { return this->bandwidths_ != nullptr;};
    void deleteBandwidths() { this->bandwidths_ = nullptr;};
    inline const DescribeBandwidthLimitationResponseBodyBandwidths & bandwidths() const { DARABONBA_PTR_GET_CONST(bandwidths_, DescribeBandwidthLimitationResponseBodyBandwidths) };
    inline DescribeBandwidthLimitationResponseBodyBandwidths bandwidths() { DARABONBA_PTR_GET(bandwidths_, DescribeBandwidthLimitationResponseBodyBandwidths) };
    inline DescribeBandwidthLimitationResponseBody& setBandwidths(const DescribeBandwidthLimitationResponseBodyBandwidths & bandwidths) { DARABONBA_PTR_SET_VALUE(bandwidths_, bandwidths) };
    inline DescribeBandwidthLimitationResponseBody& setBandwidths(DescribeBandwidthLimitationResponseBodyBandwidths && bandwidths) { DARABONBA_PTR_SET_RVALUE(bandwidths_, bandwidths) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBandwidthLimitationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the maximum public bandwidth.
    std::shared_ptr<DescribeBandwidthLimitationResponseBodyBandwidths> bandwidths_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
