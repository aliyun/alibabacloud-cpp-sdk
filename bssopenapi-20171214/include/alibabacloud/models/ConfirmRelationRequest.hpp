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
    virtual bool empty() const override { return this->childUserId_ == nullptr
        && this->confirmCode_ == nullptr && this->parentUserId_ == nullptr && this->permissionCodes_ == nullptr && this->relationId_ == nullptr && this->relationType_ == nullptr
        && this->requestId_ == nullptr; };
    // childUserId Field Functions 
    bool hasChildUserId() const { return this->childUserId_ != nullptr;};
    void deleteChildUserId() { this->childUserId_ = nullptr;};
    inline int64_t getChildUserId() const { DARABONBA_PTR_GET_DEFAULT(childUserId_, 0L) };
    inline ConfirmRelationRequest& setChildUserId(int64_t childUserId) { DARABONBA_PTR_SET_VALUE(childUserId_, childUserId) };


    // confirmCode Field Functions 
    bool hasConfirmCode() const { return this->confirmCode_ != nullptr;};
    void deleteConfirmCode() { this->confirmCode_ = nullptr;};
    inline string getConfirmCode() const { DARABONBA_PTR_GET_DEFAULT(confirmCode_, "") };
    inline ConfirmRelationRequest& setConfirmCode(string confirmCode) { DARABONBA_PTR_SET_VALUE(confirmCode_, confirmCode) };


    // parentUserId Field Functions 
    bool hasParentUserId() const { return this->parentUserId_ != nullptr;};
    void deleteParentUserId() { this->parentUserId_ = nullptr;};
    inline int64_t getParentUserId() const { DARABONBA_PTR_GET_DEFAULT(parentUserId_, 0L) };
    inline ConfirmRelationRequest& setParentUserId(int64_t parentUserId) { DARABONBA_PTR_SET_VALUE(parentUserId_, parentUserId) };


    // permissionCodes Field Functions 
    bool hasPermissionCodes() const { return this->permissionCodes_ != nullptr;};
    void deletePermissionCodes() { this->permissionCodes_ = nullptr;};
    inline const vector<string> & getPermissionCodes() const { DARABONBA_PTR_GET_CONST(permissionCodes_, vector<string>) };
    inline vector<string> getPermissionCodes() { DARABONBA_PTR_GET(permissionCodes_, vector<string>) };
    inline ConfirmRelationRequest& setPermissionCodes(const vector<string> & permissionCodes) { DARABONBA_PTR_SET_VALUE(permissionCodes_, permissionCodes) };
    inline ConfirmRelationRequest& setPermissionCodes(vector<string> && permissionCodes) { DARABONBA_PTR_SET_RVALUE(permissionCodes_, permissionCodes) };


    // relationId Field Functions 
    bool hasRelationId() const { return this->relationId_ != nullptr;};
    void deleteRelationId() { this->relationId_ = nullptr;};
    inline int64_t getRelationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, 0L) };
    inline ConfirmRelationRequest& setRelationId(int64_t relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline ConfirmRelationRequest& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConfirmRelationRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Alibaba Cloud UID of the linked account.
    shared_ptr<int64_t> childUserId_ {};
    // The confirmation action. Valid values:
    // - child_agree: The linked account agrees.
    // - child_disagree: The linked account rejects.
    // - 主账号取消确认: The main account cancels the confirmation.
    // 
    // This parameter is required.
    shared_ptr<string> confirmCode_ {};
    // The Alibaba Cloud UID of the main account.
    shared_ptr<int64_t> parentUserId_ {};
    // The permissions granted to the linked account. Valid values:
    // - SYNCHRONIZE_FINANCE_IDENTITY: Allows synchronizing the credit-based payment identity to the linked account.
    // - SYNCHRONIZE_FINANCE_DISCOUNT_POLICY_TO_TARGET: Allows synchronizing discounts to the linked account.
    // - FORBID_WITHDRAW_CASH: Prohibits the linked account from withdrawing cash from the balance.
    // - FORBID_MANAGE_INVOICE: Prohibits the linked account from managing invoices.
    // - CHECK_FINANCE_INFO: Allows requesting to view the account linking information.
    // - MANAGE_TARGET_INVOICE: Allows managing invoices of the target account.
    // - CHECK_TARGET_CONSUMPTION: Allows viewing the consumption information of the linked account.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> permissionCodes_ {};
    // The relationship ID. You can obtain the value from the relationId field in the response of the QueryRelationList operation.
    shared_ptr<int64_t> relationId_ {};
    // The relationship type. Valid values: enterprise_group.
    shared_ptr<string> relationType_ {};
    // The unique identifier of the request.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
