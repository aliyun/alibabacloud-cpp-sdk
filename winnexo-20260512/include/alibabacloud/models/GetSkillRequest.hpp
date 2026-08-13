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
      DARABONBA_PTR_TO_JSON(includeSkillFiles, includeSkillFiles_);
      DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
      DARABONBA_PTR_TO_JSON(skillName, skillName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(viewMode, viewMode_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(includeSkillFiles, includeSkillFiles_);
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
    virtual bool empty() const override { return this->includeSkillFiles_ == nullptr
        && this->skillCode_ == nullptr && this->skillName_ == nullptr && this->tenantId_ == nullptr && this->viewMode_ == nullptr; };
    // includeSkillFiles Field Functions 
    bool hasIncludeSkillFiles() const { return this->includeSkillFiles_ != nullptr;};
    void deleteIncludeSkillFiles() { this->includeSkillFiles_ = nullptr;};
    inline bool getIncludeSkillFiles() const { DARABONBA_PTR_GET_DEFAULT(includeSkillFiles_, false) };
    inline GetSkillRequest& setIncludeSkillFiles(bool includeSkillFiles) { DARABONBA_PTR_SET_VALUE(includeSkillFiles_, includeSkillFiles) };


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
    // 是否返回完整文件树（默认 False，避免大体积响应）
    shared_ptr<bool> includeSkillFiles_ {};
    // 技能编码（全局唯一），优先级高于 skillName
    shared_ptr<string> skillCode_ {};
    // 技能名称，未传 skillCode 时使用；租户范围内必须唯一
    shared_ptr<string> skillName_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    // 视角：draft（草稿/编辑视角）或 published（已发布视角，默认）
    shared_ptr<string> viewMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
