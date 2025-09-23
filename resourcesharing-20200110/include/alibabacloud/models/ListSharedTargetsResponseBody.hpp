// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDTARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDTARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSharedTargetsResponseBodySharedTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListSharedTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SharedTargets, sharedTargets_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SharedTargets, sharedTargets_);
    };
    ListSharedTargetsResponseBody() = default ;
    ListSharedTargetsResponseBody(const ListSharedTargetsResponseBody &) = default ;
    ListSharedTargetsResponseBody(ListSharedTargetsResponseBody &&) = default ;
    ListSharedTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedTargetsResponseBody() = default ;
    ListSharedTargetsResponseBody& operator=(const ListSharedTargetsResponseBody &) = default ;
    ListSharedTargetsResponseBody& operator=(ListSharedTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->sharedTargets_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSharedTargetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSharedTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sharedTargets Field Functions 
    bool hasSharedTargets() const { return this->sharedTargets_ != nullptr;};
    void deleteSharedTargets() { this->sharedTargets_ = nullptr;};
    inline const vector<ListSharedTargetsResponseBodySharedTargets> & sharedTargets() const { DARABONBA_PTR_GET_CONST(sharedTargets_, vector<ListSharedTargetsResponseBodySharedTargets>) };
    inline vector<ListSharedTargetsResponseBodySharedTargets> sharedTargets() { DARABONBA_PTR_GET(sharedTargets_, vector<ListSharedTargetsResponseBodySharedTargets>) };
    inline ListSharedTargetsResponseBody& setSharedTargets(const vector<ListSharedTargetsResponseBodySharedTargets> & sharedTargets) { DARABONBA_PTR_SET_VALUE(sharedTargets_, sharedTargets) };
    inline ListSharedTargetsResponseBody& setSharedTargets(vector<ListSharedTargetsResponseBodySharedTargets> && sharedTargets) { DARABONBA_PTR_SET_RVALUE(sharedTargets_, sharedTargets) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of the principals.
    std::shared_ptr<vector<ListSharedTargetsResponseBodySharedTargets>> sharedTargets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
