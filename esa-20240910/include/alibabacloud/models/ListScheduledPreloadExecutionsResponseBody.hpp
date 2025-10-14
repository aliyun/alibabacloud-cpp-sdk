// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEDPRELOADEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEDPRELOADEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListScheduledPreloadExecutionsResponseBodyExecutions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListScheduledPreloadExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduledPreloadExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Executions, executions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduledPreloadExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Executions, executions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListScheduledPreloadExecutionsResponseBody() = default ;
    ListScheduledPreloadExecutionsResponseBody(const ListScheduledPreloadExecutionsResponseBody &) = default ;
    ListScheduledPreloadExecutionsResponseBody(ListScheduledPreloadExecutionsResponseBody &&) = default ;
    ListScheduledPreloadExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduledPreloadExecutionsResponseBody() = default ;
    ListScheduledPreloadExecutionsResponseBody& operator=(const ListScheduledPreloadExecutionsResponseBody &) = default ;
    ListScheduledPreloadExecutionsResponseBody& operator=(ListScheduledPreloadExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executions_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // executions Field Functions 
    bool hasExecutions() const { return this->executions_ != nullptr;};
    void deleteExecutions() { this->executions_ = nullptr;};
    inline const vector<ListScheduledPreloadExecutionsResponseBodyExecutions> & executions() const { DARABONBA_PTR_GET_CONST(executions_, vector<ListScheduledPreloadExecutionsResponseBodyExecutions>) };
    inline vector<ListScheduledPreloadExecutionsResponseBodyExecutions> executions() { DARABONBA_PTR_GET(executions_, vector<ListScheduledPreloadExecutionsResponseBodyExecutions>) };
    inline ListScheduledPreloadExecutionsResponseBody& setExecutions(const vector<ListScheduledPreloadExecutionsResponseBodyExecutions> & executions) { DARABONBA_PTR_SET_VALUE(executions_, executions) };
    inline ListScheduledPreloadExecutionsResponseBody& setExecutions(vector<ListScheduledPreloadExecutionsResponseBodyExecutions> && executions) { DARABONBA_PTR_SET_RVALUE(executions_, executions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScheduledPreloadExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListScheduledPreloadExecutionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about prefetch plans returned.
    std::shared_ptr<vector<ListScheduledPreloadExecutionsResponseBodyExecutions>> executions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
