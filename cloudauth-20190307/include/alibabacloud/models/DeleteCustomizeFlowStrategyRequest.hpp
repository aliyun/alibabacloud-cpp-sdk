// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMIZEFLOWSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMIZEFLOWSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DeleteCustomizeFlowStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomizeFlowStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomizeFlowStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DeleteCustomizeFlowStrategyRequest() = default ;
    DeleteCustomizeFlowStrategyRequest(const DeleteCustomizeFlowStrategyRequest &) = default ;
    DeleteCustomizeFlowStrategyRequest(DeleteCustomizeFlowStrategyRequest &&) = default ;
    DeleteCustomizeFlowStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomizeFlowStrategyRequest() = default ;
    DeleteCustomizeFlowStrategyRequest& operator=(const DeleteCustomizeFlowStrategyRequest &) = default ;
    DeleteCustomizeFlowStrategyRequest& operator=(DeleteCustomizeFlowStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && this->id_ == nullptr && this->productType_ == nullptr && this->regionId_ == nullptr && this->userId_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DeleteCustomizeFlowStrategyRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteCustomizeFlowStrategyRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DeleteCustomizeFlowStrategyRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCustomizeFlowStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DeleteCustomizeFlowStrategyRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // API name, same as **ProductCode**.
    shared_ptr<string> apiName_ {};
    // Policy ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // Product type, currently only supports **ANT_CLOUD_AUTH** (Financial-grade Real Person), all others have been phased out.
    shared_ptr<string> productType_ {};
    // regionId
    shared_ptr<string> regionId_ {};
    // User ID
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
