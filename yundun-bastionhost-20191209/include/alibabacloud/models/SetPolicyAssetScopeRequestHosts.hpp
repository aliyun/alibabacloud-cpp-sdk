// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYASSETSCOPEREQUESTHOSTS_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYASSETSCOPEREQUESTHOSTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyAssetScopeRequestHosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyAssetScopeRequestHosts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountScopeType, accountScopeType_);
      DARABONBA_PTR_TO_JSON(HostAccountIds, hostAccountIds_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyAssetScopeRequestHosts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountScopeType, accountScopeType_);
      DARABONBA_PTR_FROM_JSON(HostAccountIds, hostAccountIds_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
    };
    SetPolicyAssetScopeRequestHosts() = default ;
    SetPolicyAssetScopeRequestHosts(const SetPolicyAssetScopeRequestHosts &) = default ;
    SetPolicyAssetScopeRequestHosts(SetPolicyAssetScopeRequestHosts &&) = default ;
    SetPolicyAssetScopeRequestHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyAssetScopeRequestHosts() = default ;
    SetPolicyAssetScopeRequestHosts& operator=(const SetPolicyAssetScopeRequestHosts &) = default ;
    SetPolicyAssetScopeRequestHosts& operator=(SetPolicyAssetScopeRequestHosts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountScopeType_ != nullptr
        && this->hostAccountIds_ != nullptr && this->hostId_ != nullptr; };
    // accountScopeType Field Functions 
    bool hasAccountScopeType() const { return this->accountScopeType_ != nullptr;};
    void deleteAccountScopeType() { this->accountScopeType_ = nullptr;};
    inline string accountScopeType() const { DARABONBA_PTR_GET_DEFAULT(accountScopeType_, "") };
    inline SetPolicyAssetScopeRequestHosts& setAccountScopeType(string accountScopeType) { DARABONBA_PTR_SET_VALUE(accountScopeType_, accountScopeType) };


    // hostAccountIds Field Functions 
    bool hasHostAccountIds() const { return this->hostAccountIds_ != nullptr;};
    void deleteHostAccountIds() { this->hostAccountIds_ = nullptr;};
    inline const vector<string> & hostAccountIds() const { DARABONBA_PTR_GET_CONST(hostAccountIds_, vector<string>) };
    inline vector<string> hostAccountIds() { DARABONBA_PTR_GET(hostAccountIds_, vector<string>) };
    inline SetPolicyAssetScopeRequestHosts& setHostAccountIds(const vector<string> & hostAccountIds) { DARABONBA_PTR_SET_VALUE(hostAccountIds_, hostAccountIds) };
    inline SetPolicyAssetScopeRequestHosts& setHostAccountIds(vector<string> && hostAccountIds) { DARABONBA_PTR_SET_RVALUE(hostAccountIds_, hostAccountIds) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline SetPolicyAssetScopeRequestHosts& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


  protected:
    // The scope of host accounts to which the control policy applies. Valid values:
    // 
    // * **All**: The control policy applies to all accounts of the host.
    // * **AccountId**: The control policy applies specified accounts of the host.
    std::shared_ptr<string> accountScopeType_ = nullptr;
    // The host accounts to which the control policy applies.
    // 
    // > This parameter is required if AccountScopeType is set to AccountId.
    std::shared_ptr<vector<string>> hostAccountIds_ = nullptr;
    // The host ID.
    std::shared_ptr<string> hostId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
