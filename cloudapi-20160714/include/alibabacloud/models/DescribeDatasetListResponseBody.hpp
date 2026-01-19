// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASETLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASETLISTRESPONSEBODY_HPP_
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
  class DescribeDatasetListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatasetListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetInfoList, datasetInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatasetListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetInfoList, datasetInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDatasetListResponseBody() = default ;
    DescribeDatasetListResponseBody(const DescribeDatasetListResponseBody &) = default ;
    DescribeDatasetListResponseBody(DescribeDatasetListResponseBody &&) = default ;
    DescribeDatasetListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatasetListResponseBody() = default ;
    DescribeDatasetListResponseBody& operator=(const DescribeDatasetListResponseBody &) = default ;
    DescribeDatasetListResponseBody& operator=(DescribeDatasetListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatasetInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatasetInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, DatasetInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      DatasetInfoList() = default ;
      DatasetInfoList(const DatasetInfoList &) = default ;
      DatasetInfoList(DatasetInfoList &&) = default ;
      DatasetInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatasetInfoList() = default ;
      DatasetInfoList& operator=(const DatasetInfoList &) = default ;
      DatasetInfoList& operator=(DatasetInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The value of the tag.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->datasetId_ == nullptr && this->datasetName_ == nullptr && this->datasetType_ == nullptr && this->description_ == nullptr && this->modifiedTime_ == nullptr
        && this->tags_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline DatasetInfoList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline DatasetInfoList& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // datasetName Field Functions 
      bool hasDatasetName() const { return this->datasetName_ != nullptr;};
      void deleteDatasetName() { this->datasetName_ = nullptr;};
      inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
      inline DatasetInfoList& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


      // datasetType Field Functions 
      bool hasDatasetType() const { return this->datasetType_ != nullptr;};
      void deleteDatasetType() { this->datasetType_ = nullptr;};
      inline string getDatasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
      inline DatasetInfoList& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DatasetInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline DatasetInfoList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<DatasetInfoList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DatasetInfoList::Tags>) };
      inline vector<DatasetInfoList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DatasetInfoList::Tags>) };
      inline DatasetInfoList& setTags(const vector<DatasetInfoList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DatasetInfoList& setTags(vector<DatasetInfoList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The time when the dataset was created. The time is displayed in UTC.
      shared_ptr<string> createdTime_ {};
      // The dataset ID.
      shared_ptr<string> datasetId_ {};
      // The dataset name.
      shared_ptr<string> datasetName_ {};
      // The dataset type. Valid values:
      // 
      // *   JWT_BLOCKING : a JSON Web Token (JWT) blacklist
      // *   IP_WHITELIST_CIDR : an IP address whitelist
      // *   PARAMETER_ACCESS: a list of parameters for parameter-based access control
      shared_ptr<string> datasetType_ {};
      shared_ptr<string> description_ {};
      // The time when the dataset was last modified. The time is displayed in UTC.
      shared_ptr<string> modifiedTime_ {};
      // The tags.
      shared_ptr<vector<DatasetInfoList::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->datasetInfoList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // datasetInfoList Field Functions 
    bool hasDatasetInfoList() const { return this->datasetInfoList_ != nullptr;};
    void deleteDatasetInfoList() { this->datasetInfoList_ = nullptr;};
    inline const vector<DescribeDatasetListResponseBody::DatasetInfoList> & getDatasetInfoList() const { DARABONBA_PTR_GET_CONST(datasetInfoList_, vector<DescribeDatasetListResponseBody::DatasetInfoList>) };
    inline vector<DescribeDatasetListResponseBody::DatasetInfoList> getDatasetInfoList() { DARABONBA_PTR_GET(datasetInfoList_, vector<DescribeDatasetListResponseBody::DatasetInfoList>) };
    inline DescribeDatasetListResponseBody& setDatasetInfoList(const vector<DescribeDatasetListResponseBody::DatasetInfoList> & datasetInfoList) { DARABONBA_PTR_SET_VALUE(datasetInfoList_, datasetInfoList) };
    inline DescribeDatasetListResponseBody& setDatasetInfoList(vector<DescribeDatasetListResponseBody::DatasetInfoList> && datasetInfoList) { DARABONBA_PTR_SET_RVALUE(datasetInfoList_, datasetInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatasetListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDatasetListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatasetListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDatasetListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned dataset information. It is an array consisting of datasetinfo.
    shared_ptr<vector<DescribeDatasetListResponseBody::DatasetInfoList>> datasetInfoList_ {};
    // The number of the page to return. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
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
