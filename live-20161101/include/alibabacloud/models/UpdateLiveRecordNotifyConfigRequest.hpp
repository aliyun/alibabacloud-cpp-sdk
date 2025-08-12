// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVERECORDNOTIFYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVERECORDNOTIFYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveRecordNotifyConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveRecordNotifyConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(NeedStatusNotify, needStatusNotify_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(OnDemandUrl, onDemandUrl_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveRecordNotifyConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(NeedStatusNotify, needStatusNotify_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(OnDemandUrl, onDemandUrl_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    UpdateLiveRecordNotifyConfigRequest() = default ;
    UpdateLiveRecordNotifyConfigRequest(const UpdateLiveRecordNotifyConfigRequest &) = default ;
    UpdateLiveRecordNotifyConfigRequest(UpdateLiveRecordNotifyConfigRequest &&) = default ;
    UpdateLiveRecordNotifyConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveRecordNotifyConfigRequest() = default ;
    UpdateLiveRecordNotifyConfigRequest& operator=(const UpdateLiveRecordNotifyConfigRequest &) = default ;
    UpdateLiveRecordNotifyConfigRequest& operator=(UpdateLiveRecordNotifyConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->needStatusNotify_ != nullptr && this->notifyUrl_ != nullptr && this->onDemandUrl_ != nullptr && this->ownerId_ != nullptr && this->securityToken_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateLiveRecordNotifyConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // needStatusNotify Field Functions 
    bool hasNeedStatusNotify() const { return this->needStatusNotify_ != nullptr;};
    void deleteNeedStatusNotify() { this->needStatusNotify_ = nullptr;};
    inline bool needStatusNotify() const { DARABONBA_PTR_GET_DEFAULT(needStatusNotify_, false) };
    inline UpdateLiveRecordNotifyConfigRequest& setNeedStatusNotify(bool needStatusNotify) { DARABONBA_PTR_SET_VALUE(needStatusNotify_, needStatusNotify) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline UpdateLiveRecordNotifyConfigRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // onDemandUrl Field Functions 
    bool hasOnDemandUrl() const { return this->onDemandUrl_ != nullptr;};
    void deleteOnDemandUrl() { this->onDemandUrl_ = nullptr;};
    inline string onDemandUrl() const { DARABONBA_PTR_GET_DEFAULT(onDemandUrl_, "") };
    inline UpdateLiveRecordNotifyConfigRequest& setOnDemandUrl(string onDemandUrl) { DARABONBA_PTR_SET_VALUE(onDemandUrl_, onDemandUrl) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveRecordNotifyConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpdateLiveRecordNotifyConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // Specifies whether to enable callbacks for recording status. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> needStatusNotify_ = nullptr;
    // The callback URL that is used to receive notifications about recording events and status.
    // 
    // > 
    // 
    // *   The URL must start with `http://` or `https://`.
    // 
    // *   You must use URLEncoder for encoding. This way, the system can identify Chinese characters, spaces, and special characters.
    // 
    // This parameter is required.
    std::shared_ptr<string> notifyUrl_ = nullptr;
    // The callback URL for on-demand recordings.
    // 
    // > 
    // 
    // *   The URL must start with `http://` or `https://`.
    // 
    // *   You must use URLEncoder for encoding. This way, the system can identify Chinese characters, spaces, and special characters.
    std::shared_ptr<string> onDemandUrl_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
