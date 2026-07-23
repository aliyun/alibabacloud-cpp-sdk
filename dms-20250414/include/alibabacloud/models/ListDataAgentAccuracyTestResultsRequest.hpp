// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAAGENTACCURACYTESTRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAAGENTACCURACYTESTRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDataAgentAccuracyTestResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAgentAccuracyTestResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccuracyTestInsId, accuracyTestInsId_);
      DARABONBA_PTR_TO_JSON(AccuracyTestResultId, accuracyTestResultId_);
      DARABONBA_PTR_TO_JSON(AccuracyTestSubtaskId, accuracyTestSubtaskId_);
      DARABONBA_PTR_TO_JSON(AccuracyTestTaskId, accuracyTestTaskId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAgentAccuracyTestResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccuracyTestInsId, accuracyTestInsId_);
      DARABONBA_PTR_FROM_JSON(AccuracyTestResultId, accuracyTestResultId_);
      DARABONBA_PTR_FROM_JSON(AccuracyTestSubtaskId, accuracyTestSubtaskId_);
      DARABONBA_PTR_FROM_JSON(AccuracyTestTaskId, accuracyTestTaskId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDataAgentAccuracyTestResultsRequest() = default ;
    ListDataAgentAccuracyTestResultsRequest(const ListDataAgentAccuracyTestResultsRequest &) = default ;
    ListDataAgentAccuracyTestResultsRequest(ListDataAgentAccuracyTestResultsRequest &&) = default ;
    ListDataAgentAccuracyTestResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAgentAccuracyTestResultsRequest() = default ;
    ListDataAgentAccuracyTestResultsRequest& operator=(const ListDataAgentAccuracyTestResultsRequest &) = default ;
    ListDataAgentAccuracyTestResultsRequest& operator=(ListDataAgentAccuracyTestResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accuracyTestInsId_ == nullptr
        && this->accuracyTestResultId_ == nullptr && this->accuracyTestSubtaskId_ == nullptr && this->accuracyTestTaskId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->workspaceId_ == nullptr; };
    // accuracyTestInsId Field Functions 
    bool hasAccuracyTestInsId() const { return this->accuracyTestInsId_ != nullptr;};
    void deleteAccuracyTestInsId() { this->accuracyTestInsId_ = nullptr;};
    inline string getAccuracyTestInsId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestInsId_, "") };
    inline ListDataAgentAccuracyTestResultsRequest& setAccuracyTestInsId(string accuracyTestInsId) { DARABONBA_PTR_SET_VALUE(accuracyTestInsId_, accuracyTestInsId) };


    // accuracyTestResultId Field Functions 
    bool hasAccuracyTestResultId() const { return this->accuracyTestResultId_ != nullptr;};
    void deleteAccuracyTestResultId() { this->accuracyTestResultId_ = nullptr;};
    inline string getAccuracyTestResultId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestResultId_, "") };
    inline ListDataAgentAccuracyTestResultsRequest& setAccuracyTestResultId(string accuracyTestResultId) { DARABONBA_PTR_SET_VALUE(accuracyTestResultId_, accuracyTestResultId) };


    // accuracyTestSubtaskId Field Functions 
    bool hasAccuracyTestSubtaskId() const { return this->accuracyTestSubtaskId_ != nullptr;};
    void deleteAccuracyTestSubtaskId() { this->accuracyTestSubtaskId_ = nullptr;};
    inline string getAccuracyTestSubtaskId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestSubtaskId_, "") };
    inline ListDataAgentAccuracyTestResultsRequest& setAccuracyTestSubtaskId(string accuracyTestSubtaskId) { DARABONBA_PTR_SET_VALUE(accuracyTestSubtaskId_, accuracyTestSubtaskId) };


    // accuracyTestTaskId Field Functions 
    bool hasAccuracyTestTaskId() const { return this->accuracyTestTaskId_ != nullptr;};
    void deleteAccuracyTestTaskId() { this->accuracyTestTaskId_ = nullptr;};
    inline string getAccuracyTestTaskId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestTaskId_, "") };
    inline ListDataAgentAccuracyTestResultsRequest& setAccuracyTestTaskId(string accuracyTestTaskId) { DARABONBA_PTR_SET_VALUE(accuracyTestTaskId_, accuracyTestTaskId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataAgentAccuracyTestResultsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataAgentAccuracyTestResultsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDataAgentAccuracyTestResultsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDataAgentAccuracyTestResultsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDataAgentAccuracyTestResultsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDataAgentAccuracyTestResultsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The instance ID of the accuracy test.
    shared_ptr<string> accuracyTestInsId_ {};
    // The result ID used to retrieve a single record.
    shared_ptr<string> accuracyTestResultId_ {};
    // The subtask ID used to filter results.
    shared_ptr<string> accuracyTestSubtaskId_ {};
    // The ID of the accuracy test task.
    shared_ptr<string> accuracyTestTaskId_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
