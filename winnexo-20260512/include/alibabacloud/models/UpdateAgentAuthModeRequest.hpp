// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTAUTHMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTAUTHMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateAgentAuthModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentAuthModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authMode, authMode_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentAuthModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authMode, authMode_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    UpdateAgentAuthModeRequest() = default ;
    UpdateAgentAuthModeRequest(const UpdateAgentAuthModeRequest &) = default ;
    UpdateAgentAuthModeRequest(UpdateAgentAuthModeRequest &&) = default ;
    UpdateAgentAuthModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentAuthModeRequest() = default ;
    UpdateAgentAuthModeRequest& operator=(const UpdateAgentAuthModeRequest &) = default ;
    UpdateAgentAuthModeRequest& operator=(UpdateAgentAuthModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authMode_ == nullptr
        && this->operatingObjectName_ == nullptr && this->tenantId_ == nullptr; };
    // authMode Field Functions 
    bool hasAuthMode() const { return this->authMode_ != nullptr;};
    void deleteAuthMode() { this->authMode_ = nullptr;};
    inline string getAuthMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
    inline UpdateAgentAuthModeRequest& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline UpdateAgentAuthModeRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateAgentAuthModeRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 使用权限授权模式：SPECIFIED_USERS=指定用户（需显式授权），ALL_USERS=所有用户（无需授权即可使用）
    // 
    // This parameter is required.
    shared_ptr<string> authMode_ {};
    // 数字员工名称
    // 
    // This parameter is required.
    shared_ptr<string> operatingObjectName_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
