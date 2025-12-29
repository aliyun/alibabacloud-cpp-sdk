// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTROLSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTROLSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DeleteControlStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteControlStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteControlStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteControlStrategyRequest() = default ;
    DeleteControlStrategyRequest(const DeleteControlStrategyRequest &) = default ;
    DeleteControlStrategyRequest(DeleteControlStrategyRequest &&) = default ;
    DeleteControlStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteControlStrategyRequest() = default ;
    DeleteControlStrategyRequest& operator=(const DeleteControlStrategyRequest &) = default ;
    DeleteControlStrategyRequest& operator=(DeleteControlStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && this->id_ == nullptr && this->productType_ == nullptr && this->regionId_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DeleteControlStrategyRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteControlStrategyRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DeleteControlStrategyRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteControlStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // API name, same as **ProductCode**.
    shared_ptr<string> apiName_ {};
    // Security rule ID.
    shared_ptr<int64_t> id_ {};
    // Product type, currently only supports **ANT_CLOUD_AUTH** (Financial-grade Real Person), all others have been phased out.
    shared_ptr<string> productType_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
