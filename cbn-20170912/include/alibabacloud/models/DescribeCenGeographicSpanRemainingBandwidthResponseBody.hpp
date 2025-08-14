// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENGEOGRAPHICSPANREMAININGBANDWIDTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENGEOGRAPHICSPANREMAININGBANDWIDTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenGeographicSpanRemainingBandwidthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenGeographicSpanRemainingBandwidthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemainingBandwidth, remainingBandwidth_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenGeographicSpanRemainingBandwidthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemainingBandwidth, remainingBandwidth_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCenGeographicSpanRemainingBandwidthResponseBody() = default ;
    DescribeCenGeographicSpanRemainingBandwidthResponseBody(const DescribeCenGeographicSpanRemainingBandwidthResponseBody &) = default ;
    DescribeCenGeographicSpanRemainingBandwidthResponseBody(DescribeCenGeographicSpanRemainingBandwidthResponseBody &&) = default ;
    DescribeCenGeographicSpanRemainingBandwidthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenGeographicSpanRemainingBandwidthResponseBody() = default ;
    DescribeCenGeographicSpanRemainingBandwidthResponseBody& operator=(const DescribeCenGeographicSpanRemainingBandwidthResponseBody &) = default ;
    DescribeCenGeographicSpanRemainingBandwidthResponseBody& operator=(DescribeCenGeographicSpanRemainingBandwidthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->remainingBandwidth_ != nullptr
        && this->requestId_ != nullptr; };
    // remainingBandwidth Field Functions 
    bool hasRemainingBandwidth() const { return this->remainingBandwidth_ != nullptr;};
    void deleteRemainingBandwidth() { this->remainingBandwidth_ = nullptr;};
    inline int64_t remainingBandwidth() const { DARABONBA_PTR_GET_DEFAULT(remainingBandwidth_, 0L) };
    inline DescribeCenGeographicSpanRemainingBandwidthResponseBody& setRemainingBandwidth(int64_t remainingBandwidth) { DARABONBA_PTR_SET_VALUE(remainingBandwidth_, remainingBandwidth) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenGeographicSpanRemainingBandwidthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The remaining bandwidth of the bandwidth plan. Unit: Mbit/s.
    std::shared_ptr<int64_t> remainingBandwidth_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
