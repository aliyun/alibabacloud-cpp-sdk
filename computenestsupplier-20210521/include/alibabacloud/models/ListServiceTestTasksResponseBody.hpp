// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICETESTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICETESTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceTestTasksResponseBodyServiceTestTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceTestTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceTestTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceTestTasks, serviceTestTasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceTestTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceTestTasks, serviceTestTasks_);
    };
    ListServiceTestTasksResponseBody() = default ;
    ListServiceTestTasksResponseBody(const ListServiceTestTasksResponseBody &) = default ;
    ListServiceTestTasksResponseBody(ListServiceTestTasksResponseBody &&) = default ;
    ListServiceTestTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceTestTasksResponseBody() = default ;
    ListServiceTestTasksResponseBody& operator=(const ListServiceTestTasksResponseBody &) = default ;
    ListServiceTestTasksResponseBody& operator=(ListServiceTestTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->serviceTestTasks_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListServiceTestTasksResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceTestTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceTestTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceTestTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceTestTasks Field Functions 
    bool hasServiceTestTasks() const { return this->serviceTestTasks_ != nullptr;};
    void deleteServiceTestTasks() { this->serviceTestTasks_ = nullptr;};
    inline const vector<ListServiceTestTasksResponseBodyServiceTestTasks> & serviceTestTasks() const { DARABONBA_PTR_GET_CONST(serviceTestTasks_, vector<ListServiceTestTasksResponseBodyServiceTestTasks>) };
    inline vector<ListServiceTestTasksResponseBodyServiceTestTasks> serviceTestTasks() { DARABONBA_PTR_GET(serviceTestTasks_, vector<ListServiceTestTasksResponseBodyServiceTestTasks>) };
    inline ListServiceTestTasksResponseBody& setServiceTestTasks(const vector<ListServiceTestTasksResponseBodyServiceTestTasks> & serviceTestTasks) { DARABONBA_PTR_SET_VALUE(serviceTestTasks_, serviceTestTasks) };
    inline ListServiceTestTasksResponseBody& setServiceTestTasks(vector<ListServiceTestTasksResponseBodyServiceTestTasks> && serviceTestTasks) { DARABONBA_PTR_SET_RVALUE(serviceTestTasks_, serviceTestTasks) };


  protected:
    // The total number of entries returned.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The number of items to return per page when paginating results. The maximum is 100, and the default is 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The service test tasks.
    std::shared_ptr<vector<ListServiceTestTasksResponseBodyServiceTestTasks>> serviceTestTasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
