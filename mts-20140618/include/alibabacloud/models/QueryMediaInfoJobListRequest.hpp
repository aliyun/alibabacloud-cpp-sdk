// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAINFOJOBLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAINFOJOBLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaInfoJobListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaInfoJobListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaInfoJobIds, mediaInfoJobIds_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaInfoJobListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaInfoJobIds, mediaInfoJobIds_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    QueryMediaInfoJobListRequest() = default ;
    QueryMediaInfoJobListRequest(const QueryMediaInfoJobListRequest &) = default ;
    QueryMediaInfoJobListRequest(QueryMediaInfoJobListRequest &&) = default ;
    QueryMediaInfoJobListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaInfoJobListRequest() = default ;
    QueryMediaInfoJobListRequest& operator=(const QueryMediaInfoJobListRequest &) = default ;
    QueryMediaInfoJobListRequest& operator=(QueryMediaInfoJobListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaInfoJobIds_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // mediaInfoJobIds Field Functions 
    bool hasMediaInfoJobIds() const { return this->mediaInfoJobIds_ != nullptr;};
    void deleteMediaInfoJobIds() { this->mediaInfoJobIds_ = nullptr;};
    inline string getMediaInfoJobIds() const { DARABONBA_PTR_GET_DEFAULT(mediaInfoJobIds_, "") };
    inline QueryMediaInfoJobListRequest& setMediaInfoJobIds(string mediaInfoJobIds) { DARABONBA_PTR_SET_VALUE(mediaInfoJobIds_, mediaInfoJobIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline QueryMediaInfoJobListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryMediaInfoJobListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryMediaInfoJobListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryMediaInfoJobListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The IDs of the media information analysis jobs.
    // 
    // *   You can query up to 10 jobs at a time. Separate multiple IDs with commas (,).
    // *   You can obtain the details from the response parameters of the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/602827.html) operation.
    // 
    // >  If you do not specify the JobIds parameter, the **InvalidParameter** error code is returned.
    // 
    // This parameter is required.
    shared_ptr<string> mediaInfoJobIds_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
