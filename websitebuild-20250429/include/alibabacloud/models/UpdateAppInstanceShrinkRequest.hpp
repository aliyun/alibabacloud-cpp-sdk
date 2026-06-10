// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UpdateAppInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeployArea, deployArea_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(ThumbnailUrl, thumbnailUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeployArea, deployArea_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(ThumbnailUrl, thumbnailUrl_);
    };
    UpdateAppInstanceShrinkRequest() = default ;
    UpdateAppInstanceShrinkRequest(const UpdateAppInstanceShrinkRequest &) = default ;
    UpdateAppInstanceShrinkRequest(UpdateAppInstanceShrinkRequest &&) = default ;
    UpdateAppInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppInstanceShrinkRequest() = default ;
    UpdateAppInstanceShrinkRequest& operator=(const UpdateAppInstanceShrinkRequest &) = default ;
    UpdateAppInstanceShrinkRequest& operator=(UpdateAppInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationType_ == nullptr
        && this->bizId_ == nullptr && this->clientToken_ == nullptr && this->deployArea_ == nullptr && this->description_ == nullptr && this->extend_ == nullptr
        && this->iconUrl_ == nullptr && this->name_ == nullptr && this->paymentType_ == nullptr && this->resourceGroupId_ == nullptr && this->siteVersion_ == nullptr
        && this->tagsShrink_ == nullptr && this->thumbnailUrl_ == nullptr; };
    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline UpdateAppInstanceShrinkRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline UpdateAppInstanceShrinkRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAppInstanceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deployArea Field Functions 
    bool hasDeployArea() const { return this->deployArea_ != nullptr;};
    void deleteDeployArea() { this->deployArea_ = nullptr;};
    inline string getDeployArea() const { DARABONBA_PTR_GET_DEFAULT(deployArea_, "") };
    inline UpdateAppInstanceShrinkRequest& setDeployArea(string deployArea) { DARABONBA_PTR_SET_VALUE(deployArea_, deployArea) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAppInstanceShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline UpdateAppInstanceShrinkRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline UpdateAppInstanceShrinkRequest& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAppInstanceShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline UpdateAppInstanceShrinkRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateAppInstanceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline string getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, "") };
    inline UpdateAppInstanceShrinkRequest& setSiteVersion(string siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline UpdateAppInstanceShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // thumbnailUrl Field Functions 
    bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
    void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
    inline string getThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
    inline UpdateAppInstanceShrinkRequest& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


  protected:
    // Application type
    shared_ptr<string> applicationType_ {};
    // Business ID
    shared_ptr<string> bizId_ {};
    // Ensures the idempotence of the request. Generate a unique value from your client for this parameter to guarantee uniqueness across different requests. ClientToken supports only ASCII characters and must not exceed 64 characters.
    shared_ptr<string> clientToken_ {};
    // Deployment area
    shared_ptr<string> deployArea_ {};
    // Application description
    shared_ptr<string> description_ {};
    // Extension information
    shared_ptr<string> extend_ {};
    // Application icon
    shared_ptr<string> iconUrl_ {};
    // Application name
    shared_ptr<string> name_ {};
    // Payment type
    shared_ptr<string> paymentType_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // Website version
    shared_ptr<string> siteVersion_ {};
    // Tags.
    shared_ptr<string> tagsShrink_ {};
    // Application thumbnail
    shared_ptr<string> thumbnailUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
