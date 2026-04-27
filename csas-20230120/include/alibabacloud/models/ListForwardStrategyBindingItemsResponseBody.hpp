// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFORWARDSTRATEGYBINDINGITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFORWARDSTRATEGYBINDINGITEMSRESPONSEBODY_HPP_
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
  class ListForwardStrategyBindingItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListForwardStrategyBindingItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardStrategyBindingItemsList, forwardStrategyBindingItemsList_);
      DARABONBA_PTR_TO_JSON(ItemType, itemType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListForwardStrategyBindingItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardStrategyBindingItemsList, forwardStrategyBindingItemsList_);
      DARABONBA_PTR_FROM_JSON(ItemType, itemType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListForwardStrategyBindingItemsResponseBody() = default ;
    ListForwardStrategyBindingItemsResponseBody(const ListForwardStrategyBindingItemsResponseBody &) = default ;
    ListForwardStrategyBindingItemsResponseBody(ListForwardStrategyBindingItemsResponseBody &&) = default ;
    ListForwardStrategyBindingItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListForwardStrategyBindingItemsResponseBody() = default ;
    ListForwardStrategyBindingItemsResponseBody& operator=(const ListForwardStrategyBindingItemsResponseBody &) = default ;
    ListForwardStrategyBindingItemsResponseBody& operator=(ListForwardStrategyBindingItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ForwardStrategyBindingItemsList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardStrategyBindingItemsList& obj) { 
        DARABONBA_PTR_TO_JSON(ForwardId, forwardId_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardStrategyBindingItemsList& obj) { 
        DARABONBA_PTR_FROM_JSON(ForwardId, forwardId_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      };
      ForwardStrategyBindingItemsList() = default ;
      ForwardStrategyBindingItemsList(const ForwardStrategyBindingItemsList &) = default ;
      ForwardStrategyBindingItemsList(ForwardStrategyBindingItemsList &&) = default ;
      ForwardStrategyBindingItemsList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardStrategyBindingItemsList() = default ;
      ForwardStrategyBindingItemsList& operator=(const ForwardStrategyBindingItemsList &) = default ;
      ForwardStrategyBindingItemsList& operator=(ForwardStrategyBindingItemsList &&) = default ;
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
        shared_ptr<string> applicationId_ {};
        shared_ptr<string> applicationName_ {};
        shared_ptr<string> tagId_ {};
        shared_ptr<string> tagName_ {};
        shared_ptr<string> userGroupId_ {};
        shared_ptr<string> userGroupName_ {};
      };

      virtual bool empty() const override { return this->forwardId_ == nullptr
        && this->items_ == nullptr && this->matchMode_ == nullptr; };
      // forwardId Field Functions 
      bool hasForwardId() const { return this->forwardId_ != nullptr;};
      void deleteForwardId() { this->forwardId_ = nullptr;};
      inline string getForwardId() const { DARABONBA_PTR_GET_DEFAULT(forwardId_, "") };
      inline ForwardStrategyBindingItemsList& setForwardId(string forwardId) { DARABONBA_PTR_SET_VALUE(forwardId_, forwardId) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<ForwardStrategyBindingItemsList::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ForwardStrategyBindingItemsList::Items>) };
      inline vector<ForwardStrategyBindingItemsList::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ForwardStrategyBindingItemsList::Items>) };
      inline ForwardStrategyBindingItemsList& setItems(const vector<ForwardStrategyBindingItemsList::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline ForwardStrategyBindingItemsList& setItems(vector<ForwardStrategyBindingItemsList::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // matchMode Field Functions 
      bool hasMatchMode() const { return this->matchMode_ != nullptr;};
      void deleteMatchMode() { this->matchMode_ = nullptr;};
      inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
      inline ForwardStrategyBindingItemsList& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    protected:
      shared_ptr<string> forwardId_ {};
      shared_ptr<vector<ForwardStrategyBindingItemsList::Items>> items_ {};
      shared_ptr<string> matchMode_ {};
    };

    virtual bool empty() const override { return this->forwardStrategyBindingItemsList_ == nullptr
        && this->itemType_ == nullptr && this->requestId_ == nullptr; };
    // forwardStrategyBindingItemsList Field Functions 
    bool hasForwardStrategyBindingItemsList() const { return this->forwardStrategyBindingItemsList_ != nullptr;};
    void deleteForwardStrategyBindingItemsList() { this->forwardStrategyBindingItemsList_ = nullptr;};
    inline const vector<ListForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItemsList> & getForwardStrategyBindingItemsList() const { DARABONBA_PTR_GET_CONST(forwardStrategyBindingItemsList_, vector<ListForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItemsList>) };
    inline vector<ListForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItemsList> getForwardStrategyBindingItemsList() { DARABONBA_PTR_GET(forwardStrategyBindingItemsList_, vector<ListForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItemsList>) };
    inline ListForwardStrategyBindingItemsResponseBody& setForwardStrategyBindingItemsList(const vector<ListForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItemsList> & forwardStrategyBindingItemsList) { DARABONBA_PTR_SET_VALUE(forwardStrategyBindingItemsList_, forwardStrategyBindingItemsList) };
    inline ListForwardStrategyBindingItemsResponseBody& setForwardStrategyBindingItemsList(vector<ListForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItemsList> && forwardStrategyBindingItemsList) { DARABONBA_PTR_SET_RVALUE(forwardStrategyBindingItemsList_, forwardStrategyBindingItemsList) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline ListForwardStrategyBindingItemsResponseBody& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListForwardStrategyBindingItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListForwardStrategyBindingItemsResponseBody::ForwardStrategyBindingItemsList>> forwardStrategyBindingItemsList_ {};
    shared_ptr<string> itemType_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
