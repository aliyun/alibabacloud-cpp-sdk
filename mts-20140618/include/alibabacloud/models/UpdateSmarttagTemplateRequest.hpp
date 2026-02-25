// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMARTTAGTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMARTTAGTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateSmarttagTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmarttagTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnalyseTypes, analyseTypes_);
      DARABONBA_PTR_TO_JSON(FaceCategoryIds, faceCategoryIds_);
      DARABONBA_PTR_TO_JSON(FaceCustomParamsConfig, faceCustomParamsConfig_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(KeywordConfig, keywordConfig_);
      DARABONBA_PTR_TO_JSON(KnowledgeConfig, knowledgeConfig_);
      DARABONBA_PTR_TO_JSON(LabelType, labelType_);
      DARABONBA_PTR_TO_JSON(LabelVersion, labelVersion_);
      DARABONBA_PTR_TO_JSON(LandmarkGroupIds, landmarkGroupIds_);
      DARABONBA_PTR_TO_JSON(ObjectGroupIds, objectGroupIds_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSmarttagTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalyseTypes, analyseTypes_);
      DARABONBA_PTR_FROM_JSON(FaceCategoryIds, faceCategoryIds_);
      DARABONBA_PTR_FROM_JSON(FaceCustomParamsConfig, faceCustomParamsConfig_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(KeywordConfig, keywordConfig_);
      DARABONBA_PTR_FROM_JSON(KnowledgeConfig, knowledgeConfig_);
      DARABONBA_PTR_FROM_JSON(LabelType, labelType_);
      DARABONBA_PTR_FROM_JSON(LabelVersion, labelVersion_);
      DARABONBA_PTR_FROM_JSON(LandmarkGroupIds, landmarkGroupIds_);
      DARABONBA_PTR_FROM_JSON(ObjectGroupIds, objectGroupIds_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    UpdateSmarttagTemplateRequest() = default ;
    UpdateSmarttagTemplateRequest(const UpdateSmarttagTemplateRequest &) = default ;
    UpdateSmarttagTemplateRequest(UpdateSmarttagTemplateRequest &&) = default ;
    UpdateSmarttagTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmarttagTemplateRequest() = default ;
    UpdateSmarttagTemplateRequest& operator=(const UpdateSmarttagTemplateRequest &) = default ;
    UpdateSmarttagTemplateRequest& operator=(UpdateSmarttagTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analyseTypes_ == nullptr
        && this->faceCategoryIds_ == nullptr && this->faceCustomParamsConfig_ == nullptr && this->industry_ == nullptr && this->isDefault_ == nullptr && this->keywordConfig_ == nullptr
        && this->knowledgeConfig_ == nullptr && this->labelType_ == nullptr && this->labelVersion_ == nullptr && this->landmarkGroupIds_ == nullptr && this->objectGroupIds_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scene_ == nullptr
        && this->templateConfig_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
    // analyseTypes Field Functions 
    bool hasAnalyseTypes() const { return this->analyseTypes_ != nullptr;};
    void deleteAnalyseTypes() { this->analyseTypes_ = nullptr;};
    inline string getAnalyseTypes() const { DARABONBA_PTR_GET_DEFAULT(analyseTypes_, "") };
    inline UpdateSmarttagTemplateRequest& setAnalyseTypes(string analyseTypes) { DARABONBA_PTR_SET_VALUE(analyseTypes_, analyseTypes) };


    // faceCategoryIds Field Functions 
    bool hasFaceCategoryIds() const { return this->faceCategoryIds_ != nullptr;};
    void deleteFaceCategoryIds() { this->faceCategoryIds_ = nullptr;};
    inline string getFaceCategoryIds() const { DARABONBA_PTR_GET_DEFAULT(faceCategoryIds_, "") };
    inline UpdateSmarttagTemplateRequest& setFaceCategoryIds(string faceCategoryIds) { DARABONBA_PTR_SET_VALUE(faceCategoryIds_, faceCategoryIds) };


    // faceCustomParamsConfig Field Functions 
    bool hasFaceCustomParamsConfig() const { return this->faceCustomParamsConfig_ != nullptr;};
    void deleteFaceCustomParamsConfig() { this->faceCustomParamsConfig_ = nullptr;};
    inline string getFaceCustomParamsConfig() const { DARABONBA_PTR_GET_DEFAULT(faceCustomParamsConfig_, "") };
    inline UpdateSmarttagTemplateRequest& setFaceCustomParamsConfig(string faceCustomParamsConfig) { DARABONBA_PTR_SET_VALUE(faceCustomParamsConfig_, faceCustomParamsConfig) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline UpdateSmarttagTemplateRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline UpdateSmarttagTemplateRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // keywordConfig Field Functions 
    bool hasKeywordConfig() const { return this->keywordConfig_ != nullptr;};
    void deleteKeywordConfig() { this->keywordConfig_ = nullptr;};
    inline string getKeywordConfig() const { DARABONBA_PTR_GET_DEFAULT(keywordConfig_, "") };
    inline UpdateSmarttagTemplateRequest& setKeywordConfig(string keywordConfig) { DARABONBA_PTR_SET_VALUE(keywordConfig_, keywordConfig) };


    // knowledgeConfig Field Functions 
    bool hasKnowledgeConfig() const { return this->knowledgeConfig_ != nullptr;};
    void deleteKnowledgeConfig() { this->knowledgeConfig_ = nullptr;};
    inline string getKnowledgeConfig() const { DARABONBA_PTR_GET_DEFAULT(knowledgeConfig_, "") };
    inline UpdateSmarttagTemplateRequest& setKnowledgeConfig(string knowledgeConfig) { DARABONBA_PTR_SET_VALUE(knowledgeConfig_, knowledgeConfig) };


    // labelType Field Functions 
    bool hasLabelType() const { return this->labelType_ != nullptr;};
    void deleteLabelType() { this->labelType_ = nullptr;};
    inline string getLabelType() const { DARABONBA_PTR_GET_DEFAULT(labelType_, "") };
    inline UpdateSmarttagTemplateRequest& setLabelType(string labelType) { DARABONBA_PTR_SET_VALUE(labelType_, labelType) };


    // labelVersion Field Functions 
    bool hasLabelVersion() const { return this->labelVersion_ != nullptr;};
    void deleteLabelVersion() { this->labelVersion_ = nullptr;};
    inline string getLabelVersion() const { DARABONBA_PTR_GET_DEFAULT(labelVersion_, "") };
    inline UpdateSmarttagTemplateRequest& setLabelVersion(string labelVersion) { DARABONBA_PTR_SET_VALUE(labelVersion_, labelVersion) };


    // landmarkGroupIds Field Functions 
    bool hasLandmarkGroupIds() const { return this->landmarkGroupIds_ != nullptr;};
    void deleteLandmarkGroupIds() { this->landmarkGroupIds_ = nullptr;};
    inline string getLandmarkGroupIds() const { DARABONBA_PTR_GET_DEFAULT(landmarkGroupIds_, "") };
    inline UpdateSmarttagTemplateRequest& setLandmarkGroupIds(string landmarkGroupIds) { DARABONBA_PTR_SET_VALUE(landmarkGroupIds_, landmarkGroupIds) };


    // objectGroupIds Field Functions 
    bool hasObjectGroupIds() const { return this->objectGroupIds_ != nullptr;};
    void deleteObjectGroupIds() { this->objectGroupIds_ = nullptr;};
    inline string getObjectGroupIds() const { DARABONBA_PTR_GET_DEFAULT(objectGroupIds_, "") };
    inline UpdateSmarttagTemplateRequest& setObjectGroupIds(string objectGroupIds) { DARABONBA_PTR_SET_VALUE(objectGroupIds_, objectGroupIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateSmarttagTemplateRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateSmarttagTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateSmarttagTemplateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateSmarttagTemplateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline UpdateSmarttagTemplateRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline UpdateSmarttagTemplateRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateSmarttagTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateSmarttagTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    shared_ptr<string> analyseTypes_ {};
    shared_ptr<string> faceCategoryIds_ {};
    shared_ptr<string> faceCustomParamsConfig_ {};
    shared_ptr<string> industry_ {};
    shared_ptr<bool> isDefault_ {};
    shared_ptr<string> keywordConfig_ {};
    shared_ptr<string> knowledgeConfig_ {};
    shared_ptr<string> labelType_ {};
    shared_ptr<string> labelVersion_ {};
    shared_ptr<string> landmarkGroupIds_ {};
    shared_ptr<string> objectGroupIds_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> scene_ {};
    shared_ptr<string> templateConfig_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
