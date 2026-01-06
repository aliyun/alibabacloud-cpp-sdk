// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPERIMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPERIMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Experiment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListExperimentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExperimentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Experiments, experiments_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExperimentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Experiments, experiments_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListExperimentResponseBody() = default ;
    ListExperimentResponseBody(const ListExperimentResponseBody &) = default ;
    ListExperimentResponseBody(ListExperimentResponseBody &&) = default ;
    ListExperimentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExperimentResponseBody() = default ;
    ListExperimentResponseBody& operator=(const ListExperimentResponseBody &) = default ;
    ListExperimentResponseBody& operator=(ListExperimentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->experiments_ == nullptr
        && this->nextPageToken_ == nullptr && this->totalCount_ == nullptr && this->requestId_ == nullptr; };
    // experiments Field Functions 
    bool hasExperiments() const { return this->experiments_ != nullptr;};
    void deleteExperiments() { this->experiments_ = nullptr;};
    inline const vector<Experiment> & getExperiments() const { DARABONBA_PTR_GET_CONST(experiments_, vector<Experiment>) };
    inline vector<Experiment> getExperiments() { DARABONBA_PTR_GET(experiments_, vector<Experiment>) };
    inline ListExperimentResponseBody& setExperiments(const vector<Experiment> & experiments) { DARABONBA_PTR_SET_VALUE(experiments_, experiments) };
    inline ListExperimentResponseBody& setExperiments(vector<Experiment> && experiments) { DARABONBA_PTR_SET_RVALUE(experiments_, experiments) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline int64_t getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, 0L) };
    inline ListExperimentResponseBody& setNextPageToken(int64_t nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListExperimentResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExperimentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of experiments.
    shared_ptr<vector<Experiment>> experiments_ {};
    // The pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<int64_t> nextPageToken_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
