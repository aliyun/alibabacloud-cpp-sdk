// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERVISIBLEKNOWLEDGEBASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERVISIBLEKNOWLEDGEBASESRESPONSEBODY_HPP_
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
  class ListUserVisibleKnowledgeBasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserVisibleKnowledgeBasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserVisibleKnowledgeBasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListUserVisibleKnowledgeBasesResponseBody() = default ;
    ListUserVisibleKnowledgeBasesResponseBody(const ListUserVisibleKnowledgeBasesResponseBody &) = default ;
    ListUserVisibleKnowledgeBasesResponseBody(ListUserVisibleKnowledgeBasesResponseBody &&) = default ;
    ListUserVisibleKnowledgeBasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserVisibleKnowledgeBasesResponseBody() = default ;
    ListUserVisibleKnowledgeBasesResponseBody& operator=(const ListUserVisibleKnowledgeBasesResponseBody &) = default ;
    ListUserVisibleKnowledgeBasesResponseBody& operator=(ListUserVisibleKnowledgeBasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(directoryKind, directoryKind_);
        DARABONBA_PTR_TO_JSON(directoryType, directoryType_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(directoryKind, directoryKind_);
        DARABONBA_PTR_FROM_JSON(directoryType, directoryType_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(name, name_);
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
      virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->creatorName_ == nullptr && this->description_ == nullptr && this->directoryId_ == nullptr && this->directoryKind_ == nullptr && this->directoryType_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->name_ == nullptr; };
      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline int64_t getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
      inline Items& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


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


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The user ID of the creator.
      shared_ptr<int64_t> creatorId_ {};
      // The name of the creator.
      shared_ptr<string> creatorName_ {};
      // The description of the knowledge base.
      shared_ptr<string> description_ {};
      // The directory ID of the enterprise knowledge base.
      shared_ptr<string> directoryId_ {};
      // The directory type.
      shared_ptr<string> directoryKind_ {};
      // The directory type.
      shared_ptr<string> directoryType_ {};
      // The creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // The last modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // The file name.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListUserVisibleKnowledgeBasesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListUserVisibleKnowledgeBasesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListUserVisibleKnowledgeBasesResponseBody::Items>) };
    inline vector<ListUserVisibleKnowledgeBasesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListUserVisibleKnowledgeBasesResponseBody::Items>) };
    inline ListUserVisibleKnowledgeBasesResponseBody& setItems(const vector<ListUserVisibleKnowledgeBasesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListUserVisibleKnowledgeBasesResponseBody& setItems(vector<ListUserVisibleKnowledgeBasesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUserVisibleKnowledgeBasesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserVisibleKnowledgeBasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUserVisibleKnowledgeBasesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The result list.
    // Maximum size:
    // 	50
    shared_ptr<vector<ListUserVisibleKnowledgeBasesResponseBody::Items>> items_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
