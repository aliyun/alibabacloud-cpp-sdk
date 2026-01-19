// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMELISTVARIABLEPAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMELISTVARIABLEPAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeNameListVariablePageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNameListVariablePageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNameListVariablePageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeNameListVariablePageListResponseBody() = default ;
    DescribeNameListVariablePageListResponseBody(const DescribeNameListVariablePageListResponseBody &) = default ;
    DescribeNameListVariablePageListResponseBody(DescribeNameListVariablePageListResponseBody &&) = default ;
    DescribeNameListVariablePageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNameListVariablePageListResponseBody() = default ;
    DescribeNameListVariablePageListResponseBody& operator=(const DescribeNameListVariablePageListResponseBody &) = default ;
    DescribeNameListVariablePageListResponseBody& operator=(DescribeNameListVariablePageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(capacity, capacity_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(leftCapacity, leftCapacity_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(nameListType, nameListType_);
        DARABONBA_PTR_TO_JSON(refObjId, refObjId_);
        DARABONBA_PTR_TO_JSON(refObjType, refObjType_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(leftCapacity, leftCapacity_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(nameListType, nameListType_);
        DARABONBA_PTR_FROM_JSON(refObjId, refObjId_);
        DARABONBA_PTR_FROM_JSON(refObjType, refObjType_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->leftCapacity_ == nullptr
        && this->name_ == nullptr && this->nameListType_ == nullptr && this->refObjId_ == nullptr && this->refObjType_ == nullptr && this->sourceType_ == nullptr
        && this->title_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
      inline ResultObject& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline ResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // leftCapacity Field Functions 
      bool hasLeftCapacity() const { return this->leftCapacity_ != nullptr;};
      void deleteLeftCapacity() { this->leftCapacity_ = nullptr;};
      inline int64_t getLeftCapacity() const { DARABONBA_PTR_GET_DEFAULT(leftCapacity_, 0L) };
      inline ResultObject& setLeftCapacity(int64_t leftCapacity) { DARABONBA_PTR_SET_VALUE(leftCapacity_, leftCapacity) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nameListType Field Functions 
      bool hasNameListType() const { return this->nameListType_ != nullptr;};
      void deleteNameListType() { this->nameListType_ = nullptr;};
      inline string getNameListType() const { DARABONBA_PTR_GET_DEFAULT(nameListType_, "") };
      inline ResultObject& setNameListType(string nameListType) { DARABONBA_PTR_SET_VALUE(nameListType_, nameListType) };


      // refObjId Field Functions 
      bool hasRefObjId() const { return this->refObjId_ != nullptr;};
      void deleteRefObjId() { this->refObjId_ = nullptr;};
      inline string getRefObjId() const { DARABONBA_PTR_GET_DEFAULT(refObjId_, "") };
      inline ResultObject& setRefObjId(string refObjId) { DARABONBA_PTR_SET_VALUE(refObjId_, refObjId) };


      // refObjType Field Functions 
      bool hasRefObjType() const { return this->refObjType_ != nullptr;};
      void deleteRefObjType() { this->refObjType_ = nullptr;};
      inline int64_t getRefObjType() const { DARABONBA_PTR_GET_DEFAULT(refObjType_, 0L) };
      inline ResultObject& setRefObjType(int64_t refObjType) { DARABONBA_PTR_SET_VALUE(refObjType_, refObjType) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline ResultObject& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline ResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Used capacity
      shared_ptr<int64_t> capacity_ {};
      // Description information.
      shared_ptr<string> description_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // Modification time
      shared_ptr<int64_t> gmtModified_ {};
      // Name list ID
      shared_ptr<int64_t> id_ {};
      // Remaining capacity
      shared_ptr<int64_t> leftCapacity_ {};
      // Parameter name.
      shared_ptr<string> name_ {};
      // Name list type
      shared_ptr<string> nameListType_ {};
      // Associated event eventCode
      shared_ptr<string> refObjId_ {};
      // Association type
      shared_ptr<int64_t> refObjType_ {};
      // Data source
      shared_ptr<string> sourceType_ {};
      // Title.
      shared_ptr<string> title_ {};
      // Variable type
      shared_ptr<string> type_ {};
      // User UID
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeNameListVariablePageListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNameListVariablePageListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNameListVariablePageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeNameListVariablePageListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeNameListVariablePageListResponseBody::ResultObject>) };
    inline vector<DescribeNameListVariablePageListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeNameListVariablePageListResponseBody::ResultObject>) };
    inline DescribeNameListVariablePageListResponseBody& setResultObject(const vector<DescribeNameListVariablePageListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeNameListVariablePageListResponseBody& setResultObject(vector<DescribeNameListVariablePageListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeNameListVariablePageListResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeNameListVariablePageListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Page size, default value is 10
    shared_ptr<int32_t> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<vector<DescribeNameListVariablePageListResponseBody::ResultObject>> resultObject_ {};
    // Total number of items
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
