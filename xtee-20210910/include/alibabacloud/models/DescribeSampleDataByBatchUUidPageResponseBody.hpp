// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATABYBATCHUUIDPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATABYBATCHUUIDPAGERESPONSEBODY_HPP_
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
  class DescribeSampleDataByBatchUUidPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleDataByBatchUUidPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleDataByBatchUUidPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeSampleDataByBatchUUidPageResponseBody() = default ;
    DescribeSampleDataByBatchUUidPageResponseBody(const DescribeSampleDataByBatchUUidPageResponseBody &) = default ;
    DescribeSampleDataByBatchUUidPageResponseBody(DescribeSampleDataByBatchUUidPageResponseBody &&) = default ;
    DescribeSampleDataByBatchUUidPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleDataByBatchUUidPageResponseBody() = default ;
    DescribeSampleDataByBatchUUidPageResponseBody& operator=(const DescribeSampleDataByBatchUUidPageResponseBody &) = default ;
    DescribeSampleDataByBatchUUidPageResponseBody& operator=(DescribeSampleDataByBatchUUidPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(batchName, batchName_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(dataTagType, dataTagType_);
        DARABONBA_PTR_TO_JSON(dataValue, dataValue_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(lastSourceType, lastSourceType_);
        DARABONBA_PTR_TO_JSON(uuid, uuid_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(batchName, batchName_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(dataTagType, dataTagType_);
        DARABONBA_PTR_FROM_JSON(dataValue, dataValue_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(lastSourceType, lastSourceType_);
        DARABONBA_PTR_FROM_JSON(uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
        && this->creator_ == nullptr && this->dataTagType_ == nullptr && this->dataValue_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->lastSourceType_ == nullptr && this->uuid_ == nullptr && this->version_ == nullptr; };
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


      // dataTagType Field Functions 
      bool hasDataTagType() const { return this->dataTagType_ != nullptr;};
      void deleteDataTagType() { this->dataTagType_ = nullptr;};
      inline string getDataTagType() const { DARABONBA_PTR_GET_DEFAULT(dataTagType_, "") };
      inline ResultObject& setDataTagType(string dataTagType) { DARABONBA_PTR_SET_VALUE(dataTagType_, dataTagType) };


      // dataValue Field Functions 
      bool hasDataValue() const { return this->dataValue_ != nullptr;};
      void deleteDataValue() { this->dataValue_ = nullptr;};
      inline string getDataValue() const { DARABONBA_PTR_GET_DEFAULT(dataValue_, "") };
      inline ResultObject& setDataValue(string dataValue) { DARABONBA_PTR_SET_VALUE(dataValue_, dataValue) };


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


      // lastSourceType Field Functions 
      bool hasLastSourceType() const { return this->lastSourceType_ != nullptr;};
      void deleteLastSourceType() { this->lastSourceType_ = nullptr;};
      inline string getLastSourceType() const { DARABONBA_PTR_GET_DEFAULT(lastSourceType_, "") };
      inline ResultObject& setLastSourceType(string lastSourceType) { DARABONBA_PTR_SET_VALUE(lastSourceType_, lastSourceType) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ResultObject& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline ResultObject& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Sample batch name
      shared_ptr<string> batchName_ {};
      // Creator
      shared_ptr<string> creator_ {};
      // Sample type
      shared_ptr<string> dataTagType_ {};
      // Data content
      shared_ptr<string> dataValue_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // Modification time
      shared_ptr<int64_t> gmtModified_ {};
      // Last source
      shared_ptr<string> lastSourceType_ {};
      // Sample batch UUID
      shared_ptr<string> uuid_ {};
      // Version
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSampleDataByBatchUUidPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSampleDataByBatchUUidPageResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSampleDataByBatchUUidPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeSampleDataByBatchUUidPageResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeSampleDataByBatchUUidPageResponseBody::ResultObject>) };
    inline vector<DescribeSampleDataByBatchUUidPageResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeSampleDataByBatchUUidPageResponseBody::ResultObject>) };
    inline DescribeSampleDataByBatchUUidPageResponseBody& setResultObject(const vector<DescribeSampleDataByBatchUUidPageResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSampleDataByBatchUUidPageResponseBody& setResultObject(vector<DescribeSampleDataByBatchUUidPageResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeSampleDataByBatchUUidPageResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeSampleDataByBatchUUidPageResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Page size, default value is 10
    shared_ptr<int32_t> pageSize_ {};
    // Returned object
    shared_ptr<vector<DescribeSampleDataByBatchUUidPageResponseBody::ResultObject>> resultObject_ {};
    // Total number of items
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
