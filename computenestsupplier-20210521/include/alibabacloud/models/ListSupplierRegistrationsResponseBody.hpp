// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPLIERREGISTRATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPLIERREGISTRATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSupplierRegistrationsResponseBodySupplierRegistrations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListSupplierRegistrationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupplierRegistrationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupplierRegistrations, supplierRegistrations_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupplierRegistrationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupplierRegistrations, supplierRegistrations_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSupplierRegistrationsResponseBody() = default ;
    ListSupplierRegistrationsResponseBody(const ListSupplierRegistrationsResponseBody &) = default ;
    ListSupplierRegistrationsResponseBody(ListSupplierRegistrationsResponseBody &&) = default ;
    ListSupplierRegistrationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupplierRegistrationsResponseBody() = default ;
    ListSupplierRegistrationsResponseBody& operator=(const ListSupplierRegistrationsResponseBody &) = default ;
    ListSupplierRegistrationsResponseBody& operator=(ListSupplierRegistrationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->supplierRegistrations_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSupplierRegistrationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupplierRegistrationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupplierRegistrationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supplierRegistrations Field Functions 
    bool hasSupplierRegistrations() const { return this->supplierRegistrations_ != nullptr;};
    void deleteSupplierRegistrations() { this->supplierRegistrations_ = nullptr;};
    inline const vector<ListSupplierRegistrationsResponseBodySupplierRegistrations> & supplierRegistrations() const { DARABONBA_PTR_GET_CONST(supplierRegistrations_, vector<ListSupplierRegistrationsResponseBodySupplierRegistrations>) };
    inline vector<ListSupplierRegistrationsResponseBodySupplierRegistrations> supplierRegistrations() { DARABONBA_PTR_GET(supplierRegistrations_, vector<ListSupplierRegistrationsResponseBodySupplierRegistrations>) };
    inline ListSupplierRegistrationsResponseBody& setSupplierRegistrations(const vector<ListSupplierRegistrationsResponseBodySupplierRegistrations> & supplierRegistrations) { DARABONBA_PTR_SET_VALUE(supplierRegistrations_, supplierRegistrations) };
    inline ListSupplierRegistrationsResponseBody& setSupplierRegistrations(vector<ListSupplierRegistrationsResponseBodySupplierRegistrations> && supplierRegistrations) { DARABONBA_PTR_SET_RVALUE(supplierRegistrations_, supplierRegistrations) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSupplierRegistrationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The supplier registrations
    std::shared_ptr<vector<ListSupplierRegistrationsResponseBodySupplierRegistrations>> supplierRegistrations_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
