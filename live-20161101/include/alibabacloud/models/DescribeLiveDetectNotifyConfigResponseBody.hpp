// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTNOTIFYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTNOTIFYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDetectNotifyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDetectNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveDetectNotifyConfig, liveDetectNotifyConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDetectNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveDetectNotifyConfig, liveDetectNotifyConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDetectNotifyConfigResponseBody() = default ;
    DescribeLiveDetectNotifyConfigResponseBody(const DescribeLiveDetectNotifyConfigResponseBody &) = default ;
    DescribeLiveDetectNotifyConfigResponseBody(DescribeLiveDetectNotifyConfigResponseBody &&) = default ;
    DescribeLiveDetectNotifyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDetectNotifyConfigResponseBody() = default ;
    DescribeLiveDetectNotifyConfigResponseBody& operator=(const DescribeLiveDetectNotifyConfigResponseBody &) = default ;
    DescribeLiveDetectNotifyConfigResponseBody& operator=(DescribeLiveDetectNotifyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveDetectNotifyConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveDetectNotifyConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      };
      friend void from_json(const Darabonba::Json& j, LiveDetectNotifyConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      };
      LiveDetectNotifyConfig() = default ;
      LiveDetectNotifyConfig(const LiveDetectNotifyConfig &) = default ;
      LiveDetectNotifyConfig(LiveDetectNotifyConfig &&) = default ;
      LiveDetectNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveDetectNotifyConfig() = default ;
      LiveDetectNotifyConfig& operator=(const LiveDetectNotifyConfig &) = default ;
      LiveDetectNotifyConfig& operator=(LiveDetectNotifyConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainName_ == nullptr
        && this->notifyUrl_ == nullptr; };
      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline LiveDetectNotifyConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // notifyUrl Field Functions 
      bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
      void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
      inline string getNotifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
      inline LiveDetectNotifyConfig& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    protected:
      // The main streaming domain.
      shared_ptr<string> domainName_ {};
      // The callback URL.
      shared_ptr<string> notifyUrl_ {};
    };

    virtual bool empty() const override { return this->liveDetectNotifyConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // liveDetectNotifyConfig Field Functions 
    bool hasLiveDetectNotifyConfig() const { return this->liveDetectNotifyConfig_ != nullptr;};
    void deleteLiveDetectNotifyConfig() { this->liveDetectNotifyConfig_ = nullptr;};
    inline const DescribeLiveDetectNotifyConfigResponseBody::LiveDetectNotifyConfig & getLiveDetectNotifyConfig() const { DARABONBA_PTR_GET_CONST(liveDetectNotifyConfig_, DescribeLiveDetectNotifyConfigResponseBody::LiveDetectNotifyConfig) };
    inline DescribeLiveDetectNotifyConfigResponseBody::LiveDetectNotifyConfig getLiveDetectNotifyConfig() { DARABONBA_PTR_GET(liveDetectNotifyConfig_, DescribeLiveDetectNotifyConfigResponseBody::LiveDetectNotifyConfig) };
    inline DescribeLiveDetectNotifyConfigResponseBody& setLiveDetectNotifyConfig(const DescribeLiveDetectNotifyConfigResponseBody::LiveDetectNotifyConfig & liveDetectNotifyConfig) { DARABONBA_PTR_SET_VALUE(liveDetectNotifyConfig_, liveDetectNotifyConfig) };
    inline DescribeLiveDetectNotifyConfigResponseBody& setLiveDetectNotifyConfig(DescribeLiveDetectNotifyConfigResponseBody::LiveDetectNotifyConfig && liveDetectNotifyConfig) { DARABONBA_PTR_SET_RVALUE(liveDetectNotifyConfig_, liveDetectNotifyConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDetectNotifyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The callback configuration.
    shared_ptr<DescribeLiveDetectNotifyConfigResponseBody::LiveDetectNotifyConfig> liveDetectNotifyConfig_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
