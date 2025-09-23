// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHAREINVITATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHAREINVITATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListResourceShareInvitationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceShareInvitationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceShareIds, resourceShareIds_);
      DARABONBA_PTR_TO_JSON(ResourceShareInvitationIds, resourceShareInvitationIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceShareInvitationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceShareIds, resourceShareIds_);
      DARABONBA_PTR_FROM_JSON(ResourceShareInvitationIds, resourceShareInvitationIds_);
    };
    ListResourceShareInvitationsRequest() = default ;
    ListResourceShareInvitationsRequest(const ListResourceShareInvitationsRequest &) = default ;
    ListResourceShareInvitationsRequest(ListResourceShareInvitationsRequest &&) = default ;
    ListResourceShareInvitationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceShareInvitationsRequest() = default ;
    ListResourceShareInvitationsRequest& operator=(const ListResourceShareInvitationsRequest &) = default ;
    ListResourceShareInvitationsRequest& operator=(ListResourceShareInvitationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->resourceShareIds_ != nullptr && this->resourceShareInvitationIds_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceShareInvitationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceShareInvitationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceShareIds Field Functions 
    bool hasResourceShareIds() const { return this->resourceShareIds_ != nullptr;};
    void deleteResourceShareIds() { this->resourceShareIds_ = nullptr;};
    inline const vector<string> & resourceShareIds() const { DARABONBA_PTR_GET_CONST(resourceShareIds_, vector<string>) };
    inline vector<string> resourceShareIds() { DARABONBA_PTR_GET(resourceShareIds_, vector<string>) };
    inline ListResourceShareInvitationsRequest& setResourceShareIds(const vector<string> & resourceShareIds) { DARABONBA_PTR_SET_VALUE(resourceShareIds_, resourceShareIds) };
    inline ListResourceShareInvitationsRequest& setResourceShareIds(vector<string> && resourceShareIds) { DARABONBA_PTR_SET_RVALUE(resourceShareIds_, resourceShareIds) };


    // resourceShareInvitationIds Field Functions 
    bool hasResourceShareInvitationIds() const { return this->resourceShareInvitationIds_ != nullptr;};
    void deleteResourceShareInvitationIds() { this->resourceShareInvitationIds_ = nullptr;};
    inline const vector<string> & resourceShareInvitationIds() const { DARABONBA_PTR_GET_CONST(resourceShareInvitationIds_, vector<string>) };
    inline vector<string> resourceShareInvitationIds() { DARABONBA_PTR_GET(resourceShareInvitationIds_, vector<string>) };
    inline ListResourceShareInvitationsRequest& setResourceShareInvitationIds(const vector<string> & resourceShareInvitationIds) { DARABONBA_PTR_SET_VALUE(resourceShareInvitationIds_, resourceShareInvitationIds) };
    inline ListResourceShareInvitationsRequest& setResourceShareInvitationIds(vector<string> && resourceShareInvitationIds) { DARABONBA_PTR_SET_RVALUE(resourceShareInvitationIds_, resourceShareInvitationIds) };


  protected:
    // The maximum number of entries to return for a single request.
    // 
    // Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The IDs of the resource shares.
    std::shared_ptr<vector<string>> resourceShareIds_ = nullptr;
    // The IDs of the resource sharing invitations.
    std::shared_ptr<vector<string>> resourceShareInvitationIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
