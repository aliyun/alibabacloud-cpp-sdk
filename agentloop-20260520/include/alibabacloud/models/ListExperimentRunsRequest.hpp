// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPERIMENTRUNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPERIMENTRUNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListExperimentRunsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExperimentRunsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(experimentName, experimentName_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(planName, planName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListExperimentRunsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(experimentName, experimentName_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(planName, planName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListExperimentRunsRequest() = default ;
    ListExperimentRunsRequest(const ListExperimentRunsRequest &) = default ;
    ListExperimentRunsRequest(ListExperimentRunsRequest &&) = default ;
    ListExperimentRunsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExperimentRunsRequest() = default ;
    ListExperimentRunsRequest& operator=(const ListExperimentRunsRequest &) = default ;
    ListExperimentRunsRequest& operator=(ListExperimentRunsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->experimentName_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->planName_ == nullptr && this->status_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline ListExperimentRunsRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // experimentName Field Functions 
    bool hasExperimentName() const { return this->experimentName_ != nullptr;};
    void deleteExperimentName() { this->experimentName_ = nullptr;};
    inline string getExperimentName() const { DARABONBA_PTR_GET_DEFAULT(experimentName_, "") };
    inline ListExperimentRunsRequest& setExperimentName(string experimentName) { DARABONBA_PTR_SET_VALUE(experimentName_, experimentName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExperimentRunsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExperimentRunsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListExperimentRunsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExperimentRunsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline ListExperimentRunsRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExperimentRunsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Filters results by exact dataset ID.
    shared_ptr<string> datasetId_ {};
    // Filters results by fuzzy match on the experiment configuration name.
    shared_ptr<string> experimentName_ {};
    // Optional. Use `page` and `pageSize` for pagination instead.
    shared_ptr<int32_t> maxResults_ {};
    // Optional. Use `page` and `pageSize` for pagination instead.
    shared_ptr<string> nextToken_ {};
    // The page number, starting from 0. Default value: 0.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // Filters results by fuzzy match on experiment plan name.
    shared_ptr<string> planName_ {};
    // Filters results by status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
