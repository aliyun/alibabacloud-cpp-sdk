// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVOICEFILEAUDITINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVOICEFILEAUDITINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryVoiceFileAuditInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVoiceFileAuditInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VoiceCodes, voiceCodes_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVoiceFileAuditInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VoiceCodes, voiceCodes_);
    };
    QueryVoiceFileAuditInfoRequest() = default ;
    QueryVoiceFileAuditInfoRequest(const QueryVoiceFileAuditInfoRequest &) = default ;
    QueryVoiceFileAuditInfoRequest(QueryVoiceFileAuditInfoRequest &&) = default ;
    QueryVoiceFileAuditInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVoiceFileAuditInfoRequest() = default ;
    QueryVoiceFileAuditInfoRequest& operator=(const QueryVoiceFileAuditInfoRequest &) = default ;
    QueryVoiceFileAuditInfoRequest& operator=(QueryVoiceFileAuditInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->voiceCodes_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline int32_t businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, 0) };
    inline QueryVoiceFileAuditInfoRequest& setBusinessType(int32_t businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryVoiceFileAuditInfoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryVoiceFileAuditInfoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryVoiceFileAuditInfoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // voiceCodes Field Functions 
    bool hasVoiceCodes() const { return this->voiceCodes_ != nullptr;};
    void deleteVoiceCodes() { this->voiceCodes_ = nullptr;};
    inline string voiceCodes() const { DARABONBA_PTR_GET_DEFAULT(voiceCodes_, "") };
    inline QueryVoiceFileAuditInfoRequest& setVoiceCodes(string voiceCodes) { DARABONBA_PTR_SET_VALUE(voiceCodes_, voiceCodes) };


  protected:
    // The type of the voice file. Valid values:
    // 
    // *   **0** (default): the voice notification file.
    // *   **2**: the recording file.
    std::shared_ptr<int32_t> businessType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the voice file. You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home), choose **Voice Messages** > **Voice Notifications** or **Voice File Management**, and then click the **Voice Notification Files** tab to view the **voice ID**.
    // 
    // > You can query up to 10 voice files each time. Separate the voice file names with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> voiceCodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
