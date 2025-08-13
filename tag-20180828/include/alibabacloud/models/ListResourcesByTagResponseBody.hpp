// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESBYTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESBYTAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourcesByTagResponseBodyResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListResourcesByTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesByTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesByTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    ListResourcesByTagResponseBody() = default ;
    ListResourcesByTagResponseBody(const ListResourcesByTagResponseBody &) = default ;
    ListResourcesByTagResponseBody(ListResourcesByTagResponseBody &&) = default ;
    ListResourcesByTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesByTagResponseBody() = default ;
    ListResourcesByTagResponseBody& operator=(const ListResourcesByTagResponseBody &) = default ;
    ListResourcesByTagResponseBody& operator=(ListResourcesByTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->resources_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourcesByTagResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourcesByTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ListResourcesByTagResponseBodyResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ListResourcesByTagResponseBodyResources>) };
    inline vector<ListResourcesByTagResponseBodyResources> resources() { DARABONBA_PTR_GET(resources_, vector<ListResourcesByTagResponseBodyResources>) };
    inline ListResourcesByTagResponseBody& setResources(const vector<ListResourcesByTagResponseBodyResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListResourcesByTagResponseBody& setResources(vector<ListResourcesByTagResponseBodyResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // Indicates whether the `next query` is required.
    // 
    // *   If the value of this parameter is empty (`"NextToken": ""`), all results are returned, and the `next query` is not required.
    // *   If the value of this parameter is not empty, the next query is required, and the value is the `token` used to start the next query.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of the resources.
    std::shared_ptr<vector<ListResourcesByTagResponseBodyResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
