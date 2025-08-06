// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTRATEGYEXECUTIONRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTRATEGYEXECUTIONRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStrategyExecutionRecordResponseBodyExecutionRecordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListStrategyExecutionRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStrategyExecutionRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionRecordList, executionRecordList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListStrategyExecutionRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionRecordList, executionRecordList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListStrategyExecutionRecordResponseBody() = default ;
    ListStrategyExecutionRecordResponseBody(const ListStrategyExecutionRecordResponseBody &) = default ;
    ListStrategyExecutionRecordResponseBody(ListStrategyExecutionRecordResponseBody &&) = default ;
    ListStrategyExecutionRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStrategyExecutionRecordResponseBody() = default ;
    ListStrategyExecutionRecordResponseBody& operator=(const ListStrategyExecutionRecordResponseBody &) = default ;
    ListStrategyExecutionRecordResponseBody& operator=(ListStrategyExecutionRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executionRecordList_ != nullptr
        && this->maxResults_ != nullptr && this->requestId_ != nullptr && this->total_ != nullptr; };
    // executionRecordList Field Functions 
    bool hasExecutionRecordList() const { return this->executionRecordList_ != nullptr;};
    void deleteExecutionRecordList() { this->executionRecordList_ = nullptr;};
    inline const vector<ListStrategyExecutionRecordResponseBodyExecutionRecordList> & executionRecordList() const { DARABONBA_PTR_GET_CONST(executionRecordList_, vector<ListStrategyExecutionRecordResponseBodyExecutionRecordList>) };
    inline vector<ListStrategyExecutionRecordResponseBodyExecutionRecordList> executionRecordList() { DARABONBA_PTR_GET(executionRecordList_, vector<ListStrategyExecutionRecordResponseBodyExecutionRecordList>) };
    inline ListStrategyExecutionRecordResponseBody& setExecutionRecordList(const vector<ListStrategyExecutionRecordResponseBodyExecutionRecordList> & executionRecordList) { DARABONBA_PTR_SET_VALUE(executionRecordList_, executionRecordList) };
    inline ListStrategyExecutionRecordResponseBody& setExecutionRecordList(vector<ListStrategyExecutionRecordResponseBodyExecutionRecordList> && executionRecordList) { DARABONBA_PTR_SET_RVALUE(executionRecordList_, executionRecordList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListStrategyExecutionRecordResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStrategyExecutionRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListStrategyExecutionRecordResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<ListStrategyExecutionRecordResponseBodyExecutionRecordList>> executionRecordList_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
