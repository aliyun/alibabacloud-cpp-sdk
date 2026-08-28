// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYELASTICPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYELASTICPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayElasticPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayElasticPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayElasticPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGatewayElasticPolicyResponseBody() = default ;
    GetGatewayElasticPolicyResponseBody(const GetGatewayElasticPolicyResponseBody &) = default ;
    GetGatewayElasticPolicyResponseBody(GetGatewayElasticPolicyResponseBody &&) = default ;
    GetGatewayElasticPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayElasticPolicyResponseBody() = default ;
    GetGatewayElasticPolicyResponseBody& operator=(const GetGatewayElasticPolicyResponseBody &) = default ;
    GetGatewayElasticPolicyResponseBody& operator=(GetGatewayElasticPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(elasticPolicy, elasticPolicy_);
        DARABONBA_PTR_TO_JSON(elasticStrategyId, elasticStrategyId_);
        DARABONBA_PTR_TO_JSON(elasticType, elasticType_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(elasticPolicy, elasticPolicy_);
        DARABONBA_PTR_FROM_JSON(elasticStrategyId, elasticStrategyId_);
        DARABONBA_PTR_FROM_JSON(elasticType, elasticType_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
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
      class ElasticPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ElasticPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(disableScaleTimePolicyList, disableScaleTimePolicyList_);
          DARABONBA_PTR_TO_JSON(elasticEnabled, elasticEnabled_);
          DARABONBA_PTR_TO_JSON(elasticType, elasticType_);
          DARABONBA_PTR_TO_JSON(enableScaleTimePolicyList, enableScaleTimePolicyList_);
          DARABONBA_PTR_TO_JSON(loadWarningThreshold, loadWarningThreshold_);
          DARABONBA_PTR_TO_JSON(maxUnits, maxUnits_);
          DARABONBA_PTR_TO_JSON(timePolicyList, timePolicyList_);
        };
        friend void from_json(const Darabonba::Json& j, ElasticPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(disableScaleTimePolicyList, disableScaleTimePolicyList_);
          DARABONBA_PTR_FROM_JSON(elasticEnabled, elasticEnabled_);
          DARABONBA_PTR_FROM_JSON(elasticType, elasticType_);
          DARABONBA_PTR_FROM_JSON(enableScaleTimePolicyList, enableScaleTimePolicyList_);
          DARABONBA_PTR_FROM_JSON(loadWarningThreshold, loadWarningThreshold_);
          DARABONBA_PTR_FROM_JSON(maxUnits, maxUnits_);
          DARABONBA_PTR_FROM_JSON(timePolicyList, timePolicyList_);
        };
        ElasticPolicy() = default ;
        ElasticPolicy(const ElasticPolicy &) = default ;
        ElasticPolicy(ElasticPolicy &&) = default ;
        ElasticPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ElasticPolicy() = default ;
        ElasticPolicy& operator=(const ElasticPolicy &) = default ;
        ElasticPolicy& operator=(ElasticPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TimePolicyList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TimePolicyList& obj) { 
            DARABONBA_PTR_TO_JSON(endTime, endTime_);
            DARABONBA_PTR_TO_JSON(startTime, startTime_);
            DARABONBA_PTR_TO_JSON(units, units_);
          };
          friend void from_json(const Darabonba::Json& j, TimePolicyList& obj) { 
            DARABONBA_PTR_FROM_JSON(endTime, endTime_);
            DARABONBA_PTR_FROM_JSON(startTime, startTime_);
            DARABONBA_PTR_FROM_JSON(units, units_);
          };
          TimePolicyList() = default ;
          TimePolicyList(const TimePolicyList &) = default ;
          TimePolicyList(TimePolicyList &&) = default ;
          TimePolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TimePolicyList() = default ;
          TimePolicyList& operator=(const TimePolicyList &) = default ;
          TimePolicyList& operator=(TimePolicyList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->units_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline TimePolicyList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline TimePolicyList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // units Field Functions 
          bool hasUnits() const { return this->units_ != nullptr;};
          void deleteUnits() { this->units_ = nullptr;};
          inline int64_t getUnits() const { DARABONBA_PTR_GET_DEFAULT(units_, 0L) };
          inline TimePolicyList& setUnits(int64_t units) { DARABONBA_PTR_SET_VALUE(units_, units) };


        protected:
          shared_ptr<string> endTime_ {};
          shared_ptr<string> startTime_ {};
          shared_ptr<int64_t> units_ {};
        };

        class EnableScaleTimePolicyList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EnableScaleTimePolicyList& obj) { 
            DARABONBA_PTR_TO_JSON(endTime, endTime_);
            DARABONBA_PTR_TO_JSON(startTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, EnableScaleTimePolicyList& obj) { 
            DARABONBA_PTR_FROM_JSON(endTime, endTime_);
            DARABONBA_PTR_FROM_JSON(startTime, startTime_);
          };
          EnableScaleTimePolicyList() = default ;
          EnableScaleTimePolicyList(const EnableScaleTimePolicyList &) = default ;
          EnableScaleTimePolicyList(EnableScaleTimePolicyList &&) = default ;
          EnableScaleTimePolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EnableScaleTimePolicyList() = default ;
          EnableScaleTimePolicyList& operator=(const EnableScaleTimePolicyList &) = default ;
          EnableScaleTimePolicyList& operator=(EnableScaleTimePolicyList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline EnableScaleTimePolicyList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline EnableScaleTimePolicyList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          shared_ptr<string> endTime_ {};
          shared_ptr<string> startTime_ {};
        };

        class DisableScaleTimePolicyList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DisableScaleTimePolicyList& obj) { 
            DARABONBA_PTR_TO_JSON(endTime, endTime_);
            DARABONBA_PTR_TO_JSON(startTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, DisableScaleTimePolicyList& obj) { 
            DARABONBA_PTR_FROM_JSON(endTime, endTime_);
            DARABONBA_PTR_FROM_JSON(startTime, startTime_);
          };
          DisableScaleTimePolicyList() = default ;
          DisableScaleTimePolicyList(const DisableScaleTimePolicyList &) = default ;
          DisableScaleTimePolicyList(DisableScaleTimePolicyList &&) = default ;
          DisableScaleTimePolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DisableScaleTimePolicyList() = default ;
          DisableScaleTimePolicyList& operator=(const DisableScaleTimePolicyList &) = default ;
          DisableScaleTimePolicyList& operator=(DisableScaleTimePolicyList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline DisableScaleTimePolicyList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline DisableScaleTimePolicyList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        protected:
          shared_ptr<string> endTime_ {};
          shared_ptr<string> startTime_ {};
        };

        virtual bool empty() const override { return this->disableScaleTimePolicyList_ == nullptr
        && this->elasticEnabled_ == nullptr && this->elasticType_ == nullptr && this->enableScaleTimePolicyList_ == nullptr && this->loadWarningThreshold_ == nullptr && this->maxUnits_ == nullptr
        && this->timePolicyList_ == nullptr; };
        // disableScaleTimePolicyList Field Functions 
        bool hasDisableScaleTimePolicyList() const { return this->disableScaleTimePolicyList_ != nullptr;};
        void deleteDisableScaleTimePolicyList() { this->disableScaleTimePolicyList_ = nullptr;};
        inline const vector<ElasticPolicy::DisableScaleTimePolicyList> & getDisableScaleTimePolicyList() const { DARABONBA_PTR_GET_CONST(disableScaleTimePolicyList_, vector<ElasticPolicy::DisableScaleTimePolicyList>) };
        inline vector<ElasticPolicy::DisableScaleTimePolicyList> getDisableScaleTimePolicyList() { DARABONBA_PTR_GET(disableScaleTimePolicyList_, vector<ElasticPolicy::DisableScaleTimePolicyList>) };
        inline ElasticPolicy& setDisableScaleTimePolicyList(const vector<ElasticPolicy::DisableScaleTimePolicyList> & disableScaleTimePolicyList) { DARABONBA_PTR_SET_VALUE(disableScaleTimePolicyList_, disableScaleTimePolicyList) };
        inline ElasticPolicy& setDisableScaleTimePolicyList(vector<ElasticPolicy::DisableScaleTimePolicyList> && disableScaleTimePolicyList) { DARABONBA_PTR_SET_RVALUE(disableScaleTimePolicyList_, disableScaleTimePolicyList) };


        // elasticEnabled Field Functions 
        bool hasElasticEnabled() const { return this->elasticEnabled_ != nullptr;};
        void deleteElasticEnabled() { this->elasticEnabled_ = nullptr;};
        inline bool getElasticEnabled() const { DARABONBA_PTR_GET_DEFAULT(elasticEnabled_, false) };
        inline ElasticPolicy& setElasticEnabled(bool elasticEnabled) { DARABONBA_PTR_SET_VALUE(elasticEnabled_, elasticEnabled) };


        // elasticType Field Functions 
        bool hasElasticType() const { return this->elasticType_ != nullptr;};
        void deleteElasticType() { this->elasticType_ = nullptr;};
        inline string getElasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
        inline ElasticPolicy& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


        // enableScaleTimePolicyList Field Functions 
        bool hasEnableScaleTimePolicyList() const { return this->enableScaleTimePolicyList_ != nullptr;};
        void deleteEnableScaleTimePolicyList() { this->enableScaleTimePolicyList_ = nullptr;};
        inline const vector<ElasticPolicy::EnableScaleTimePolicyList> & getEnableScaleTimePolicyList() const { DARABONBA_PTR_GET_CONST(enableScaleTimePolicyList_, vector<ElasticPolicy::EnableScaleTimePolicyList>) };
        inline vector<ElasticPolicy::EnableScaleTimePolicyList> getEnableScaleTimePolicyList() { DARABONBA_PTR_GET(enableScaleTimePolicyList_, vector<ElasticPolicy::EnableScaleTimePolicyList>) };
        inline ElasticPolicy& setEnableScaleTimePolicyList(const vector<ElasticPolicy::EnableScaleTimePolicyList> & enableScaleTimePolicyList) { DARABONBA_PTR_SET_VALUE(enableScaleTimePolicyList_, enableScaleTimePolicyList) };
        inline ElasticPolicy& setEnableScaleTimePolicyList(vector<ElasticPolicy::EnableScaleTimePolicyList> && enableScaleTimePolicyList) { DARABONBA_PTR_SET_RVALUE(enableScaleTimePolicyList_, enableScaleTimePolicyList) };


        // loadWarningThreshold Field Functions 
        bool hasLoadWarningThreshold() const { return this->loadWarningThreshold_ != nullptr;};
        void deleteLoadWarningThreshold() { this->loadWarningThreshold_ = nullptr;};
        inline bool getLoadWarningThreshold() const { DARABONBA_PTR_GET_DEFAULT(loadWarningThreshold_, false) };
        inline ElasticPolicy& setLoadWarningThreshold(bool loadWarningThreshold) { DARABONBA_PTR_SET_VALUE(loadWarningThreshold_, loadWarningThreshold) };


        // maxUnits Field Functions 
        bool hasMaxUnits() const { return this->maxUnits_ != nullptr;};
        void deleteMaxUnits() { this->maxUnits_ = nullptr;};
        inline int32_t getMaxUnits() const { DARABONBA_PTR_GET_DEFAULT(maxUnits_, 0) };
        inline ElasticPolicy& setMaxUnits(int32_t maxUnits) { DARABONBA_PTR_SET_VALUE(maxUnits_, maxUnits) };


        // timePolicyList Field Functions 
        bool hasTimePolicyList() const { return this->timePolicyList_ != nullptr;};
        void deleteTimePolicyList() { this->timePolicyList_ = nullptr;};
        inline const vector<ElasticPolicy::TimePolicyList> & getTimePolicyList() const { DARABONBA_PTR_GET_CONST(timePolicyList_, vector<ElasticPolicy::TimePolicyList>) };
        inline vector<ElasticPolicy::TimePolicyList> getTimePolicyList() { DARABONBA_PTR_GET(timePolicyList_, vector<ElasticPolicy::TimePolicyList>) };
        inline ElasticPolicy& setTimePolicyList(const vector<ElasticPolicy::TimePolicyList> & timePolicyList) { DARABONBA_PTR_SET_VALUE(timePolicyList_, timePolicyList) };
        inline ElasticPolicy& setTimePolicyList(vector<ElasticPolicy::TimePolicyList> && timePolicyList) { DARABONBA_PTR_SET_RVALUE(timePolicyList_, timePolicyList) };


      protected:
        shared_ptr<vector<ElasticPolicy::DisableScaleTimePolicyList>> disableScaleTimePolicyList_ {};
        shared_ptr<bool> elasticEnabled_ {};
        shared_ptr<string> elasticType_ {};
        shared_ptr<vector<ElasticPolicy::EnableScaleTimePolicyList>> enableScaleTimePolicyList_ {};
        shared_ptr<bool> loadWarningThreshold_ {};
        shared_ptr<int32_t> maxUnits_ {};
        shared_ptr<vector<ElasticPolicy::TimePolicyList>> timePolicyList_ {};
      };

      virtual bool empty() const override { return this->elasticPolicy_ == nullptr
        && this->elasticStrategyId_ == nullptr && this->elasticType_ == nullptr && this->gatewayId_ == nullptr; };
      // elasticPolicy Field Functions 
      bool hasElasticPolicy() const { return this->elasticPolicy_ != nullptr;};
      void deleteElasticPolicy() { this->elasticPolicy_ = nullptr;};
      inline const Data::ElasticPolicy & getElasticPolicy() const { DARABONBA_PTR_GET_CONST(elasticPolicy_, Data::ElasticPolicy) };
      inline Data::ElasticPolicy getElasticPolicy() { DARABONBA_PTR_GET(elasticPolicy_, Data::ElasticPolicy) };
      inline Data& setElasticPolicy(const Data::ElasticPolicy & elasticPolicy) { DARABONBA_PTR_SET_VALUE(elasticPolicy_, elasticPolicy) };
      inline Data& setElasticPolicy(Data::ElasticPolicy && elasticPolicy) { DARABONBA_PTR_SET_RVALUE(elasticPolicy_, elasticPolicy) };


      // elasticStrategyId Field Functions 
      bool hasElasticStrategyId() const { return this->elasticStrategyId_ != nullptr;};
      void deleteElasticStrategyId() { this->elasticStrategyId_ = nullptr;};
      inline string getElasticStrategyId() const { DARABONBA_PTR_GET_DEFAULT(elasticStrategyId_, "") };
      inline Data& setElasticStrategyId(string elasticStrategyId) { DARABONBA_PTR_SET_VALUE(elasticStrategyId_, elasticStrategyId) };


      // elasticType Field Functions 
      bool hasElasticType() const { return this->elasticType_ != nullptr;};
      void deleteElasticType() { this->elasticType_ = nullptr;};
      inline string getElasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
      inline Data& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    protected:
      shared_ptr<Data::ElasticPolicy> elasticPolicy_ {};
      shared_ptr<string> elasticStrategyId_ {};
      shared_ptr<string> elasticType_ {};
      shared_ptr<string> gatewayId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGatewayElasticPolicyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayElasticPolicyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayElasticPolicyResponseBody::Data) };
    inline GetGatewayElasticPolicyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayElasticPolicyResponseBody::Data) };
    inline GetGatewayElasticPolicyResponseBody& setData(const GetGatewayElasticPolicyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayElasticPolicyResponseBody& setData(GetGatewayElasticPolicyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayElasticPolicyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayElasticPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetGatewayElasticPolicyResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
