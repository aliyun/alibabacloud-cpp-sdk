// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVERECORDNOTIFYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVERECORDNOTIFYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveRecordNotifyConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveRecordNotifyConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(NeedStatusNotify, needStatusNotify_);
      DARABONBA_PTR_TO_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_TO_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(OnDemandUrl, onDemandUrl_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveRecordNotifyConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(NeedStatusNotify, needStatusNotify_);
      DARABONBA_PTR_FROM_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_FROM_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(OnDemandUrl, onDemandUrl_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    AddLiveRecordNotifyConfigRequest() = default ;
    AddLiveRecordNotifyConfigRequest(const AddLiveRecordNotifyConfigRequest &) = default ;
    AddLiveRecordNotifyConfigRequest(AddLiveRecordNotifyConfigRequest &&) = default ;
    AddLiveRecordNotifyConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveRecordNotifyConfigRequest() = default ;
    AddLiveRecordNotifyConfigRequest& operator=(const AddLiveRecordNotifyConfigRequest &) = default ;
    AddLiveRecordNotifyConfigRequest& operator=(AddLiveRecordNotifyConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->needStatusNotify_ == nullptr && return this->notifyAuthKey_ == nullptr && return this->notifyReqAuth_ == nullptr && return this->notifyUrl_ == nullptr && return this->onDemandUrl_ == nullptr
        && return this->ownerId_ == nullptr && return this->securityToken_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddLiveRecordNotifyConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // needStatusNotify Field Functions 
    bool hasNeedStatusNotify() const { return this->needStatusNotify_ != nullptr;};
    void deleteNeedStatusNotify() { this->needStatusNotify_ = nullptr;};
    inline bool needStatusNotify() const { DARABONBA_PTR_GET_DEFAULT(needStatusNotify_, false) };
    inline AddLiveRecordNotifyConfigRequest& setNeedStatusNotify(bool needStatusNotify) { DARABONBA_PTR_SET_VALUE(needStatusNotify_, needStatusNotify) };


    // notifyAuthKey Field Functions 
    bool hasNotifyAuthKey() const { return this->notifyAuthKey_ != nullptr;};
    void deleteNotifyAuthKey() { this->notifyAuthKey_ = nullptr;};
    inline string notifyAuthKey() const { DARABONBA_PTR_GET_DEFAULT(notifyAuthKey_, "") };
    inline AddLiveRecordNotifyConfigRequest& setNotifyAuthKey(string notifyAuthKey) { DARABONBA_PTR_SET_VALUE(notifyAuthKey_, notifyAuthKey) };


    // notifyReqAuth Field Functions 
    bool hasNotifyReqAuth() const { return this->notifyReqAuth_ != nullptr;};
    void deleteNotifyReqAuth() { this->notifyReqAuth_ = nullptr;};
    inline bool notifyReqAuth() const { DARABONBA_PTR_GET_DEFAULT(notifyReqAuth_, false) };
    inline AddLiveRecordNotifyConfigRequest& setNotifyReqAuth(bool notifyReqAuth) { DARABONBA_PTR_SET_VALUE(notifyReqAuth_, notifyReqAuth) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline AddLiveRecordNotifyConfigRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // onDemandUrl Field Functions 
    bool hasOnDemandUrl() const { return this->onDemandUrl_ != nullptr;};
    void deleteOnDemandUrl() { this->onDemandUrl_ = nullptr;};
    inline string onDemandUrl() const { DARABONBA_PTR_GET_DEFAULT(onDemandUrl_, "") };
    inline AddLiveRecordNotifyConfigRequest& setOnDemandUrl(string onDemandUrl) { DARABONBA_PTR_SET_VALUE(onDemandUrl_, onDemandUrl) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveRecordNotifyConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AddLiveRecordNotifyConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // Specifies whether to enable callbacks for recording status. Valid values:
    // 
    // *   true: enables callbacks for recording status. If you set this parameter to **true**, an example of recording status callback is returned.
    // *   false (default): disables callbacks for recording status.
    std::shared_ptr<bool> needStatusNotify_ = nullptr;
    std::shared_ptr<string> notifyAuthKey_ = nullptr;
    std::shared_ptr<bool> notifyReqAuth_ = nullptr;
    // The callback URL that is used to receive notifications about recording events and status.
    // 
    // >  The URL must start with `http://` or `https://`. For more information, see [Callbacks for live stream recording](https://help.aliyun.com/document_detail/55016.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> notifyUrl_ = nullptr;
    // The callback URL for on-demand recordings.
    // 
    // >  The URL must start with `http://` or `https://`. For more information, see [On-demand recording](https://help.aliyun.com/document_detail/85910.html).
    std::shared_ptr<string> onDemandUrl_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
