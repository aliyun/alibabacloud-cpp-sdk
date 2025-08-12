// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVEAUDIOAUDITNOTIFYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVEAUDIOAUDITNOTIFYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveAudioAuditNotifyConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveAudioAuditNotifyConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(CallbackTemplate, callbackTemplate_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveAudioAuditNotifyConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(CallbackTemplate, callbackTemplate_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddLiveAudioAuditNotifyConfigRequest() = default ;
    AddLiveAudioAuditNotifyConfigRequest(const AddLiveAudioAuditNotifyConfigRequest &) = default ;
    AddLiveAudioAuditNotifyConfigRequest(AddLiveAudioAuditNotifyConfigRequest &&) = default ;
    AddLiveAudioAuditNotifyConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveAudioAuditNotifyConfigRequest() = default ;
    AddLiveAudioAuditNotifyConfigRequest& operator=(const AddLiveAudioAuditNotifyConfigRequest &) = default ;
    AddLiveAudioAuditNotifyConfigRequest& operator=(AddLiveAudioAuditNotifyConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callback_ != nullptr
        && this->callbackTemplate_ != nullptr && this->domainName_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr; };
    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline string callback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
    inline AddLiveAudioAuditNotifyConfigRequest& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // callbackTemplate Field Functions 
    bool hasCallbackTemplate() const { return this->callbackTemplate_ != nullptr;};
    void deleteCallbackTemplate() { this->callbackTemplate_ = nullptr;};
    inline string callbackTemplate() const { DARABONBA_PTR_GET_DEFAULT(callbackTemplate_, "") };
    inline AddLiveAudioAuditNotifyConfigRequest& setCallbackTemplate(string callbackTemplate) { DARABONBA_PTR_SET_VALUE(callbackTemplate_, callbackTemplate) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddLiveAudioAuditNotifyConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveAudioAuditNotifyConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddLiveAudioAuditNotifyConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The callback URL. This URL is used to receive callback notifications about violations in audio.
    std::shared_ptr<string> callback_ = nullptr;
    // The callback template. Valid values:
    // 
    // *   **{DomainName}**: the streaming domain.
    // *   **{AppName}**: the name of the application to which the live stream belongs.
    // *   **{StreamName}**: the name of the live stream.
    // *   **{Timestamp}**: the time when the callback is returned. The value of this field is a UNIX timestamp. Unit: seconds.
    // *   **{Result}**: the moderation results.
    std::shared_ptr<string> callbackTemplate_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
