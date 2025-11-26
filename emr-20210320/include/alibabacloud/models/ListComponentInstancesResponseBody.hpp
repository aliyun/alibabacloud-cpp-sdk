// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComponentInstancesResponseBodyComponentInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListComponentInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentInstances, componentInstances_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentInstances, componentInstances_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListComponentInstancesResponseBody() = default ;
    ListComponentInstancesResponseBody(const ListComponentInstancesResponseBody &) = default ;
    ListComponentInstancesResponseBody(ListComponentInstancesResponseBody &&) = default ;
    ListComponentInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentInstancesResponseBody() = default ;
    ListComponentInstancesResponseBody& operator=(const ListComponentInstancesResponseBody &) = default ;
    ListComponentInstancesResponseBody& operator=(ListComponentInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentInstances_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // componentInstances Field Functions 
    bool hasComponentInstances() const { return this->componentInstances_ != nullptr;};
    void deleteComponentInstances() { this->componentInstances_ = nullptr;};
    inline const vector<ListComponentInstancesResponseBodyComponentInstances> & componentInstances() const { DARABONBA_PTR_GET_CONST(componentInstances_, vector<ListComponentInstancesResponseBodyComponentInstances>) };
    inline vector<ListComponentInstancesResponseBodyComponentInstances> componentInstances() { DARABONBA_PTR_GET(componentInstances_, vector<ListComponentInstancesResponseBodyComponentInstances>) };
    inline ListComponentInstancesResponseBody& setComponentInstances(const vector<ListComponentInstancesResponseBodyComponentInstances> & componentInstances) { DARABONBA_PTR_SET_VALUE(componentInstances_, componentInstances) };
    inline ListComponentInstancesResponseBody& setComponentInstances(vector<ListComponentInstancesResponseBodyComponentInstances> && componentInstances) { DARABONBA_PTR_SET_RVALUE(componentInstances_, componentInstances) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListComponentInstancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListComponentInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComponentInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListComponentInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of instance component installation information.
    std::shared_ptr<vector<ListComponentInstancesResponseBodyComponentInstances>> componentInstances_ = nullptr;
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If you leave this parameter empty, the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
