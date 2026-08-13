// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSKILLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSKILLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RunSkillShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSkillShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arguments, argumentsShrink_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
      DARABONBA_PTR_TO_JSON(skillName, skillName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSkillShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arguments, argumentsShrink_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(skillCode, skillCode_);
      DARABONBA_PTR_FROM_JSON(skillName, skillName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    RunSkillShrinkRequest() = default ;
    RunSkillShrinkRequest(const RunSkillShrinkRequest &) = default ;
    RunSkillShrinkRequest(RunSkillShrinkRequest &&) = default ;
    RunSkillShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSkillShrinkRequest() = default ;
    RunSkillShrinkRequest& operator=(const RunSkillShrinkRequest &) = default ;
    RunSkillShrinkRequest& operator=(RunSkillShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->argumentsShrink_ == nullptr
        && this->clientToken_ == nullptr && this->model_ == nullptr && this->operatingObjectName_ == nullptr && this->skillCode_ == nullptr && this->skillName_ == nullptr
        && this->tenantId_ == nullptr; };
    // argumentsShrink Field Functions 
    bool hasArgumentsShrink() const { return this->argumentsShrink_ != nullptr;};
    void deleteArgumentsShrink() { this->argumentsShrink_ = nullptr;};
    inline string getArgumentsShrink() const { DARABONBA_PTR_GET_DEFAULT(argumentsShrink_, "") };
    inline RunSkillShrinkRequest& setArgumentsShrink(string argumentsShrink) { DARABONBA_PTR_SET_VALUE(argumentsShrink_, argumentsShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunSkillShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline RunSkillShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline RunSkillShrinkRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // skillCode Field Functions 
    bool hasSkillCode() const { return this->skillCode_ != nullptr;};
    void deleteSkillCode() { this->skillCode_ = nullptr;};
    inline string getSkillCode() const { DARABONBA_PTR_GET_DEFAULT(skillCode_, "") };
    inline RunSkillShrinkRequest& setSkillCode(string skillCode) { DARABONBA_PTR_SET_VALUE(skillCode_, skillCode) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline RunSkillShrinkRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RunSkillShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    shared_ptr<string> argumentsShrink_ {};
    // 幂等 token，调用方自行生成；当前版本仅记录到 metadata，未做去重
    shared_ptr<string> clientToken_ {};
    // 抽象模型名（模型档位），不传默认 standard
    shared_ptr<string> model_ {};
    // 数字员工名称；用于按绑定关系计算 CodeAgent allowedSkills 白名单
    shared_ptr<string> operatingObjectName_ {};
    // 技能编码（全局唯一），优先级高于 skillName
    shared_ptr<string> skillCode_ {};
    // 技能名称，未传 skillCode 时使用；租户范围内必须唯一
    shared_ptr<string> skillName_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
