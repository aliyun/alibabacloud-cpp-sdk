// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSRESPONSEBODY_HPP_
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
  class ListAgentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListAgentsResponseBody() = default ;
    ListAgentsResponseBody(const ListAgentsResponseBody &) = default ;
    ListAgentsResponseBody(ListAgentsResponseBody &&) = default ;
    ListAgentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentsResponseBody() = default ;
    ListAgentsResponseBody& operator=(const ListAgentsResponseBody &) = default ;
    ListAgentsResponseBody& operator=(ListAgentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(authMode, authMode_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(isActive, isActive_);
        DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(authMode, authMode_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(isActive, isActive_);
        DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
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
      virtual bool empty() const override { return this->authMode_ == nullptr
        && this->displayName_ == nullptr && this->isActive_ == nullptr && this->operatingObjectName_ == nullptr; };
      // authMode Field Functions 
      bool hasAuthMode() const { return this->authMode_ != nullptr;};
      void deleteAuthMode() { this->authMode_ = nullptr;};
      inline string getAuthMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
      inline Items& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Items& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // isActive Field Functions 
      bool hasIsActive() const { return this->isActive_ != nullptr;};
      void deleteIsActive() { this->isActive_ = nullptr;};
      inline bool getIsActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
      inline Items& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


      // operatingObjectName Field Functions 
      bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
      void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
      inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
      inline Items& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    protected:
      // The authentication mode.
      shared_ptr<string> authMode_ {};
      // The display name of the tool.
      shared_ptr<string> displayName_ {};
      // Indicates whether the account is activated.
      shared_ptr<bool> isActive_ {};
      // The name of the digital employee.
      shared_ptr<string> operatingObjectName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAgentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListAgentsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListAgentsResponseBody::Items>) };
    inline vector<ListAgentsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListAgentsResponseBody::Items>) };
    inline ListAgentsResponseBody& setItems(const vector<ListAgentsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListAgentsResponseBody& setItems(vector<ListAgentsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAgentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The list of skill cards.
    shared_ptr<vector<ListAgentsResponseBody::Items>> items_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
