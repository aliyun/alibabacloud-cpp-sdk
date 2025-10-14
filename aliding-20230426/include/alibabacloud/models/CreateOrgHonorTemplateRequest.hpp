// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORGHONORTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORGHONORTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrgHonorTemplateRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateOrgHonorTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrgHonorTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(avatarFrameMediaId, avatarFrameMediaId_);
      DARABONBA_PTR_TO_JSON(defaultBgColor, defaultBgColor_);
      DARABONBA_PTR_TO_JSON(medalDesc, medalDesc_);
      DARABONBA_PTR_TO_JSON(medalMediaId, medalMediaId_);
      DARABONBA_PTR_TO_JSON(medalName, medalName_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrgHonorTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(avatarFrameMediaId, avatarFrameMediaId_);
      DARABONBA_PTR_FROM_JSON(defaultBgColor, defaultBgColor_);
      DARABONBA_PTR_FROM_JSON(medalDesc, medalDesc_);
      DARABONBA_PTR_FROM_JSON(medalMediaId, medalMediaId_);
      DARABONBA_PTR_FROM_JSON(medalName, medalName_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    CreateOrgHonorTemplateRequest() = default ;
    CreateOrgHonorTemplateRequest(const CreateOrgHonorTemplateRequest &) = default ;
    CreateOrgHonorTemplateRequest(CreateOrgHonorTemplateRequest &&) = default ;
    CreateOrgHonorTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrgHonorTemplateRequest() = default ;
    CreateOrgHonorTemplateRequest& operator=(const CreateOrgHonorTemplateRequest &) = default ;
    CreateOrgHonorTemplateRequest& operator=(CreateOrgHonorTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && return this->avatarFrameMediaId_ == nullptr && return this->defaultBgColor_ == nullptr && return this->medalDesc_ == nullptr && return this->medalMediaId_ == nullptr && return this->medalName_ == nullptr
        && return this->orgId_ == nullptr && return this->userId_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateOrgHonorTemplateRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateOrgHonorTemplateRequestTenantContext) };
    inline CreateOrgHonorTemplateRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateOrgHonorTemplateRequestTenantContext) };
    inline CreateOrgHonorTemplateRequest& setTenantContext(const CreateOrgHonorTemplateRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateOrgHonorTemplateRequest& setTenantContext(CreateOrgHonorTemplateRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // avatarFrameMediaId Field Functions 
    bool hasAvatarFrameMediaId() const { return this->avatarFrameMediaId_ != nullptr;};
    void deleteAvatarFrameMediaId() { this->avatarFrameMediaId_ = nullptr;};
    inline string avatarFrameMediaId() const { DARABONBA_PTR_GET_DEFAULT(avatarFrameMediaId_, "") };
    inline CreateOrgHonorTemplateRequest& setAvatarFrameMediaId(string avatarFrameMediaId) { DARABONBA_PTR_SET_VALUE(avatarFrameMediaId_, avatarFrameMediaId) };


    // defaultBgColor Field Functions 
    bool hasDefaultBgColor() const { return this->defaultBgColor_ != nullptr;};
    void deleteDefaultBgColor() { this->defaultBgColor_ = nullptr;};
    inline string defaultBgColor() const { DARABONBA_PTR_GET_DEFAULT(defaultBgColor_, "") };
    inline CreateOrgHonorTemplateRequest& setDefaultBgColor(string defaultBgColor) { DARABONBA_PTR_SET_VALUE(defaultBgColor_, defaultBgColor) };


    // medalDesc Field Functions 
    bool hasMedalDesc() const { return this->medalDesc_ != nullptr;};
    void deleteMedalDesc() { this->medalDesc_ = nullptr;};
    inline string medalDesc() const { DARABONBA_PTR_GET_DEFAULT(medalDesc_, "") };
    inline CreateOrgHonorTemplateRequest& setMedalDesc(string medalDesc) { DARABONBA_PTR_SET_VALUE(medalDesc_, medalDesc) };


    // medalMediaId Field Functions 
    bool hasMedalMediaId() const { return this->medalMediaId_ != nullptr;};
    void deleteMedalMediaId() { this->medalMediaId_ = nullptr;};
    inline string medalMediaId() const { DARABONBA_PTR_GET_DEFAULT(medalMediaId_, "") };
    inline CreateOrgHonorTemplateRequest& setMedalMediaId(string medalMediaId) { DARABONBA_PTR_SET_VALUE(medalMediaId_, medalMediaId) };


    // medalName Field Functions 
    bool hasMedalName() const { return this->medalName_ != nullptr;};
    void deleteMedalName() { this->medalName_ = nullptr;};
    inline string medalName() const { DARABONBA_PTR_GET_DEFAULT(medalName_, "") };
    inline CreateOrgHonorTemplateRequest& setMedalName(string medalName) { DARABONBA_PTR_SET_VALUE(medalName_, medalName) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline CreateOrgHonorTemplateRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateOrgHonorTemplateRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<CreateOrgHonorTemplateRequestTenantContext> tenantContext_ = nullptr;
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
