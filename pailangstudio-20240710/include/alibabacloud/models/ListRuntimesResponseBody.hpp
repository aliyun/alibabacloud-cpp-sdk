// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRUNTIMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRUNTIMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class ListRuntimesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRuntimesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Runtimes, runtimes_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRuntimesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Runtimes, runtimes_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRuntimesResponseBody() = default ;
    ListRuntimesResponseBody(const ListRuntimesResponseBody &) = default ;
    ListRuntimesResponseBody(ListRuntimesResponseBody &&) = default ;
    ListRuntimesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRuntimesResponseBody() = default ;
    ListRuntimesResponseBody& operator=(const ListRuntimesResponseBody &) = default ;
    ListRuntimesResponseBody& operator=(ListRuntimesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->runtimes_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRuntimesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRuntimesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRuntimesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runtimes Field Functions 
    bool hasRuntimes() const { return this->runtimes_ != nullptr;};
    void deleteRuntimes() { this->runtimes_ = nullptr;};
    inline const vector<Runtime> & getRuntimes() const { DARABONBA_PTR_GET_CONST(runtimes_, vector<Runtime>) };
    inline vector<Runtime> getRuntimes() { DARABONBA_PTR_GET(runtimes_, vector<Runtime>) };
    inline ListRuntimesResponseBody& setRuntimes(const vector<Runtime> & runtimes) { DARABONBA_PTR_SET_VALUE(runtimes_, runtimes) };
    inline ListRuntimesResponseBody& setRuntimes(vector<Runtime> && runtimes) { DARABONBA_PTR_SET_RVALUE(runtimes_, runtimes) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRuntimesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<Runtime>> runtimes_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
