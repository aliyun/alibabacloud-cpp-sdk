// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFORWARDSTRATEGYBINDINGITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFORWARDSTRATEGYBINDINGITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ModifyForwardStrategyBindingItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyForwardStrategyBindingItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardId, forwardId_);
      DARABONBA_PTR_TO_JSON(ItemIds, itemIds_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyForwardStrategyBindingItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardId, forwardId_);
      DARABONBA_PTR_FROM_JSON(ItemIds, itemIds_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
    };
    ModifyForwardStrategyBindingItemsRequest() = default ;
    ModifyForwardStrategyBindingItemsRequest(const ModifyForwardStrategyBindingItemsRequest &) = default ;
    ModifyForwardStrategyBindingItemsRequest(ModifyForwardStrategyBindingItemsRequest &&) = default ;
    ModifyForwardStrategyBindingItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyForwardStrategyBindingItemsRequest() = default ;
    ModifyForwardStrategyBindingItemsRequest& operator=(const ModifyForwardStrategyBindingItemsRequest &) = default ;
    ModifyForwardStrategyBindingItemsRequest& operator=(ModifyForwardStrategyBindingItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forwardId_ == nullptr
        && this->itemIds_ == nullptr && this->matchMode_ == nullptr && this->modifyType_ == nullptr; };
    // forwardId Field Functions 
    bool hasForwardId() const { return this->forwardId_ != nullptr;};
    void deleteForwardId() { this->forwardId_ = nullptr;};
    inline string getForwardId() const { DARABONBA_PTR_GET_DEFAULT(forwardId_, "") };
    inline ModifyForwardStrategyBindingItemsRequest& setForwardId(string forwardId) { DARABONBA_PTR_SET_VALUE(forwardId_, forwardId) };


    // itemIds Field Functions 
    bool hasItemIds() const { return this->itemIds_ != nullptr;};
    void deleteItemIds() { this->itemIds_ = nullptr;};
    inline const vector<string> & getItemIds() const { DARABONBA_PTR_GET_CONST(itemIds_, vector<string>) };
    inline vector<string> getItemIds() { DARABONBA_PTR_GET(itemIds_, vector<string>) };
    inline ModifyForwardStrategyBindingItemsRequest& setItemIds(const vector<string> & itemIds) { DARABONBA_PTR_SET_VALUE(itemIds_, itemIds) };
    inline ModifyForwardStrategyBindingItemsRequest& setItemIds(vector<string> && itemIds) { DARABONBA_PTR_SET_RVALUE(itemIds_, itemIds) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline ModifyForwardStrategyBindingItemsRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline ModifyForwardStrategyBindingItemsRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


  protected:
    // The forwarding rule ID.
    // 
    // This parameter is required.
    shared_ptr<string> forwardId_ {};
    // The list of binding item IDs. Must be empty when MatchMode is **UserGroupAll** or **ApplicationAll**. Required for other values. Duplicates are not allowed in the list, and the specified objects must already exist.
    shared_ptr<vector<string>> itemIds_ {};
    // The policy matching target type. Required. Valid values:
    // - **UserGroupAll**: associates with all users.
    // - **UserGroupNormal**: associates with specific user groups.
    // - **ApplicationAll**: all private network applications.
    // - **Application**: specific private network applications.
    // - **Tag**: private network application tags.
    // 
    // When the value is **UserGroupAll** or **ApplicationAll**, ItemIds must be empty. When the value is **UserGroupNormal**, **Application**, or **Tag**, ItemIds is required.
    // 
    // When ModifyType is not **Cover**, switching the matching target type is not allowed: **Application**, **Tag**, and **ApplicationAll** are mutually exclusive, and **UserGroupNormal** and **UserGroupAll** are mutually exclusive. If a binding item of a mutually exclusive type already exists on the same forwarding rule, the request is rejected.
    shared_ptr<string> matchMode_ {};
    // The modification method. Required. Valid values:
    // - **Append**: appends to existing binding items. ItemIds cannot contain objects that are already bound.
    // - **Delete**: deletes specified binding items. All objects in ItemIds must be already bound.
    // - **Cover**: overwrites binding items of the same category by clearing all existing binding items of the same category on the forwarding rule and then writing ItemIds. The same category refers to **ApplicationAll**, **Application**, and **Tag**, or **UserGroupAll** and **UserGroupNormal**.
    // 
    // When the value is **Append** or **Delete**, MatchMode cannot be **UserGroupAll** or **ApplicationAll**.
    shared_ptr<string> modifyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
