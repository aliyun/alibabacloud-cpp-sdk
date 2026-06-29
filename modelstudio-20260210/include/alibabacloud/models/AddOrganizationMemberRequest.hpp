// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDORGANIZATIONMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDORGANIZATIONMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class AddOrganizationMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddOrganizationMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(OrgRoleCode, orgRoleCode_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
    };
    friend void from_json(const Darabonba::Json& j, AddOrganizationMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(OrgRoleCode, orgRoleCode_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
    };
    AddOrganizationMemberRequest() = default ;
    AddOrganizationMemberRequest(const AddOrganizationMemberRequest &) = default ;
    AddOrganizationMemberRequest(AddOrganizationMemberRequest &&) = default ;
    AddOrganizationMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddOrganizationMemberRequest() = default ;
    AddOrganizationMemberRequest& operator=(const AddOrganizationMemberRequest &) = default ;
    AddOrganizationMemberRequest& operator=(AddOrganizationMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->orgRoleCode_ == nullptr && this->specType_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline AddOrganizationMemberRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // orgRoleCode Field Functions 
    bool hasOrgRoleCode() const { return this->orgRoleCode_ != nullptr;};
    void deleteOrgRoleCode() { this->orgRoleCode_ = nullptr;};
    inline string getOrgRoleCode() const { DARABONBA_PTR_GET_DEFAULT(orgRoleCode_, "") };
    inline AddOrganizationMemberRequest& setOrgRoleCode(string orgRoleCode) { DARABONBA_PTR_SET_VALUE(orgRoleCode_, orgRoleCode) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline AddOrganizationMemberRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


  protected:
    // The display name. If this parameter is not empty, the name field of the account is updated synchronously.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The organization role code. Only ORG_ADMIN or ORG_MEMBER is allowed. Default value: ORG_MEMBER.
    // 
    // This parameter is required.
    shared_ptr<string> orgRoleCode_ {};
    // The seat specification. Valid values:
    // 
    // - standard: standard seat.
    // - pro: premium seat.
    // - max: exclusive seat.
    shared_ptr<string> specType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
