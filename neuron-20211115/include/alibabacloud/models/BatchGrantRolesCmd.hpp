// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGRANTROLESCMD_HPP_
#define ALIBABACLOUD_MODELS_BATCHGRANTROLESCMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class BatchGrantRolesCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGrantRolesCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(roleIds, roleIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGrantRolesCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(roleIds, roleIds_);
    };
    BatchGrantRolesCmd() = default ;
    BatchGrantRolesCmd(const BatchGrantRolesCmd &) = default ;
    BatchGrantRolesCmd(BatchGrantRolesCmd &&) = default ;
    BatchGrantRolesCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGrantRolesCmd() = default ;
    BatchGrantRolesCmd& operator=(const BatchGrantRolesCmd &) = default ;
    BatchGrantRolesCmd& operator=(BatchGrantRolesCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->roleIds_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline BatchGrantRolesCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline const vector<int64_t> & getRoleIds() const { DARABONBA_PTR_GET_CONST(roleIds_, vector<int64_t>) };
    inline vector<int64_t> getRoleIds() { DARABONBA_PTR_GET(roleIds_, vector<int64_t>) };
    inline BatchGrantRolesCmd& setRoleIds(const vector<int64_t> & roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };
    inline BatchGrantRolesCmd& setRoleIds(vector<int64_t> && roleIds) { DARABONBA_PTR_SET_RVALUE(roleIds_, roleIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> accountId_ {};
    shared_ptr<vector<int64_t>> roleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
