// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTDIRECTORYRESPONSEBODY_HPP_
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
  class ListTenantDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTenantDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTenantDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListTenantDirectoryResponseBody() = default ;
    ListTenantDirectoryResponseBody(const ListTenantDirectoryResponseBody &) = default ;
    ListTenantDirectoryResponseBody(ListTenantDirectoryResponseBody &&) = default ;
    ListTenantDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTenantDirectoryResponseBody() = default ;
    ListTenantDirectoryResponseBody& operator=(const ListTenantDirectoryResponseBody &) = default ;
    ListTenantDirectoryResponseBody& operator=(ListTenantDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(itemId, itemId_);
        DARABONBA_PTR_TO_JSON(itemType, itemType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(objectBindings, objectBindings_);
        DARABONBA_PTR_TO_JSON(sourceFailedCount, sourceFailedCount_);
        DARABONBA_PTR_TO_JSON(sourceReadyCount, sourceReadyCount_);
        DARABONBA_PTR_TO_JSON(sourceStatus, sourceStatus_);
        DARABONBA_PTR_TO_JSON(sourceTotalCount, sourceTotalCount_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(itemId, itemId_);
        DARABONBA_PTR_FROM_JSON(itemType, itemType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(objectBindings, objectBindings_);
        DARABONBA_PTR_FROM_JSON(sourceFailedCount, sourceFailedCount_);
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
      virtual bool empty() const override { return this->creatorName_ == nullptr
        && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->itemId_ == nullptr && this->itemType_ == nullptr
        && this->name_ == nullptr && this->objectBindings_ == nullptr && this->sourceFailedCount_ == nullptr && this->sourceReadyCount_ == nullptr && this->sourceStatus_ == nullptr
        && this->sourceTotalCount_ == nullptr && this->sourceType_ == nullptr; };
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
      inline const vector<Darabonba::Json> & getObjectBindings() const { DARABONBA_PTR_GET_CONST(objectBindings_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getObjectBindings() { DARABONBA_PTR_GET(objectBindings_, vector<Darabonba::Json>) };
      inline Items& setObjectBindings(const vector<Darabonba::Json> & objectBindings) { DARABONBA_PTR_SET_VALUE(objectBindings_, objectBindings) };
      inline Items& setObjectBindings(vector<Darabonba::Json> && objectBindings) { DARABONBA_PTR_SET_RVALUE(objectBindings_, objectBindings) };


      // sourceFailedCount Field Functions 
      bool hasSourceFailedCount() const { return this->sourceFailedCount_ != nullptr;};
      void deleteSourceFailedCount() { this->sourceFailedCount_ = nullptr;};
      inline int64_t getSourceFailedCount() const { DARABONBA_PTR_GET_DEFAULT(sourceFailedCount_, 0L) };
      inline Items& setSourceFailedCount(int64_t sourceFailedCount) { DARABONBA_PTR_SET_VALUE(sourceFailedCount_, sourceFailedCount) };


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
      // The nickname of the creator.
      shared_ptr<string> creatorName_ {};
      // The description of the to-do card type.
      shared_ptr<string> description_ {};
      // The creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // The last modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // The signing record ID.
      shared_ptr<string> itemId_ {};
      // The data type (group, user, or role).
      shared_ptr<string> itemType_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The object bindings.
      shared_ptr<vector<Darabonba::Json>> objectBindings_ {};
      // The number of resources with the FAILED status. This field is returned only when the top-level directory list of the knowledge base is queried.
      shared_ptr<int64_t> sourceFailedCount_ {};
      // The number of resources with the READY status. This field is returned only when the top-level directory list of the knowledge base is queried.
      shared_ptr<int64_t> sourceReadyCount_ {};
      // The resource status. This field has a value only when itemType is set to resource.
      shared_ptr<string> sourceStatus_ {};
      // The total number of resources in the directory and its subdirectories. This field is returned only when the top-level directory list of the knowledge base is queried.
      shared_ptr<int64_t> sourceTotalCount_ {};
      // The data source type.
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTenantDirectoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListTenantDirectoryResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListTenantDirectoryResponseBody::Items>) };
    inline vector<ListTenantDirectoryResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListTenantDirectoryResponseBody::Items>) };
    inline ListTenantDirectoryResponseBody& setItems(const vector<ListTenantDirectoryResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListTenantDirectoryResponseBody& setItems(vector<ListTenantDirectoryResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTenantDirectoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListTenantDirectoryResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListTenantDirectoryResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTenantDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTenantDirectoryResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The file information.
    shared_ptr<vector<ListTenantDirectoryResponseBody::Items>> items_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The page number. Default value: 1. Minimum value: 1. Maximum value: 200.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page. Default value: 100. Maximum value: 500.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
