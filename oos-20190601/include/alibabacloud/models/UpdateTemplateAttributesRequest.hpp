// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATEATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATEATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateTemplateAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(IsFavorite, isFavorite_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SharePermissionAction, sharePermissionAction_);
      DARABONBA_PTR_TO_JSON(ShareTemplateVersion, shareTemplateVersion_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(IsFavorite, isFavorite_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SharePermissionAction, sharePermissionAction_);
      DARABONBA_PTR_FROM_JSON(ShareTemplateVersion, shareTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    UpdateTemplateAttributesRequest() = default ;
    UpdateTemplateAttributesRequest(const UpdateTemplateAttributesRequest &) = default ;
    UpdateTemplateAttributesRequest(UpdateTemplateAttributesRequest &&) = default ;
    UpdateTemplateAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateAttributesRequest() = default ;
    UpdateTemplateAttributesRequest& operator=(const UpdateTemplateAttributesRequest &) = default ;
    UpdateTemplateAttributesRequest& operator=(UpdateTemplateAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->isFavorite_ == nullptr && this->regionId_ == nullptr && this->sharePermissionAction_ == nullptr && this->shareTemplateVersion_ == nullptr && this->templateName_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline string getAccountIds() const { DARABONBA_PTR_GET_DEFAULT(accountIds_, "") };
    inline UpdateTemplateAttributesRequest& setAccountIds(string accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };


    // isFavorite Field Functions 
    bool hasIsFavorite() const { return this->isFavorite_ != nullptr;};
    void deleteIsFavorite() { this->isFavorite_ = nullptr;};
    inline bool getIsFavorite() const { DARABONBA_PTR_GET_DEFAULT(isFavorite_, false) };
    inline UpdateTemplateAttributesRequest& setIsFavorite(bool isFavorite) { DARABONBA_PTR_SET_VALUE(isFavorite_, isFavorite) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTemplateAttributesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sharePermissionAction Field Functions 
    bool hasSharePermissionAction() const { return this->sharePermissionAction_ != nullptr;};
    void deleteSharePermissionAction() { this->sharePermissionAction_ = nullptr;};
    inline string getSharePermissionAction() const { DARABONBA_PTR_GET_DEFAULT(sharePermissionAction_, "") };
    inline UpdateTemplateAttributesRequest& setSharePermissionAction(string sharePermissionAction) { DARABONBA_PTR_SET_VALUE(sharePermissionAction_, sharePermissionAction) };


    // shareTemplateVersion Field Functions 
    bool hasShareTemplateVersion() const { return this->shareTemplateVersion_ != nullptr;};
    void deleteShareTemplateVersion() { this->shareTemplateVersion_ = nullptr;};
    inline string getShareTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(shareTemplateVersion_, "") };
    inline UpdateTemplateAttributesRequest& setShareTemplateVersion(string shareTemplateVersion) { DARABONBA_PTR_SET_VALUE(shareTemplateVersion_, shareTemplateVersion) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateTemplateAttributesRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    shared_ptr<string> accountIds_ {};
    shared_ptr<bool> isFavorite_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> sharePermissionAction_ {};
    shared_ptr<string> shareTemplateVersion_ {};
    // This parameter is required.
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
