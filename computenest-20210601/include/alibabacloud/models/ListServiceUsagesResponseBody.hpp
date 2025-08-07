// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEUSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEUSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceUsagesResponseBodyServiceUsages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceUsagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceUsagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceUsages, serviceUsages_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceUsagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceUsages, serviceUsages_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceUsagesResponseBody() = default ;
    ListServiceUsagesResponseBody(const ListServiceUsagesResponseBody &) = default ;
    ListServiceUsagesResponseBody(ListServiceUsagesResponseBody &&) = default ;
    ListServiceUsagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceUsagesResponseBody() = default ;
    ListServiceUsagesResponseBody& operator=(const ListServiceUsagesResponseBody &) = default ;
    ListServiceUsagesResponseBody& operator=(ListServiceUsagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->serviceUsages_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceUsagesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceUsagesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceUsagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceUsages Field Functions 
    bool hasServiceUsages() const { return this->serviceUsages_ != nullptr;};
    void deleteServiceUsages() { this->serviceUsages_ = nullptr;};
    inline const vector<ListServiceUsagesResponseBodyServiceUsages> & serviceUsages() const { DARABONBA_PTR_GET_CONST(serviceUsages_, vector<ListServiceUsagesResponseBodyServiceUsages>) };
    inline vector<ListServiceUsagesResponseBodyServiceUsages> serviceUsages() { DARABONBA_PTR_GET(serviceUsages_, vector<ListServiceUsagesResponseBodyServiceUsages>) };
    inline ListServiceUsagesResponseBody& setServiceUsages(const vector<ListServiceUsagesResponseBodyServiceUsages> & serviceUsages) { DARABONBA_PTR_SET_VALUE(serviceUsages_, serviceUsages) };
    inline ListServiceUsagesResponseBody& setServiceUsages(vector<ListServiceUsagesResponseBodyServiceUsages> && serviceUsages) { DARABONBA_PTR_SET_RVALUE(serviceUsages_, serviceUsages) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceUsagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The service applications.
    std::shared_ptr<vector<ListServiceUsagesResponseBodyServiceUsages>> serviceUsages_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
