// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DeleteAppInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceIds, appInstanceIds_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceIds, appInstanceIds_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    DeleteAppInstancesRequest() = default ;
    DeleteAppInstancesRequest(const DeleteAppInstancesRequest &) = default ;
    DeleteAppInstancesRequest(DeleteAppInstancesRequest &&) = default ;
    DeleteAppInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppInstancesRequest() = default ;
    DeleteAppInstancesRequest& operator=(const DeleteAppInstancesRequest &) = default ;
    DeleteAppInstancesRequest& operator=(DeleteAppInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceIds_ == nullptr && this->productType_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline DeleteAppInstancesRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceIds Field Functions 
    bool hasAppInstanceIds() const { return this->appInstanceIds_ != nullptr;};
    void deleteAppInstanceIds() { this->appInstanceIds_ = nullptr;};
    inline const vector<string> & getAppInstanceIds() const { DARABONBA_PTR_GET_CONST(appInstanceIds_, vector<string>) };
    inline vector<string> getAppInstanceIds() { DARABONBA_PTR_GET(appInstanceIds_, vector<string>) };
    inline DeleteAppInstancesRequest& setAppInstanceIds(const vector<string> & appInstanceIds) { DARABONBA_PTR_SET_VALUE(appInstanceIds_, appInstanceIds) };
    inline DeleteAppInstancesRequest& setAppInstanceIds(vector<string> && appInstanceIds) { DARABONBA_PTR_SET_RVALUE(appInstanceIds_, appInstanceIds) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DeleteAppInstancesRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The ID of the delivery group. You can call the [listAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // The IDs of application instances.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> appInstanceIds_ {};
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
