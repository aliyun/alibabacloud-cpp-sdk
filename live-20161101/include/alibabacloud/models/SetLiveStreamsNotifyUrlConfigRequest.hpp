// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVESTREAMSNOTIFYURLCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLIVESTREAMSNOTIFYURLCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveStreamsNotifyUrlConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveStreamsNotifyUrlConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ExceptionNotifyUrl, exceptionNotifyUrl_);
      DARABONBA_PTR_TO_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_TO_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SwitchNotifyUrl, switchNotifyUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveStreamsNotifyUrlConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ExceptionNotifyUrl, exceptionNotifyUrl_);
      DARABONBA_PTR_FROM_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_FROM_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SwitchNotifyUrl, switchNotifyUrl_);
    };
    SetLiveStreamsNotifyUrlConfigRequest() = default ;
    SetLiveStreamsNotifyUrlConfigRequest(const SetLiveStreamsNotifyUrlConfigRequest &) = default ;
    SetLiveStreamsNotifyUrlConfigRequest(SetLiveStreamsNotifyUrlConfigRequest &&) = default ;
    SetLiveStreamsNotifyUrlConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveStreamsNotifyUrlConfigRequest() = default ;
    SetLiveStreamsNotifyUrlConfigRequest& operator=(const SetLiveStreamsNotifyUrlConfigRequest &) = default ;
    SetLiveStreamsNotifyUrlConfigRequest& operator=(SetLiveStreamsNotifyUrlConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->exceptionNotifyUrl_ != nullptr && this->notifyAuthKey_ != nullptr && this->notifyReqAuth_ != nullptr && this->notifyUrl_ != nullptr && this->ownerId_ != nullptr
        && this->switchNotifyUrl_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetLiveStreamsNotifyUrlConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // exceptionNotifyUrl Field Functions 
    bool hasExceptionNotifyUrl() const { return this->exceptionNotifyUrl_ != nullptr;};
    void deleteExceptionNotifyUrl() { this->exceptionNotifyUrl_ = nullptr;};
    inline string exceptionNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(exceptionNotifyUrl_, "") };
    inline SetLiveStreamsNotifyUrlConfigRequest& setExceptionNotifyUrl(string exceptionNotifyUrl) { DARABONBA_PTR_SET_VALUE(exceptionNotifyUrl_, exceptionNotifyUrl) };


    // notifyAuthKey Field Functions 
    bool hasNotifyAuthKey() const { return this->notifyAuthKey_ != nullptr;};
    void deleteNotifyAuthKey() { this->notifyAuthKey_ = nullptr;};
    inline string notifyAuthKey() const { DARABONBA_PTR_GET_DEFAULT(notifyAuthKey_, "") };
    inline SetLiveStreamsNotifyUrlConfigRequest& setNotifyAuthKey(string notifyAuthKey) { DARABONBA_PTR_SET_VALUE(notifyAuthKey_, notifyAuthKey) };


    // notifyReqAuth Field Functions 
    bool hasNotifyReqAuth() const { return this->notifyReqAuth_ != nullptr;};
    void deleteNotifyReqAuth() { this->notifyReqAuth_ = nullptr;};
    inline string notifyReqAuth() const { DARABONBA_PTR_GET_DEFAULT(notifyReqAuth_, "") };
    inline SetLiveStreamsNotifyUrlConfigRequest& setNotifyReqAuth(string notifyReqAuth) { DARABONBA_PTR_SET_VALUE(notifyReqAuth_, notifyReqAuth) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline SetLiveStreamsNotifyUrlConfigRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLiveStreamsNotifyUrlConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // switchNotifyUrl Field Functions 
    bool hasSwitchNotifyUrl() const { return this->switchNotifyUrl_ != nullptr;};
    void deleteSwitchNotifyUrl() { this->switchNotifyUrl_ = nullptr;};
    inline string switchNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(switchNotifyUrl_, "") };
    inline SetLiveStreamsNotifyUrlConfigRequest& setSwitchNotifyUrl(string switchNotifyUrl) { DARABONBA_PTR_SET_VALUE(switchNotifyUrl_, switchNotifyUrl) };


  protected:
    // The ingest domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // Exception event callback URL.
    std::shared_ptr<string> exceptionNotifyUrl_ = nullptr;
    // The authentication key.
    // 
    // >  This parameter is required if you set the NotifyReqAuth parameter to **yes**.
    // 
    // Value requirements:
    // 
    // *   The key must be 16 to 64 characters in length.
    // *   The key can contain letters and digits.
    std::shared_ptr<string> notifyAuthKey_ = nullptr;
    // Specifies whether to enable callback authentication. Valid values:
    // 
    // *   **yes**: enables callback authentication. If you set this parameter to **yes**, you must also specify the NotifyAuthKey parameter.
    // *   **no**: disables callback authentication.
    // 
    // >  If you do not specify this parameter, the default value **no** is used.
    // 
    // For information about the authentication logic, see **Authentication for stream ingest callbacks**.
    std::shared_ptr<string> notifyReqAuth_ = nullptr;
    // The URL to which the stream ingest callbacks are sent.
    std::shared_ptr<string> notifyUrl_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> switchNotifyUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
