// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIMARKETATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIMARKETATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiMarketAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiMarketAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(MarketChargingMode, marketChargingMode_);
      DARABONBA_PTR_TO_JSON(NeedCharging, needCharging_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiMarketAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(MarketChargingMode, marketChargingMode_);
      DARABONBA_PTR_FROM_JSON(NeedCharging, needCharging_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApiMarketAttributesResponseBody() = default ;
    DescribeApiMarketAttributesResponseBody(const DescribeApiMarketAttributesResponseBody &) = default ;
    DescribeApiMarketAttributesResponseBody(DescribeApiMarketAttributesResponseBody &&) = default ;
    DescribeApiMarketAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiMarketAttributesResponseBody() = default ;
    DescribeApiMarketAttributesResponseBody& operator=(const DescribeApiMarketAttributesResponseBody &) = default ;
    DescribeApiMarketAttributesResponseBody& operator=(DescribeApiMarketAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && this->marketChargingMode_ == nullptr && this->needCharging_ == nullptr && this->requestId_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiMarketAttributesResponseBody& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // marketChargingMode Field Functions 
    bool hasMarketChargingMode() const { return this->marketChargingMode_ != nullptr;};
    void deleteMarketChargingMode() { this->marketChargingMode_ = nullptr;};
    inline string getMarketChargingMode() const { DARABONBA_PTR_GET_DEFAULT(marketChargingMode_, "") };
    inline DescribeApiMarketAttributesResponseBody& setMarketChargingMode(string marketChargingMode) { DARABONBA_PTR_SET_VALUE(marketChargingMode_, marketChargingMode) };


    // needCharging Field Functions 
    bool hasNeedCharging() const { return this->needCharging_ != nullptr;};
    void deleteNeedCharging() { this->needCharging_ = nullptr;};
    inline string getNeedCharging() const { DARABONBA_PTR_GET_DEFAULT(needCharging_, "") };
    inline DescribeApiMarketAttributesResponseBody& setNeedCharging(string needCharging) { DARABONBA_PTR_SET_VALUE(needCharging_, needCharging) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiMarketAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the API.
    shared_ptr<string> apiId_ {};
    // The billing method used by the Alibaba Cloud Marketplace.
    shared_ptr<string> marketChargingMode_ {};
    // Indicates whether fees are charged.
    shared_ptr<string> needCharging_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
