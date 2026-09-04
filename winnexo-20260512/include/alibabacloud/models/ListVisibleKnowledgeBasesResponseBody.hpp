// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVISIBLEKNOWLEDGEBASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVISIBLEKNOWLEDGEBASESRESPONSEBODY_HPP_
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
  class ListVisibleKnowledgeBasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVisibleKnowledgeBasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListVisibleKnowledgeBasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListVisibleKnowledgeBasesResponseBody() = default ;
    ListVisibleKnowledgeBasesResponseBody(const ListVisibleKnowledgeBasesResponseBody &) = default ;
    ListVisibleKnowledgeBasesResponseBody(ListVisibleKnowledgeBasesResponseBody &&) = default ;
    ListVisibleKnowledgeBasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVisibleKnowledgeBasesResponseBody() = default ;
    ListVisibleKnowledgeBasesResponseBody& operator=(const ListVisibleKnowledgeBasesResponseBody &) = default ;
    ListVisibleKnowledgeBasesResponseBody& operator=(ListVisibleKnowledgeBasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(path, path_);
        DARABONBA_PTR_TO_JSON(sourceFailedCount, sourceFailedCount_);
        DARABONBA_PTR_TO_JSON(sourceReadyCount, sourceReadyCount_);
        DARABONBA_PTR_TO_JSON(sourceTotalCount, sourceTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(path, path_);
        DARABONBA_PTR_FROM_JSON(sourceFailedCount, sourceFailedCount_);
        DARABONBA_PTR_FROM_JSON(sourceReadyCount, sourceReadyCount_);
        DARABONBA_PTR_FROM_JSON(sourceTotalCount, sourceTotalCount_);
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
        && this->description_ == nullptr && this->directoryId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->name_ == nullptr
        && this->path_ == nullptr && this->sourceFailedCount_ == nullptr && this->sourceReadyCount_ == nullptr && this->sourceTotalCount_ == nullptr; };
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


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Items& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


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


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Items& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


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


      // sourceTotalCount Field Functions 
      bool hasSourceTotalCount() const { return this->sourceTotalCount_ != nullptr;};
      void deleteSourceTotalCount() { this->sourceTotalCount_ = nullptr;};
      inline int64_t getSourceTotalCount() const { DARABONBA_PTR_GET_DEFAULT(sourceTotalCount_, 0L) };
      inline Items& setSourceTotalCount(int64_t sourceTotalCount) { DARABONBA_PTR_SET_VALUE(sourceTotalCount_, sourceTotalCount) };


    protected:
      // The creator.
      shared_ptr<string> creatorName_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The directory ID. You can obtain this value by calling the API operation for retrieving the knowledge base directory.
      shared_ptr<string> directoryId_ {};
      // The creation time. The value is a timestamp in milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // The skill name.
      shared_ptr<string> name_ {};
      // The file directory information.
      shared_ptr<string> path_ {};
      // The number of resources in the FAILED state. This parameter is returned only when the top-level knowledge base directory list is queried.
      shared_ptr<int64_t> sourceFailedCount_ {};
      // The number of resources in the READY state. This parameter is returned only when the top-level knowledge base directory list is queried.
      shared_ptr<int64_t> sourceReadyCount_ {};
      // The total number of resources in the directory and its subdirectories. This parameter is returned only when the top-level knowledge base directory list is queried.
      shared_ptr<int64_t> sourceTotalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVisibleKnowledgeBasesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListVisibleKnowledgeBasesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListVisibleKnowledgeBasesResponseBody::Items>) };
    inline vector<ListVisibleKnowledgeBasesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListVisibleKnowledgeBasesResponseBody::Items>) };
    inline ListVisibleKnowledgeBasesResponseBody& setItems(const vector<ListVisibleKnowledgeBasesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListVisibleKnowledgeBasesResponseBody& setItems(vector<ListVisibleKnowledgeBasesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVisibleKnowledgeBasesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVisibleKnowledgeBasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListVisibleKnowledgeBasesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The file information.
    shared_ptr<vector<ListVisibleKnowledgeBasesResponseBody::Items>> items_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
