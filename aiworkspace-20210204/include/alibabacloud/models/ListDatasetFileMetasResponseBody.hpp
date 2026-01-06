// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETFILEMETASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETFILEMETASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatasetFileMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListDatasetFileMetasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetFileMetasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetFileMetas, datasetFileMetas_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetFileMetasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetFileMetas, datasetFileMetas_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDatasetFileMetasResponseBody() = default ;
    ListDatasetFileMetasResponseBody(const ListDatasetFileMetasResponseBody &) = default ;
    ListDatasetFileMetasResponseBody(ListDatasetFileMetasResponseBody &&) = default ;
    ListDatasetFileMetasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetFileMetasResponseBody() = default ;
    ListDatasetFileMetasResponseBody& operator=(const ListDatasetFileMetasResponseBody &) = default ;
    ListDatasetFileMetasResponseBody& operator=(ListDatasetFileMetasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetFileMetas_ == nullptr
        && this->datasetId_ == nullptr && this->datasetVersion_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr
        && this->totalCount_ == nullptr && this->workspaceId_ == nullptr; };
    // datasetFileMetas Field Functions 
    bool hasDatasetFileMetas() const { return this->datasetFileMetas_ != nullptr;};
    void deleteDatasetFileMetas() { this->datasetFileMetas_ = nullptr;};
    inline const vector<DatasetFileMeta> & getDatasetFileMetas() const { DARABONBA_PTR_GET_CONST(datasetFileMetas_, vector<DatasetFileMeta>) };
    inline vector<DatasetFileMeta> getDatasetFileMetas() { DARABONBA_PTR_GET(datasetFileMetas_, vector<DatasetFileMeta>) };
    inline ListDatasetFileMetasResponseBody& setDatasetFileMetas(const vector<DatasetFileMeta> & datasetFileMetas) { DARABONBA_PTR_SET_VALUE(datasetFileMetas_, datasetFileMetas) };
    inline ListDatasetFileMetasResponseBody& setDatasetFileMetas(vector<DatasetFileMeta> && datasetFileMetas) { DARABONBA_PTR_SET_RVALUE(datasetFileMetas_, datasetFileMetas) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline ListDatasetFileMetasResponseBody& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string getDatasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline ListDatasetFileMetasResponseBody& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDatasetFileMetasResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDatasetFileMetasResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetFileMetasResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDatasetFileMetasResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDatasetFileMetasResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The metadata records of the dataset files.
    shared_ptr<vector<DatasetFileMeta>> datasetFileMetas_ {};
    // The dataset ID.
    shared_ptr<string> datasetId_ {};
    // The dataset version.
    shared_ptr<string> datasetVersion_ {};
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. If the number of results exceeds the maximum number of entries allowed per page, a pagination token is returned. This token can be used as an input parameter to obtain the next page of results. If all results are obtained, no token is returned.
    shared_ptr<string> nextToken_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
