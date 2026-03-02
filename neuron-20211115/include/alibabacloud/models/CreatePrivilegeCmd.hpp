// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRIVILEGECMD_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRIVILEGECMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StrategyItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePrivilegeCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrivilegeCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(roleId, roleId_);
      DARABONBA_PTR_TO_JSON(strategyItems, strategyItems_);
      DARABONBA_PTR_TO_JSON(strategys, strategys_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrivilegeCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(roleId, roleId_);
      DARABONBA_PTR_FROM_JSON(strategyItems, strategyItems_);
      DARABONBA_PTR_FROM_JSON(strategys, strategys_);
    };
    CreatePrivilegeCmd() = default ;
    CreatePrivilegeCmd(const CreatePrivilegeCmd &) = default ;
    CreatePrivilegeCmd(CreatePrivilegeCmd &&) = default ;
    CreatePrivilegeCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrivilegeCmd() = default ;
    CreatePrivilegeCmd& operator=(const CreatePrivilegeCmd &) = default ;
    CreatePrivilegeCmd& operator=(CreatePrivilegeCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->roleId_ == nullptr && this->strategyItems_ == nullptr && this->strategys_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CreatePrivilegeCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline CreatePrivilegeCmd& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // strategyItems Field Functions 
    bool hasStrategyItems() const { return this->strategyItems_ != nullptr;};
    void deleteStrategyItems() { this->strategyItems_ = nullptr;};
    inline const vector<StrategyItem> & getStrategyItems() const { DARABONBA_PTR_GET_CONST(strategyItems_, vector<StrategyItem>) };
    inline vector<StrategyItem> getStrategyItems() { DARABONBA_PTR_GET(strategyItems_, vector<StrategyItem>) };
    inline CreatePrivilegeCmd& setStrategyItems(const vector<StrategyItem> & strategyItems) { DARABONBA_PTR_SET_VALUE(strategyItems_, strategyItems) };
    inline CreatePrivilegeCmd& setStrategyItems(vector<StrategyItem> && strategyItems) { DARABONBA_PTR_SET_RVALUE(strategyItems_, strategyItems) };


    // strategys Field Functions 
    bool hasStrategys() const { return this->strategys_ != nullptr;};
    void deleteStrategys() { this->strategys_ = nullptr;};
    inline string getStrategys() const { DARABONBA_PTR_GET_DEFAULT(strategys_, "") };
    inline CreatePrivilegeCmd& setStrategys(string strategys) { DARABONBA_PTR_SET_VALUE(strategys_, strategys) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<int64_t> roleId_ {};
    shared_ptr<vector<StrategyItem>> strategyItems_ {};
    shared_ptr<string> strategys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
