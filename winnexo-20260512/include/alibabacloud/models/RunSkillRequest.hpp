// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RunSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSkillRequest& obj) { 
      DARABONBA_ANY_TO_JSON(arguments, arguments_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
      DARABONBA_PTR_TO_JSON(skillName, skillName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSkillRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(arguments, arguments_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(skillCode, skillCode_);
      DARABONBA_PTR_FROM_JSON(skillName, skillName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    RunSkillRequest() = default ;
    RunSkillRequest(const RunSkillRequest &) = default ;
    RunSkillRequest(RunSkillRequest &&) = default ;
    RunSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSkillRequest() = default ;
    RunSkillRequest& operator=(const RunSkillRequest &) = default ;
    RunSkillRequest& operator=(RunSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arguments_ == nullptr
        && this->clientToken_ == nullptr && this->model_ == nullptr && this->operatingObjectName_ == nullptr && this->skillCode_ == nullptr && this->skillName_ == nullptr
        && this->tenantId_ == nullptr; };
    // arguments Field Functions 
    bool hasArguments() const { return this->arguments_ != nullptr;};
    void deleteArguments() { this->arguments_ = nullptr;};
    inline     const Darabonba::Json & getArguments() const { DARABONBA_GET(arguments_) };
    Darabonba::Json & getArguments() { DARABONBA_GET(arguments_) };
    inline RunSkillRequest& setArguments(const Darabonba::Json & arguments) { DARABONBA_SET_VALUE(arguments_, arguments) };
    inline RunSkillRequest& setArguments(Darabonba::Json && arguments) { DARABONBA_SET_RVALUE(arguments_, arguments) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunSkillRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline RunSkillRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline RunSkillRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // skillCode Field Functions 
    bool hasSkillCode() const { return this->skillCode_ != nullptr;};
    void deleteSkillCode() { this->skillCode_ = nullptr;};
    inline string getSkillCode() const { DARABONBA_PTR_GET_DEFAULT(skillCode_, "") };
    inline RunSkillRequest& setSkillCode(string skillCode) { DARABONBA_PTR_SET_VALUE(skillCode_, skillCode) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline RunSkillRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RunSkillRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    Darabonba::Json arguments_ {};
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
