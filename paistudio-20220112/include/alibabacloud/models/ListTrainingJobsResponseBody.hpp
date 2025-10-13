// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrainingJobsResponseBodyTrainingJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrainingJobs, trainingJobs_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrainingJobs, trainingJobs_);
    };
    ListTrainingJobsResponseBody() = default ;
    ListTrainingJobsResponseBody(const ListTrainingJobsResponseBody &) = default ;
    ListTrainingJobsResponseBody(ListTrainingJobsResponseBody &&) = default ;
    ListTrainingJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobsResponseBody() = default ;
    ListTrainingJobsResponseBody& operator=(const ListTrainingJobsResponseBody &) = default ;
    ListTrainingJobsResponseBody& operator=(ListTrainingJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->trainingJobs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrainingJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTrainingJobsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trainingJobs Field Functions 
    bool hasTrainingJobs() const { return this->trainingJobs_ != nullptr;};
    void deleteTrainingJobs() { this->trainingJobs_ = nullptr;};
    inline const vector<ListTrainingJobsResponseBodyTrainingJobs> & trainingJobs() const { DARABONBA_PTR_GET_CONST(trainingJobs_, vector<ListTrainingJobsResponseBodyTrainingJobs>) };
    inline vector<ListTrainingJobsResponseBodyTrainingJobs> trainingJobs() { DARABONBA_PTR_GET(trainingJobs_, vector<ListTrainingJobsResponseBodyTrainingJobs>) };
    inline ListTrainingJobsResponseBody& setTrainingJobs(const vector<ListTrainingJobsResponseBodyTrainingJobs> & trainingJobs) { DARABONBA_PTR_SET_VALUE(trainingJobs_, trainingJobs) };
    inline ListTrainingJobsResponseBody& setTrainingJobs(vector<ListTrainingJobsResponseBodyTrainingJobs> && trainingJobs) { DARABONBA_PTR_SET_RVALUE(trainingJobs_, trainingJobs) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<vector<ListTrainingJobsResponseBodyTrainingJobs>> trainingJobs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
