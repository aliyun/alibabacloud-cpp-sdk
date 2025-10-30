// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcEndpointServiceResourcesResponseBodyResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServiceResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServiceResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServiceResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    ListVpcEndpointServiceResourcesResponseBody() = default ;
    ListVpcEndpointServiceResourcesResponseBody(const ListVpcEndpointServiceResourcesResponseBody &) = default ;
    ListVpcEndpointServiceResourcesResponseBody(ListVpcEndpointServiceResourcesResponseBody &&) = default ;
    ListVpcEndpointServiceResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServiceResourcesResponseBody() = default ;
    ListVpcEndpointServiceResourcesResponseBody& operator=(const ListVpcEndpointServiceResourcesResponseBody &) = default ;
    ListVpcEndpointServiceResourcesResponseBody& operator=(ListVpcEndpointServiceResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->resources_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointServiceResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointServiceResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointServiceResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ListVpcEndpointServiceResourcesResponseBodyResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ListVpcEndpointServiceResourcesResponseBodyResources>) };
    inline vector<ListVpcEndpointServiceResourcesResponseBodyResources> resources() { DARABONBA_PTR_GET(resources_, vector<ListVpcEndpointServiceResourcesResponseBodyResources>) };
    inline ListVpcEndpointServiceResourcesResponseBody& setResources(const vector<ListVpcEndpointServiceResourcesResponseBodyResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListVpcEndpointServiceResourcesResponseBody& setResources(vector<ListVpcEndpointServiceResourcesResponseBodyResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next requests are performed.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The service resources.
    std::shared_ptr<vector<ListVpcEndpointServiceResourcesResponseBodyResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
