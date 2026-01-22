// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSNOTIFYURLCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSNOTIFYURLCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsStreamsNotifyUrlConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsStreamsNotifyUrlConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamsNotifyConfig, liveStreamsNotifyConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsStreamsNotifyUrlConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamsNotifyConfig, liveStreamsNotifyConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsStreamsNotifyUrlConfigResponseBody() = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBody(const DescribeVsStreamsNotifyUrlConfigResponseBody &) = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBody(DescribeVsStreamsNotifyUrlConfigResponseBody &&) = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsStreamsNotifyUrlConfigResponseBody() = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBody& operator=(const DescribeVsStreamsNotifyUrlConfigResponseBody &) = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBody& operator=(DescribeVsStreamsNotifyUrlConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveStreamsNotifyConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveStreamsNotifyConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
        DARABONBA_PTR_TO_JSON(AuthType, authType_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      };
      friend void from_json(const Darabonba::Json& j, LiveStreamsNotifyConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
        DARABONBA_PTR_FROM_JSON(AuthType, authType_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
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
      virtual bool empty() const override { return this->authKey_ == nullptr
        && this->authType_ == nullptr && this->domainName_ == nullptr && this->notifyUrl_ == nullptr; };
      // authKey Field Functions 
      bool hasAuthKey() const { return this->authKey_ != nullptr;};
      void deleteAuthKey() { this->authKey_ = nullptr;};
      inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
      inline LiveStreamsNotifyConfig& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline LiveStreamsNotifyConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline LiveStreamsNotifyConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // notifyUrl Field Functions 
      bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
      void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
      inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
      inline LiveStreamsNotifyConfig& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    protected:
      shared_ptr<string> authKey_ {};
      shared_ptr<string> authType_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> notifyUrl_ {};
    };

    virtual bool empty() const override { return this->liveStreamsNotifyConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // liveStreamsNotifyConfig Field Functions 
    bool hasLiveStreamsNotifyConfig() const { return this->liveStreamsNotifyConfig_ != nullptr;};
    void deleteLiveStreamsNotifyConfig() { this->liveStreamsNotifyConfig_ = nullptr;};
    inline const DescribeVsStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig & getLiveStreamsNotifyConfig() const { DARABONBA_PTR_GET_CONST(liveStreamsNotifyConfig_, DescribeVsStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig) };
    inline DescribeVsStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig getLiveStreamsNotifyConfig() { DARABONBA_PTR_GET(liveStreamsNotifyConfig_, DescribeVsStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig) };
    inline DescribeVsStreamsNotifyUrlConfigResponseBody& setLiveStreamsNotifyConfig(const DescribeVsStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig & liveStreamsNotifyConfig) { DARABONBA_PTR_SET_VALUE(liveStreamsNotifyConfig_, liveStreamsNotifyConfig) };
    inline DescribeVsStreamsNotifyUrlConfigResponseBody& setLiveStreamsNotifyConfig(DescribeVsStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig && liveStreamsNotifyConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamsNotifyConfig_, liveStreamsNotifyConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsStreamsNotifyUrlConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeVsStreamsNotifyUrlConfigResponseBody::LiveStreamsNotifyConfig> liveStreamsNotifyConfig_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
