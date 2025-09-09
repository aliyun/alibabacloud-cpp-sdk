// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYASSETSCOPERESPONSEBODYASSETSCOPEHOSTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYASSETSCOPERESPONSEBODYASSETSCOPEHOSTGROUPS_HPP_
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
  class GetPolicyAssetScopeResponseBodyAssetScopeHostGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyAssetScopeResponseBodyAssetScopeHostGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNames, accountNames_);
      DARABONBA_PTR_TO_JSON(AccountScopeType, accountScopeType_);
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyAssetScopeResponseBodyAssetScopeHostGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNames, accountNames_);
      DARABONBA_PTR_FROM_JSON(AccountScopeType, accountScopeType_);
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
    };
    GetPolicyAssetScopeResponseBodyAssetScopeHostGroups() = default ;
    GetPolicyAssetScopeResponseBodyAssetScopeHostGroups(const GetPolicyAssetScopeResponseBodyAssetScopeHostGroups &) = default ;
    GetPolicyAssetScopeResponseBodyAssetScopeHostGroups(GetPolicyAssetScopeResponseBodyAssetScopeHostGroups &&) = default ;
    GetPolicyAssetScopeResponseBodyAssetScopeHostGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyAssetScopeResponseBodyAssetScopeHostGroups() = default ;
    GetPolicyAssetScopeResponseBodyAssetScopeHostGroups& operator=(const GetPolicyAssetScopeResponseBodyAssetScopeHostGroups &) = default ;
    GetPolicyAssetScopeResponseBodyAssetScopeHostGroups& operator=(GetPolicyAssetScopeResponseBodyAssetScopeHostGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountNames_ != nullptr
        && this->accountScopeType_ != nullptr && this->hostGroupId_ != nullptr; };
    // accountNames Field Functions 
    bool hasAccountNames() const { return this->accountNames_ != nullptr;};
    void deleteAccountNames() { this->accountNames_ = nullptr;};
    inline const vector<string> & accountNames() const { DARABONBA_PTR_GET_CONST(accountNames_, vector<string>) };
    inline vector<string> accountNames() { DARABONBA_PTR_GET(accountNames_, vector<string>) };
    inline GetPolicyAssetScopeResponseBodyAssetScopeHostGroups& setAccountNames(const vector<string> & accountNames) { DARABONBA_PTR_SET_VALUE(accountNames_, accountNames) };
    inline GetPolicyAssetScopeResponseBodyAssetScopeHostGroups& setAccountNames(vector<string> && accountNames) { DARABONBA_PTR_SET_RVALUE(accountNames_, accountNames) };


    // accountScopeType Field Functions 
    bool hasAccountScopeType() const { return this->accountScopeType_ != nullptr;};
    void deleteAccountScopeType() { this->accountScopeType_ = nullptr;};
    inline string accountScopeType() const { DARABONBA_PTR_GET_DEFAULT(accountScopeType_, "") };
    inline GetPolicyAssetScopeResponseBodyAssetScopeHostGroups& setAccountScopeType(string accountScopeType) { DARABONBA_PTR_SET_VALUE(accountScopeType_, accountScopeType) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string hostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline GetPolicyAssetScopeResponseBodyAssetScopeHostGroups& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


  protected:
    // The asset accounts to which the control policy applies.
    std::shared_ptr<vector<string>> accountNames_ = nullptr;
    // The scope of asset accounts to which the control policy applies. Valid values:
    // 
    // *   **All**: The control policy applies to all accounts in the asset group.
    // *   **AccountName**: The control policy applies to specified accounts in the asset group.
    std::shared_ptr<string> accountScopeType_ = nullptr;
    // The asset group ID.
    std::shared_ptr<string> hostGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
