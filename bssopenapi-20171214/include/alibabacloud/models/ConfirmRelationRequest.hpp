// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMRELATIONREQUEST_HPP_
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
  class ConfirmRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChildUserId, childUserId_);
      DARABONBA_PTR_TO_JSON(ConfirmCode, confirmCode_);
      DARABONBA_PTR_TO_JSON(ParentUserId, parentUserId_);
      DARABONBA_PTR_TO_JSON(PermissionCodes, permissionCodes_);
      DARABONBA_PTR_TO_JSON(RelationId, relationId_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildUserId, childUserId_);
      DARABONBA_PTR_FROM_JSON(ConfirmCode, confirmCode_);
      DARABONBA_PTR_FROM_JSON(ParentUserId, parentUserId_);
      DARABONBA_PTR_FROM_JSON(PermissionCodes, permissionCodes_);
      DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ConfirmRelationRequest() = default ;
    ConfirmRelationRequest(const ConfirmRelationRequest &) = default ;
    ConfirmRelationRequest(ConfirmRelationRequest &&) = default ;
    ConfirmRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmRelationRequest() = default ;
    ConfirmRelationRequest& operator=(const ConfirmRelationRequest &) = default ;
    ConfirmRelationRequest& operator=(ConfirmRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->childUserId_ != nullptr
        && this->confirmCode_ != nullptr && this->parentUserId_ != nullptr && this->permissionCodes_ != nullptr && this->relationId_ != nullptr && this->relationType_ != nullptr
        && this->requestId_ != nullptr; };
    // childUserId Field Functions 
    bool hasChildUserId() const { return this->childUserId_ != nullptr;};
    void deleteChildUserId() { this->childUserId_ = nullptr;};
    inline int64_t childUserId() const { DARABONBA_PTR_GET_DEFAULT(childUserId_, 0L) };
    inline ConfirmRelationRequest& setChildUserId(int64_t childUserId) { DARABONBA_PTR_SET_VALUE(childUserId_, childUserId) };


    // confirmCode Field Functions 
    bool hasConfirmCode() const { return this->confirmCode_ != nullptr;};
    void deleteConfirmCode() { this->confirmCode_ = nullptr;};
    inline string confirmCode() const { DARABONBA_PTR_GET_DEFAULT(confirmCode_, "") };
    inline ConfirmRelationRequest& setConfirmCode(string confirmCode) { DARABONBA_PTR_SET_VALUE(confirmCode_, confirmCode) };


    // parentUserId Field Functions 
    bool hasParentUserId() const { return this->parentUserId_ != nullptr;};
    void deleteParentUserId() { this->parentUserId_ = nullptr;};
    inline int64_t parentUserId() const { DARABONBA_PTR_GET_DEFAULT(parentUserId_, 0L) };
    inline ConfirmRelationRequest& setParentUserId(int64_t parentUserId) { DARABONBA_PTR_SET_VALUE(parentUserId_, parentUserId) };


    // permissionCodes Field Functions 
    bool hasPermissionCodes() const { return this->permissionCodes_ != nullptr;};
    void deletePermissionCodes() { this->permissionCodes_ = nullptr;};
    inline const vector<string> & permissionCodes() const { DARABONBA_PTR_GET_CONST(permissionCodes_, vector<string>) };
    inline vector<string> permissionCodes() { DARABONBA_PTR_GET(permissionCodes_, vector<string>) };
    inline ConfirmRelationRequest& setPermissionCodes(const vector<string> & permissionCodes) { DARABONBA_PTR_SET_VALUE(permissionCodes_, permissionCodes) };
    inline ConfirmRelationRequest& setPermissionCodes(vector<string> && permissionCodes) { DARABONBA_PTR_SET_RVALUE(permissionCodes_, permissionCodes) };


    // relationId Field Functions 
    bool hasRelationId() const { return this->relationId_ != nullptr;};
    void deleteRelationId() { this->relationId_ = nullptr;};
    inline int64_t relationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, 0L) };
    inline ConfirmRelationRequest& setRelationId(int64_t relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline ConfirmRelationRequest& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConfirmRelationRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the Alibaba Cloud account that is used as the member.
    std::shared_ptr<int64_t> childUserId_ = nullptr;
    // The operation to be performed to confirm the invitation. Valid values:
    // 
    // *   child_agree: The member accepts the invitation.
    // *   child_disagree: The member rejects the invitation.
    // *   Canceled by the master account: The management account cancels the confirmation.
    // 
    // This parameter is required.
    std::shared_ptr<string> confirmCode_ = nullptr;
    // The ID of the Alibaba Cloud account that is used as the management account.
    std::shared_ptr<int64_t> parentUserId_ = nullptr;
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
    // This parameter is required.
    std::shared_ptr<vector<string>> permissionCodes_ = nullptr;
    // The ID of the financial relationship. Set this parameter to the value of the RelationId response parameter returned by calling the QueryRelationList operation.
    std::shared_ptr<int64_t> relationId_ = nullptr;
    // The type of the financial relationship. Set the value to enterprise_group.
    std::shared_ptr<string> relationType_ = nullptr;
    // The unique ID of the request.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
