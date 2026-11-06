// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourceQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetResourceQuotaRequest() = default ;
    GetResourceQuotaRequest(const GetResourceQuotaRequest &) = default ;
    GetResourceQuotaRequest(GetResourceQuotaRequest &&) = default ;
    GetResourceQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceQuotaRequest() = default ;
    GetResourceQuotaRequest& operator=(const GetResourceQuotaRequest &) = default ;
    GetResourceQuotaRequest& operator=(GetResourceQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->chargeType_ == nullptr && this->productType_ == nullptr && this->resourceType_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline GetResourceQuotaRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetResourceQuotaRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetResourceQuotaRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetResourceQuotaRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The business region ID. If this parameter is omitted, the general quota that is not limited by region is queried. The quotas of different regions are not added together. This parameter must be consistent with the business region for What to do next.
    shared_ptr<string> bizRegionId_ {};
    // The billing method query condition. If this parameter is omitted, the general quota that is not limited by billing method is queried. The quotas of different billing methods are not added together. Valid values:
    // 
    // - PrePaid: subscription.
    // - PostPaid: pay-as-you-go.
    shared_ptr<string> chargeType_ {};
    // The product type. Set this parameter to the following value when you call the operation:
    // 
    // - CloudApp: WUYING Cloud App.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The business resource type to query. Valid values:
    // 
    // - AppInstanceGroup: the quantity quota for delivery groups. Unit: count.
    // - AppAuthUser: the quantity quota for authorized users. Unit: users.
    // - PoolNodeAmount: the quantity quota for purchased resource nodes. Unit: count.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
