// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRAPHSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGRAPHSRESPONSEBODY_HPP_
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
  class ListGraphsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGraphsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGraphsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListGraphsResponseBody() = default ;
    ListGraphsResponseBody(const ListGraphsResponseBody &) = default ;
    ListGraphsResponseBody(ListGraphsResponseBody &&) = default ;
    ListGraphsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGraphsResponseBody() = default ;
    ListGraphsResponseBody& operator=(const ListGraphsResponseBody &) = default ;
    ListGraphsResponseBody& operator=(ListGraphsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(businessProfile, businessProfile_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(graphName, graphName_);
        DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(businessProfile, businessProfile_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(graphName, graphName_);
        DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
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
      virtual bool empty() const override { return this->businessProfile_ == nullptr
        && this->displayName_ == nullptr && this->graphName_ == nullptr && this->isDefault_ == nullptr; };
      // businessProfile Field Functions 
      bool hasBusinessProfile() const { return this->businessProfile_ != nullptr;};
      void deleteBusinessProfile() { this->businessProfile_ = nullptr;};
      inline string getBusinessProfile() const { DARABONBA_PTR_GET_DEFAULT(businessProfile_, "") };
      inline Items& setBusinessProfile(string businessProfile) { DARABONBA_PTR_SET_VALUE(businessProfile_, businessProfile) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Items& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // graphName Field Functions 
      bool hasGraphName() const { return this->graphName_ != nullptr;};
      void deleteGraphName() { this->graphName_ = nullptr;};
      inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
      inline Items& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Items& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    protected:
      // The business description of the knowledge graph. An empty string is returned if not configured.
      // 
      // This parameter is required.
      shared_ptr<string> businessProfile_ {};
      // The tool display name.
      // 
      // This parameter is required.
      shared_ptr<string> displayName_ {};
      // The knowledge graph name.
      // 
      // This parameter is required.
      shared_ptr<string> graphName_ {};
      // Indicates whether this is the default group.
      // 
      // This parameter is required.
      shared_ptr<bool> isDefault_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGraphsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListGraphsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListGraphsResponseBody::Items>) };
    inline vector<ListGraphsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListGraphsResponseBody::Items>) };
    inline ListGraphsResponseBody& setItems(const vector<ListGraphsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListGraphsResponseBody& setItems(vector<ListGraphsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGraphsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGraphsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The list of MCP cards.
    // 
    // This parameter is required.
    shared_ptr<vector<ListGraphsResponseBody::Items>> items_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
