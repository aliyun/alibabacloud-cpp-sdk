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
      DARABONBA_PTR_TO_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_TO_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(OnDemandUrl, onDemandUrl_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveRecordNotifyConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(NeedStatusNotify, needStatusNotify_);
      DARABONBA_PTR_FROM_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_FROM_JSON(NotifyReqAuth, notifyReqAuth_);
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
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->needStatusNotify_ == nullptr && this->notifyAuthKey_ == nullptr && this->notifyReqAuth_ == nullptr && this->notifyUrl_ == nullptr && this->onDemandUrl_ == nullptr
        && this->ownerId_ == nullptr && this->securityToken_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateLiveRecordNotifyConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // needStatusNotify Field Functions 
    bool hasNeedStatusNotify() const { return this->needStatusNotify_ != nullptr;};
    void deleteNeedStatusNotify() { this->needStatusNotify_ = nullptr;};
    inline bool getNeedStatusNotify() const { DARABONBA_PTR_GET_DEFAULT(needStatusNotify_, false) };
    inline UpdateLiveRecordNotifyConfigRequest& setNeedStatusNotify(bool needStatusNotify) { DARABONBA_PTR_SET_VALUE(needStatusNotify_, needStatusNotify) };


    // notifyAuthKey Field Functions 
    bool hasNotifyAuthKey() const { return this->notifyAuthKey_ != nullptr;};
    void deleteNotifyAuthKey() { this->notifyAuthKey_ = nullptr;};
    inline string getNotifyAuthKey() const { DARABONBA_PTR_GET_DEFAULT(notifyAuthKey_, "") };
    inline UpdateLiveRecordNotifyConfigRequest& setNotifyAuthKey(string notifyAuthKey) { DARABONBA_PTR_SET_VALUE(notifyAuthKey_, notifyAuthKey) };


    // notifyReqAuth Field Functions 
    bool hasNotifyReqAuth() const { return this->notifyReqAuth_ != nullptr;};
    void deleteNotifyReqAuth() { this->notifyReqAuth_ = nullptr;};
    inline bool getNotifyReqAuth() const { DARABONBA_PTR_GET_DEFAULT(notifyReqAuth_, false) };
    inline UpdateLiveRecordNotifyConfigRequest& setNotifyReqAuth(bool notifyReqAuth) { DARABONBA_PTR_SET_VALUE(notifyReqAuth_, notifyReqAuth) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline UpdateLiveRecordNotifyConfigRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // onDemandUrl Field Functions 
    bool hasOnDemandUrl() const { return this->onDemandUrl_ != nullptr;};
    void deleteOnDemandUrl() { this->onDemandUrl_ = nullptr;};
    inline string getOnDemandUrl() const { DARABONBA_PTR_GET_DEFAULT(onDemandUrl_, "") };
    inline UpdateLiveRecordNotifyConfigRequest& setOnDemandUrl(string onDemandUrl) { DARABONBA_PTR_SET_VALUE(onDemandUrl_, onDemandUrl) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveRecordNotifyConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpdateLiveRecordNotifyConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The main streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // Specifies whether to enable callbacks for recording status. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> needStatusNotify_ {};
    shared_ptr<string> notifyAuthKey_ {};
    shared_ptr<bool> notifyReqAuth_ {};
    // The callback URL that is used to receive notifications about recording events and status.
    // 
    // > 
    // 
    // *   The URL must start with `http://` or `https://`.
    // 
    // *   You must use URLEncoder for encoding. This way, the system can identify Chinese characters, spaces, and special characters.
    // 
    // This parameter is required.
    shared_ptr<string> notifyUrl_ {};
    // The callback URL for on-demand recordings.
    // 
    // > 
    // 
    // *   The URL must start with `http://` or `https://`.
    // 
    // *   You must use URLEncoder for encoding. This way, the system can identify Chinese characters, spaces, and special characters.
    shared_ptr<string> onDemandUrl_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
