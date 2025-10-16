// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPINSTANCEGROUPIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPINSTANCEGROUPIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class UpdateAppInstanceGroupImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppInstanceGroupImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppInstanceGroupImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    UpdateAppInstanceGroupImageRequest() = default ;
    UpdateAppInstanceGroupImageRequest(const UpdateAppInstanceGroupImageRequest &) = default ;
    UpdateAppInstanceGroupImageRequest(UpdateAppInstanceGroupImageRequest &&) = default ;
    UpdateAppInstanceGroupImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppInstanceGroupImageRequest() = default ;
    UpdateAppInstanceGroupImageRequest& operator=(const UpdateAppInstanceGroupImageRequest &) = default ;
    UpdateAppInstanceGroupImageRequest& operator=(UpdateAppInstanceGroupImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCenterImageId_ == nullptr
        && return this->appInstanceGroupId_ == nullptr && return this->bizRegionId_ == nullptr && return this->productType_ == nullptr; };
    // appCenterImageId Field Functions 
    bool hasAppCenterImageId() const { return this->appCenterImageId_ != nullptr;};
    void deleteAppCenterImageId() { this->appCenterImageId_ = nullptr;};
    inline string appCenterImageId() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageId_, "") };
    inline UpdateAppInstanceGroupImageRequest& setAppCenterImageId(string appCenterImageId) { DARABONBA_PTR_SET_VALUE(appCenterImageId_, appCenterImageId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline UpdateAppInstanceGroupImageRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline UpdateAppInstanceGroupImageRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline UpdateAppInstanceGroupImageRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The image ID of the application. You can obtain the ID from the Images page in the App Streaming console.
    // 
    // This parameter is required.
    std::shared_ptr<string> appCenterImageId_ = nullptr;
    // The ID of the delivery group.
    // 
    // This parameter is required.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The ID of the region where the delivery group resides. For information about the supported regions, see [Limits](https://help.aliyun.com/document_detail/426036.html).
    // 
    // Valid values:
    // 
    // *   cn-shanghai: China (Shanghai).
    // *   cn-hangzhou: China (Hangzhou)
    // 
    // This parameter is required.
    std::shared_ptr<string> bizRegionId_ = nullptr;
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
