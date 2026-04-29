// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWCHANNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWCHANNELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawChannelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawChannelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawChannelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePolarClawChannelsResponseBody() = default ;
    DescribePolarClawChannelsResponseBody(const DescribePolarClawChannelsResponseBody &) = default ;
    DescribePolarClawChannelsResponseBody(DescribePolarClawChannelsResponseBody &&) = default ;
    DescribePolarClawChannelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawChannelsResponseBody() = default ;
    DescribePolarClawChannelsResponseBody& operator=(const DescribePolarClawChannelsResponseBody &) = default ;
    DescribePolarClawChannelsResponseBody& operator=(DescribePolarClawChannelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Channels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Channels& obj) { 
        DARABONBA_PTR_TO_JSON(Accounts, accounts_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(Configured, configured_);
        DARABONBA_PTR_TO_JSON(DefaultAccountId, defaultAccountId_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      };
      friend void from_json(const Darabonba::Json& j, Channels& obj) { 
        DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(Configured, configured_);
        DARABONBA_PTR_FROM_JSON(DefaultAccountId, defaultAccountId_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      };
      Channels() = default ;
      Channels(const Channels &) = default ;
      Channels(Channels &&) = default ;
      Channels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Channels() = default ;
      Channels& operator=(const Channels &) = default ;
      Channels& operator=(Channels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Accounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(Configured, configured_);
          DARABONBA_PTR_TO_JSON(Connected, connected_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Issues, issues_);
          DARABONBA_PTR_TO_JSON(LastInboundAt, lastInboundAt_);
          DARABONBA_PTR_TO_JSON(LastOutboundAt, lastOutboundAt_);
        };
        friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(Configured, configured_);
          DARABONBA_PTR_FROM_JSON(Connected, connected_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Issues, issues_);
          DARABONBA_PTR_FROM_JSON(LastInboundAt, lastInboundAt_);
          DARABONBA_PTR_FROM_JSON(LastOutboundAt, lastOutboundAt_);
        };
        Accounts() = default ;
        Accounts(const Accounts &) = default ;
        Accounts(Accounts &&) = default ;
        Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Accounts() = default ;
        Accounts& operator=(const Accounts &) = default ;
        Accounts& operator=(Accounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->configured_ == nullptr && this->connected_ == nullptr && this->enabled_ == nullptr && this->issues_ == nullptr && this->lastInboundAt_ == nullptr
        && this->lastOutboundAt_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
        inline Accounts& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // configured Field Functions 
        bool hasConfigured() const { return this->configured_ != nullptr;};
        void deleteConfigured() { this->configured_ = nullptr;};
        inline bool getConfigured() const { DARABONBA_PTR_GET_DEFAULT(configured_, false) };
        inline Accounts& setConfigured(bool configured) { DARABONBA_PTR_SET_VALUE(configured_, configured) };


        // connected Field Functions 
        bool hasConnected() const { return this->connected_ != nullptr;};
        void deleteConnected() { this->connected_ = nullptr;};
        inline bool getConnected() const { DARABONBA_PTR_GET_DEFAULT(connected_, false) };
        inline Accounts& setConnected(bool connected) { DARABONBA_PTR_SET_VALUE(connected_, connected) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Accounts& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // issues Field Functions 
        bool hasIssues() const { return this->issues_ != nullptr;};
        void deleteIssues() { this->issues_ = nullptr;};
        inline const vector<string> & getIssues() const { DARABONBA_PTR_GET_CONST(issues_, vector<string>) };
        inline vector<string> getIssues() { DARABONBA_PTR_GET(issues_, vector<string>) };
        inline Accounts& setIssues(const vector<string> & issues) { DARABONBA_PTR_SET_VALUE(issues_, issues) };
        inline Accounts& setIssues(vector<string> && issues) { DARABONBA_PTR_SET_RVALUE(issues_, issues) };


        // lastInboundAt Field Functions 
        bool hasLastInboundAt() const { return this->lastInboundAt_ != nullptr;};
        void deleteLastInboundAt() { this->lastInboundAt_ = nullptr;};
        inline int64_t getLastInboundAt() const { DARABONBA_PTR_GET_DEFAULT(lastInboundAt_, 0L) };
        inline Accounts& setLastInboundAt(int64_t lastInboundAt) { DARABONBA_PTR_SET_VALUE(lastInboundAt_, lastInboundAt) };


        // lastOutboundAt Field Functions 
        bool hasLastOutboundAt() const { return this->lastOutboundAt_ != nullptr;};
        void deleteLastOutboundAt() { this->lastOutboundAt_ = nullptr;};
        inline int64_t getLastOutboundAt() const { DARABONBA_PTR_GET_DEFAULT(lastOutboundAt_, 0L) };
        inline Accounts& setLastOutboundAt(int64_t lastOutboundAt) { DARABONBA_PTR_SET_VALUE(lastOutboundAt_, lastOutboundAt) };


      protected:
        shared_ptr<string> accountId_ {};
        shared_ptr<bool> configured_ {};
        shared_ptr<bool> connected_ {};
        shared_ptr<bool> enabled_ {};
        shared_ptr<vector<string>> issues_ {};
        shared_ptr<int64_t> lastInboundAt_ {};
        shared_ptr<int64_t> lastOutboundAt_ {};
      };

      virtual bool empty() const override { return this->accounts_ == nullptr
        && this->channelId_ == nullptr && this->configured_ == nullptr && this->defaultAccountId_ == nullptr && this->enabled_ == nullptr; };
      // accounts Field Functions 
      bool hasAccounts() const { return this->accounts_ != nullptr;};
      void deleteAccounts() { this->accounts_ = nullptr;};
      inline const vector<Channels::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<Channels::Accounts>) };
      inline vector<Channels::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<Channels::Accounts>) };
      inline Channels& setAccounts(const vector<Channels::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
      inline Channels& setAccounts(vector<Channels::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline Channels& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // configured Field Functions 
      bool hasConfigured() const { return this->configured_ != nullptr;};
      void deleteConfigured() { this->configured_ = nullptr;};
      inline bool getConfigured() const { DARABONBA_PTR_GET_DEFAULT(configured_, false) };
      inline Channels& setConfigured(bool configured) { DARABONBA_PTR_SET_VALUE(configured_, configured) };


      // defaultAccountId Field Functions 
      bool hasDefaultAccountId() const { return this->defaultAccountId_ != nullptr;};
      void deleteDefaultAccountId() { this->defaultAccountId_ = nullptr;};
      inline string getDefaultAccountId() const { DARABONBA_PTR_GET_DEFAULT(defaultAccountId_, "") };
      inline Channels& setDefaultAccountId(string defaultAccountId) { DARABONBA_PTR_SET_VALUE(defaultAccountId_, defaultAccountId) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Channels& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    protected:
      shared_ptr<vector<Channels::Accounts>> accounts_ {};
      shared_ptr<string> channelId_ {};
      shared_ptr<bool> configured_ {};
      shared_ptr<string> defaultAccountId_ {};
      shared_ptr<bool> enabled_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->channels_ == nullptr && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawChannelsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<DescribePolarClawChannelsResponseBody::Channels> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<DescribePolarClawChannelsResponseBody::Channels>) };
    inline vector<DescribePolarClawChannelsResponseBody::Channels> getChannels() { DARABONBA_PTR_GET(channels_, vector<DescribePolarClawChannelsResponseBody::Channels>) };
    inline DescribePolarClawChannelsResponseBody& setChannels(const vector<DescribePolarClawChannelsResponseBody::Channels> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline DescribePolarClawChannelsResponseBody& setChannels(vector<DescribePolarClawChannelsResponseBody::Channels> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribePolarClawChannelsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePolarClawChannelsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawChannelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<vector<DescribePolarClawChannelsResponseBody::Channels>> channels_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
