// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASETITEMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASETITEMLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDatasetItemListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatasetItemListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetItemInfoList, datasetItemInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatasetItemListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetItemInfoList, datasetItemInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDatasetItemListResponseBody() = default ;
    DescribeDatasetItemListResponseBody(const DescribeDatasetItemListResponseBody &) = default ;
    DescribeDatasetItemListResponseBody(DescribeDatasetItemListResponseBody &&) = default ;
    DescribeDatasetItemListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatasetItemListResponseBody() = default ;
    DescribeDatasetItemListResponseBody& operator=(const DescribeDatasetItemListResponseBody &) = default ;
    DescribeDatasetItemListResponseBody& operator=(DescribeDatasetItemListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatasetItemInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatasetItemInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(DatasetItemId, datasetItemId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, DatasetItemInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(DatasetItemId, datasetItemId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      DatasetItemInfoList() = default ;
      DatasetItemInfoList(const DatasetItemInfoList &) = default ;
      DatasetItemInfoList(DatasetItemInfoList &&) = default ;
      DatasetItemInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatasetItemInfoList() = default ;
      DatasetItemInfoList& operator=(const DatasetItemInfoList &) = default ;
      DatasetItemInfoList& operator=(DatasetItemInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->datasetId_ == nullptr && this->datasetItemId_ == nullptr && this->description_ == nullptr && this->expiredTime_ == nullptr && this->modifiedTime_ == nullptr
        && this->value_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline DatasetItemInfoList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline DatasetItemInfoList& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // datasetItemId Field Functions 
      bool hasDatasetItemId() const { return this->datasetItemId_ != nullptr;};
      void deleteDatasetItemId() { this->datasetItemId_ = nullptr;};
      inline string getDatasetItemId() const { DARABONBA_PTR_GET_DEFAULT(datasetItemId_, "") };
      inline DatasetItemInfoList& setDatasetItemId(string datasetItemId) { DARABONBA_PTR_SET_VALUE(datasetItemId_, datasetItemId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DatasetItemInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline DatasetItemInfoList& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline DatasetItemInfoList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline DatasetItemInfoList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The time when the data entry was created.
      shared_ptr<string> createdTime_ {};
      // The ID of the dataset.
      shared_ptr<string> datasetId_ {};
      // The ID of the data entry.
      shared_ptr<string> datasetItemId_ {};
      // The description of the data entry.
      shared_ptr<string> description_ {};
      // The time in UTC when the data entry expires. The time is in the **yyyy-MM-ddTHH:mm:ssZ** format. If this parameter is empty, the data entry does not expire.
      shared_ptr<string> expiredTime_ {};
      // The last modification time (UTC) of the data entry.
      shared_ptr<string> modifiedTime_ {};
      // The value of the data entry.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->datasetItemInfoList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // datasetItemInfoList Field Functions 
    bool hasDatasetItemInfoList() const { return this->datasetItemInfoList_ != nullptr;};
    void deleteDatasetItemInfoList() { this->datasetItemInfoList_ = nullptr;};
    inline const vector<DescribeDatasetItemListResponseBody::DatasetItemInfoList> & getDatasetItemInfoList() const { DARABONBA_PTR_GET_CONST(datasetItemInfoList_, vector<DescribeDatasetItemListResponseBody::DatasetItemInfoList>) };
    inline vector<DescribeDatasetItemListResponseBody::DatasetItemInfoList> getDatasetItemInfoList() { DARABONBA_PTR_GET(datasetItemInfoList_, vector<DescribeDatasetItemListResponseBody::DatasetItemInfoList>) };
    inline DescribeDatasetItemListResponseBody& setDatasetItemInfoList(const vector<DescribeDatasetItemListResponseBody::DatasetItemInfoList> & datasetItemInfoList) { DARABONBA_PTR_SET_VALUE(datasetItemInfoList_, datasetItemInfoList) };
    inline DescribeDatasetItemListResponseBody& setDatasetItemInfoList(vector<DescribeDatasetItemListResponseBody::DatasetItemInfoList> && datasetItemInfoList) { DARABONBA_PTR_SET_RVALUE(datasetItemInfoList_, datasetItemInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatasetItemListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDatasetItemListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatasetItemListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDatasetItemListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The Dataset information.
    shared_ptr<vector<DescribeDatasetItemListResponseBody::DatasetItemInfoList>> datasetItemInfoList_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
