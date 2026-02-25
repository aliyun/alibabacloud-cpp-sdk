// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaWorkflowListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaWorkflowListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflowIds, mediaWorkflowIds_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaWorkflowListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflowIds, mediaWorkflowIds_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    QueryMediaWorkflowListRequest() = default ;
    QueryMediaWorkflowListRequest(const QueryMediaWorkflowListRequest &) = default ;
    QueryMediaWorkflowListRequest(QueryMediaWorkflowListRequest &&) = default ;
    QueryMediaWorkflowListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaWorkflowListRequest() = default ;
    QueryMediaWorkflowListRequest& operator=(const QueryMediaWorkflowListRequest &) = default ;
    QueryMediaWorkflowListRequest& operator=(QueryMediaWorkflowListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaWorkflowIds_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // mediaWorkflowIds Field Functions 
    bool hasMediaWorkflowIds() const { return this->mediaWorkflowIds_ != nullptr;};
    void deleteMediaWorkflowIds() { this->mediaWorkflowIds_ = nullptr;};
    inline string getMediaWorkflowIds() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowIds_, "") };
    inline QueryMediaWorkflowListRequest& setMediaWorkflowIds(string mediaWorkflowIds) { DARABONBA_PTR_SET_VALUE(mediaWorkflowIds_, mediaWorkflowIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline QueryMediaWorkflowListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryMediaWorkflowListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryMediaWorkflowListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryMediaWorkflowListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The IDs of the media workflows that you want to query. To obtain the IDs of the media workflows, you can log on to the **ApsaraVideo Media Processing (MPS) console** and choose **Workflows** > **Workflow Settings** in the left-side navigation pane. You can query up to 10 media workflows at a time. Separate multiple IDs of media workflows with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> mediaWorkflowIds_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
