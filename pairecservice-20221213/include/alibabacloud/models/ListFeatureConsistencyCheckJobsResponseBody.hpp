// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListFeatureConsistencyCheckJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureConsistencyCheckJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckJobs, featureConsistencyCheckJobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureConsistencyCheckJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckJobs, featureConsistencyCheckJobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFeatureConsistencyCheckJobsResponseBody() = default ;
    ListFeatureConsistencyCheckJobsResponseBody(const ListFeatureConsistencyCheckJobsResponseBody &) = default ;
    ListFeatureConsistencyCheckJobsResponseBody(ListFeatureConsistencyCheckJobsResponseBody &&) = default ;
    ListFeatureConsistencyCheckJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureConsistencyCheckJobsResponseBody() = default ;
    ListFeatureConsistencyCheckJobsResponseBody& operator=(const ListFeatureConsistencyCheckJobsResponseBody &) = default ;
    ListFeatureConsistencyCheckJobsResponseBody& operator=(ListFeatureConsistencyCheckJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureConsistencyCheckJobs_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // featureConsistencyCheckJobs Field Functions 
    bool hasFeatureConsistencyCheckJobs() const { return this->featureConsistencyCheckJobs_ != nullptr;};
    void deleteFeatureConsistencyCheckJobs() { this->featureConsistencyCheckJobs_ = nullptr;};
    inline const vector<ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs> & featureConsistencyCheckJobs() const { DARABONBA_PTR_GET_CONST(featureConsistencyCheckJobs_, vector<ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs>) };
    inline vector<ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs> featureConsistencyCheckJobs() { DARABONBA_PTR_GET(featureConsistencyCheckJobs_, vector<ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs>) };
    inline ListFeatureConsistencyCheckJobsResponseBody& setFeatureConsistencyCheckJobs(const vector<ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs> & featureConsistencyCheckJobs) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckJobs_, featureConsistencyCheckJobs) };
    inline ListFeatureConsistencyCheckJobsResponseBody& setFeatureConsistencyCheckJobs(vector<ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs> && featureConsistencyCheckJobs) { DARABONBA_PTR_SET_RVALUE(featureConsistencyCheckJobs_, featureConsistencyCheckJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureConsistencyCheckJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListFeatureConsistencyCheckJobsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListFeatureConsistencyCheckJobsResponseBodyFeatureConsistencyCheckJobs>> featureConsistencyCheckJobs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
