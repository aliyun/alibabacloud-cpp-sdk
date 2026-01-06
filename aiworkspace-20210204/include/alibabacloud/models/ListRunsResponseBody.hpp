// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRUNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Run.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(Runs, runs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(Runs, runs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListRunsResponseBody() = default ;
    ListRunsResponseBody(const ListRunsResponseBody &) = default ;
    ListRunsResponseBody(ListRunsResponseBody &&) = default ;
    ListRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRunsResponseBody() = default ;
    ListRunsResponseBody& operator=(const ListRunsResponseBody &) = default ;
    ListRunsResponseBody& operator=(ListRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && this->runs_ == nullptr && this->totalCount_ == nullptr && this->requestId_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline int64_t getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, 0L) };
    inline ListRunsResponseBody& setNextPageToken(int64_t nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // runs Field Functions 
    bool hasRuns() const { return this->runs_ != nullptr;};
    void deleteRuns() { this->runs_ = nullptr;};
    inline const vector<Run> & getRuns() const { DARABONBA_PTR_GET_CONST(runs_, vector<Run>) };
    inline vector<Run> getRuns() { DARABONBA_PTR_GET(runs_, vector<Run>) };
    inline ListRunsResponseBody& setRuns(const vector<Run> & runs) { DARABONBA_PTR_SET_VALUE(runs_, runs) };
    inline ListRunsResponseBody& setRuns(vector<Run> && runs) { DARABONBA_PTR_SET_RVALUE(runs_, runs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRunsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRunsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination token that is used to retrieve the next page. You do not need to specify this parameter for the first request. You must specify the pagination token in the result of the previous query. If the pagination token is 0, no next page exists. You can obtain the pagination token that is used to retrieve the next page in the value of the **NextPageToken** field.
    shared_ptr<int64_t> nextPageToken_ {};
    // The runs.
    shared_ptr<vector<Run>> runs_ {};
    // The total number of entries returned. By default, this parameter is not returned.
    shared_ptr<int64_t> totalCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
