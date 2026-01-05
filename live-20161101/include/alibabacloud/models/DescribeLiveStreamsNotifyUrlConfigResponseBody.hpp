// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNOTIFYURLCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNOTIFYURLCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsNotifyUrlConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsNotifyUrlConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamsNotifyConfig, liveStreamsNotifyConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsNotifyUrlConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamsNotifyConfig, liveStreamsNotifyConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamsNotifyUrlConfigResponseBody() = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBody(const DescribeLiveStreamsNotifyUrlConfigResponseBody &) = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBody(DescribeLiveStreamsNotifyUrlConfigResponseBody &&) = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsNotifyUrlConfigResponseBody() = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBody& operator=(const DescribeLiveStreamsNotifyUrlConfigResponseBody &) = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBody& operator=(DescribeLiveStreamsNotifyUrlConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveStreamsNotifyConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveStreamsNotifyConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(ExceptionNotifyUrl, exceptionNotifyUrl_);
        DARABONBA_PTR_TO_JSON(NotifyAuthKey, notifyAuthKey_);
        DARABONBA_PTR_TO_JSON(NotifyReqAuth, notifyReqAuth_);
        DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      };
      friend void from_json(const Darabonba::Json& j, LiveStreamsNotifyConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(ExceptionNotifyUrl, exceptionNotifyUrl_);
        DARABONBA_PTR_FROM_JSON(NotifyAuthKey, notifyAuthKey_);
        DARABONBA_PTR_FROM_JSON(NotifyReqAuth, notifyReqAuth_);
        DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      };
      LiveStreamsNotifyConfig() = default ;
      LiveStreamsNotifyConfig(const LiveStreamsNotifyConfig &) = default ;
      LiveStreamsNotifyConfig(LiveStreamsNotifyConfig &&) = default ;
      LiveStreamsNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveStreamsNotifyConfig() = default ;
      LiveStreamsNotifyConfig& operator=(const LiveStreamsNotifyConfig &) = default ;
      LiveStreamsNotifyConfig& operator=(LiveStreamsNotifyConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainName_ == nullptr
        && this->exceptionNotifyUrl_ == nullptr && this->notifyAuthKey_ == nullptr && this->notifyReqAuth_ == nullptr && this->notifyUrl_ == nullptr; };
      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline LiveStreamsNotifyConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // exceptionNotifyUrl Field Functions 
      bool hasExceptionNotifyUrl() const { return this->exceptionNotifyUrl_ != nullptr;};
      void deleteExceptionNotifyUrl() { this->exceptionNotifyUrl_ = nullptr;};
      inline string getExceptionNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(exceptionNotifyUrl_, "") };
      inline LiveStreamsNotifyConfig& setExceptionNotifyUrl(string exceptionNotifyUrl) { DARABONBA_PTR_SET_VALUE(exceptionNotifyUrl_, exceptionNotifyUrl) };


      // notifyAuthKey Field Functions 
      bool hasNotifyAuthKey() const { return this->notifyAuthKey_ != nullptr;};
      void deleteNotifyAuthKey() { this->notifyAuthKey_ = nullptr;};
      inline string getNotifyAuthKey() const { DARABONBA_PTR_GET_DEFAULT(notifyAuthKey_, "") };
      inline LiveStreamsNotifyConfig& setNotifyAuthKey(string notifyAuthKey) { DARABONBA_PTR_SET_VALUE(notifyAuthKey_, notifyAuthKey) };


      // notifyReqAuth Field Functions 
      bool hasNotifyReqAuth() const { return this->notifyReqAuth_ != nullptr;};
      void deleteNotifyReqAuth() { this->notifyReqAuth_ = nullptr;};
      inline string getNotifyReqAuth() const { DARABONBA_PTR_GET_DEFAULT(notifyReqAuth_, "") };
      inline LiveStreamsNotifyConfig& setNotifyReqAuth(string notifyReqAuth) { DARABONBA_PTR_SET_VALUE(notifyReqAuth_, notifyReqAuth) };


      // notifyUrl Field Functions 
      bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
      void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
      inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
      inline LiveStreamsNotifyConfig& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    protected:
      // The ingest domain.
      shared_ptr<string> domainName_ {};
      // Exception event callback URL.
      shared_ptr<string> exceptionNotifyUrl_ {};
      // The authentication key.
      shared_ptr<string> notifyAuthKey_ {};
      // Indicates whether callback authentication is enabled. Valid values:
      // 
      // *   yes
      // *   no
      shared_ptr<string> notifyReqAuth_ {};
      // The callback URL.
      shared_ptr<string> notifyUrl_ {};
    };

    virtual bool empty() const override { return this->liveStreamsNotifyConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // liveStreamsNotifyConfig Field Functions 
    bool hasLiveStreamsNotifyConfig() const { return this->liveStreamsNotifyConfig_ != nullptr;};
    void deleteLiveStreamsNotifyConfig() { this->liveStreamsNotifyConfig_ = nullptr;};
    inline const DescribeLiveStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig & getLiveStreamsNotifyConfig() const { DARABONBA_PTR_GET_CONST(liveStreamsNotifyConfig_, DescribeLiveStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig) };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig getLiveStreamsNotifyConfig() { DARABONBA_PTR_GET(liveStreamsNotifyConfig_, DescribeLiveStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig) };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBody& setLiveStreamsNotifyConfig(const DescribeLiveStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig & liveStreamsNotifyConfig) { DARABONBA_PTR_SET_VALUE(liveStreamsNotifyConfig_, liveStreamsNotifyConfig) };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBody& setLiveStreamsNotifyConfig(DescribeLiveStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig && liveStreamsNotifyConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamsNotifyConfig_, liveStreamsNotifyConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The callback configuration.
    shared_ptr<DescribeLiveStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig> liveStreamsNotifyConfig_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
