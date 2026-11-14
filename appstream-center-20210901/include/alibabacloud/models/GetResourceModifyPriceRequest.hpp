// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEMODIFYPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEMODIFYPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourceModifyPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceModifyPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceModifyPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    GetResourceModifyPriceRequest() = default ;
    GetResourceModifyPriceRequest(const GetResourceModifyPriceRequest &) = default ;
    GetResourceModifyPriceRequest(GetResourceModifyPriceRequest &&) = default ;
    GetResourceModifyPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceModifyPriceRequest() = default ;
    GetResourceModifyPriceRequest& operator=(const GetResourceModifyPriceRequest &) = default ;
    GetResourceModifyPriceRequest& operator=(GetResourceModifyPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->appInstanceGroupId_ == nullptr && this->productType_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline GetResourceModifyPriceRequest& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline GetResourceModifyPriceRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetResourceModifyPriceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The total number of subscription resource nodes after the scale-out. Unit: nodes.
    // 
    // **The value must be greater than the current number of purchased nodes in the delivery group and cannot exceed the node quota of the account.** This parameter does not represent the number of added nodes or the number of sessions.
    // 
    // For example, if there is currently 1 node and you want to scale out to 2 nodes, set this parameter to 2, which indicates a final total of 2 nodes.
    // 
    // This parameter is required.
    shared_ptr<int64_t> amount_ {};
    // The ID of the delivery group to be scaled out. You can query only one delivery group at a time.
    // 
    // The delivery group must belong to the current account and match ProductType. It must be purchased by node, use the subscription billing method, have a normal order status, and be associated with a resource node pool.
    // 
    // You can obtain the cloud app delivery group ID by calling [ListAppInstanceGroup](https://api.aliyun.com/document/appstream-center/2021-09-01/ListAppInstanceGroup). You can call [GetAppInstanceGroup](https://api.aliyun.com/document/appstream-center/2021-09-01/GetAppInstanceGroup) to further verify the current configuration.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // The product type, which must match the product to which the target delivery group belongs. Valid values:
    // 
    // - CloudApp: WUYING Cloud App. Queries the resource scale-out price for a cloud app delivery group.
    // - CloudBrowser: Cloud Browser. Applies only to subscription browser delivery groups purchased by node.
    // 
    // This operation does not apply to browser groups that use the pay-as-you-go billing method or are billed by monthly active users (MAU).
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
