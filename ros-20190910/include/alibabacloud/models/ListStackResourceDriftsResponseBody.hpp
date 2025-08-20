// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKRESOURCEDRIFTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKRESOURCEDRIFTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStackResourceDriftsResponseBodyResourceDrifts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackResourceDriftsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackResourceDriftsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceDrifts, resourceDrifts_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackResourceDriftsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceDrifts, resourceDrifts_);
    };
    ListStackResourceDriftsResponseBody() = default ;
    ListStackResourceDriftsResponseBody(const ListStackResourceDriftsResponseBody &) = default ;
    ListStackResourceDriftsResponseBody(ListStackResourceDriftsResponseBody &&) = default ;
    ListStackResourceDriftsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackResourceDriftsResponseBody() = default ;
    ListStackResourceDriftsResponseBody& operator=(const ListStackResourceDriftsResponseBody &) = default ;
    ListStackResourceDriftsResponseBody& operator=(ListStackResourceDriftsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->resourceDrifts_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListStackResourceDriftsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackResourceDriftsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDrifts Field Functions 
    bool hasResourceDrifts() const { return this->resourceDrifts_ != nullptr;};
    void deleteResourceDrifts() { this->resourceDrifts_ = nullptr;};
    inline const vector<ListStackResourceDriftsResponseBodyResourceDrifts> & resourceDrifts() const { DARABONBA_PTR_GET_CONST(resourceDrifts_, vector<ListStackResourceDriftsResponseBodyResourceDrifts>) };
    inline vector<ListStackResourceDriftsResponseBodyResourceDrifts> resourceDrifts() { DARABONBA_PTR_GET(resourceDrifts_, vector<ListStackResourceDriftsResponseBodyResourceDrifts>) };
    inline ListStackResourceDriftsResponseBody& setResourceDrifts(const vector<ListStackResourceDriftsResponseBodyResourceDrifts> & resourceDrifts) { DARABONBA_PTR_SET_VALUE(resourceDrifts_, resourceDrifts) };
    inline ListStackResourceDriftsResponseBody& setResourceDrifts(vector<ListStackResourceDriftsResponseBodyResourceDrifts> && resourceDrifts) { DARABONBA_PTR_SET_RVALUE(resourceDrifts_, resourceDrifts) };


  protected:
    // The query token returned in this call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource drifts.
    std::shared_ptr<vector<ListStackResourceDriftsResponseBodyResourceDrifts>> resourceDrifts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
