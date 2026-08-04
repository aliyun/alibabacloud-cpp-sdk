// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListServiceTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(serviceTasks, serviceTasks_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(serviceTasks, serviceTasks_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListServiceTaskResponseBody() = default ;
    ListServiceTaskResponseBody(const ListServiceTaskResponseBody &) = default ;
    ListServiceTaskResponseBody(ListServiceTaskResponseBody &&) = default ;
    ListServiceTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceTaskResponseBody() = default ;
    ListServiceTaskResponseBody& operator=(const ListServiceTaskResponseBody &) = default ;
    ListServiceTaskResponseBody& operator=(ListServiceTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->serviceTasks_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceTaskResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceTaskResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceTasks Field Functions 
    bool hasServiceTasks() const { return this->serviceTasks_ != nullptr;};
    void deleteServiceTasks() { this->serviceTasks_ = nullptr;};
    inline const vector<Darabonba::Json> & getServiceTasks() const { DARABONBA_PTR_GET_CONST(serviceTasks_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getServiceTasks() { DARABONBA_PTR_GET(serviceTasks_, vector<Darabonba::Json>) };
    inline ListServiceTaskResponseBody& setServiceTasks(const vector<Darabonba::Json> & serviceTasks) { DARABONBA_PTR_SET_VALUE(serviceTasks_, serviceTasks) };
    inline ListServiceTaskResponseBody& setServiceTasks(vector<Darabonba::Json> && serviceTasks) { DARABONBA_PTR_SET_RVALUE(serviceTasks_, serviceTasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maxResults value of the current request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page. An encrypted hexadecimal string is returned when a next page exists. An empty value or absence of this field indicates no more data. Pass this value as-is in the nextToken parameter for the next page request.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of tasks.
    shared_ptr<vector<Darabonba::Json>> serviceTasks_ {};
    // The total number of entries that match the conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
