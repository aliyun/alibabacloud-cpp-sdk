// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateUserInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(avatar, avatar_);
      DARABONBA_PTR_TO_JSON(languagePreference, languagePreference_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(offering, offering_);
      DARABONBA_PTR_TO_JSON(profileRoleInfo, profileRoleInfo_);
      DARABONBA_PTR_TO_JSON(selfIntroduction, selfIntroduction_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(languagePreference, languagePreference_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(offering, offering_);
      DARABONBA_PTR_FROM_JSON(profileRoleInfo, profileRoleInfo_);
      DARABONBA_PTR_FROM_JSON(selfIntroduction, selfIntroduction_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UpdateUserInfoRequest() = default ;
    UpdateUserInfoRequest(const UpdateUserInfoRequest &) = default ;
    UpdateUserInfoRequest(UpdateUserInfoRequest &&) = default ;
    UpdateUserInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserInfoRequest() = default ;
    UpdateUserInfoRequest& operator=(const UpdateUserInfoRequest &) = default ;
    UpdateUserInfoRequest& operator=(UpdateUserInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatar_ == nullptr
        && this->languagePreference_ == nullptr && this->name_ == nullptr && this->offering_ == nullptr && this->profileRoleInfo_ == nullptr && this->selfIntroduction_ == nullptr
        && this->tenantId_ == nullptr; };
    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline UpdateUserInfoRequest& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // languagePreference Field Functions 
    bool hasLanguagePreference() const { return this->languagePreference_ != nullptr;};
    void deleteLanguagePreference() { this->languagePreference_ = nullptr;};
    inline string getLanguagePreference() const { DARABONBA_PTR_GET_DEFAULT(languagePreference_, "") };
    inline UpdateUserInfoRequest& setLanguagePreference(string languagePreference) { DARABONBA_PTR_SET_VALUE(languagePreference_, languagePreference) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateUserInfoRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // offering Field Functions 
    bool hasOffering() const { return this->offering_ != nullptr;};
    void deleteOffering() { this->offering_ = nullptr;};
    inline string getOffering() const { DARABONBA_PTR_GET_DEFAULT(offering_, "") };
    inline UpdateUserInfoRequest& setOffering(string offering) { DARABONBA_PTR_SET_VALUE(offering_, offering) };


    // profileRoleInfo Field Functions 
    bool hasProfileRoleInfo() const { return this->profileRoleInfo_ != nullptr;};
    void deleteProfileRoleInfo() { this->profileRoleInfo_ = nullptr;};
    inline string getProfileRoleInfo() const { DARABONBA_PTR_GET_DEFAULT(profileRoleInfo_, "") };
    inline UpdateUserInfoRequest& setProfileRoleInfo(string profileRoleInfo) { DARABONBA_PTR_SET_VALUE(profileRoleInfo_, profileRoleInfo) };


    // selfIntroduction Field Functions 
    bool hasSelfIntroduction() const { return this->selfIntroduction_ != nullptr;};
    void deleteSelfIntroduction() { this->selfIntroduction_ = nullptr;};
    inline string getSelfIntroduction() const { DARABONBA_PTR_GET_DEFAULT(selfIntroduction_, "") };
    inline UpdateUserInfoRequest& setSelfIntroduction(string selfIntroduction) { DARABONBA_PTR_SET_VALUE(selfIntroduction_, selfIntroduction) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateUserInfoRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 用户头像 URL
    shared_ptr<string> avatar_ {};
    // 语言偏好: zh-CN, en-US
    shared_ptr<string> languagePreference_ {};
    // 文件名
    shared_ptr<string> name_ {};
    // 用户服务描述，最多1000字符
    shared_ptr<string> offering_ {};
    // 用户角色描述（当profileRole为Others时使用），最多100字符
    shared_ptr<string> profileRoleInfo_ {};
    // 用户自我介绍，最多1000字符
    shared_ptr<string> selfIntroduction_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
