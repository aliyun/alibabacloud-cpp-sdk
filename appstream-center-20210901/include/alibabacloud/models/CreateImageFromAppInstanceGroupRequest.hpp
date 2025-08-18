// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEFROMAPPINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEFROMAPPINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateImageFromAppInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageFromAppInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCenterImageName, appCenterImageName_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageFromAppInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCenterImageName, appCenterImageName_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    CreateImageFromAppInstanceGroupRequest() = default ;
    CreateImageFromAppInstanceGroupRequest(const CreateImageFromAppInstanceGroupRequest &) = default ;
    CreateImageFromAppInstanceGroupRequest(CreateImageFromAppInstanceGroupRequest &&) = default ;
    CreateImageFromAppInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageFromAppInstanceGroupRequest() = default ;
    CreateImageFromAppInstanceGroupRequest& operator=(const CreateImageFromAppInstanceGroupRequest &) = default ;
    CreateImageFromAppInstanceGroupRequest& operator=(CreateImageFromAppInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appCenterImageName_ != nullptr
        && this->appInstanceGroupId_ != nullptr && this->productType_ != nullptr; };
    // appCenterImageName Field Functions 
    bool hasAppCenterImageName() const { return this->appCenterImageName_ != nullptr;};
    void deleteAppCenterImageName() { this->appCenterImageName_ = nullptr;};
    inline string appCenterImageName() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageName_, "") };
    inline CreateImageFromAppInstanceGroupRequest& setAppCenterImageName(string appCenterImageName) { DARABONBA_PTR_SET_VALUE(appCenterImageName_, appCenterImageName) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline CreateImageFromAppInstanceGroupRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateImageFromAppInstanceGroupRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The image name.
    // 
    // This parameter is required.
    std::shared_ptr<string> appCenterImageName_ = nullptr;
    // The ID of the delivery group. You can call the [ListAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
