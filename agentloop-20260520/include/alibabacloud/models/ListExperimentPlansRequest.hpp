// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPERIMENTPLANSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPERIMENTPLANSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListExperimentPlansRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExperimentPlansRequest& obj) { 
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(offset, offset_);
      DARABONBA_PTR_TO_JSON(planName, planName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListExperimentPlansRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(offset, offset_);
      DARABONBA_PTR_FROM_JSON(planName, planName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListExperimentPlansRequest() = default ;
    ListExperimentPlansRequest(const ListExperimentPlansRequest &) = default ;
    ListExperimentPlansRequest(ListExperimentPlansRequest &&) = default ;
    ListExperimentPlansRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExperimentPlansRequest() = default ;
    ListExperimentPlansRequest& operator=(const ListExperimentPlansRequest &) = default ;
    ListExperimentPlansRequest& operator=(ListExperimentPlansRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->offset_ == nullptr && this->planName_ == nullptr && this->status_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListExperimentPlansRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExperimentPlansRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExperimentPlansRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline ListExperimentPlansRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline ListExperimentPlansRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExperimentPlansRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of entries to return. Default value: 20.
    shared_ptr<int32_t> limit_ {};
    // Optional. Use `offset` and `limit` for pagination instead.
    shared_ptr<int32_t> maxResults_ {};
    // Optional. Use `offset` and `limit` for pagination instead.
    shared_ptr<string> nextToken_ {};
    // The offset. Default value: 0.
    shared_ptr<int32_t> offset_ {};
    // Fuzzy match by plan name.
    shared_ptr<string> planName_ {};
    // Filters by exact status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
