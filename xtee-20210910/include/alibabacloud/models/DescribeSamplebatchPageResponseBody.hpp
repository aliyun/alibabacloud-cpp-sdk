// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLEBATCHPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLEBATCHPAGERESPONSEBODY_HPP_
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
  class DescribeSamplebatchPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSamplebatchPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSamplebatchPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeSamplebatchPageResponseBody() = default ;
    DescribeSamplebatchPageResponseBody(const DescribeSamplebatchPageResponseBody &) = default ;
    DescribeSamplebatchPageResponseBody(DescribeSamplebatchPageResponseBody &&) = default ;
    DescribeSamplebatchPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSamplebatchPageResponseBody() = default ;
    DescribeSamplebatchPageResponseBody& operator=(const DescribeSamplebatchPageResponseBody &) = default ;
    DescribeSamplebatchPageResponseBody& operator=(DescribeSamplebatchPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(batchName, batchName_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(dataType, dataType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(initValidFileRow, initValidFileRow_);
        DARABONBA_PTR_TO_JSON(sampleBatchType, sampleBatchType_);
        DARABONBA_PTR_TO_JSON(services, services_);
        DARABONBA_PTR_TO_JSON(updator, updator_);
        DARABONBA_PTR_TO_JSON(uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(batchName, batchName_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(dataType, dataType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(initValidFileRow, initValidFileRow_);
        DARABONBA_PTR_FROM_JSON(sampleBatchType, sampleBatchType_);
        DARABONBA_PTR_FROM_JSON(services, services_);
        DARABONBA_PTR_FROM_JSON(updator, updator_);
        DARABONBA_PTR_FROM_JSON(uuid, uuid_);
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
      virtual bool empty() const override { return this->batchName_ == nullptr
        && this->creator_ == nullptr && this->dataType_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->initValidFileRow_ == nullptr && this->sampleBatchType_ == nullptr && this->services_ == nullptr && this->updator_ == nullptr && this->uuid_ == nullptr; };
      // batchName Field Functions 
      bool hasBatchName() const { return this->batchName_ != nullptr;};
      void deleteBatchName() { this->batchName_ = nullptr;};
      inline string getBatchName() const { DARABONBA_PTR_GET_DEFAULT(batchName_, "") };
      inline ResultObject& setBatchName(string batchName) { DARABONBA_PTR_SET_VALUE(batchName_, batchName) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline ResultObject& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline ResultObject& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


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


      // initValidFileRow Field Functions 
      bool hasInitValidFileRow() const { return this->initValidFileRow_ != nullptr;};
      void deleteInitValidFileRow() { this->initValidFileRow_ = nullptr;};
      inline int64_t getInitValidFileRow() const { DARABONBA_PTR_GET_DEFAULT(initValidFileRow_, 0L) };
      inline ResultObject& setInitValidFileRow(int64_t initValidFileRow) { DARABONBA_PTR_SET_VALUE(initValidFileRow_, initValidFileRow) };


      // sampleBatchType Field Functions 
      bool hasSampleBatchType() const { return this->sampleBatchType_ != nullptr;};
      void deleteSampleBatchType() { this->sampleBatchType_ = nullptr;};
      inline string getSampleBatchType() const { DARABONBA_PTR_GET_DEFAULT(sampleBatchType_, "") };
      inline ResultObject& setSampleBatchType(string sampleBatchType) { DARABONBA_PTR_SET_VALUE(sampleBatchType_, sampleBatchType) };


      // services Field Functions 
      bool hasServices() const { return this->services_ != nullptr;};
      void deleteServices() { this->services_ = nullptr;};
      inline string getServices() const { DARABONBA_PTR_GET_DEFAULT(services_, "") };
      inline ResultObject& setServices(string services) { DARABONBA_PTR_SET_VALUE(services_, services) };


      // updator Field Functions 
      bool hasUpdator() const { return this->updator_ != nullptr;};
      void deleteUpdator() { this->updator_ = nullptr;};
      inline string getUpdator() const { DARABONBA_PTR_GET_DEFAULT(updator_, "") };
      inline ResultObject& setUpdator(string updator) { DARABONBA_PTR_SET_VALUE(updator_, updator) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ResultObject& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // Sample batch name
      shared_ptr<string> batchName_ {};
      // Creator.
      shared_ptr<string> creator_ {};
      // Data type
      shared_ptr<string> dataType_ {};
      // Description.
      shared_ptr<string> description_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // Modification time
      shared_ptr<int64_t> gmtModified_ {};
      // Valid sample content data
      shared_ptr<int64_t> initValidFileRow_ {};
      // Specific type of the sample list
      shared_ptr<string> sampleBatchType_ {};
      // Service ID
      shared_ptr<string> services_ {};
      // Modifier
      shared_ptr<string> updator_ {};
      // Sample batch UUID
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSamplebatchPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSamplebatchPageResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSamplebatchPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeSamplebatchPageResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeSamplebatchPageResponseBody::ResultObject>) };
    inline vector<DescribeSamplebatchPageResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeSamplebatchPageResponseBody::ResultObject>) };
    inline DescribeSamplebatchPageResponseBody& setResultObject(const vector<DescribeSamplebatchPageResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSamplebatchPageResponseBody& setResultObject(vector<DescribeSamplebatchPageResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeSamplebatchPageResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeSamplebatchPageResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Page size, with a default value of 10
    shared_ptr<int32_t> pageSize_ {};
    // Returned object
    shared_ptr<vector<DescribeSamplebatchPageResponseBody::ResultObject>> resultObject_ {};
    // Total number of items
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
