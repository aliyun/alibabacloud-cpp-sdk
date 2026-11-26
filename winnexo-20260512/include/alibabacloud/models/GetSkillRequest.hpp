// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(includeSkillFiles, includeSkillFiles_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
      DARABONBA_PTR_TO_JSON(skillName, skillName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(viewMode, viewMode_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(includeSkillFiles, includeSkillFiles_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(skillCode, skillCode_);
      DARABONBA_PTR_FROM_JSON(skillName, skillName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(viewMode, viewMode_);
    };
    GetSkillRequest() = default ;
    GetSkillRequest(const GetSkillRequest &) = default ;
    GetSkillRequest(GetSkillRequest &&) = default ;
    GetSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillRequest() = default ;
    GetSkillRequest& operator=(const GetSkillRequest &) = default ;
    GetSkillRequest& operator=(GetSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->includeSkillFiles_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->skillCode_ == nullptr && this->skillName_ == nullptr
        && this->tenantId_ == nullptr && this->viewMode_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline GetSkillRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // includeSkillFiles Field Functions 
    bool hasIncludeSkillFiles() const { return this->includeSkillFiles_ != nullptr;};
    void deleteIncludeSkillFiles() { this->includeSkillFiles_ = nullptr;};
    inline bool getIncludeSkillFiles() const { DARABONBA_PTR_GET_DEFAULT(includeSkillFiles_, false) };
    inline GetSkillRequest& setIncludeSkillFiles(bool includeSkillFiles) { DARABONBA_PTR_SET_VALUE(includeSkillFiles_, includeSkillFiles) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline GetSkillRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline GetSkillRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // skillCode Field Functions 
    bool hasSkillCode() const { return this->skillCode_ != nullptr;};
    void deleteSkillCode() { this->skillCode_ = nullptr;};
    inline string getSkillCode() const { DARABONBA_PTR_GET_DEFAULT(skillCode_, "") };
    inline GetSkillRequest& setSkillCode(string skillCode) { DARABONBA_PTR_SET_VALUE(skillCode_, skillCode) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline GetSkillRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetSkillRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // viewMode Field Functions 
    bool hasViewMode() const { return this->viewMode_ != nullptr;};
    void deleteViewMode() { this->viewMode_ = nullptr;};
    inline string getViewMode() const { DARABONBA_PTR_GET_DEFAULT(viewMode_, "") };
    inline GetSkillRequest& setViewMode(string viewMode) { DARABONBA_PTR_SET_VALUE(viewMode_, viewMode) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // Specifies whether to return the complete file tree. Default value: false. This prevents large response payloads.
    shared_ptr<bool> includeSkillFiles_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The skill code. This parameter has a value when type is set to skill.
    shared_ptr<string> skillCode_ {};
    // The name of the skill.
    shared_ptr<string> skillName_ {};
    // The ID of the tenant to which the task belongs.
    shared_ptr<string> tenantId_ {};
    // The view mode. Valid values: draft (draft or edit view) and published (published view, default).
    shared_ptr<string> viewMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
