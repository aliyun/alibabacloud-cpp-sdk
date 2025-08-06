// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRANSCODETEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRANSCODETEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteTranscodeTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTranscodeTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateIdList, transcodeTemplateIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTranscodeTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateIdList, transcodeTemplateIdList_);
    };
    DeleteTranscodeTemplatesRequest() = default ;
    DeleteTranscodeTemplatesRequest(const DeleteTranscodeTemplatesRequest &) = default ;
    DeleteTranscodeTemplatesRequest(DeleteTranscodeTemplatesRequest &&) = default ;
    DeleteTranscodeTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTranscodeTemplatesRequest() = default ;
    DeleteTranscodeTemplatesRequest& operator=(const DeleteTranscodeTemplatesRequest &) = default ;
    DeleteTranscodeTemplatesRequest& operator=(DeleteTranscodeTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->transcodeTemplateGroupId_ != nullptr && this->transcodeTemplateIdList_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteTranscodeTemplatesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteTranscodeTemplatesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteTranscodeTemplatesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transcodeTemplateGroupId Field Functions 
    bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
    void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
    inline string transcodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
    inline DeleteTranscodeTemplatesRequest& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


    // transcodeTemplateIdList Field Functions 
    bool hasTranscodeTemplateIdList() const { return this->transcodeTemplateIdList_ != nullptr;};
    void deleteTranscodeTemplateIdList() { this->transcodeTemplateIdList_ = nullptr;};
    inline string transcodeTemplateIdList() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateIdList_, "") };
    inline DeleteTranscodeTemplatesRequest& setTranscodeTemplateIdList(string transcodeTemplateIdList) { DARABONBA_PTR_SET_VALUE(transcodeTemplateIdList_, transcodeTemplateIdList) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> transcodeTemplateGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> transcodeTemplateIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
