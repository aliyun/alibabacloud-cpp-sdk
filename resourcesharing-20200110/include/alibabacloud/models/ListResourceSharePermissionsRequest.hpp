// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHAREPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHAREPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListResourceSharePermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceSharePermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceSharePermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
    };
    ListResourceSharePermissionsRequest() = default ;
    ListResourceSharePermissionsRequest(const ListResourceSharePermissionsRequest &) = default ;
    ListResourceSharePermissionsRequest(ListResourceSharePermissionsRequest &&) = default ;
    ListResourceSharePermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceSharePermissionsRequest() = default ;
    ListResourceSharePermissionsRequest& operator=(const ListResourceSharePermissionsRequest &) = default ;
    ListResourceSharePermissionsRequest& operator=(ListResourceSharePermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->resourceOwner_ != nullptr && this->resourceShareId_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceSharePermissionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceSharePermissionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline string resourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, "") };
    inline ListResourceSharePermissionsRequest& setResourceOwner(string resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline ListResourceSharePermissionsRequest& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


  protected:
    // The maximum number of entries to return for a single request.
    // 
    // Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The `token` that is used to initiate the next request. If the response of the current request is truncated, you can use the token to initiate another request and obtain the remaining records.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The owner of the resource share. Valid values:
    // 
    // *   Self: the current account
    // *   OtherAccounts: an account other than the current account
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceOwner_ = nullptr;
    // The ID of the resource share.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceShareId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
