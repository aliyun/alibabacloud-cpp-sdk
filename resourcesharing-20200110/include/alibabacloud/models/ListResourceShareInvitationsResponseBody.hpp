// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHAREINVITATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHAREINVITATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceShareInvitationsResponseBodyResourceShareInvitations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListResourceShareInvitationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceShareInvitationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShareInvitations, resourceShareInvitations_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceShareInvitationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareInvitations, resourceShareInvitations_);
    };
    ListResourceShareInvitationsResponseBody() = default ;
    ListResourceShareInvitationsResponseBody(const ListResourceShareInvitationsResponseBody &) = default ;
    ListResourceShareInvitationsResponseBody(ListResourceShareInvitationsResponseBody &&) = default ;
    ListResourceShareInvitationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceShareInvitationsResponseBody() = default ;
    ListResourceShareInvitationsResponseBody& operator=(const ListResourceShareInvitationsResponseBody &) = default ;
    ListResourceShareInvitationsResponseBody& operator=(ListResourceShareInvitationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->resourceShareInvitations_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceShareInvitationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceShareInvitationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShareInvitations Field Functions 
    bool hasResourceShareInvitations() const { return this->resourceShareInvitations_ != nullptr;};
    void deleteResourceShareInvitations() { this->resourceShareInvitations_ = nullptr;};
    inline const vector<ListResourceShareInvitationsResponseBodyResourceShareInvitations> & resourceShareInvitations() const { DARABONBA_PTR_GET_CONST(resourceShareInvitations_, vector<ListResourceShareInvitationsResponseBodyResourceShareInvitations>) };
    inline vector<ListResourceShareInvitationsResponseBodyResourceShareInvitations> resourceShareInvitations() { DARABONBA_PTR_GET(resourceShareInvitations_, vector<ListResourceShareInvitationsResponseBodyResourceShareInvitations>) };
    inline ListResourceShareInvitationsResponseBody& setResourceShareInvitations(const vector<ListResourceShareInvitationsResponseBodyResourceShareInvitations> & resourceShareInvitations) { DARABONBA_PTR_SET_VALUE(resourceShareInvitations_, resourceShareInvitations) };
    inline ListResourceShareInvitationsResponseBody& setResourceShareInvitations(vector<ListResourceShareInvitationsResponseBodyResourceShareInvitations> && resourceShareInvitations) { DARABONBA_PTR_SET_RVALUE(resourceShareInvitations_, resourceShareInvitations) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the resource sharing invitations.
    std::shared_ptr<vector<ListResourceShareInvitationsResponseBodyResourceShareInvitations>> resourceShareInvitations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
