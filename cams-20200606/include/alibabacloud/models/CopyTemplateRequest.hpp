// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class CopyTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SceneTemplateCode, sceneTemplateCode_);
      DARABONBA_PTR_TO_JSON(SceneTemplateName, sceneTemplateName_);
    };
    friend void from_json(const Darabonba::Json& j, CopyTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SceneTemplateCode, sceneTemplateCode_);
      DARABONBA_PTR_FROM_JSON(SceneTemplateName, sceneTemplateName_);
    };
    CopyTemplateRequest() = default ;
    CopyTemplateRequest(const CopyTemplateRequest &) = default ;
    CopyTemplateRequest(CopyTemplateRequest &&) = default ;
    CopyTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyTemplateRequest() = default ;
    CopyTemplateRequest& operator=(const CopyTemplateRequest &) = default ;
    CopyTemplateRequest& operator=(CopyTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->custSpaceId_ == nullptr
        && this->language_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sceneTemplateCode_ == nullptr
        && this->sceneTemplateName_ == nullptr; };
    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline CopyTemplateRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CopyTemplateRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CopyTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CopyTemplateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CopyTemplateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sceneTemplateCode Field Functions 
    bool hasSceneTemplateCode() const { return this->sceneTemplateCode_ != nullptr;};
    void deleteSceneTemplateCode() { this->sceneTemplateCode_ = nullptr;};
    inline string getSceneTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(sceneTemplateCode_, "") };
    inline CopyTemplateRequest& setSceneTemplateCode(string sceneTemplateCode) { DARABONBA_PTR_SET_VALUE(sceneTemplateCode_, sceneTemplateCode) };


    // sceneTemplateName Field Functions 
    bool hasSceneTemplateName() const { return this->sceneTemplateName_ != nullptr;};
    void deleteSceneTemplateName() { this->sceneTemplateName_ = nullptr;};
    inline string getSceneTemplateName() const { DARABONBA_PTR_GET_DEFAULT(sceneTemplateName_, "") };
    inline CopyTemplateRequest& setSceneTemplateName(string sceneTemplateName) { DARABONBA_PTR_SET_VALUE(sceneTemplateName_, sceneTemplateName) };


  protected:
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<string> language_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> sceneTemplateCode_ {};
    // This parameter is required.
    shared_ptr<string> sceneTemplateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
