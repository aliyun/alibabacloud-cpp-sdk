// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSMARTTAGTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSMARTTAGTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddSmarttagTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSmarttagTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnalyseTypes, analyseTypes_);
      DARABONBA_PTR_TO_JSON(FaceCategoryIds, faceCategoryIds_);
      DARABONBA_PTR_TO_JSON(FaceCustomParamsConfig, faceCustomParamsConfig_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(KeywordConfig, keywordConfig_);
      DARABONBA_PTR_TO_JSON(KnowledgeConfig, knowledgeConfig_);
      DARABONBA_PTR_TO_JSON(LabelCustomCategoryIds, labelCustomCategoryIds_);
      DARABONBA_PTR_TO_JSON(LabelCustomParamsConfig, labelCustomParamsConfig_);
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
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, AddSmarttagTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalyseTypes, analyseTypes_);
      DARABONBA_PTR_FROM_JSON(FaceCategoryIds, faceCategoryIds_);
      DARABONBA_PTR_FROM_JSON(FaceCustomParamsConfig, faceCustomParamsConfig_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(KeywordConfig, keywordConfig_);
      DARABONBA_PTR_FROM_JSON(KnowledgeConfig, knowledgeConfig_);
      DARABONBA_PTR_FROM_JSON(LabelCustomCategoryIds, labelCustomCategoryIds_);
      DARABONBA_PTR_FROM_JSON(LabelCustomParamsConfig, labelCustomParamsConfig_);
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
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    AddSmarttagTemplateRequest() = default ;
    AddSmarttagTemplateRequest(const AddSmarttagTemplateRequest &) = default ;
    AddSmarttagTemplateRequest(AddSmarttagTemplateRequest &&) = default ;
    AddSmarttagTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSmarttagTemplateRequest() = default ;
    AddSmarttagTemplateRequest& operator=(const AddSmarttagTemplateRequest &) = default ;
    AddSmarttagTemplateRequest& operator=(AddSmarttagTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analyseTypes_ == nullptr
        && return this->faceCategoryIds_ == nullptr && return this->faceCustomParamsConfig_ == nullptr && return this->industry_ == nullptr && return this->isDefault_ == nullptr && return this->keywordConfig_ == nullptr
        && return this->knowledgeConfig_ == nullptr && return this->labelCustomCategoryIds_ == nullptr && return this->labelCustomParamsConfig_ == nullptr && return this->labelType_ == nullptr && return this->labelVersion_ == nullptr
        && return this->landmarkGroupIds_ == nullptr && return this->objectGroupIds_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->scene_ == nullptr && return this->templateConfig_ == nullptr && return this->templateName_ == nullptr; };
    // analyseTypes Field Functions 
    bool hasAnalyseTypes() const { return this->analyseTypes_ != nullptr;};
    void deleteAnalyseTypes() { this->analyseTypes_ = nullptr;};
    inline string analyseTypes() const { DARABONBA_PTR_GET_DEFAULT(analyseTypes_, "") };
    inline AddSmarttagTemplateRequest& setAnalyseTypes(string analyseTypes) { DARABONBA_PTR_SET_VALUE(analyseTypes_, analyseTypes) };


    // faceCategoryIds Field Functions 
    bool hasFaceCategoryIds() const { return this->faceCategoryIds_ != nullptr;};
    void deleteFaceCategoryIds() { this->faceCategoryIds_ = nullptr;};
    inline string faceCategoryIds() const { DARABONBA_PTR_GET_DEFAULT(faceCategoryIds_, "") };
    inline AddSmarttagTemplateRequest& setFaceCategoryIds(string faceCategoryIds) { DARABONBA_PTR_SET_VALUE(faceCategoryIds_, faceCategoryIds) };


    // faceCustomParamsConfig Field Functions 
    bool hasFaceCustomParamsConfig() const { return this->faceCustomParamsConfig_ != nullptr;};
    void deleteFaceCustomParamsConfig() { this->faceCustomParamsConfig_ = nullptr;};
    inline string faceCustomParamsConfig() const { DARABONBA_PTR_GET_DEFAULT(faceCustomParamsConfig_, "") };
    inline AddSmarttagTemplateRequest& setFaceCustomParamsConfig(string faceCustomParamsConfig) { DARABONBA_PTR_SET_VALUE(faceCustomParamsConfig_, faceCustomParamsConfig) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline AddSmarttagTemplateRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline AddSmarttagTemplateRequest& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // keywordConfig Field Functions 
    bool hasKeywordConfig() const { return this->keywordConfig_ != nullptr;};
    void deleteKeywordConfig() { this->keywordConfig_ = nullptr;};
    inline string keywordConfig() const { DARABONBA_PTR_GET_DEFAULT(keywordConfig_, "") };
    inline AddSmarttagTemplateRequest& setKeywordConfig(string keywordConfig) { DARABONBA_PTR_SET_VALUE(keywordConfig_, keywordConfig) };


    // knowledgeConfig Field Functions 
    bool hasKnowledgeConfig() const { return this->knowledgeConfig_ != nullptr;};
    void deleteKnowledgeConfig() { this->knowledgeConfig_ = nullptr;};
    inline string knowledgeConfig() const { DARABONBA_PTR_GET_DEFAULT(knowledgeConfig_, "") };
    inline AddSmarttagTemplateRequest& setKnowledgeConfig(string knowledgeConfig) { DARABONBA_PTR_SET_VALUE(knowledgeConfig_, knowledgeConfig) };


    // labelCustomCategoryIds Field Functions 
    bool hasLabelCustomCategoryIds() const { return this->labelCustomCategoryIds_ != nullptr;};
    void deleteLabelCustomCategoryIds() { this->labelCustomCategoryIds_ = nullptr;};
    inline string labelCustomCategoryIds() const { DARABONBA_PTR_GET_DEFAULT(labelCustomCategoryIds_, "") };
    inline AddSmarttagTemplateRequest& setLabelCustomCategoryIds(string labelCustomCategoryIds) { DARABONBA_PTR_SET_VALUE(labelCustomCategoryIds_, labelCustomCategoryIds) };


    // labelCustomParamsConfig Field Functions 
    bool hasLabelCustomParamsConfig() const { return this->labelCustomParamsConfig_ != nullptr;};
    void deleteLabelCustomParamsConfig() { this->labelCustomParamsConfig_ = nullptr;};
    inline string labelCustomParamsConfig() const { DARABONBA_PTR_GET_DEFAULT(labelCustomParamsConfig_, "") };
    inline AddSmarttagTemplateRequest& setLabelCustomParamsConfig(string labelCustomParamsConfig) { DARABONBA_PTR_SET_VALUE(labelCustomParamsConfig_, labelCustomParamsConfig) };


    // labelType Field Functions 
    bool hasLabelType() const { return this->labelType_ != nullptr;};
    void deleteLabelType() { this->labelType_ = nullptr;};
    inline string labelType() const { DARABONBA_PTR_GET_DEFAULT(labelType_, "") };
    inline AddSmarttagTemplateRequest& setLabelType(string labelType) { DARABONBA_PTR_SET_VALUE(labelType_, labelType) };


    // labelVersion Field Functions 
    bool hasLabelVersion() const { return this->labelVersion_ != nullptr;};
    void deleteLabelVersion() { this->labelVersion_ = nullptr;};
    inline string labelVersion() const { DARABONBA_PTR_GET_DEFAULT(labelVersion_, "") };
    inline AddSmarttagTemplateRequest& setLabelVersion(string labelVersion) { DARABONBA_PTR_SET_VALUE(labelVersion_, labelVersion) };


    // landmarkGroupIds Field Functions 
    bool hasLandmarkGroupIds() const { return this->landmarkGroupIds_ != nullptr;};
    void deleteLandmarkGroupIds() { this->landmarkGroupIds_ = nullptr;};
    inline string landmarkGroupIds() const { DARABONBA_PTR_GET_DEFAULT(landmarkGroupIds_, "") };
    inline AddSmarttagTemplateRequest& setLandmarkGroupIds(string landmarkGroupIds) { DARABONBA_PTR_SET_VALUE(landmarkGroupIds_, landmarkGroupIds) };


    // objectGroupIds Field Functions 
    bool hasObjectGroupIds() const { return this->objectGroupIds_ != nullptr;};
    void deleteObjectGroupIds() { this->objectGroupIds_ = nullptr;};
    inline string objectGroupIds() const { DARABONBA_PTR_GET_DEFAULT(objectGroupIds_, "") };
    inline AddSmarttagTemplateRequest& setObjectGroupIds(string objectGroupIds) { DARABONBA_PTR_SET_VALUE(objectGroupIds_, objectGroupIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddSmarttagTemplateRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddSmarttagTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddSmarttagTemplateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddSmarttagTemplateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline AddSmarttagTemplateRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline AddSmarttagTemplateRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline AddSmarttagTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> analyseTypes_ = nullptr;
    std::shared_ptr<string> faceCategoryIds_ = nullptr;
    std::shared_ptr<string> faceCustomParamsConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> industry_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<string> keywordConfig_ = nullptr;
    std::shared_ptr<string> knowledgeConfig_ = nullptr;
    std::shared_ptr<string> labelCustomCategoryIds_ = nullptr;
    std::shared_ptr<string> labelCustomParamsConfig_ = nullptr;
    std::shared_ptr<string> labelType_ = nullptr;
    std::shared_ptr<string> labelVersion_ = nullptr;
    std::shared_ptr<string> landmarkGroupIds_ = nullptr;
    std::shared_ptr<string> objectGroupIds_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> templateConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
