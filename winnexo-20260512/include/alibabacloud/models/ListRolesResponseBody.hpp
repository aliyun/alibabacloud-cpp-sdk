// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListRolesResponseBody() = default ;
    ListRolesResponseBody(const ListRolesResponseBody &) = default ;
    ListRolesResponseBody(ListRolesResponseBody &&) = default ;
    ListRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBody() = default ;
    ListRolesResponseBody& operator=(const ListRolesResponseBody &) = default ;
    ListRolesResponseBody& operator=(ListRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(roleCode, roleCode_);
        DARABONBA_PTR_TO_JSON(roleName, roleName_);
        DARABONBA_PTR_TO_JSON(toggleable, toggleable_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(roleCode, roleCode_);
        DARABONBA_PTR_FROM_JSON(roleName, roleName_);
        DARABONBA_PTR_FROM_JSON(toggleable, toggleable_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->roleCode_ == nullptr && this->roleName_ == nullptr && this->toggleable_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // roleCode Field Functions 
      bool hasRoleCode() const { return this->roleCode_ != nullptr;};
      void deleteRoleCode() { this->roleCode_ = nullptr;};
      inline string getRoleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
      inline Items& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline Items& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // toggleable Field Functions 
      bool hasToggleable() const { return this->toggleable_ != nullptr;};
      void deleteToggleable() { this->toggleable_ = nullptr;};
      inline bool getToggleable() const { DARABONBA_PTR_GET_DEFAULT(toggleable_, false) };
      inline Items& setToggleable(bool toggleable) { DARABONBA_PTR_SET_VALUE(toggleable_, toggleable) };


    protected:
      // The description of the to-do card type.
      shared_ptr<string> description_ {};
      // The role code.
      shared_ptr<string> roleCode_ {};
      // The role name.
      shared_ptr<string> roleName_ {};
      // Indicates whether the enable/disable operation is allowed. Super administrators and application users cannot be switched.
      shared_ptr<bool> toggleable_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRolesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListRolesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListRolesResponseBody::Items>) };
    inline vector<ListRolesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListRolesResponseBody::Items>) };
    inline ListRolesResponseBody& setItems(const vector<ListRolesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListRolesResponseBody& setItems(vector<ListRolesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRolesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The MCP card list.
    shared_ptr<vector<ListRolesResponseBody::Items>> items_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
