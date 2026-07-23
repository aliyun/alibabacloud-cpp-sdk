// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPERIMENTPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPERIMENTPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExperimentPlanData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListExperimentPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExperimentPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(plans, plans_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListExperimentPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(plans, plans_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListExperimentPlansResponseBody() = default ;
    ListExperimentPlansResponseBody(const ListExperimentPlansResponseBody &) = default ;
    ListExperimentPlansResponseBody(ListExperimentPlansResponseBody &&) = default ;
    ListExperimentPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExperimentPlansResponseBody() = default ;
    ListExperimentPlansResponseBody& operator=(const ListExperimentPlansResponseBody &) = default ;
    ListExperimentPlansResponseBody& operator=(ListExperimentPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->plans_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExperimentPlansResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExperimentPlansResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListExperimentPlansResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExperimentPlansResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // plans Field Functions 
    bool hasPlans() const { return this->plans_ != nullptr;};
    void deletePlans() { this->plans_ = nullptr;};
    inline const vector<ExperimentPlanData> & getPlans() const { DARABONBA_PTR_GET_CONST(plans_, vector<ExperimentPlanData>) };
    inline vector<ExperimentPlanData> getPlans() { DARABONBA_PTR_GET(plans_, vector<ExperimentPlanData>) };
    inline ListExperimentPlansResponseBody& setPlans(const vector<ExperimentPlanData> & plans) { DARABONBA_PTR_SET_VALUE(plans_, plans) };
    inline ListExperimentPlansResponseBody& setPlans(vector<ExperimentPlanData> && plans) { DARABONBA_PTR_SET_RVALUE(plans_, plans) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExperimentPlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListExperimentPlansResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The list of experiment plan summaries.
    shared_ptr<vector<ExperimentPlanData>> plans_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records that match the filter criteria.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
