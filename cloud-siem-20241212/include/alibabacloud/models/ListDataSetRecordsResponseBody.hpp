// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataSetRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSetRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSetRecords, dataSetRecords_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSetRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSetRecords, dataSetRecords_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataSetRecordsResponseBody() = default ;
    ListDataSetRecordsResponseBody(const ListDataSetRecordsResponseBody &) = default ;
    ListDataSetRecordsResponseBody(ListDataSetRecordsResponseBody &&) = default ;
    ListDataSetRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSetRecordsResponseBody() = default ;
    ListDataSetRecordsResponseBody& operator=(const ListDataSetRecordsResponseBody &) = default ;
    ListDataSetRecordsResponseBody& operator=(ListDataSetRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSetRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSetRecords& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
        DARABONBA_PTR_TO_JSON(DataSetName, dataSetName_);
        DARABONBA_PTR_TO_JSON(DataSetRecordId, dataSetRecordId_);
        DARABONBA_PTR_TO_JSON(DataSetRecordValues, dataSetRecordValues_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, DataSetRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
        DARABONBA_PTR_FROM_JSON(DataSetName, dataSetName_);
        DARABONBA_PTR_FROM_JSON(DataSetRecordId, dataSetRecordId_);
        DARABONBA_PTR_FROM_JSON(DataSetRecordValues, dataSetRecordValues_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      DataSetRecords() = default ;
      DataSetRecords(const DataSetRecords &) = default ;
      DataSetRecords(DataSetRecords &&) = default ;
      DataSetRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSetRecords() = default ;
      DataSetRecords& operator=(const DataSetRecords &) = default ;
      DataSetRecords& operator=(DataSetRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataSetId_ == nullptr && this->dataSetName_ == nullptr && this->dataSetRecordId_ == nullptr && this->dataSetRecordValues_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataSetRecords& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataSetId Field Functions 
      bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
      void deleteDataSetId() { this->dataSetId_ = nullptr;};
      inline string getDataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, "") };
      inline DataSetRecords& setDataSetId(string dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


      // dataSetName Field Functions 
      bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
      void deleteDataSetName() { this->dataSetName_ = nullptr;};
      inline string getDataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
      inline DataSetRecords& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


      // dataSetRecordId Field Functions 
      bool hasDataSetRecordId() const { return this->dataSetRecordId_ != nullptr;};
      void deleteDataSetRecordId() { this->dataSetRecordId_ = nullptr;};
      inline string getDataSetRecordId() const { DARABONBA_PTR_GET_DEFAULT(dataSetRecordId_, "") };
      inline DataSetRecords& setDataSetRecordId(string dataSetRecordId) { DARABONBA_PTR_SET_VALUE(dataSetRecordId_, dataSetRecordId) };


      // dataSetRecordValues Field Functions 
      bool hasDataSetRecordValues() const { return this->dataSetRecordValues_ != nullptr;};
      void deleteDataSetRecordValues() { this->dataSetRecordValues_ = nullptr;};
      inline string getDataSetRecordValues() const { DARABONBA_PTR_GET_DEFAULT(dataSetRecordValues_, "") };
      inline DataSetRecords& setDataSetRecordValues(string dataSetRecordValues) { DARABONBA_PTR_SET_VALUE(dataSetRecordValues_, dataSetRecordValues) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline DataSetRecords& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> dataSetId_ {};
      shared_ptr<string> dataSetName_ {};
      shared_ptr<string> dataSetRecordId_ {};
      shared_ptr<string> dataSetRecordValues_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->dataSetRecords_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // dataSetRecords Field Functions 
    bool hasDataSetRecords() const { return this->dataSetRecords_ != nullptr;};
    void deleteDataSetRecords() { this->dataSetRecords_ = nullptr;};
    inline const vector<ListDataSetRecordsResponseBody::DataSetRecords> & getDataSetRecords() const { DARABONBA_PTR_GET_CONST(dataSetRecords_, vector<ListDataSetRecordsResponseBody::DataSetRecords>) };
    inline vector<ListDataSetRecordsResponseBody::DataSetRecords> getDataSetRecords() { DARABONBA_PTR_GET(dataSetRecords_, vector<ListDataSetRecordsResponseBody::DataSetRecords>) };
    inline ListDataSetRecordsResponseBody& setDataSetRecords(const vector<ListDataSetRecordsResponseBody::DataSetRecords> & dataSetRecords) { DARABONBA_PTR_SET_VALUE(dataSetRecords_, dataSetRecords) };
    inline ListDataSetRecordsResponseBody& setDataSetRecords(vector<ListDataSetRecordsResponseBody::DataSetRecords> && dataSetRecords) { DARABONBA_PTR_SET_RVALUE(dataSetRecords_, dataSetRecords) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataSetRecordsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataSetRecordsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataSetRecordsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataSetRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSetRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataSetRecordsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDataSetRecordsResponseBody::DataSetRecords>> dataSetRecords_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
