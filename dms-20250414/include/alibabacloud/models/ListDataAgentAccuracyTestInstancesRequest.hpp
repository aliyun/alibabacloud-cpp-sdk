// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAAGENTACCURACYTESTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAAGENTACCURACYTESTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDataAgentAccuracyTestInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAgentAccuracyTestInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccuracyTestInsId, accuracyTestInsId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAgentAccuracyTestInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccuracyTestInsId, accuracyTestInsId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDataAgentAccuracyTestInstancesRequest() = default ;
    ListDataAgentAccuracyTestInstancesRequest(const ListDataAgentAccuracyTestInstancesRequest &) = default ;
    ListDataAgentAccuracyTestInstancesRequest(ListDataAgentAccuracyTestInstancesRequest &&) = default ;
    ListDataAgentAccuracyTestInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAgentAccuracyTestInstancesRequest() = default ;
    ListDataAgentAccuracyTestInstancesRequest& operator=(const ListDataAgentAccuracyTestInstancesRequest &) = default ;
    ListDataAgentAccuracyTestInstancesRequest& operator=(ListDataAgentAccuracyTestInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accuracyTestInsId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->workspaceId_ == nullptr; };
    // accuracyTestInsId Field Functions 
    bool hasAccuracyTestInsId() const { return this->accuracyTestInsId_ != nullptr;};
    void deleteAccuracyTestInsId() { this->accuracyTestInsId_ = nullptr;};
    inline string getAccuracyTestInsId() const { DARABONBA_PTR_GET_DEFAULT(accuracyTestInsId_, "") };
    inline ListDataAgentAccuracyTestInstancesRequest& setAccuracyTestInsId(string accuracyTestInsId) { DARABONBA_PTR_SET_VALUE(accuracyTestInsId_, accuracyTestInsId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataAgentAccuracyTestInstancesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataAgentAccuracyTestInstancesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDataAgentAccuracyTestInstancesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDataAgentAccuracyTestInstancesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDataAgentAccuracyTestInstancesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The accuracy test instance ID.
    shared_ptr<string> accuracyTestInsId_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
