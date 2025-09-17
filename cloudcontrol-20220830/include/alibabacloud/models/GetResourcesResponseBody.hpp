// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourcesResponseBodyResource.hpp>
#include <vector>
#include <alibabacloud/models/GetResourcesResponseBodyResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
      DARABONBA_PTR_TO_JSON(resources, resources_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
      DARABONBA_PTR_FROM_JSON(resources, resources_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    GetResourcesResponseBody() = default ;
    GetResourcesResponseBody(const GetResourcesResponseBody &) = default ;
    GetResourcesResponseBody(GetResourcesResponseBody &&) = default ;
    GetResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcesResponseBody() = default ;
    GetResourcesResponseBody& operator=(const GetResourcesResponseBody &) = default ;
    GetResourcesResponseBody& operator=(GetResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->resource_ != nullptr && this->resources_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const GetResourcesResponseBodyResource & resource() const { DARABONBA_PTR_GET_CONST(resource_, GetResourcesResponseBodyResource) };
    inline GetResourcesResponseBodyResource resource() { DARABONBA_PTR_GET(resource_, GetResourcesResponseBodyResource) };
    inline GetResourcesResponseBody& setResource(const GetResourcesResponseBodyResource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline GetResourcesResponseBody& setResource(GetResourcesResponseBodyResource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<GetResourcesResponseBodyResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<GetResourcesResponseBodyResources>) };
    inline vector<GetResourcesResponseBodyResources> resources() { DARABONBA_PTR_GET(resources_, vector<GetResourcesResponseBodyResources>) };
    inline GetResourcesResponseBody& setResources(const vector<GetResourcesResponseBodyResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline GetResourcesResponseBody& setResources(vector<GetResourcesResponseBodyResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetResourcesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned. Return result of the List operation.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists. Return result of the List operation.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The specified resource. Return result of the Get operation.
    std::shared_ptr<GetResourcesResponseBodyResource> resource_ = nullptr;
    // The resource list. Return result of the List operation.
    std::shared_ptr<vector<GetResourcesResponseBodyResources>> resources_ = nullptr;
    // The total number of entries returned. Return result of the List operation.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
