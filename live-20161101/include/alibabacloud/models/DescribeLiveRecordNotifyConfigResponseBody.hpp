// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDNOTIFYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDNOTIFYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordNotifyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveRecordNotifyConfig, liveRecordNotifyConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveRecordNotifyConfig, liveRecordNotifyConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveRecordNotifyConfigResponseBody() = default ;
    DescribeLiveRecordNotifyConfigResponseBody(const DescribeLiveRecordNotifyConfigResponseBody &) = default ;
    DescribeLiveRecordNotifyConfigResponseBody(DescribeLiveRecordNotifyConfigResponseBody &&) = default ;
    DescribeLiveRecordNotifyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordNotifyConfigResponseBody() = default ;
    DescribeLiveRecordNotifyConfigResponseBody& operator=(const DescribeLiveRecordNotifyConfigResponseBody &) = default ;
    DescribeLiveRecordNotifyConfigResponseBody& operator=(DescribeLiveRecordNotifyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveRecordNotifyConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveRecordNotifyConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(NeedStatusNotify, needStatusNotify_);
        DARABONBA_PTR_TO_JSON(NotifyAuthKey, notifyAuthKey_);
        DARABONBA_PTR_TO_JSON(NotifyReqAuth, notifyReqAuth_);
        DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
        DARABONBA_PTR_TO_JSON(OnDemandUrl, onDemandUrl_);
      };
      friend void from_json(const Darabonba::Json& j, LiveRecordNotifyConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(NeedStatusNotify, needStatusNotify_);
        DARABONBA_PTR_FROM_JSON(NotifyAuthKey, notifyAuthKey_);
        DARABONBA_PTR_FROM_JSON(NotifyReqAuth, notifyReqAuth_);
        DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
        DARABONBA_PTR_FROM_JSON(OnDemandUrl, onDemandUrl_);
      };
      LiveRecordNotifyConfig() = default ;
      LiveRecordNotifyConfig(const LiveRecordNotifyConfig &) = default ;
      LiveRecordNotifyConfig(LiveRecordNotifyConfig &&) = default ;
      LiveRecordNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveRecordNotifyConfig() = default ;
      LiveRecordNotifyConfig& operator=(const LiveRecordNotifyConfig &) = default ;
      LiveRecordNotifyConfig& operator=(LiveRecordNotifyConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainName_ == nullptr
        && this->needStatusNotify_ == nullptr && this->notifyAuthKey_ == nullptr && this->notifyReqAuth_ == nullptr && this->notifyUrl_ == nullptr && this->onDemandUrl_ == nullptr; };
      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline LiveRecordNotifyConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // needStatusNotify Field Functions 
      bool hasNeedStatusNotify() const { return this->needStatusNotify_ != nullptr;};
      void deleteNeedStatusNotify() { this->needStatusNotify_ = nullptr;};
      inline bool getNeedStatusNotify() const { DARABONBA_PTR_GET_DEFAULT(needStatusNotify_, false) };
      inline LiveRecordNotifyConfig& setNeedStatusNotify(bool needStatusNotify) { DARABONBA_PTR_SET_VALUE(needStatusNotify_, needStatusNotify) };


      // notifyAuthKey Field Functions 
      bool hasNotifyAuthKey() const { return this->notifyAuthKey_ != nullptr;};
      void deleteNotifyAuthKey() { this->notifyAuthKey_ = nullptr;};
      inline string getNotifyAuthKey() const { DARABONBA_PTR_GET_DEFAULT(notifyAuthKey_, "") };
      inline LiveRecordNotifyConfig& setNotifyAuthKey(string notifyAuthKey) { DARABONBA_PTR_SET_VALUE(notifyAuthKey_, notifyAuthKey) };


      // notifyReqAuth Field Functions 
      bool hasNotifyReqAuth() const { return this->notifyReqAuth_ != nullptr;};
      void deleteNotifyReqAuth() { this->notifyReqAuth_ = nullptr;};
      inline bool getNotifyReqAuth() const { DARABONBA_PTR_GET_DEFAULT(notifyReqAuth_, false) };
      inline LiveRecordNotifyConfig& setNotifyReqAuth(bool notifyReqAuth) { DARABONBA_PTR_SET_VALUE(notifyReqAuth_, notifyReqAuth) };


      // notifyUrl Field Functions 
      bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
      void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
      inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
      inline LiveRecordNotifyConfig& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


      // onDemandUrl Field Functions 
      bool hasOnDemandUrl() const { return this->onDemandUrl_ != nullptr;};
      void deleteOnDemandUrl() { this->onDemandUrl_ = nullptr;};
      inline string getOnDemandUrl() const { DARABONBA_PTR_GET_DEFAULT(onDemandUrl_, "") };
      inline LiveRecordNotifyConfig& setOnDemandUrl(string onDemandUrl) { DARABONBA_PTR_SET_VALUE(onDemandUrl_, onDemandUrl) };


    protected:
      // The main streaming domain.
      shared_ptr<string> domainName_ {};
      // Indicates whether recording status callbacks are enabled. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> needStatusNotify_ {};
      shared_ptr<string> notifyAuthKey_ {};
      shared_ptr<bool> notifyReqAuth_ {};
      // The recording callback URL.
      shared_ptr<string> notifyUrl_ {};
      // The callback URL for on-demand recording.
      shared_ptr<string> onDemandUrl_ {};
    };

    virtual bool empty() const override { return this->liveRecordNotifyConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // liveRecordNotifyConfig Field Functions 
    bool hasLiveRecordNotifyConfig() const { return this->liveRecordNotifyConfig_ != nullptr;};
    void deleteLiveRecordNotifyConfig() { this->liveRecordNotifyConfig_ = nullptr;};
    inline const DescribeLiveRecordNotifyConfigResponseBody::LiveRecordNotifyConfig & getLiveRecordNotifyConfig() const { DARABONBA_PTR_GET_CONST(liveRecordNotifyConfig_, DescribeLiveRecordNotifyConfigResponseBody::LiveRecordNotifyConfig) };
    inline DescribeLiveRecordNotifyConfigResponseBody::LiveRecordNotifyConfig getLiveRecordNotifyConfig() { DARABONBA_PTR_GET(liveRecordNotifyConfig_, DescribeLiveRecordNotifyConfigResponseBody::LiveRecordNotifyConfig) };
    inline DescribeLiveRecordNotifyConfigResponseBody& setLiveRecordNotifyConfig(const DescribeLiveRecordNotifyConfigResponseBody::LiveRecordNotifyConfig & liveRecordNotifyConfig) { DARABONBA_PTR_SET_VALUE(liveRecordNotifyConfig_, liveRecordNotifyConfig) };
    inline DescribeLiveRecordNotifyConfigResponseBody& setLiveRecordNotifyConfig(DescribeLiveRecordNotifyConfigResponseBody::LiveRecordNotifyConfig && liveRecordNotifyConfig) { DARABONBA_PTR_SET_RVALUE(liveRecordNotifyConfig_, liveRecordNotifyConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveRecordNotifyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of callbacks for live stream recording.
    shared_ptr<DescribeLiveRecordNotifyConfigResponseBody::LiveRecordNotifyConfig> liveRecordNotifyConfig_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
