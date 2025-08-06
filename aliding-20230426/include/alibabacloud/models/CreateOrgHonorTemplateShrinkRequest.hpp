// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORGHONORTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORGHONORTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateOrgHonorTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrgHonorTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(avatarFrameMediaId, avatarFrameMediaId_);
      DARABONBA_PTR_TO_JSON(defaultBgColor, defaultBgColor_);
      DARABONBA_PTR_TO_JSON(medalDesc, medalDesc_);
      DARABONBA_PTR_TO_JSON(medalMediaId, medalMediaId_);
      DARABONBA_PTR_TO_JSON(medalName, medalName_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrgHonorTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(avatarFrameMediaId, avatarFrameMediaId_);
      DARABONBA_PTR_FROM_JSON(defaultBgColor, defaultBgColor_);
      DARABONBA_PTR_FROM_JSON(medalDesc, medalDesc_);
      DARABONBA_PTR_FROM_JSON(medalMediaId, medalMediaId_);
      DARABONBA_PTR_FROM_JSON(medalName, medalName_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    CreateOrgHonorTemplateShrinkRequest() = default ;
    CreateOrgHonorTemplateShrinkRequest(const CreateOrgHonorTemplateShrinkRequest &) = default ;
    CreateOrgHonorTemplateShrinkRequest(CreateOrgHonorTemplateShrinkRequest &&) = default ;
    CreateOrgHonorTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrgHonorTemplateShrinkRequest() = default ;
    CreateOrgHonorTemplateShrinkRequest& operator=(const CreateOrgHonorTemplateShrinkRequest &) = default ;
    CreateOrgHonorTemplateShrinkRequest& operator=(CreateOrgHonorTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContextShrink_ != nullptr
        && this->avatarFrameMediaId_ != nullptr && this->defaultBgColor_ != nullptr && this->medalDesc_ != nullptr && this->medalMediaId_ != nullptr && this->medalName_ != nullptr
        && this->orgId_ != nullptr && this->userId_ != nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CreateOrgHonorTemplateShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // avatarFrameMediaId Field Functions 
    bool hasAvatarFrameMediaId() const { return this->avatarFrameMediaId_ != nullptr;};
    void deleteAvatarFrameMediaId() { this->avatarFrameMediaId_ = nullptr;};
    inline string avatarFrameMediaId() const { DARABONBA_PTR_GET_DEFAULT(avatarFrameMediaId_, "") };
    inline CreateOrgHonorTemplateShrinkRequest& setAvatarFrameMediaId(string avatarFrameMediaId) { DARABONBA_PTR_SET_VALUE(avatarFrameMediaId_, avatarFrameMediaId) };


    // defaultBgColor Field Functions 
    bool hasDefaultBgColor() const { return this->defaultBgColor_ != nullptr;};
    void deleteDefaultBgColor() { this->defaultBgColor_ = nullptr;};
    inline string defaultBgColor() const { DARABONBA_PTR_GET_DEFAULT(defaultBgColor_, "") };
    inline CreateOrgHonorTemplateShrinkRequest& setDefaultBgColor(string defaultBgColor) { DARABONBA_PTR_SET_VALUE(defaultBgColor_, defaultBgColor) };


    // medalDesc Field Functions 
    bool hasMedalDesc() const { return this->medalDesc_ != nullptr;};
    void deleteMedalDesc() { this->medalDesc_ = nullptr;};
    inline string medalDesc() const { DARABONBA_PTR_GET_DEFAULT(medalDesc_, "") };
    inline CreateOrgHonorTemplateShrinkRequest& setMedalDesc(string medalDesc) { DARABONBA_PTR_SET_VALUE(medalDesc_, medalDesc) };


    // medalMediaId Field Functions 
    bool hasMedalMediaId() const { return this->medalMediaId_ != nullptr;};
    void deleteMedalMediaId() { this->medalMediaId_ = nullptr;};
    inline string medalMediaId() const { DARABONBA_PTR_GET_DEFAULT(medalMediaId_, "") };
    inline CreateOrgHonorTemplateShrinkRequest& setMedalMediaId(string medalMediaId) { DARABONBA_PTR_SET_VALUE(medalMediaId_, medalMediaId) };


    // medalName Field Functions 
    bool hasMedalName() const { return this->medalName_ != nullptr;};
    void deleteMedalName() { this->medalName_ = nullptr;};
    inline string medalName() const { DARABONBA_PTR_GET_DEFAULT(medalName_, "") };
    inline CreateOrgHonorTemplateShrinkRequest& setMedalName(string medalName) { DARABONBA_PTR_SET_VALUE(medalName_, medalName) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline CreateOrgHonorTemplateShrinkRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateOrgHonorTemplateShrinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> avatarFrameMediaId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> defaultBgColor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> medalDesc_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> medalMediaId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> medalName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> orgId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
