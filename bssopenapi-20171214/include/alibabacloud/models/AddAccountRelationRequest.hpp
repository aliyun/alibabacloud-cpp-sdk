// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDACCOUNTRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDACCOUNTRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class AddAccountRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAccountRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChildNick, childNick_);
      DARABONBA_PTR_TO_JSON(ChildUserId, childUserId_);
      DARABONBA_PTR_TO_JSON(ParentUserId, parentUserId_);
      DARABONBA_PTR_TO_JSON(PermissionCodes, permissionCodes_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleCodes, roleCodes_);
    };
    friend void from_json(const Darabonba::Json& j, AddAccountRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildNick, childNick_);
      DARABONBA_PTR_FROM_JSON(ChildUserId, childUserId_);
      DARABONBA_PTR_FROM_JSON(ParentUserId, parentUserId_);
      DARABONBA_PTR_FROM_JSON(PermissionCodes, permissionCodes_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleCodes, roleCodes_);
    };
    AddAccountRelationRequest() = default ;
    AddAccountRelationRequest(const AddAccountRelationRequest &) = default ;
    AddAccountRelationRequest(AddAccountRelationRequest &&) = default ;
    AddAccountRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAccountRelationRequest() = default ;
    AddAccountRelationRequest& operator=(const AddAccountRelationRequest &) = default ;
    AddAccountRelationRequest& operator=(AddAccountRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->childNick_ == nullptr
        && this->childUserId_ == nullptr && this->parentUserId_ == nullptr && this->permissionCodes_ == nullptr && this->relationType_ == nullptr && this->requestId_ == nullptr
        && this->roleCodes_ == nullptr; };
    // childNick Field Functions 
    bool hasChildNick() const { return this->childNick_ != nullptr;};
    void deleteChildNick() { this->childNick_ = nullptr;};
    inline string getChildNick() const { DARABONBA_PTR_GET_DEFAULT(childNick_, "") };
    inline AddAccountRelationRequest& setChildNick(string childNick) { DARABONBA_PTR_SET_VALUE(childNick_, childNick) };


    // childUserId Field Functions 
    bool hasChildUserId() const { return this->childUserId_ != nullptr;};
    void deleteChildUserId() { this->childUserId_ = nullptr;};
    inline int64_t getChildUserId() const { DARABONBA_PTR_GET_DEFAULT(childUserId_, 0L) };
    inline AddAccountRelationRequest& setChildUserId(int64_t childUserId) { DARABONBA_PTR_SET_VALUE(childUserId_, childUserId) };


    // parentUserId Field Functions 
    bool hasParentUserId() const { return this->parentUserId_ != nullptr;};
    void deleteParentUserId() { this->parentUserId_ = nullptr;};
    inline int64_t getParentUserId() const { DARABONBA_PTR_GET_DEFAULT(parentUserId_, 0L) };
    inline AddAccountRelationRequest& setParentUserId(int64_t parentUserId) { DARABONBA_PTR_SET_VALUE(parentUserId_, parentUserId) };


    // permissionCodes Field Functions 
    bool hasPermissionCodes() const { return this->permissionCodes_ != nullptr;};
    void deletePermissionCodes() { this->permissionCodes_ = nullptr;};
    inline const vector<string> & getPermissionCodes() const { DARABONBA_PTR_GET_CONST(permissionCodes_, vector<string>) };
    inline vector<string> getPermissionCodes() { DARABONBA_PTR_GET(permissionCodes_, vector<string>) };
    inline AddAccountRelationRequest& setPermissionCodes(const vector<string> & permissionCodes) { DARABONBA_PTR_SET_VALUE(permissionCodes_, permissionCodes) };
    inline AddAccountRelationRequest& setPermissionCodes(vector<string> && permissionCodes) { DARABONBA_PTR_SET_RVALUE(permissionCodes_, permissionCodes) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline AddAccountRelationRequest& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddAccountRelationRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleCodes Field Functions 
    bool hasRoleCodes() const { return this->roleCodes_ != nullptr;};
    void deleteRoleCodes() { this->roleCodes_ = nullptr;};
    inline const vector<string> & getRoleCodes() const { DARABONBA_PTR_GET_CONST(roleCodes_, vector<string>) };
    inline vector<string> getRoleCodes() { DARABONBA_PTR_GET(roleCodes_, vector<string>) };
    inline AddAccountRelationRequest& setRoleCodes(const vector<string> & roleCodes) { DARABONBA_PTR_SET_VALUE(roleCodes_, roleCodes) };
    inline AddAccountRelationRequest& setRoleCodes(vector<string> && roleCodes) { DARABONBA_PTR_SET_RVALUE(roleCodes_, roleCodes) };


  protected:
    // The display name of the member. This helps clarify the scenario in which the account is used.
    shared_ptr<string> childNick_ {};
    // The ID of the Alibaba Cloud account that is used as the member.
    // 
    // This parameter is required.
    shared_ptr<int64_t> childUserId_ {};
    // The ID of the Alibaba Cloud account that is used as the management account.
    // 
    // This parameter is required.
    shared_ptr<int64_t> parentUserId_ {};
    // The permissions that can be granted to the member. Valid values:
    // 
    // *   SYNCHRONIZE_FINANCE_IDENTITY: allows the credit control identity to be shared with the member.
    // *   SYNCHRONIZE_FINANCE_DISCOUNT_POLICY_TO_TARGET: allows the discount policy to be shared with the member.
    // *   FORBID_WITHDRAW_CASH: does not allow the member to withdraw the balance.
    // *   FORBID_MANAGE_INVOICE: does not allow the member to manage invoices.
    // *   CHECK_FINANCE_INFO: requests to view information about the financial relationship.
    // *   MANAGE_TARGET_INVOICE: allows the member to manage invoices.
    // *   CHECK_TARGET_CONSUMPTION: allows the member to view the bills.
    // 
    // The params[PermissionCodes, RoleCodes] can not be null at the same time.
    shared_ptr<vector<string>> permissionCodes_ {};
    // The type of the financial relationship. Set the value to enterprise_group.
    // 
    // This parameter is required.
    shared_ptr<string> relationType_ {};
    // The unique ID of the request. The ID is used to mark a request and troubleshoot a problem.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // The roles that can be assigned to the member. Set the value to trusteeship.
    shared_ptr<vector<string>> roleCodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
