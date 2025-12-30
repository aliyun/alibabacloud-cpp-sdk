// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListWarningConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarningConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarningConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListWarningConfigResponseBody() = default ;
    ListWarningConfigResponseBody(const ListWarningConfigResponseBody &) = default ;
    ListWarningConfigResponseBody(ListWarningConfigResponseBody &&) = default ;
    ListWarningConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarningConfigResponseBody() = default ;
    ListWarningConfigResponseBody& operator=(const ListWarningConfigResponseBody &) = default ;
    ListWarningConfigResponseBody& operator=(ListWarningConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(WarningConfigInfo, warningConfigInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(WarningConfigInfo, warningConfigInfo_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WarningConfigInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WarningConfigInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Channels, channels_);
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(ConfigName, configName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(RidList, ridList_);
          DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, WarningConfigInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Channels, channels_);
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(RidList, ridList_);
          DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        WarningConfigInfo() = default ;
        WarningConfigInfo(const WarningConfigInfo &) = default ;
        WarningConfigInfo(WarningConfigInfo &&) = default ;
        WarningConfigInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WarningConfigInfo() = default ;
        WarningConfigInfo& operator=(const WarningConfigInfo &) = default ;
        WarningConfigInfo& operator=(WarningConfigInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
            DARABONBA_PTR_TO_JSON(WarningRule, warningRule_);
          };
          friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(WarningRule, warningRule_);
          };
          RuleList() = default ;
          RuleList(const RuleList &) = default ;
          RuleList(RuleList &&) = default ;
          RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleList() = default ;
          RuleList& operator=(const RuleList &) = default ;
          RuleList& operator=(RuleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class WarningRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const WarningRule& obj) { 
              DARABONBA_PTR_TO_JSON(Rid, rid_);
              DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
            };
            friend void from_json(const Darabonba::Json& j, WarningRule& obj) { 
              DARABONBA_PTR_FROM_JSON(Rid, rid_);
              DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
            };
            WarningRule() = default ;
            WarningRule(const WarningRule &) = default ;
            WarningRule(WarningRule &&) = default ;
            WarningRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~WarningRule() = default ;
            WarningRule& operator=(const WarningRule &) = default ;
            WarningRule& operator=(WarningRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->rid_ == nullptr
        && this->ruleName_ == nullptr; };
            // rid Field Functions 
            bool hasRid() const { return this->rid_ != nullptr;};
            void deleteRid() { this->rid_ = nullptr;};
            inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
            inline WarningRule& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


            // ruleName Field Functions 
            bool hasRuleName() const { return this->ruleName_ != nullptr;};
            void deleteRuleName() { this->ruleName_ = nullptr;};
            inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
            inline WarningRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          protected:
            shared_ptr<int64_t> rid_ {};
            shared_ptr<string> ruleName_ {};
          };

          virtual bool empty() const override { return this->warningRule_ == nullptr; };
          // warningRule Field Functions 
          bool hasWarningRule() const { return this->warningRule_ != nullptr;};
          void deleteWarningRule() { this->warningRule_ = nullptr;};
          inline const vector<RuleList::WarningRule> & getWarningRule() const { DARABONBA_PTR_GET_CONST(warningRule_, vector<RuleList::WarningRule>) };
          inline vector<RuleList::WarningRule> getWarningRule() { DARABONBA_PTR_GET(warningRule_, vector<RuleList::WarningRule>) };
          inline RuleList& setWarningRule(const vector<RuleList::WarningRule> & warningRule) { DARABONBA_PTR_SET_VALUE(warningRule_, warningRule) };
          inline RuleList& setWarningRule(vector<RuleList::WarningRule> && warningRule) { DARABONBA_PTR_SET_RVALUE(warningRule_, warningRule) };


        protected:
          shared_ptr<vector<RuleList::WarningRule>> warningRule_ {};
        };

        class RidList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RidList& obj) { 
            DARABONBA_PTR_TO_JSON(RidList, ridList_);
          };
          friend void from_json(const Darabonba::Json& j, RidList& obj) { 
            DARABONBA_PTR_FROM_JSON(RidList, ridList_);
          };
          RidList() = default ;
          RidList(const RidList &) = default ;
          RidList(RidList &&) = default ;
          RidList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RidList() = default ;
          RidList& operator=(const RidList &) = default ;
          RidList& operator=(RidList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ridList_ == nullptr; };
          // ridList Field Functions 
          bool hasRidList() const { return this->ridList_ != nullptr;};
          void deleteRidList() { this->ridList_ = nullptr;};
          inline const vector<string> & getRidList() const { DARABONBA_PTR_GET_CONST(ridList_, vector<string>) };
          inline vector<string> getRidList() { DARABONBA_PTR_GET(ridList_, vector<string>) };
          inline RidList& setRidList(const vector<string> & ridList) { DARABONBA_PTR_SET_VALUE(ridList_, ridList) };
          inline RidList& setRidList(vector<string> && ridList) { DARABONBA_PTR_SET_RVALUE(ridList_, ridList) };


        protected:
          shared_ptr<vector<string>> ridList_ {};
        };

        class Channels : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Channels& obj) { 
            DARABONBA_PTR_TO_JSON(Channel, channel_);
          };
          friend void from_json(const Darabonba::Json& j, Channels& obj) { 
            DARABONBA_PTR_FROM_JSON(Channel, channel_);
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
          class Channel : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Channel& obj) { 
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, Channel& obj) { 
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            Channel() = default ;
            Channel(const Channel &) = default ;
            Channel(Channel &&) = default ;
            Channel(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Channel() = default ;
            Channel& operator=(const Channel &) = default ;
            Channel& operator=(Channel &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->type_ == nullptr
        && this->url_ == nullptr; };
            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
            inline Channel& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline Channel& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<int32_t> type_ {};
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->channel_ == nullptr; };
          // channel Field Functions 
          bool hasChannel() const { return this->channel_ != nullptr;};
          void deleteChannel() { this->channel_ = nullptr;};
          inline const vector<Channels::Channel> & getChannel() const { DARABONBA_PTR_GET_CONST(channel_, vector<Channels::Channel>) };
          inline vector<Channels::Channel> getChannel() { DARABONBA_PTR_GET(channel_, vector<Channels::Channel>) };
          inline Channels& setChannel(const vector<Channels::Channel> & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
          inline Channels& setChannel(vector<Channels::Channel> && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


        protected:
          shared_ptr<vector<Channels::Channel>> channel_ {};
        };

        virtual bool empty() const override { return this->channels_ == nullptr
        && this->configId_ == nullptr && this->configName_ == nullptr && this->createTime_ == nullptr && this->ridList_ == nullptr && this->ruleList_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr; };
        // channels Field Functions 
        bool hasChannels() const { return this->channels_ != nullptr;};
        void deleteChannels() { this->channels_ = nullptr;};
        inline const WarningConfigInfo::Channels & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, WarningConfigInfo::Channels) };
        inline WarningConfigInfo::Channels getChannels() { DARABONBA_PTR_GET(channels_, WarningConfigInfo::Channels) };
        inline WarningConfigInfo& setChannels(const WarningConfigInfo::Channels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
        inline WarningConfigInfo& setChannels(WarningConfigInfo::Channels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline WarningConfigInfo& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // configName Field Functions 
        bool hasConfigName() const { return this->configName_ != nullptr;};
        void deleteConfigName() { this->configName_ = nullptr;};
        inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
        inline WarningConfigInfo& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline WarningConfigInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // ridList Field Functions 
        bool hasRidList() const { return this->ridList_ != nullptr;};
        void deleteRidList() { this->ridList_ = nullptr;};
        inline const WarningConfigInfo::RidList & getRidList() const { DARABONBA_PTR_GET_CONST(ridList_, WarningConfigInfo::RidList) };
        inline WarningConfigInfo::RidList getRidList() { DARABONBA_PTR_GET(ridList_, WarningConfigInfo::RidList) };
        inline WarningConfigInfo& setRidList(const WarningConfigInfo::RidList & ridList) { DARABONBA_PTR_SET_VALUE(ridList_, ridList) };
        inline WarningConfigInfo& setRidList(WarningConfigInfo::RidList && ridList) { DARABONBA_PTR_SET_RVALUE(ridList_, ridList) };


        // ruleList Field Functions 
        bool hasRuleList() const { return this->ruleList_ != nullptr;};
        void deleteRuleList() { this->ruleList_ = nullptr;};
        inline const WarningConfigInfo::RuleList & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, WarningConfigInfo::RuleList) };
        inline WarningConfigInfo::RuleList getRuleList() { DARABONBA_PTR_GET(ruleList_, WarningConfigInfo::RuleList) };
        inline WarningConfigInfo& setRuleList(const WarningConfigInfo::RuleList & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
        inline WarningConfigInfo& setRuleList(WarningConfigInfo::RuleList && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline WarningConfigInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline WarningConfigInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<WarningConfigInfo::Channels> channels_ {};
        shared_ptr<int64_t> configId_ {};
        shared_ptr<string> configName_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<WarningConfigInfo::RidList> ridList_ {};
        shared_ptr<WarningConfigInfo::RuleList> ruleList_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->warningConfigInfo_ == nullptr; };
      // warningConfigInfo Field Functions 
      bool hasWarningConfigInfo() const { return this->warningConfigInfo_ != nullptr;};
      void deleteWarningConfigInfo() { this->warningConfigInfo_ = nullptr;};
      inline const vector<Data::WarningConfigInfo> & getWarningConfigInfo() const { DARABONBA_PTR_GET_CONST(warningConfigInfo_, vector<Data::WarningConfigInfo>) };
      inline vector<Data::WarningConfigInfo> getWarningConfigInfo() { DARABONBA_PTR_GET(warningConfigInfo_, vector<Data::WarningConfigInfo>) };
      inline Data& setWarningConfigInfo(const vector<Data::WarningConfigInfo> & warningConfigInfo) { DARABONBA_PTR_SET_VALUE(warningConfigInfo_, warningConfigInfo) };
      inline Data& setWarningConfigInfo(vector<Data::WarningConfigInfo> && warningConfigInfo) { DARABONBA_PTR_SET_RVALUE(warningConfigInfo_, warningConfigInfo) };


    protected:
      shared_ptr<vector<Data::WarningConfigInfo>> warningConfigInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListWarningConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListWarningConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListWarningConfigResponseBody::Data) };
    inline ListWarningConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListWarningConfigResponseBody::Data) };
    inline ListWarningConfigResponseBody& setData(const ListWarningConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWarningConfigResponseBody& setData(ListWarningConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListWarningConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWarningConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWarningConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListWarningConfigResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
