// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDCDNUSERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDCDNUSERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class SetDcdnUserConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDcdnUserConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(FunctionId, functionId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, SetDcdnUserConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(FunctionId, functionId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    SetDcdnUserConfigRequest() = default ;
    SetDcdnUserConfigRequest(const SetDcdnUserConfigRequest &) = default ;
    SetDcdnUserConfigRequest(SetDcdnUserConfigRequest &&) = default ;
    SetDcdnUserConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDcdnUserConfigRequest() = default ;
    SetDcdnUserConfigRequest& operator=(const SetDcdnUserConfigRequest &) = default ;
    SetDcdnUserConfigRequest& operator=(SetDcdnUserConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configs_ != nullptr
        && this->functionId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->securityToken_ != nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline string configs() const { DARABONBA_PTR_GET_DEFAULT(configs_, "") };
    inline SetDcdnUserConfigRequest& setConfigs(string configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };


    // functionId Field Functions 
    bool hasFunctionId() const { return this->functionId_ != nullptr;};
    void deleteFunctionId() { this->functionId_ = nullptr;};
    inline int32_t functionId() const { DARABONBA_PTR_GET_DEFAULT(functionId_, 0) };
    inline SetDcdnUserConfigRequest& setFunctionId(int32_t functionId) { DARABONBA_PTR_SET_VALUE(functionId_, functionId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SetDcdnUserConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetDcdnUserConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetDcdnUserConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The configuration parameters of the feature.
    // 
    // This parameter is required.
    std::shared_ptr<string> configs_ = nullptr;
    // The ID of the feature.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> functionId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
