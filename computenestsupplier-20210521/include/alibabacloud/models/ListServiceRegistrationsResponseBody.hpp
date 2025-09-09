// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEREGISTRATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEREGISTRATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceRegistrationsResponseBodyServiceRegistrations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceRegistrationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceRegistrationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceRegistrations, serviceRegistrations_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceRegistrationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceRegistrations, serviceRegistrations_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceRegistrationsResponseBody() = default ;
    ListServiceRegistrationsResponseBody(const ListServiceRegistrationsResponseBody &) = default ;
    ListServiceRegistrationsResponseBody(ListServiceRegistrationsResponseBody &&) = default ;
    ListServiceRegistrationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceRegistrationsResponseBody() = default ;
    ListServiceRegistrationsResponseBody& operator=(const ListServiceRegistrationsResponseBody &) = default ;
    ListServiceRegistrationsResponseBody& operator=(ListServiceRegistrationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->serviceRegistrations_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceRegistrationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceRegistrationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceRegistrationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceRegistrations Field Functions 
    bool hasServiceRegistrations() const { return this->serviceRegistrations_ != nullptr;};
    void deleteServiceRegistrations() { this->serviceRegistrations_ = nullptr;};
    inline const vector<ListServiceRegistrationsResponseBodyServiceRegistrations> & serviceRegistrations() const { DARABONBA_PTR_GET_CONST(serviceRegistrations_, vector<ListServiceRegistrationsResponseBodyServiceRegistrations>) };
    inline vector<ListServiceRegistrationsResponseBodyServiceRegistrations> serviceRegistrations() { DARABONBA_PTR_GET(serviceRegistrations_, vector<ListServiceRegistrationsResponseBodyServiceRegistrations>) };
    inline ListServiceRegistrationsResponseBody& setServiceRegistrations(const vector<ListServiceRegistrationsResponseBodyServiceRegistrations> & serviceRegistrations) { DARABONBA_PTR_SET_VALUE(serviceRegistrations_, serviceRegistrations) };
    inline ListServiceRegistrationsResponseBody& setServiceRegistrations(vector<ListServiceRegistrationsResponseBodyServiceRegistrations> && serviceRegistrations) { DARABONBA_PTR_SET_RVALUE(serviceRegistrations_, serviceRegistrations) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceRegistrationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Number of items per page in a paginated query. The maximum is 100, and the default is 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Service registration information.
    std::shared_ptr<vector<ListServiceRegistrationsResponseBodyServiceRegistrations>> serviceRegistrations_ = nullptr;
    // Total number of records that meet the criteria.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
