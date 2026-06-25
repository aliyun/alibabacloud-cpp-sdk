// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETFILEMETASSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETFILEMETASSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetDatasetFileMetasStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetFileMetasStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregateBy, aggregateBy_);
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetFileMetasStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregateBy, aggregateBy_);
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetDatasetFileMetasStatisticsRequest() = default ;
    GetDatasetFileMetasStatisticsRequest(const GetDatasetFileMetasStatisticsRequest &) = default ;
    GetDatasetFileMetasStatisticsRequest(GetDatasetFileMetasStatisticsRequest &&) = default ;
    GetDatasetFileMetasStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetFileMetasStatisticsRequest() = default ;
    GetDatasetFileMetasStatisticsRequest& operator=(const GetDatasetFileMetasStatisticsRequest &) = default ;
    GetDatasetFileMetasStatisticsRequest& operator=(GetDatasetFileMetasStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregateBy_ == nullptr
        && this->datasetVersion_ == nullptr && this->maxResults_ == nullptr && this->workspaceId_ == nullptr; };
    // aggregateBy Field Functions 
    bool hasAggregateBy() const { return this->aggregateBy_ != nullptr;};
    void deleteAggregateBy() { this->aggregateBy_ = nullptr;};
    inline string getAggregateBy() const { DARABONBA_PTR_GET_DEFAULT(aggregateBy_, "") };
    inline GetDatasetFileMetasStatisticsRequest& setAggregateBy(string aggregateBy) { DARABONBA_PTR_SET_VALUE(aggregateBy_, aggregateBy) };


    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string getDatasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline GetDatasetFileMetasStatisticsRequest& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetDatasetFileMetasStatisticsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetDatasetFileMetasStatisticsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The metadata field used for statistical aggregation. The value is not case-sensitive. If you do not specify this parameter, the total number of file metadata entries in the dataset is returned, and the aggregation list is not returned.
    // Valid values:
    // 
    // - filedir: The directory path of the file.
    // 
    // - filetype: The file type.
    // 
    // - tags.user: Custom user tags.
    // 
    // - tags.user-delete-ai-tags: Algorithm tags deleted by the user.
    // 
    // - tags.ai: Algorithm tags that are aggregated from all labeling tasks.
    // 
    // - tags.all: A combination of algorithm tags and custom user tags, excluding any algorithm tags deleted by the user.
    shared_ptr<string> aggregateBy_ {};
    // The name of the dataset version.
    // 
    // This parameter is required.
    shared_ptr<string> datasetVersion_ {};
    // The maximum number of results to return for each query that uses the NextToken parameter. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The workspace ID. For more information about how to obtain a workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
