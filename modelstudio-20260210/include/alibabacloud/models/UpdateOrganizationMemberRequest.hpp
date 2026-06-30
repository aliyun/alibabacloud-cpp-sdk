// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEORGANIZATIONMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEORGANIZATIONMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class UpdateOrganizationMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOrganizationMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(NewRoleCode, newRoleCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOrganizationMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(NewRoleCode, newRoleCode_);
    };
    UpdateOrganizationMemberRequest() = default ;
    UpdateOrganizationMemberRequest(const UpdateOrganizationMemberRequest &) = default ;
    UpdateOrganizationMemberRequest(UpdateOrganizationMemberRequest &&) = default ;
    UpdateOrganizationMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOrganizationMemberRequest() = default ;
    UpdateOrganizationMemberRequest& operator=(const UpdateOrganizationMemberRequest &) = default ;
    UpdateOrganizationMemberRequest& operator=(UpdateOrganizationMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->newRoleCode_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline UpdateOrganizationMemberRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline UpdateOrganizationMemberRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // newRoleCode Field Functions 
    bool hasNewRoleCode() const { return this->newRoleCode_ != nullptr;};
    void deleteNewRoleCode() { this->newRoleCode_ = nullptr;};
    inline string getNewRoleCode() const { DARABONBA_PTR_GET_DEFAULT(newRoleCode_, "") };
    inline UpdateOrganizationMemberRequest& setNewRoleCode(string newRoleCode) { DARABONBA_PTR_SET_VALUE(newRoleCode_, newRoleCode) };


  protected:
    // The list of account IDs for batch operations.
    shared_ptr<vector<string>> accountIds_ {};
    // The code of the new role. When you perform a batch operation, all specified accounts are changed to this role.
    // 
    // This parameter is required.
    shared_ptr<string> newRoleCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
