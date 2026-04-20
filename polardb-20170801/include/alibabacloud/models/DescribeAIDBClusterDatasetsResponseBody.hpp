// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERDATASETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERDATASETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterDatasetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterDatasetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContinuationToken, continuationToken_);
      DARABONBA_PTR_TO_JSON(DataServiceId, dataServiceId_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetMode, datasetMode_);
      DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_TO_JSON(Datasets, datasets_);
      DARABONBA_PTR_TO_JSON(FileCount, fileCount_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(NextContinuationToken, nextContinuationToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RelativeDBClusterId, relativeDBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterDatasetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContinuationToken, continuationToken_);
      DARABONBA_PTR_FROM_JSON(DataServiceId, dataServiceId_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetMode, datasetMode_);
      DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_FROM_JSON(Datasets, datasets_);
      DARABONBA_PTR_FROM_JSON(FileCount, fileCount_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(NextContinuationToken, nextContinuationToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RelativeDBClusterId, relativeDBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
    };
    DescribeAIDBClusterDatasetsResponseBody() = default ;
    DescribeAIDBClusterDatasetsResponseBody(const DescribeAIDBClusterDatasetsResponseBody &) = default ;
    DescribeAIDBClusterDatasetsResponseBody(DescribeAIDBClusterDatasetsResponseBody &&) = default ;
    DescribeAIDBClusterDatasetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterDatasetsResponseBody() = default ;
    DescribeAIDBClusterDatasetsResponseBody& operator=(const DescribeAIDBClusterDatasetsResponseBody &) = default ;
    DescribeAIDBClusterDatasetsResponseBody& operator=(DescribeAIDBClusterDatasetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Datasets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datasets& obj) { 
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(TrainMode, trainMode_);
      };
      friend void from_json(const Darabonba::Json& j, Datasets& obj) { 
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(TrainMode, trainMode_);
      };
      Datasets() = default ;
      Datasets(const Datasets &) = default ;
      Datasets(Datasets &&) = default ;
      Datasets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datasets() = default ;
      Datasets& operator=(const Datasets &) = default ;
      Datasets& operator=(Datasets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->capacity_ == nullptr && this->creationTime_ == nullptr && this->datasetId_ == nullptr && this->datasetType_ == nullptr && this->fileName_ == nullptr
        && this->lastModified_ == nullptr && this->path_ == nullptr && this->storageType_ == nullptr && this->trainMode_ == nullptr; };
      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Datasets& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline string getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, "") };
      inline Datasets& setCapacity(string capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Datasets& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline Datasets& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // datasetType Field Functions 
      bool hasDatasetType() const { return this->datasetType_ != nullptr;};
      void deleteDatasetType() { this->datasetType_ = nullptr;};
      inline string getDatasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
      inline Datasets& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Datasets& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline Datasets& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Datasets& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Datasets& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // trainMode Field Functions 
      bool hasTrainMode() const { return this->trainMode_ != nullptr;};
      void deleteTrainMode() { this->trainMode_ = nullptr;};
      inline string getTrainMode() const { DARABONBA_PTR_GET_DEFAULT(trainMode_, "") };
      inline Datasets& setTrainMode(string trainMode) { DARABONBA_PTR_SET_VALUE(trainMode_, trainMode) };


    protected:
      shared_ptr<string> bucketName_ {};
      shared_ptr<string> capacity_ {};
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> datasetId_ {};
      shared_ptr<string> datasetType_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> lastModified_ {};
      shared_ptr<string> path_ {};
      shared_ptr<string> storageType_ {};
      shared_ptr<string> trainMode_ {};
    };

    virtual bool empty() const override { return this->continuationToken_ == nullptr
        && this->dataServiceId_ == nullptr && this->datasetId_ == nullptr && this->datasetMode_ == nullptr && this->datasetType_ == nullptr && this->datasets_ == nullptr
        && this->fileCount_ == nullptr && this->isTruncated_ == nullptr && this->nextContinuationToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->relativeDBClusterId_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalRecords_ == nullptr; };
    // continuationToken Field Functions 
    bool hasContinuationToken() const { return this->continuationToken_ != nullptr;};
    void deleteContinuationToken() { this->continuationToken_ = nullptr;};
    inline string getContinuationToken() const { DARABONBA_PTR_GET_DEFAULT(continuationToken_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setContinuationToken(string continuationToken) { DARABONBA_PTR_SET_VALUE(continuationToken_, continuationToken) };


    // dataServiceId Field Functions 
    bool hasDataServiceId() const { return this->dataServiceId_ != nullptr;};
    void deleteDataServiceId() { this->dataServiceId_ = nullptr;};
    inline string getDataServiceId() const { DARABONBA_PTR_GET_DEFAULT(dataServiceId_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setDataServiceId(string dataServiceId) { DARABONBA_PTR_SET_VALUE(dataServiceId_, dataServiceId) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetMode Field Functions 
    bool hasDatasetMode() const { return this->datasetMode_ != nullptr;};
    void deleteDatasetMode() { this->datasetMode_ = nullptr;};
    inline string getDatasetMode() const { DARABONBA_PTR_GET_DEFAULT(datasetMode_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setDatasetMode(string datasetMode) { DARABONBA_PTR_SET_VALUE(datasetMode_, datasetMode) };


    // datasetType Field Functions 
    bool hasDatasetType() const { return this->datasetType_ != nullptr;};
    void deleteDatasetType() { this->datasetType_ = nullptr;};
    inline string getDatasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


    // datasets Field Functions 
    bool hasDatasets() const { return this->datasets_ != nullptr;};
    void deleteDatasets() { this->datasets_ = nullptr;};
    inline const vector<DescribeAIDBClusterDatasetsResponseBody::Datasets> & getDatasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<DescribeAIDBClusterDatasetsResponseBody::Datasets>) };
    inline vector<DescribeAIDBClusterDatasetsResponseBody::Datasets> getDatasets() { DARABONBA_PTR_GET(datasets_, vector<DescribeAIDBClusterDatasetsResponseBody::Datasets>) };
    inline DescribeAIDBClusterDatasetsResponseBody& setDatasets(const vector<DescribeAIDBClusterDatasetsResponseBody::Datasets> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
    inline DescribeAIDBClusterDatasetsResponseBody& setDatasets(vector<DescribeAIDBClusterDatasetsResponseBody::Datasets> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


    // fileCount Field Functions 
    bool hasFileCount() const { return this->fileCount_ != nullptr;};
    void deleteFileCount() { this->fileCount_ = nullptr;};
    inline string getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setFileCount(string fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline DescribeAIDBClusterDatasetsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // nextContinuationToken Field Functions 
    bool hasNextContinuationToken() const { return this->nextContinuationToken_ != nullptr;};
    void deleteNextContinuationToken() { this->nextContinuationToken_ = nullptr;};
    inline string getNextContinuationToken() const { DARABONBA_PTR_GET_DEFAULT(nextContinuationToken_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setNextContinuationToken(string nextContinuationToken) { DARABONBA_PTR_SET_VALUE(nextContinuationToken_, nextContinuationToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // relativeDBClusterId Field Functions 
    bool hasRelativeDBClusterId() const { return this->relativeDBClusterId_ != nullptr;};
    void deleteRelativeDBClusterId() { this->relativeDBClusterId_ = nullptr;};
    inline string getRelativeDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativeDBClusterId_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setRelativeDBClusterId(string relativeDBClusterId) { DARABONBA_PTR_SET_VALUE(relativeDBClusterId_, relativeDBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalRecords Field Functions 
    bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
    void deleteTotalRecords() { this->totalRecords_ = nullptr;};
    inline string getTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, "") };
    inline DescribeAIDBClusterDatasetsResponseBody& setTotalRecords(string totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


  protected:
    shared_ptr<string> continuationToken_ {};
    shared_ptr<string> dataServiceId_ {};
    shared_ptr<string> datasetId_ {};
    shared_ptr<string> datasetMode_ {};
    shared_ptr<string> datasetType_ {};
    shared_ptr<vector<DescribeAIDBClusterDatasetsResponseBody::Datasets>> datasets_ {};
    shared_ptr<string> fileCount_ {};
    shared_ptr<bool> isTruncated_ {};
    shared_ptr<string> nextContinuationToken_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> relativeDBClusterId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
    shared_ptr<string> totalRecords_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
