// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSmartJobsResponseBodySmartJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmartJobList, smartJobList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmartJobList, smartJobList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSmartJobsResponseBody() = default ;
    ListSmartJobsResponseBody(const ListSmartJobsResponseBody &) = default ;
    ListSmartJobsResponseBody(ListSmartJobsResponseBody &&) = default ;
    ListSmartJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartJobsResponseBody() = default ;
    ListSmartJobsResponseBody& operator=(const ListSmartJobsResponseBody &) = default ;
    ListSmartJobsResponseBody& operator=(ListSmartJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->smartJobList_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListSmartJobsResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSmartJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSmartJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smartJobList Field Functions 
    bool hasSmartJobList() const { return this->smartJobList_ != nullptr;};
    void deleteSmartJobList() { this->smartJobList_ = nullptr;};
    inline const vector<ListSmartJobsResponseBodySmartJobList> & smartJobList() const { DARABONBA_PTR_GET_CONST(smartJobList_, vector<ListSmartJobsResponseBodySmartJobList>) };
    inline vector<ListSmartJobsResponseBodySmartJobList> smartJobList() { DARABONBA_PTR_GET(smartJobList_, vector<ListSmartJobsResponseBodySmartJobList>) };
    inline ListSmartJobsResponseBody& setSmartJobList(const vector<ListSmartJobsResponseBodySmartJobList> & smartJobList) { DARABONBA_PTR_SET_VALUE(smartJobList_, smartJobList) };
    inline ListSmartJobsResponseBody& setSmartJobList(vector<ListSmartJobsResponseBodySmartJobList> && smartJobList) { DARABONBA_PTR_SET_RVALUE(smartJobList_, smartJobList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListSmartJobsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned on a single page. The value is set to the maximum number of entries returned on each page except for the last page. Valid example: 10,10,5. Invalid example: 10,5,10.
    std::shared_ptr<string> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried intelligent jobs.
    std::shared_ptr<vector<ListSmartJobsResponseBodySmartJobList>> smartJobList_ = nullptr;
    // Optional. The total number of entries returned. By default, this parameter is not returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
