// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESBYENDUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESBYENDUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcEndpointServicesByEndUserResponseBodyServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServicesByEndUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServicesByEndUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Services, services_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServicesByEndUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListVpcEndpointServicesByEndUserResponseBody() = default ;
    ListVpcEndpointServicesByEndUserResponseBody(const ListVpcEndpointServicesByEndUserResponseBody &) = default ;
    ListVpcEndpointServicesByEndUserResponseBody(ListVpcEndpointServicesByEndUserResponseBody &&) = default ;
    ListVpcEndpointServicesByEndUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServicesByEndUserResponseBody() = default ;
    ListVpcEndpointServicesByEndUserResponseBody& operator=(const ListVpcEndpointServicesByEndUserResponseBody &) = default ;
    ListVpcEndpointServicesByEndUserResponseBody& operator=(ListVpcEndpointServicesByEndUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->services_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointServicesByEndUserResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<ListVpcEndpointServicesByEndUserResponseBodyServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<ListVpcEndpointServicesByEndUserResponseBodyServices>) };
    inline vector<ListVpcEndpointServicesByEndUserResponseBodyServices> services() { DARABONBA_PTR_GET(services_, vector<ListVpcEndpointServicesByEndUserResponseBodyServices>) };
    inline ListVpcEndpointServicesByEndUserResponseBody& setServices(const vector<ListVpcEndpointServicesByEndUserResponseBodyServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline ListVpcEndpointServicesByEndUserResponseBody& setServices(vector<ListVpcEndpointServicesByEndUserResponseBodyServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next requests are performed.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about endpoint services.
    std::shared_ptr<vector<ListVpcEndpointServicesByEndUserResponseBodyServices>> services_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
