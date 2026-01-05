// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAUDIOAUDITNOTIFYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAUDIOAUDITNOTIFYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAudioAuditNotifyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAudioAuditNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAudioAuditNotifyConfigList, liveAudioAuditNotifyConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAudioAuditNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAudioAuditNotifyConfigList, liveAudioAuditNotifyConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveAudioAuditNotifyConfigResponseBody() = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBody(const DescribeLiveAudioAuditNotifyConfigResponseBody &) = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBody(DescribeLiveAudioAuditNotifyConfigResponseBody &&) = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAudioAuditNotifyConfigResponseBody() = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBody& operator=(const DescribeLiveAudioAuditNotifyConfigResponseBody &) = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBody& operator=(DescribeLiveAudioAuditNotifyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveAudioAuditNotifyConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveAudioAuditNotifyConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveAudioAuditNotifyConfig, liveAudioAuditNotifyConfig_);
      };
      friend void from_json(const Darabonba::Json& j, LiveAudioAuditNotifyConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveAudioAuditNotifyConfig, liveAudioAuditNotifyConfig_);
      };
      LiveAudioAuditNotifyConfigList() = default ;
      LiveAudioAuditNotifyConfigList(const LiveAudioAuditNotifyConfigList &) = default ;
      LiveAudioAuditNotifyConfigList(LiveAudioAuditNotifyConfigList &&) = default ;
      LiveAudioAuditNotifyConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveAudioAuditNotifyConfigList() = default ;
      LiveAudioAuditNotifyConfigList& operator=(const LiveAudioAuditNotifyConfigList &) = default ;
      LiveAudioAuditNotifyConfigList& operator=(LiveAudioAuditNotifyConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveAudioAuditNotifyConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveAudioAuditNotifyConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Callback, callback_);
          DARABONBA_PTR_TO_JSON(CallbackTemplate, callbackTemplate_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        };
        friend void from_json(const Darabonba::Json& j, LiveAudioAuditNotifyConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Callback, callback_);
          DARABONBA_PTR_FROM_JSON(CallbackTemplate, callbackTemplate_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        };
        LiveAudioAuditNotifyConfig() = default ;
        LiveAudioAuditNotifyConfig(const LiveAudioAuditNotifyConfig &) = default ;
        LiveAudioAuditNotifyConfig(LiveAudioAuditNotifyConfig &&) = default ;
        LiveAudioAuditNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveAudioAuditNotifyConfig() = default ;
        LiveAudioAuditNotifyConfig& operator=(const LiveAudioAuditNotifyConfig &) = default ;
        LiveAudioAuditNotifyConfig& operator=(LiveAudioAuditNotifyConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callback_ == nullptr
        && this->callbackTemplate_ == nullptr && this->domainName_ == nullptr; };
        // callback Field Functions 
        bool hasCallback() const { return this->callback_ != nullptr;};
        void deleteCallback() { this->callback_ = nullptr;};
        inline string getCallback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
        inline LiveAudioAuditNotifyConfig& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


        // callbackTemplate Field Functions 
        bool hasCallbackTemplate() const { return this->callbackTemplate_ != nullptr;};
        void deleteCallbackTemplate() { this->callbackTemplate_ = nullptr;};
        inline string getCallbackTemplate() const { DARABONBA_PTR_GET_DEFAULT(callbackTemplate_, "") };
        inline LiveAudioAuditNotifyConfig& setCallbackTemplate(string callbackTemplate) { DARABONBA_PTR_SET_VALUE(callbackTemplate_, callbackTemplate) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveAudioAuditNotifyConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      protected:
        // The callback URL.
        shared_ptr<string> callback_ {};
        // The callback template. The following fields are configured:
        // 
        // *   **{DomainName}**: the streaming domain.
        // *   **{AppName}**: the name of the application to which the live stream belongs.
        // *   **{StreamName}**: the name of the live stream.
        // *   **{Timestamp}**: the time when the callback is returned. The value of this field is a UNIX timestamp. Unit: seconds.
        // *   **{Result}**: the moderation results.
        shared_ptr<string> callbackTemplate_ {};
        // The main streaming domain.
        shared_ptr<string> domainName_ {};
      };

      virtual bool empty() const override { return this->liveAudioAuditNotifyConfig_ == nullptr; };
      // liveAudioAuditNotifyConfig Field Functions 
      bool hasLiveAudioAuditNotifyConfig() const { return this->liveAudioAuditNotifyConfig_ != nullptr;};
      void deleteLiveAudioAuditNotifyConfig() { this->liveAudioAuditNotifyConfig_ = nullptr;};
      inline const vector<LiveAudioAuditNotifyConfigList::LiveAudioAuditNotifyConfig> & getLiveAudioAuditNotifyConfig() const { DARABONBA_PTR_GET_CONST(liveAudioAuditNotifyConfig_, vector<LiveAudioAuditNotifyConfigList::LiveAudioAuditNotifyConfig>) };
      inline vector<LiveAudioAuditNotifyConfigList::LiveAudioAuditNotifyConfig> getLiveAudioAuditNotifyConfig() { DARABONBA_PTR_GET(liveAudioAuditNotifyConfig_, vector<LiveAudioAuditNotifyConfigList::LiveAudioAuditNotifyConfig>) };
      inline LiveAudioAuditNotifyConfigList& setLiveAudioAuditNotifyConfig(const vector<LiveAudioAuditNotifyConfigList::LiveAudioAuditNotifyConfig> & liveAudioAuditNotifyConfig) { DARABONBA_PTR_SET_VALUE(liveAudioAuditNotifyConfig_, liveAudioAuditNotifyConfig) };
      inline LiveAudioAuditNotifyConfigList& setLiveAudioAuditNotifyConfig(vector<LiveAudioAuditNotifyConfigList::LiveAudioAuditNotifyConfig> && liveAudioAuditNotifyConfig) { DARABONBA_PTR_SET_RVALUE(liveAudioAuditNotifyConfig_, liveAudioAuditNotifyConfig) };


    protected:
      shared_ptr<vector<LiveAudioAuditNotifyConfigList::LiveAudioAuditNotifyConfig>> liveAudioAuditNotifyConfig_ {};
    };

    virtual bool empty() const override { return this->liveAudioAuditNotifyConfigList_ == nullptr
        && this->requestId_ == nullptr; };
    // liveAudioAuditNotifyConfigList Field Functions 
    bool hasLiveAudioAuditNotifyConfigList() const { return this->liveAudioAuditNotifyConfigList_ != nullptr;};
    void deleteLiveAudioAuditNotifyConfigList() { this->liveAudioAuditNotifyConfigList_ = nullptr;};
    inline const DescribeLiveAudioAuditNotifyConfigResponseBody::LiveAudioAuditNotifyConfigList & getLiveAudioAuditNotifyConfigList() const { DARABONBA_PTR_GET_CONST(liveAudioAuditNotifyConfigList_, DescribeLiveAudioAuditNotifyConfigResponseBody::LiveAudioAuditNotifyConfigList) };
    inline DescribeLiveAudioAuditNotifyConfigResponseBody::LiveAudioAuditNotifyConfigList getLiveAudioAuditNotifyConfigList() { DARABONBA_PTR_GET(liveAudioAuditNotifyConfigList_, DescribeLiveAudioAuditNotifyConfigResponseBody::LiveAudioAuditNotifyConfigList) };
    inline DescribeLiveAudioAuditNotifyConfigResponseBody& setLiveAudioAuditNotifyConfigList(const DescribeLiveAudioAuditNotifyConfigResponseBody::LiveAudioAuditNotifyConfigList & liveAudioAuditNotifyConfigList) { DARABONBA_PTR_SET_VALUE(liveAudioAuditNotifyConfigList_, liveAudioAuditNotifyConfigList) };
    inline DescribeLiveAudioAuditNotifyConfigResponseBody& setLiveAudioAuditNotifyConfigList(DescribeLiveAudioAuditNotifyConfigResponseBody::LiveAudioAuditNotifyConfigList && liveAudioAuditNotifyConfigList) { DARABONBA_PTR_SET_RVALUE(liveAudioAuditNotifyConfigList_, liveAudioAuditNotifyConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveAudioAuditNotifyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of callbacks for audio moderation results.
    shared_ptr<DescribeLiveAudioAuditNotifyConfigResponseBody::LiveAudioAuditNotifyConfigList> liveAudioAuditNotifyConfigList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
