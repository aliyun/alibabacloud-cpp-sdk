// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATINGOBJECTFAVORITESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATINGOBJECTFAVORITESRESPONSEBODY_HPP_
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
  class ListOperatingObjectFavoritesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperatingObjectFavoritesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperatingObjectFavoritesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListOperatingObjectFavoritesResponseBody() = default ;
    ListOperatingObjectFavoritesResponseBody(const ListOperatingObjectFavoritesResponseBody &) = default ;
    ListOperatingObjectFavoritesResponseBody(ListOperatingObjectFavoritesResponseBody &&) = default ;
    ListOperatingObjectFavoritesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperatingObjectFavoritesResponseBody() = default ;
    ListOperatingObjectFavoritesResponseBody& operator=(const ListOperatingObjectFavoritesResponseBody &) = default ;
    ListOperatingObjectFavoritesResponseBody& operator=(ListOperatingObjectFavoritesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(followedAt, followedAt_);
        DARABONBA_PTR_TO_JSON(graphName, graphName_);
        DARABONBA_PTR_TO_JSON(objectId, objectId_);
        DARABONBA_PTR_TO_JSON(objectName, objectName_);
        DARABONBA_PTR_TO_JSON(objectType, objectType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(followedAt, followedAt_);
        DARABONBA_PTR_FROM_JSON(graphName, graphName_);
        DARABONBA_PTR_FROM_JSON(objectId, objectId_);
        DARABONBA_PTR_FROM_JSON(objectName, objectName_);
        DARABONBA_PTR_FROM_JSON(objectType, objectType_);
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
        && this->followedAt_ == nullptr && this->graphName_ == nullptr && this->objectId_ == nullptr && this->objectName_ == nullptr && this->objectType_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // followedAt Field Functions 
      bool hasFollowedAt() const { return this->followedAt_ != nullptr;};
      void deleteFollowedAt() { this->followedAt_ = nullptr;};
      inline int64_t getFollowedAt() const { DARABONBA_PTR_GET_DEFAULT(followedAt_, 0L) };
      inline Items& setFollowedAt(int64_t followedAt) { DARABONBA_PTR_SET_VALUE(followedAt_, followedAt) };


      // graphName Field Functions 
      bool hasGraphName() const { return this->graphName_ != nullptr;};
      void deleteGraphName() { this->graphName_ = nullptr;};
      inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
      inline Items& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline Items& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // objectName Field Functions 
      bool hasObjectName() const { return this->objectName_ != nullptr;};
      void deleteObjectName() { this->objectName_ = nullptr;};
      inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
      inline Items& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline Items& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    protected:
      // The to-do card type description.
      shared_ptr<string> description_ {};
      // The follow time. The value is a Unix timestamp in seconds.
      shared_ptr<int64_t> followedAt_ {};
      // The graph name.
      shared_ptr<string> graphName_ {};
      // The ID of the recommended item. The value can be a **feedId** or a micro-application ID.
      shared_ptr<string> objectId_ {};
      // The object name.
      shared_ptr<string> objectName_ {};
      // The bound object type, such as customer or project.
      shared_ptr<string> objectType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->graphName_ == nullptr && this->hasMore_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->objectType_ == nullptr && this->operatingObjectName_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListOperatingObjectFavoritesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline ListOperatingObjectFavoritesResponseBody& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListOperatingObjectFavoritesResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListOperatingObjectFavoritesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListOperatingObjectFavoritesResponseBody::Items>) };
    inline vector<ListOperatingObjectFavoritesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListOperatingObjectFavoritesResponseBody::Items>) };
    inline ListOperatingObjectFavoritesResponseBody& setItems(const vector<ListOperatingObjectFavoritesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListOperatingObjectFavoritesResponseBody& setItems(vector<ListOperatingObjectFavoritesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOperatingObjectFavoritesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOperatingObjectFavoritesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline ListOperatingObjectFavoritesResponseBody& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline ListOperatingObjectFavoritesResponseBody& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListOperatingObjectFavoritesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperatingObjectFavoritesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListOperatingObjectFavoritesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The graph name. Call listGraphs to retrieve available graphs.
    shared_ptr<string> graphName_ {};
    // Indicates whether more pages are available.
    shared_ptr<bool> hasMore_ {};
    // The MCP card list.
    shared_ptr<vector<ListOperatingObjectFavoritesResponseBody::Items>> items_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The pagination cursor.
    shared_ptr<string> nextToken_ {};
    // The object type, such as customer. This parameter has a value when type is set to mention.
    shared_ptr<string> objectType_ {};
    // The digital employee name (operating object name).
    shared_ptr<string> operatingObjectName_ {};
    // The page size.
    shared_ptr<int64_t> pageSize_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The total number of results.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
