// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceInstanceResourcesResponseBodyResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    ListServiceInstanceResourcesResponseBody() = default ;
    ListServiceInstanceResourcesResponseBody(const ListServiceInstanceResourcesResponseBody &) = default ;
    ListServiceInstanceResourcesResponseBody(ListServiceInstanceResourcesResponseBody &&) = default ;
    ListServiceInstanceResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceResourcesResponseBody() = default ;
    ListServiceInstanceResourcesResponseBody& operator=(const ListServiceInstanceResourcesResponseBody &) = default ;
    ListServiceInstanceResourcesResponseBody& operator=(ListServiceInstanceResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->resources_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ListServiceInstanceResourcesResponseBodyResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ListServiceInstanceResourcesResponseBodyResources>) };
    inline vector<ListServiceInstanceResourcesResponseBodyResources> resources() { DARABONBA_PTR_GET(resources_, vector<ListServiceInstanceResourcesResponseBodyResources>) };
    inline ListServiceInstanceResourcesResponseBody& setResources(const vector<ListServiceInstanceResourcesResponseBodyResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListServiceInstanceResourcesResponseBody& setResources(vector<ListServiceInstanceResourcesResponseBodyResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resources.
    std::shared_ptr<vector<ListServiceInstanceResourcesResponseBodyResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
