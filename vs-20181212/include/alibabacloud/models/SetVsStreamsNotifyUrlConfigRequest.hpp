// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETVSSTREAMSNOTIFYURLCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETVSSTREAMSNOTIFYURLCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class SetVsStreamsNotifyUrlConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetVsStreamsNotifyUrlConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, SetVsStreamsNotifyUrlConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    SetVsStreamsNotifyUrlConfigRequest() = default ;
    SetVsStreamsNotifyUrlConfigRequest(const SetVsStreamsNotifyUrlConfigRequest &) = default ;
    SetVsStreamsNotifyUrlConfigRequest(SetVsStreamsNotifyUrlConfigRequest &&) = default ;
    SetVsStreamsNotifyUrlConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetVsStreamsNotifyUrlConfigRequest() = default ;
    SetVsStreamsNotifyUrlConfigRequest& operator=(const SetVsStreamsNotifyUrlConfigRequest &) = default ;
    SetVsStreamsNotifyUrlConfigRequest& operator=(SetVsStreamsNotifyUrlConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authKey_ == nullptr
        && this->authType_ == nullptr && this->domainName_ == nullptr && this->notifyUrl_ == nullptr && this->ownerId_ == nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline SetVsStreamsNotifyUrlConfigRequest& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline SetVsStreamsNotifyUrlConfigRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetVsStreamsNotifyUrlConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline SetVsStreamsNotifyUrlConfigRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetVsStreamsNotifyUrlConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    shared_ptr<string> authKey_ {};
    shared_ptr<string> authType_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // This parameter is required.
    shared_ptr<string> notifyUrl_ {};
    shared_ptr<int64_t> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
