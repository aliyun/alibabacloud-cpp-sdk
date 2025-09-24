// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAYASYOUGOPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPAYASYOUGOPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPayAsYouGoPriceRequestModuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetPayAsYouGoPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPayAsYouGoPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleList, moduleList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, GetPayAsYouGoPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleList, moduleList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    GetPayAsYouGoPriceRequest() = default ;
    GetPayAsYouGoPriceRequest(const GetPayAsYouGoPriceRequest &) = default ;
    GetPayAsYouGoPriceRequest(GetPayAsYouGoPriceRequest &&) = default ;
    GetPayAsYouGoPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPayAsYouGoPriceRequest() = default ;
    GetPayAsYouGoPriceRequest& operator=(const GetPayAsYouGoPriceRequest &) = default ;
    GetPayAsYouGoPriceRequest& operator=(GetPayAsYouGoPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleList_ != nullptr
        && this->ownerId_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr && this->region_ != nullptr && this->subscriptionType_ != nullptr; };
    // moduleList Field Functions 
    bool hasModuleList() const { return this->moduleList_ != nullptr;};
    void deleteModuleList() { this->moduleList_ = nullptr;};
    inline const vector<GetPayAsYouGoPriceRequestModuleList> & moduleList() const { DARABONBA_PTR_GET_CONST(moduleList_, vector<GetPayAsYouGoPriceRequestModuleList>) };
    inline vector<GetPayAsYouGoPriceRequestModuleList> moduleList() { DARABONBA_PTR_GET(moduleList_, vector<GetPayAsYouGoPriceRequestModuleList>) };
    inline GetPayAsYouGoPriceRequest& setModuleList(const vector<GetPayAsYouGoPriceRequestModuleList> & moduleList) { DARABONBA_PTR_SET_VALUE(moduleList_, moduleList) };
    inline GetPayAsYouGoPriceRequest& setModuleList(vector<GetPayAsYouGoPriceRequestModuleList> && moduleList) { DARABONBA_PTR_SET_RVALUE(moduleList_, moduleList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetPayAsYouGoPriceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetPayAsYouGoPriceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetPayAsYouGoPriceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetPayAsYouGoPriceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline GetPayAsYouGoPriceRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The details of pricing modules.
    // 
    // This parameter is required.
    std::shared_ptr<vector<GetPayAsYouGoPriceRequestModuleList>> moduleList_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The code of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> productType_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> region_ = nullptr;
    // The billing method. Set the value to PayAsYouGo.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
