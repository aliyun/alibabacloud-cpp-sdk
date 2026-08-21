// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFORWARDSTRATEGYBINDINGITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFORWARDSTRATEGYBINDINGITEMSRESPONSEBODY_HPP_
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
  class ModifyForwardStrategyBindingItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyForwardStrategyBindingItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardStrategyBindingItems, forwardStrategyBindingItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyForwardStrategyBindingItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardStrategyBindingItems, forwardStrategyBindingItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyForwardStrategyBindingItemsResponseBody() = default ;
    ModifyForwardStrategyBindingItemsResponseBody(const ModifyForwardStrategyBindingItemsResponseBody &) = default ;
    ModifyForwardStrategyBindingItemsResponseBody(ModifyForwardStrategyBindingItemsResponseBody &&) = default ;
    ModifyForwardStrategyBindingItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyForwardStrategyBindingItemsResponseBody() = default ;
    ModifyForwardStrategyBindingItemsResponseBody& operator=(const ModifyForwardStrategyBindingItemsResponseBody &) = default ;
    ModifyForwardStrategyBindingItemsResponseBody& operator=(ModifyForwardStrategyBindingItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ForwardStrategyBindingItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardStrategyBindingItems& obj) { 
        DARABONBA_PTR_TO_JSON(ForwardId, forwardId_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardStrategyBindingItems& obj) { 
        DARABONBA_PTR_FROM_JSON(ForwardId, forwardId_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      };
      ForwardStrategyBindingItems() = default ;
      ForwardStrategyBindingItems(const ForwardStrategyBindingItems &) = default ;
      ForwardStrategyBindingItems(ForwardStrategyBindingItems &&) = default ;
      ForwardStrategyBindingItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardStrategyBindingItems() = default ;
      ForwardStrategyBindingItems& operator=(const ForwardStrategyBindingItems &) = default ;
      ForwardStrategyBindingItems& operator=(ForwardStrategyBindingItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
          DARABONBA_PTR_TO_JSON(TagId, tagId_);
          DARABONBA_PTR_TO_JSON(TagName, tagName_);
          DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
          DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
          DARABONBA_PTR_FROM_JSON(TagId, tagId_);
          DARABONBA_PTR_FROM_JSON(TagName, tagName_);
          DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
          DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationName_ == nullptr && this->tagId_ == nullptr && this->tagName_ == nullptr && this->userGroupId_ == nullptr && this->userGroupName_ == nullptr; };
        // applicationId Field Functions 
        bool hasApplicationId() const { return this->applicationId_ != nullptr;};
        void deleteApplicationId() { this->applicationId_ = nullptr;};
        inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
        inline Items& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


        // applicationName Field Functions 
        bool hasApplicationName() const { return this->applicationName_ != nullptr;};
        void deleteApplicationName() { this->applicationName_ = nullptr;};
        inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
        inline Items& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


        // tagId Field Functions 
        bool hasTagId() const { return this->tagId_ != nullptr;};
        void deleteTagId() { this->tagId_ = nullptr;};
        inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
        inline Items& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


        // tagName Field Functions 
        bool hasTagName() const { return this->tagName_ != nullptr;};
        void deleteTagName() { this->tagName_ = nullptr;};
        inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
        inline Items& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


        // userGroupId Field Functions 
        bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
        void deleteUserGroupId() { this->userGroupId_ = nullptr;};
        inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
        inline Items& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


        // userGroupName Field Functions 
        bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
        void deleteUserGroupName() { this->userGroupName_ = nullptr;};
        inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
        inline Items& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


      protected:
        // The private network access application ID.
        shared_ptr<string> applicationId_ {};
        // The private network access application name.
        shared_ptr<string> applicationName_ {};
        // The private network access tag ID.
        shared_ptr<string> tagId_ {};
        // The tag name.
        shared_ptr<string> tagName_ {};
        // The user group ID.
        shared_ptr<string> userGroupId_ {};
        // The user group name.
        shared_ptr<string> userGroupName_ {};
      };

      virtual bool empty() const override { return this->forwardId_ == nullptr
        && this->items_ == nullptr && this->matchMode_ == nullptr; };
      // forwardId Field Functions 
      bool hasForwardId() const { return this->forwardId_ != nullptr;};
      void deleteForwardId() { this->forwardId_ = nullptr;};
      inline string getForwardId() const { DARABONBA_PTR_GET_DEFAULT(forwardId_, "") };
      inline ForwardStrategyBindingItems& setForwardId(string forwardId) { DARABONBA_PTR_SET_VALUE(forwardId_, forwardId) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<ForwardStrategyBindingItems::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ForwardStrategyBindingItems::Items>) };
      inline vector<ForwardStrategyBindingItems::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ForwardStrategyBindingItems::Items>) };
      inline ForwardStrategyBindingItems& setItems(const vector<ForwardStrategyBindingItems::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline ForwardStrategyBindingItems& setItems(vector<ForwardStrategyBindingItems::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // matchMode Field Functions 
      bool hasMatchMode() const { return this->matchMode_ != nullptr;};
      void deleteMatchMode() { this->matchMode_ = nullptr;};
      inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
      inline ForwardStrategyBindingItems& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    protected:
      // The forwarding rule ID.
      shared_ptr<string> forwardId_ {};
      // The binding content. This parameter is not returned when MatchMode is **UserGroupAll** or **ApplicationAll**.
      shared_ptr<vector<ForwardStrategyBindingItems::Items>> items_ {};
      // The policy matching target type. Valid values:
      // - **UserGroupAll**: associates with all users.
      // - **UserGroupNormal**: associates with specific user groups.
      // - **ApplicationAll**: all private network applications.
      // - **Application**: specific private network applications.
      // - **Tag**: private network application tags.
      shared_ptr<string> matchMode_ {};
    };

    virtual bool empty() const override { return this->forwardStrategyBindingItems_ == nullptr
        && this->requestId_ == nullptr; };
    // forwardStrategyBindingItems Field Functions 
    bool hasForwardStrategyBindingItems() const { return this->forwardStrategyBindingItems_ != nullptr;};
    void deleteForwardStrategyBindingItems() { this->forwardStrategyBindingItems_ = nullptr;};
    inline const ModifyForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItems & getForwardStrategyBindingItems() const { DARABONBA_PTR_GET_CONST(forwardStrategyBindingItems_, ModifyForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItems) };
    inline ModifyForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItems getForwardStrategyBindingItems() { DARABONBA_PTR_GET(forwardStrategyBindingItems_, ModifyForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItems) };
    inline ModifyForwardStrategyBindingItemsResponseBody& setForwardStrategyBindingItems(const ModifyForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItems & forwardStrategyBindingItems) { DARABONBA_PTR_SET_VALUE(forwardStrategyBindingItems_, forwardStrategyBindingItems) };
    inline ModifyForwardStrategyBindingItemsResponseBody& setForwardStrategyBindingItems(ModifyForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItems && forwardStrategyBindingItems) { DARABONBA_PTR_SET_RVALUE(forwardStrategyBindingItems_, forwardStrategyBindingItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyForwardStrategyBindingItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The binding items of the forwarding rule after this modification.
    shared_ptr<ModifyForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItems> forwardStrategyBindingItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
