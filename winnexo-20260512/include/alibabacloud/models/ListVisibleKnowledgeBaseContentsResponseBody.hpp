// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVISIBLEKNOWLEDGEBASECONTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVISIBLEKNOWLEDGEBASECONTENTSRESPONSEBODY_HPP_
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
  class ListVisibleKnowledgeBaseContentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVisibleKnowledgeBaseContentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListVisibleKnowledgeBaseContentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListVisibleKnowledgeBaseContentsResponseBody() = default ;
    ListVisibleKnowledgeBaseContentsResponseBody(const ListVisibleKnowledgeBaseContentsResponseBody &) = default ;
    ListVisibleKnowledgeBaseContentsResponseBody(ListVisibleKnowledgeBaseContentsResponseBody &&) = default ;
    ListVisibleKnowledgeBaseContentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVisibleKnowledgeBaseContentsResponseBody() = default ;
    ListVisibleKnowledgeBaseContentsResponseBody& operator=(const ListVisibleKnowledgeBaseContentsResponseBody &) = default ;
    ListVisibleKnowledgeBaseContentsResponseBody& operator=(ListVisibleKnowledgeBaseContentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(directoryKind, directoryKind_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(itemId, itemId_);
        DARABONBA_PTR_TO_JSON(itemType, itemType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(objectBindings, objectBindings_);
        DARABONBA_PTR_TO_JSON(sourceFailedCount, sourceFailedCount_);
        DARABONBA_PTR_TO_JSON(sourceKind, sourceKind_);
        DARABONBA_PTR_TO_JSON(sourceReadyCount, sourceReadyCount_);
        DARABONBA_PTR_TO_JSON(sourceStatus, sourceStatus_);
        DARABONBA_PTR_TO_JSON(sourceTotalCount, sourceTotalCount_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(directoryKind, directoryKind_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(itemId, itemId_);
        DARABONBA_PTR_FROM_JSON(itemType, itemType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(objectBindings, objectBindings_);
        DARABONBA_PTR_FROM_JSON(sourceFailedCount, sourceFailedCount_);
        DARABONBA_PTR_FROM_JSON(sourceKind, sourceKind_);
        DARABONBA_PTR_FROM_JSON(sourceReadyCount, sourceReadyCount_);
        DARABONBA_PTR_FROM_JSON(sourceStatus, sourceStatus_);
        DARABONBA_PTR_FROM_JSON(sourceTotalCount, sourceTotalCount_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
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
      class ObjectBindings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ObjectBindings& obj) { 
          DARABONBA_PTR_TO_JSON(graphName, graphName_);
          DARABONBA_PTR_TO_JSON(objectId, objectId_);
          DARABONBA_PTR_TO_JSON(objectName, objectName_);
          DARABONBA_PTR_TO_JSON(objectType, objectType_);
          DARABONBA_PTR_TO_JSON(objectTypeName, objectTypeName_);
        };
        friend void from_json(const Darabonba::Json& j, ObjectBindings& obj) { 
          DARABONBA_PTR_FROM_JSON(graphName, graphName_);
          DARABONBA_PTR_FROM_JSON(objectId, objectId_);
          DARABONBA_PTR_FROM_JSON(objectName, objectName_);
          DARABONBA_PTR_FROM_JSON(objectType, objectType_);
          DARABONBA_PTR_FROM_JSON(objectTypeName, objectTypeName_);
        };
        ObjectBindings() = default ;
        ObjectBindings(const ObjectBindings &) = default ;
        ObjectBindings(ObjectBindings &&) = default ;
        ObjectBindings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ObjectBindings() = default ;
        ObjectBindings& operator=(const ObjectBindings &) = default ;
        ObjectBindings& operator=(ObjectBindings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->graphName_ == nullptr
        && this->objectId_ == nullptr && this->objectName_ == nullptr && this->objectType_ == nullptr && this->objectTypeName_ == nullptr; };
        // graphName Field Functions 
        bool hasGraphName() const { return this->graphName_ != nullptr;};
        void deleteGraphName() { this->graphName_ = nullptr;};
        inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
        inline ObjectBindings& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


        // objectId Field Functions 
        bool hasObjectId() const { return this->objectId_ != nullptr;};
        void deleteObjectId() { this->objectId_ = nullptr;};
        inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
        inline ObjectBindings& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


        // objectName Field Functions 
        bool hasObjectName() const { return this->objectName_ != nullptr;};
        void deleteObjectName() { this->objectName_ = nullptr;};
        inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
        inline ObjectBindings& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline ObjectBindings& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // objectTypeName Field Functions 
        bool hasObjectTypeName() const { return this->objectTypeName_ != nullptr;};
        void deleteObjectTypeName() { this->objectTypeName_ = nullptr;};
        inline string getObjectTypeName() const { DARABONBA_PTR_GET_DEFAULT(objectTypeName_, "") };
        inline ObjectBindings& setObjectTypeName(string objectTypeName) { DARABONBA_PTR_SET_VALUE(objectTypeName_, objectTypeName) };


      protected:
        // The semantic graph name to which the object belongs. The object_id is unique within this graph.
        shared_ptr<string> graphName_ {};
        // The ID of the recommended item, which can be a **feedId** or a micro-application ID.
        shared_ptr<string> objectId_ {};
        // The object name.
        shared_ptr<string> objectName_ {};
        // The data type.
        shared_ptr<string> objectType_ {};
        // The display name of the object type (such as "Customer"), parsed from the graph schema. The value is null when the cache is missed.
        shared_ptr<string> objectTypeName_ {};
      };

      virtual bool empty() const override { return this->creatorName_ == nullptr
        && this->description_ == nullptr && this->directoryKind_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->itemId_ == nullptr
        && this->itemType_ == nullptr && this->name_ == nullptr && this->objectBindings_ == nullptr && this->sourceFailedCount_ == nullptr && this->sourceKind_ == nullptr
        && this->sourceReadyCount_ == nullptr && this->sourceStatus_ == nullptr && this->sourceTotalCount_ == nullptr && this->sourceType_ == nullptr; };
      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline Items& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directoryKind Field Functions 
      bool hasDirectoryKind() const { return this->directoryKind_ != nullptr;};
      void deleteDirectoryKind() { this->directoryKind_ = nullptr;};
      inline string getDirectoryKind() const { DARABONBA_PTR_GET_DEFAULT(directoryKind_, "") };
      inline Items& setDirectoryKind(string directoryKind) { DARABONBA_PTR_SET_VALUE(directoryKind_, directoryKind) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Items& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Items& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
      inline Items& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // itemType Field Functions 
      bool hasItemType() const { return this->itemType_ != nullptr;};
      void deleteItemType() { this->itemType_ = nullptr;};
      inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
      inline Items& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectBindings Field Functions 
      bool hasObjectBindings() const { return this->objectBindings_ != nullptr;};
      void deleteObjectBindings() { this->objectBindings_ = nullptr;};
      inline const vector<Items::ObjectBindings> & getObjectBindings() const { DARABONBA_PTR_GET_CONST(objectBindings_, vector<Items::ObjectBindings>) };
      inline vector<Items::ObjectBindings> getObjectBindings() { DARABONBA_PTR_GET(objectBindings_, vector<Items::ObjectBindings>) };
      inline Items& setObjectBindings(const vector<Items::ObjectBindings> & objectBindings) { DARABONBA_PTR_SET_VALUE(objectBindings_, objectBindings) };
      inline Items& setObjectBindings(vector<Items::ObjectBindings> && objectBindings) { DARABONBA_PTR_SET_RVALUE(objectBindings_, objectBindings) };


      // sourceFailedCount Field Functions 
      bool hasSourceFailedCount() const { return this->sourceFailedCount_ != nullptr;};
      void deleteSourceFailedCount() { this->sourceFailedCount_ = nullptr;};
      inline int64_t getSourceFailedCount() const { DARABONBA_PTR_GET_DEFAULT(sourceFailedCount_, 0L) };
      inline Items& setSourceFailedCount(int64_t sourceFailedCount) { DARABONBA_PTR_SET_VALUE(sourceFailedCount_, sourceFailedCount) };


      // sourceKind Field Functions 
      bool hasSourceKind() const { return this->sourceKind_ != nullptr;};
      void deleteSourceKind() { this->sourceKind_ = nullptr;};
      inline string getSourceKind() const { DARABONBA_PTR_GET_DEFAULT(sourceKind_, "") };
      inline Items& setSourceKind(string sourceKind) { DARABONBA_PTR_SET_VALUE(sourceKind_, sourceKind) };


      // sourceReadyCount Field Functions 
      bool hasSourceReadyCount() const { return this->sourceReadyCount_ != nullptr;};
      void deleteSourceReadyCount() { this->sourceReadyCount_ = nullptr;};
      inline int64_t getSourceReadyCount() const { DARABONBA_PTR_GET_DEFAULT(sourceReadyCount_, 0L) };
      inline Items& setSourceReadyCount(int64_t sourceReadyCount) { DARABONBA_PTR_SET_VALUE(sourceReadyCount_, sourceReadyCount) };


      // sourceStatus Field Functions 
      bool hasSourceStatus() const { return this->sourceStatus_ != nullptr;};
      void deleteSourceStatus() { this->sourceStatus_ = nullptr;};
      inline string getSourceStatus() const { DARABONBA_PTR_GET_DEFAULT(sourceStatus_, "") };
      inline Items& setSourceStatus(string sourceStatus) { DARABONBA_PTR_SET_VALUE(sourceStatus_, sourceStatus) };


      // sourceTotalCount Field Functions 
      bool hasSourceTotalCount() const { return this->sourceTotalCount_ != nullptr;};
      void deleteSourceTotalCount() { this->sourceTotalCount_ = nullptr;};
      inline int64_t getSourceTotalCount() const { DARABONBA_PTR_GET_DEFAULT(sourceTotalCount_, 0L) };
      inline Items& setSourceTotalCount(int64_t sourceTotalCount) { DARABONBA_PTR_SET_VALUE(sourceTotalCount_, sourceTotalCount) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Items& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      // The name of the creator.
      shared_ptr<string> creatorName_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The directory type.
      shared_ptr<string> directoryKind_ {};
      // The creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // The modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // The ID of the data item. When tabId and orgId are the same, itemId uniquely identifies a data item. The maximum length is 128 characters.
      shared_ptr<string> itemId_ {};
      // The item type.
      shared_ptr<string> itemType_ {};
      // The skill name.
      shared_ptr<string> name_ {};
      // The object bindings.
      shared_ptr<vector<Items::ObjectBindings>> objectBindings_ {};
      // The number of resources in the FAILED state. This field is returned only when listing top-level knowledge base directories.
      shared_ptr<int64_t> sourceFailedCount_ {};
      // The knowledge base affiliation type. Valid values: aliding_kb_doc (DingTalk knowledge base document) and normal (common knowledge).
      shared_ptr<string> sourceKind_ {};
      // The number of resources in the READY state. This field is returned only when listing top-level knowledge base directories.
      shared_ptr<int64_t> sourceReadyCount_ {};
      // The resource status. This field has a value only when itemType is resource.
      shared_ptr<string> sourceStatus_ {};
      // The total number of resources under the directory and its subdirectories. This field is returned only when listing top-level knowledge base directories.
      shared_ptr<int64_t> sourceTotalCount_ {};
      // The source type.
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVisibleKnowledgeBaseContentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListVisibleKnowledgeBaseContentsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListVisibleKnowledgeBaseContentsResponseBody::Items>) };
    inline vector<ListVisibleKnowledgeBaseContentsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListVisibleKnowledgeBaseContentsResponseBody::Items>) };
    inline ListVisibleKnowledgeBaseContentsResponseBody& setItems(const vector<ListVisibleKnowledgeBaseContentsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListVisibleKnowledgeBaseContentsResponseBody& setItems(vector<ListVisibleKnowledgeBaseContentsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVisibleKnowledgeBaseContentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListVisibleKnowledgeBaseContentsResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListVisibleKnowledgeBaseContentsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVisibleKnowledgeBaseContentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListVisibleKnowledgeBaseContentsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The list of MCP cards.
    shared_ptr<vector<ListVisibleKnowledgeBaseContentsResponseBody::Items>> items_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The current page number.
    shared_ptr<int64_t> page_ {};
    // The page size.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of context libraries that match the query conditions.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
