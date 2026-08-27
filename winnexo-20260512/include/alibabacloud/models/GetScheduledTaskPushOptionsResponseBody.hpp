// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULEDTASKPUSHOPTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULEDTASKPUSHOPTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetScheduledTaskPushOptionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduledTaskPushOptionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(channels, channels_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(emptyHint, emptyHint_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduledTaskPushOptionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(channels, channels_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(emptyHint, emptyHint_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetScheduledTaskPushOptionsResponseBody() = default ;
    GetScheduledTaskPushOptionsResponseBody(const GetScheduledTaskPushOptionsResponseBody &) = default ;
    GetScheduledTaskPushOptionsResponseBody(GetScheduledTaskPushOptionsResponseBody &&) = default ;
    GetScheduledTaskPushOptionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduledTaskPushOptionsResponseBody() = default ;
    GetScheduledTaskPushOptionsResponseBody& operator=(const GetScheduledTaskPushOptionsResponseBody &) = default ;
    GetScheduledTaskPushOptionsResponseBody& operator=(GetScheduledTaskPushOptionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Channels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Channels& obj) { 
        DARABONBA_PTR_TO_JSON(channelName, channelName_);
        DARABONBA_PTR_TO_JSON(channelType, channelType_);
        DARABONBA_PTR_TO_JSON(imGroups, imGroups_);
        DARABONBA_PTR_TO_JSON(methods, methods_);
      };
      friend void from_json(const Darabonba::Json& j, Channels& obj) { 
        DARABONBA_PTR_FROM_JSON(channelName, channelName_);
        DARABONBA_PTR_FROM_JSON(channelType, channelType_);
        DARABONBA_PTR_FROM_JSON(imGroups, imGroups_);
        DARABONBA_PTR_FROM_JSON(methods, methods_);
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
      class Methods : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Methods& obj) { 
          DARABONBA_PTR_TO_JSON(disabledReason, disabledReason_);
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(method, method_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Methods& obj) { 
          DARABONBA_PTR_FROM_JSON(disabledReason, disabledReason_);
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(method, method_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        Methods() = default ;
        Methods(const Methods &) = default ;
        Methods(Methods &&) = default ;
        Methods(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Methods() = default ;
        Methods& operator=(const Methods &) = default ;
        Methods& operator=(Methods &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->disabledReason_ == nullptr
        && this->enabled_ == nullptr && this->method_ == nullptr && this->name_ == nullptr; };
        // disabledReason Field Functions 
        bool hasDisabledReason() const { return this->disabledReason_ != nullptr;};
        void deleteDisabledReason() { this->disabledReason_ = nullptr;};
        inline string getDisabledReason() const { DARABONBA_PTR_GET_DEFAULT(disabledReason_, "") };
        inline Methods& setDisabledReason(string disabledReason) { DARABONBA_PTR_SET_VALUE(disabledReason_, disabledReason) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Methods& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline Methods& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Methods& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The reason why the option is grayed out.
        shared_ptr<string> disabledReason_ {};
        // The feature switch. This parameter is optional when type is set to web_search.
        // 
        // This parameter is required.
        shared_ptr<bool> enabled_ {};
        // The method.
        // 
        // This parameter is required.
        shared_ptr<string> method_ {};
        // The name.
        // 
        // This parameter is required.
        shared_ptr<string> name_ {};
      };

      class ImGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImGroups& obj) { 
          DARABONBA_PTR_TO_JSON(imGroupId, imGroupId_);
          DARABONBA_PTR_TO_JSON(imGroupName, imGroupName_);
          DARABONBA_PTR_TO_JSON(mappingId, mappingId_);
        };
        friend void from_json(const Darabonba::Json& j, ImGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(imGroupId, imGroupId_);
          DARABONBA_PTR_FROM_JSON(imGroupName, imGroupName_);
          DARABONBA_PTR_FROM_JSON(mappingId, mappingId_);
        };
        ImGroups() = default ;
        ImGroups(const ImGroups &) = default ;
        ImGroups(ImGroups &&) = default ;
        ImGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImGroups() = default ;
        ImGroups& operator=(const ImGroups &) = default ;
        ImGroups& operator=(ImGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->imGroupId_ == nullptr
        && this->imGroupName_ == nullptr && this->mappingId_ == nullptr; };
        // imGroupId Field Functions 
        bool hasImGroupId() const { return this->imGroupId_ != nullptr;};
        void deleteImGroupId() { this->imGroupId_ = nullptr;};
        inline string getImGroupId() const { DARABONBA_PTR_GET_DEFAULT(imGroupId_, "") };
        inline ImGroups& setImGroupId(string imGroupId) { DARABONBA_PTR_SET_VALUE(imGroupId_, imGroupId) };


        // imGroupName Field Functions 
        bool hasImGroupName() const { return this->imGroupName_ != nullptr;};
        void deleteImGroupName() { this->imGroupName_ = nullptr;};
        inline string getImGroupName() const { DARABONBA_PTR_GET_DEFAULT(imGroupName_, "") };
        inline ImGroups& setImGroupName(string imGroupName) { DARABONBA_PTR_SET_VALUE(imGroupName_, imGroupName) };


        // mappingId Field Functions 
        bool hasMappingId() const { return this->mappingId_ != nullptr;};
        void deleteMappingId() { this->mappingId_ = nullptr;};
        inline int64_t getMappingId() const { DARABONBA_PTR_GET_DEFAULT(mappingId_, 0L) };
        inline ImGroups& setMappingId(int64_t mappingId) { DARABONBA_PTR_SET_VALUE(mappingId_, mappingId) };


      protected:
        // The external IM group ID.
        // 
        // This parameter is required.
        shared_ptr<string> imGroupId_ {};
        // The external IM group name.
        shared_ptr<string> imGroupName_ {};
        // The binding record ID of the IM group.
        // 
        // This parameter is required.
        shared_ptr<int64_t> mappingId_ {};
      };

      virtual bool empty() const override { return this->channelName_ == nullptr
        && this->channelType_ == nullptr && this->imGroups_ == nullptr && this->methods_ == nullptr; };
      // channelName Field Functions 
      bool hasChannelName() const { return this->channelName_ != nullptr;};
      void deleteChannelName() { this->channelName_ = nullptr;};
      inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
      inline Channels& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // channelType Field Functions 
      bool hasChannelType() const { return this->channelType_ != nullptr;};
      void deleteChannelType() { this->channelType_ = nullptr;};
      inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
      inline Channels& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


      // imGroups Field Functions 
      bool hasImGroups() const { return this->imGroups_ != nullptr;};
      void deleteImGroups() { this->imGroups_ = nullptr;};
      inline const vector<Channels::ImGroups> & getImGroups() const { DARABONBA_PTR_GET_CONST(imGroups_, vector<Channels::ImGroups>) };
      inline vector<Channels::ImGroups> getImGroups() { DARABONBA_PTR_GET(imGroups_, vector<Channels::ImGroups>) };
      inline Channels& setImGroups(const vector<Channels::ImGroups> & imGroups) { DARABONBA_PTR_SET_VALUE(imGroups_, imGroups) };
      inline Channels& setImGroups(vector<Channels::ImGroups> && imGroups) { DARABONBA_PTR_SET_RVALUE(imGroups_, imGroups) };


      // methods Field Functions 
      bool hasMethods() const { return this->methods_ != nullptr;};
      void deleteMethods() { this->methods_ = nullptr;};
      inline const vector<Channels::Methods> & getMethods() const { DARABONBA_PTR_GET_CONST(methods_, vector<Channels::Methods>) };
      inline vector<Channels::Methods> getMethods() { DARABONBA_PTR_GET(methods_, vector<Channels::Methods>) };
      inline Channels& setMethods(const vector<Channels::Methods> & methods) { DARABONBA_PTR_SET_VALUE(methods_, methods) };
      inline Channels& setMethods(vector<Channels::Methods> && methods) { DARABONBA_PTR_SET_RVALUE(methods_, methods) };


    protected:
      // The channel name.
      // 
      // This parameter is required.
      shared_ptr<string> channelName_ {};
      // The notification method. Valid values:
      // 
      // - **hdm_alarm_sms**: SMS.
      // - **dingtalk**: DingTalk chatbot.
      // - **hdm_alarm_sms_and_email**: SMS and email.
      // - **hdm_alarm_sms,dingtalk**: SMS and DingTalk chatbot.
      // 
      // This parameter is required.
      shared_ptr<string> channelType_ {};
      // The optional IM groups bound to this channel for the collaboration group. This value is empty when querying personal tasks.
      shared_ptr<vector<Channels::ImGroups>> imGroups_ {};
      // The supported methods: HEAD, GET, POST, PUT, DELETE, PATCH, OPTIONS.
      shared_ptr<vector<Channels::Methods>> methods_ {};
    };

    virtual bool empty() const override { return this->channels_ == nullptr
        && this->code_ == nullptr && this->emptyHint_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<GetScheduledTaskPushOptionsResponseBody::Channels> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<GetScheduledTaskPushOptionsResponseBody::Channels>) };
    inline vector<GetScheduledTaskPushOptionsResponseBody::Channels> getChannels() { DARABONBA_PTR_GET(channels_, vector<GetScheduledTaskPushOptionsResponseBody::Channels>) };
    inline GetScheduledTaskPushOptionsResponseBody& setChannels(const vector<GetScheduledTaskPushOptionsResponseBody::Channels> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline GetScheduledTaskPushOptionsResponseBody& setChannels(vector<GetScheduledTaskPushOptionsResponseBody::Channels> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetScheduledTaskPushOptionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // emptyHint Field Functions 
    bool hasEmptyHint() const { return this->emptyHint_ != nullptr;};
    void deleteEmptyHint() { this->emptyHint_ = nullptr;};
    inline string getEmptyHint() const { DARABONBA_PTR_GET_DEFAULT(emptyHint_, "") };
    inline GetScheduledTaskPushOptionsResponseBody& setEmptyHint(string emptyHint) { DARABONBA_PTR_SET_VALUE(emptyHint_, emptyHint) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetScheduledTaskPushOptionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScheduledTaskPushOptionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of notification channels.
    shared_ptr<vector<GetScheduledTaskPushOptionsResponseBody::Channels>> channels_ {};
    // The status code.
    shared_ptr<string> code_ {};
    // The prompt displayed when no third-party accounts are bound.
    shared_ptr<string> emptyHint_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
