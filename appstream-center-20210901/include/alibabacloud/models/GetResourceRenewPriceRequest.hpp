// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCERENEWPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCERENEWPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourceRenewPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceRenewPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceRenewPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    GetResourceRenewPriceRequest() = default ;
    GetResourceRenewPriceRequest(const GetResourceRenewPriceRequest &) = default ;
    GetResourceRenewPriceRequest(GetResourceRenewPriceRequest &&) = default ;
    GetResourceRenewPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceRenewPriceRequest() = default ;
    GetResourceRenewPriceRequest& operator=(const GetResourceRenewPriceRequest &) = default ;
    GetResourceRenewPriceRequest& operator=(GetResourceRenewPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->period_ == nullptr && this->periodUnit_ == nullptr && this->productType_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline GetResourceRenewPriceRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline GetResourceRenewPriceRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline GetResourceRenewPriceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetResourceRenewPriceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The delivery group ID. You can call the [ListAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // The numeric part of the purchase duration. This parameter is used together with PeriodUnit to specify the complete purchase duration.
    // 
    // This parameter is required.
    shared_ptr<int64_t> period_ {};
    // The unit part of the purchase duration. This parameter is used together with Period to specify the complete purchase duration. Valid combinations of Period and PeriodUnit:
    // 
    // - 1 Week
    // - 1 Month
    // - 2 Month
    // - 3 Month
    // - 6 Month
    // - 1 Year
    // - 2 Year
    // - 3 Year
    // 
    // > This parameter is case-sensitive. For example, `Week` is valid, but `week` is invalid. If the request parameters do not match the combinations listed above, such as `2 Week`, the call to this operation succeeds, but an error occurs during the order placement phase.
    // 
    // This parameter is required.
    shared_ptr<string> periodUnit_ {};
    // The product type.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
