// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGRAFANAWORKSPACEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGRAFANAWORKSPACEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateGrafanaWorkspaceAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGrafanaWorkspaceAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNotes, accountNotes_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGrafanaWorkspaceAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNotes, accountNotes_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    CreateGrafanaWorkspaceAccountRequest() = default ;
    CreateGrafanaWorkspaceAccountRequest(const CreateGrafanaWorkspaceAccountRequest &) = default ;
    CreateGrafanaWorkspaceAccountRequest(CreateGrafanaWorkspaceAccountRequest &&) = default ;
    CreateGrafanaWorkspaceAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGrafanaWorkspaceAccountRequest() = default ;
    CreateGrafanaWorkspaceAccountRequest& operator=(const CreateGrafanaWorkspaceAccountRequest &) = default ;
    CreateGrafanaWorkspaceAccountRequest& operator=(CreateGrafanaWorkspaceAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNotes_ == nullptr
        && this->accountPassword_ == nullptr && this->aliyunLang_ == nullptr && this->aliyunUid_ == nullptr && this->grafanaWorkspaceId_ == nullptr && this->orgId_ == nullptr
        && this->regionId_ == nullptr && this->role_ == nullptr; };
    // accountNotes Field Functions 
    bool hasAccountNotes() const { return this->accountNotes_ != nullptr;};
    void deleteAccountNotes() { this->accountNotes_ = nullptr;};
    inline string getAccountNotes() const { DARABONBA_PTR_GET_DEFAULT(accountNotes_, "") };
    inline CreateGrafanaWorkspaceAccountRequest& setAccountNotes(string accountNotes) { DARABONBA_PTR_SET_VALUE(accountNotes_, accountNotes) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateGrafanaWorkspaceAccountRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline CreateGrafanaWorkspaceAccountRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline CreateGrafanaWorkspaceAccountRequest& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string getGrafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline CreateGrafanaWorkspaceAccountRequest& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int32_t getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0) };
    inline CreateGrafanaWorkspaceAccountRequest& setOrgId(int32_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGrafanaWorkspaceAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateGrafanaWorkspaceAccountRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    shared_ptr<string> accountNotes_ {};
    shared_ptr<string> accountPassword_ {};
    shared_ptr<string> aliyunLang_ {};
    // This parameter is required.
    shared_ptr<string> aliyunUid_ {};
    // This parameter is required.
    shared_ptr<string> grafanaWorkspaceId_ {};
    // This parameter is required.
    shared_ptr<int32_t> orgId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> role_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
