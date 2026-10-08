// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListAuthorityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityList, authorityList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityList, authorityList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAuthorityResponseBody() = default ;
    ListAuthorityResponseBody(const ListAuthorityResponseBody &) = default ;
    ListAuthorityResponseBody(ListAuthorityResponseBody &&) = default ;
    ListAuthorityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorityResponseBody() = default ;
    ListAuthorityResponseBody& operator=(const ListAuthorityResponseBody &) = default ;
    ListAuthorityResponseBody& operator=(ListAuthorityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorityList& obj) { 
        DARABONBA_PTR_TO_JSON(Authority, authority_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorityList& obj) { 
        DARABONBA_PTR_FROM_JSON(Authority, authority_);
      };
      AuthorityList() = default ;
      AuthorityList(const AuthorityList &) = default ;
      AuthorityList(AuthorityList &&) = default ;
      AuthorityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorityList() = default ;
      AuthorityList& operator=(const AuthorityList &) = default ;
      AuthorityList& operator=(AuthorityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Authority : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Authority& obj) { 
          DARABONBA_PTR_TO_JSON(ActionList, actionList_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Authority& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionList, actionList_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Authority() = default ;
        Authority(const Authority &) = default ;
        Authority(Authority &&) = default ;
        Authority(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Authority() = default ;
        Authority& operator=(const Authority &) = default ;
        Authority& operator=(Authority &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ActionList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ActionList& obj) { 
            DARABONBA_PTR_TO_JSON(Action, action_);
          };
          friend void from_json(const Darabonba::Json& j, ActionList& obj) { 
            DARABONBA_PTR_FROM_JSON(Action, action_);
          };
          ActionList() = default ;
          ActionList(const ActionList &) = default ;
          ActionList(ActionList &&) = default ;
          ActionList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ActionList() = default ;
          ActionList& operator=(const ActionList &) = default ;
          ActionList& operator=(ActionList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Action : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Action& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(GroupId, groupId_);
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Action& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            Action() = default ;
            Action(const Action &) = default ;
            Action(Action &&) = default ;
            Action(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Action() = default ;
            Action& operator=(const Action &) = default ;
            Action& operator=(Action &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->groupId_ == nullptr && this->name_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline Action& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline Action& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // groupId Field Functions 
            bool hasGroupId() const { return this->groupId_ != nullptr;};
            void deleteGroupId() { this->groupId_ = nullptr;};
            inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
            inline Action& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Action& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            shared_ptr<string> code_ {};
            shared_ptr<string> description_ {};
            shared_ptr<string> groupId_ {};
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->action_ == nullptr; };
          // action Field Functions 
          bool hasAction() const { return this->action_ != nullptr;};
          void deleteAction() { this->action_ = nullptr;};
          inline const vector<ActionList::Action> & getAction() const { DARABONBA_PTR_GET_CONST(action_, vector<ActionList::Action>) };
          inline vector<ActionList::Action> getAction() { DARABONBA_PTR_GET(action_, vector<ActionList::Action>) };
          inline ActionList& setAction(const vector<ActionList::Action> & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
          inline ActionList& setAction(vector<ActionList::Action> && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


        protected:
          shared_ptr<vector<ActionList::Action>> action_ {};
        };

        virtual bool empty() const override { return this->actionList_ == nullptr
        && this->description_ == nullptr && this->groupId_ == nullptr && this->name_ == nullptr; };
        // actionList Field Functions 
        bool hasActionList() const { return this->actionList_ != nullptr;};
        void deleteActionList() { this->actionList_ = nullptr;};
        inline const Authority::ActionList & getActionList() const { DARABONBA_PTR_GET_CONST(actionList_, Authority::ActionList) };
        inline Authority::ActionList getActionList() { DARABONBA_PTR_GET(actionList_, Authority::ActionList) };
        inline Authority& setActionList(const Authority::ActionList & actionList) { DARABONBA_PTR_SET_VALUE(actionList_, actionList) };
        inline Authority& setActionList(Authority::ActionList && actionList) { DARABONBA_PTR_SET_RVALUE(actionList_, actionList) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Authority& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Authority& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Authority& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<Authority::ActionList> actionList_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->authority_ == nullptr; };
      // authority Field Functions 
      bool hasAuthority() const { return this->authority_ != nullptr;};
      void deleteAuthority() { this->authority_ = nullptr;};
      inline const vector<AuthorityList::Authority> & getAuthority() const { DARABONBA_PTR_GET_CONST(authority_, vector<AuthorityList::Authority>) };
      inline vector<AuthorityList::Authority> getAuthority() { DARABONBA_PTR_GET(authority_, vector<AuthorityList::Authority>) };
      inline AuthorityList& setAuthority(const vector<AuthorityList::Authority> & authority) { DARABONBA_PTR_SET_VALUE(authority_, authority) };
      inline AuthorityList& setAuthority(vector<AuthorityList::Authority> && authority) { DARABONBA_PTR_SET_RVALUE(authority_, authority) };


    protected:
      shared_ptr<vector<AuthorityList::Authority>> authority_ {};
    };

    virtual bool empty() const override { return this->authorityList_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // authorityList Field Functions 
    bool hasAuthorityList() const { return this->authorityList_ != nullptr;};
    void deleteAuthorityList() { this->authorityList_ = nullptr;};
    inline const ListAuthorityResponseBody::AuthorityList & getAuthorityList() const { DARABONBA_PTR_GET_CONST(authorityList_, ListAuthorityResponseBody::AuthorityList) };
    inline ListAuthorityResponseBody::AuthorityList getAuthorityList() { DARABONBA_PTR_GET(authorityList_, ListAuthorityResponseBody::AuthorityList) };
    inline ListAuthorityResponseBody& setAuthorityList(const ListAuthorityResponseBody::AuthorityList & authorityList) { DARABONBA_PTR_SET_VALUE(authorityList_, authorityList) };
    inline ListAuthorityResponseBody& setAuthorityList(ListAuthorityResponseBody::AuthorityList && authorityList) { DARABONBA_PTR_SET_RVALUE(authorityList_, authorityList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListAuthorityResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAuthorityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListAuthorityResponseBody::AuthorityList> authorityList_ {};
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
