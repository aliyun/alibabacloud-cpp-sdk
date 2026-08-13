// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSONALFEISHUMINUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSONALFEISHUMINUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreatePersonalFeishuMinuteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePersonalFeishuMinuteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(minuteToken, minuteToken_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePersonalFeishuMinuteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(minuteToken, minuteToken_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreatePersonalFeishuMinuteRequest() = default ;
    CreatePersonalFeishuMinuteRequest(const CreatePersonalFeishuMinuteRequest &) = default ;
    CreatePersonalFeishuMinuteRequest(CreatePersonalFeishuMinuteRequest &&) = default ;
    CreatePersonalFeishuMinuteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePersonalFeishuMinuteRequest() = default ;
    CreatePersonalFeishuMinuteRequest& operator=(const CreatePersonalFeishuMinuteRequest &) = default ;
    CreatePersonalFeishuMinuteRequest& operator=(CreatePersonalFeishuMinuteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialId_ == nullptr
        && this->description_ == nullptr && this->directoryId_ == nullptr && this->minuteToken_ == nullptr && this->name_ == nullptr && this->operatingObjectName_ == nullptr
        && this->tenantId_ == nullptr; };
    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline CreatePersonalFeishuMinuteRequest& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePersonalFeishuMinuteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreatePersonalFeishuMinuteRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // minuteToken Field Functions 
    bool hasMinuteToken() const { return this->minuteToken_ != nullptr;};
    void deleteMinuteToken() { this->minuteToken_ = nullptr;};
    inline string getMinuteToken() const { DARABONBA_PTR_GET_DEFAULT(minuteToken_, "") };
    inline CreatePersonalFeishuMinuteRequest& setMinuteToken(string minuteToken) { DARABONBA_PTR_SET_VALUE(minuteToken_, minuteToken) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePersonalFeishuMinuteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline CreatePersonalFeishuMinuteRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreatePersonalFeishuMinuteRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 凭证 ID（关联 rbj_credential 表，必填）
    // 
    // This parameter is required.
    shared_ptr<string> credentialId_ {};
    // 资源描述（可选）
    shared_ptr<string> description_ {};
    // 目标个人目录 ID；不传时自动绑定到当前数字员工默认根目录，传入时必须是当前用户在当前数字员工下的已有个人目录
    shared_ptr<string> directoryId_ {};
    // 飞书妙记 token（妙记唯一标识符，必填）
    // 
    // This parameter is required.
    shared_ptr<string> minuteToken_ {};
    // 资源显示名称
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // 数字员工名称（已废弃：不再作为个人资源隔离条件，仅保留用于来源追溯）
    shared_ptr<string> operatingObjectName_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
