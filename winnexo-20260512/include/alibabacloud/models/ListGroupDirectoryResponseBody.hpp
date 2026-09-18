// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPDIRECTORYRESPONSEBODY_HPP_
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
  class ListGroupDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListGroupDirectoryResponseBody() = default ;
    ListGroupDirectoryResponseBody(const ListGroupDirectoryResponseBody &) = default ;
    ListGroupDirectoryResponseBody(ListGroupDirectoryResponseBody &&) = default ;
    ListGroupDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupDirectoryResponseBody() = default ;
    ListGroupDirectoryResponseBody& operator=(const ListGroupDirectoryResponseBody &) = default ;
    ListGroupDirectoryResponseBody& operator=(ListGroupDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(directoryKind, directoryKind_);
        DARABONBA_PTR_TO_JSON(directoryType, directoryType_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(itemId, itemId_);
        DARABONBA_PTR_TO_JSON(itemType, itemType_);
        DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(objectBindings, objectBindings_);
        DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
        DARABONBA_PTR_TO_JSON(sourceKind, sourceKind_);
        DARABONBA_PTR_TO_JSON(sourceStatus, sourceStatus_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(directoryKind, directoryKind_);
        DARABONBA_PTR_FROM_JSON(directoryType, directoryType_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(itemId, itemId_);
        DARABONBA_PTR_FROM_JSON(itemType, itemType_);
        DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(objectBindings, objectBindings_);
        DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
        DARABONBA_PTR_FROM_JSON(sourceKind, sourceKind_);
        DARABONBA_PTR_FROM_JSON(sourceStatus, sourceStatus_);
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
        // The name of the knowledge graph to which the binding belongs.
        shared_ptr<string> graphName_ {};
        // The business ID of the object.
        shared_ptr<string> objectId_ {};
        // The display name of the object.
        shared_ptr<string> objectName_ {};
        // The object type.
        shared_ptr<string> objectType_ {};
        // The display name of the object type.
        shared_ptr<string> objectTypeName_ {};
      };

      virtual bool empty() const override { return this->creatorName_ == nullptr
        && this->directoryKind_ == nullptr && this->directoryType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->itemId_ == nullptr
        && this->itemType_ == nullptr && this->modifierName_ == nullptr && this->name_ == nullptr && this->objectBindings_ == nullptr && this->readOnly_ == nullptr
        && this->sourceKind_ == nullptr && this->sourceStatus_ == nullptr && this->sourceType_ == nullptr; };
      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline Items& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // directoryKind Field Functions 
      bool hasDirectoryKind() const { return this->directoryKind_ != nullptr;};
      void deleteDirectoryKind() { this->directoryKind_ = nullptr;};
      inline string getDirectoryKind() const { DARABONBA_PTR_GET_DEFAULT(directoryKind_, "") };
      inline Items& setDirectoryKind(string directoryKind) { DARABONBA_PTR_SET_VALUE(directoryKind_, directoryKind) };


      // directoryType Field Functions 
      bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
      void deleteDirectoryType() { this->directoryType_ = nullptr;};
      inline string getDirectoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
      inline Items& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


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


      // modifierName Field Functions 
      bool hasModifierName() const { return this->modifierName_ != nullptr;};
      void deleteModifierName() { this->modifierName_ = nullptr;};
      inline string getModifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
      inline Items& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


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


      // readOnly Field Functions 
      bool hasReadOnly() const { return this->readOnly_ != nullptr;};
      void deleteReadOnly() { this->readOnly_ = nullptr;};
      inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
      inline Items& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


      // sourceKind Field Functions 
      bool hasSourceKind() const { return this->sourceKind_ != nullptr;};
      void deleteSourceKind() { this->sourceKind_ = nullptr;};
      inline string getSourceKind() const { DARABONBA_PTR_GET_DEFAULT(sourceKind_, "") };
      inline Items& setSourceKind(string sourceKind) { DARABONBA_PTR_SET_VALUE(sourceKind_, sourceKind) };


      // sourceStatus Field Functions 
      bool hasSourceStatus() const { return this->sourceStatus_ != nullptr;};
      void deleteSourceStatus() { this->sourceStatus_ = nullptr;};
      inline string getSourceStatus() const { DARABONBA_PTR_GET_DEFAULT(sourceStatus_, "") };
      inline Items& setSourceStatus(string sourceStatus) { DARABONBA_PTR_SET_VALUE(sourceStatus_, sourceStatus) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Items& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      // The name of the directory creator or resource submitter.
      shared_ptr<string> creatorName_ {};
      // The directory ownership category. This follows the service output, such as normal.
      shared_ptr<string> directoryKind_ {};
      // The directory type. Physical directories within the space have a value of GROUP. Reference directories retain their original type.
      shared_ptr<string> directoryType_ {};
      // The creation timestamp, in seconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The modification timestamp, in seconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The directoryId of a directory or the sourceId of a resource.
      shared_ptr<string> itemId_ {};
      // The content type. Valid values: directory (subdirectory) and resource.
      shared_ptr<string> itemType_ {};
      // The name of the last modifier.
      shared_ptr<string> modifierName_ {};
      // The content name.
      shared_ptr<string> name_ {};
      // The list of resource object bindings. This may be empty if metadata is missing or for referenced resources.
      shared_ptr<vector<Items::ObjectBindings>> objectBindings_ {};
      // Indicates whether the content is a read-only reference. A value of false does not indicate write permissions. Write operations still require creator or space administrator permissions.
      shared_ptr<bool> readOnly_ {};
      // The resource ownership category. This follows the service output.
      shared_ptr<string> sourceKind_ {};
      // The resource parsing status. This field has a value only for resource items.
      shared_ptr<string> sourceStatus_ {};
      // The resource type. This field has a value only for resource items. The type display rules of the service are used.
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGroupDirectoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListGroupDirectoryResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListGroupDirectoryResponseBody::Items>) };
    inline vector<ListGroupDirectoryResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListGroupDirectoryResponseBody::Items>) };
    inline ListGroupDirectoryResponseBody& setItems(const vector<ListGroupDirectoryResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListGroupDirectoryResponseBody& setItems(vector<ListGroupDirectoryResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGroupDirectoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListGroupDirectoryResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListGroupDirectoryResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGroupDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListGroupDirectoryResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The immediate subdirectories and resources on the current page. The queried directory itself is not included, and results are not recursively expanded.
    shared_ptr<vector<ListGroupDirectoryResponseBody::Items>> items_ {};
    // The error description.
    shared_ptr<string> message_ {};
    // The current page number.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries after filtering and before pagination. This includes both physical content and referenced content that match the filter criteria.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
