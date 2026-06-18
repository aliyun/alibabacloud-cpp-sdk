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
      DARABONBA_PTR_TO_JSON(CallerUacAccountId, callerUacAccountId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(OrgRoleCode, orgRoleCode_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
    };
    friend void from_json(const Darabonba::Json& j, AddOrganizationMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(CallerUacAccountId, callerUacAccountId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
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
        && this->callerUacAccountId_ == nullptr && this->namespaceId_ == nullptr && this->orgId_ == nullptr && this->orgRoleCode_ == nullptr && this->specType_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline AddOrganizationMemberRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // callerUacAccountId Field Functions 
    bool hasCallerUacAccountId() const { return this->callerUacAccountId_ != nullptr;};
    void deleteCallerUacAccountId() { this->callerUacAccountId_ = nullptr;};
    inline string getCallerUacAccountId() const { DARABONBA_PTR_GET_DEFAULT(callerUacAccountId_, "") };
    inline AddOrganizationMemberRequest& setCallerUacAccountId(string callerUacAccountId) { DARABONBA_PTR_SET_VALUE(callerUacAccountId_, callerUacAccountId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline AddOrganizationMemberRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline AddOrganizationMemberRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


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
    // The display name. If this parameter is not empty, the name field of the account is also updated.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The account information of the TokenPlan management platform.
    shared_ptr<string> callerUacAccountId_ {};
    // The product namespace ID. For the TokenPlan product, this field is fixed to namespace-1.
    shared_ptr<string> namespaceId_ {};
    // The organization ID.
    // 
    // This parameter is required.
    shared_ptr<string> orgId_ {};
    // The organization role code. Valid values: ORG_ADMIN and ORG_MEMBER. Default value: ORG_MEMBER.
    // 
    // This parameter is required.
    shared_ptr<string> orgRoleCode_ {};
    // The seat specification.
    shared_ptr<string> specType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
