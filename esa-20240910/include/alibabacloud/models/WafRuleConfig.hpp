// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_WAFRULECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafRatelimitCharacteristics.hpp>
#include <vector>
#include <alibabacloud/models/WafTimer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(AppPackage, appPackage_);
      DARABONBA_PTR_TO_JSON(AppSdk, appSdk_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ManagedGroupId, managedGroupId_);
      DARABONBA_PTR_TO_JSON(ManagedList, managedList_);
      DARABONBA_PTR_TO_JSON(ManagedRulesets, managedRulesets_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Notes, notes_);
      DARABONBA_PTR_TO_JSON(RateLimit, rateLimit_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_TO_JSON(Sigchl, sigchl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Timer, timer_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(AppPackage, appPackage_);
      DARABONBA_PTR_FROM_JSON(AppSdk, appSdk_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ManagedGroupId, managedGroupId_);
      DARABONBA_PTR_FROM_JSON(ManagedList, managedList_);
      DARABONBA_PTR_FROM_JSON(ManagedRulesets, managedRulesets_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Notes, notes_);
      DARABONBA_PTR_FROM_JSON(RateLimit, rateLimit_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_FROM_JSON(Sigchl, sigchl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Timer, timer_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    WafRuleConfig() = default ;
    WafRuleConfig(const WafRuleConfig &) = default ;
    WafRuleConfig(WafRuleConfig &&) = default ;
    WafRuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleConfig() = default ;
    WafRuleConfig& operator=(const WafRuleConfig &) = default ;
    WafRuleConfig& operator=(WafRuleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityLevel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityLevel& obj) { 
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityLevel& obj) { 
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      SecurityLevel() = default ;
      SecurityLevel(const SecurityLevel &) = default ;
      SecurityLevel(SecurityLevel &&) = default ;
      SecurityLevel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityLevel() = default ;
      SecurityLevel& operator=(const SecurityLevel &) = default ;
      SecurityLevel& operator=(SecurityLevel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->value_ == nullptr; };
      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline SecurityLevel& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> value_ {};
    };

    class RateLimit : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RateLimit& obj) { 
        DARABONBA_PTR_TO_JSON(Characteristics, characteristics_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(OnHit, onHit_);
        DARABONBA_PTR_TO_JSON(TTL, TTL_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      };
      friend void from_json(const Darabonba::Json& j, RateLimit& obj) { 
        DARABONBA_PTR_FROM_JSON(Characteristics, characteristics_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(OnHit, onHit_);
        DARABONBA_PTR_FROM_JSON(TTL, TTL_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      };
      RateLimit() = default ;
      RateLimit(const RateLimit &) = default ;
      RateLimit(RateLimit &&) = default ;
      RateLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RateLimit() = default ;
      RateLimit& operator=(const RateLimit &) = default ;
      RateLimit& operator=(RateLimit &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Threshold : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Threshold& obj) { 
          DARABONBA_PTR_TO_JSON(DistinctManagedRules, distinctManagedRules_);
          DARABONBA_PTR_TO_JSON(ManagedRulesBlocked, managedRulesBlocked_);
          DARABONBA_PTR_TO_JSON(Request, request_);
          DARABONBA_PTR_TO_JSON(ResponseStatus, responseStatus_);
          DARABONBA_PTR_TO_JSON(Traffic, traffic_);
        };
        friend void from_json(const Darabonba::Json& j, Threshold& obj) { 
          DARABONBA_PTR_FROM_JSON(DistinctManagedRules, distinctManagedRules_);
          DARABONBA_PTR_FROM_JSON(ManagedRulesBlocked, managedRulesBlocked_);
          DARABONBA_PTR_FROM_JSON(Request, request_);
          DARABONBA_PTR_FROM_JSON(ResponseStatus, responseStatus_);
          DARABONBA_PTR_FROM_JSON(Traffic, traffic_);
        };
        Threshold() = default ;
        Threshold(const Threshold &) = default ;
        Threshold(Threshold &&) = default ;
        Threshold(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Threshold() = default ;
        Threshold& operator=(const Threshold &) = default ;
        Threshold& operator=(Threshold &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResponseStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResponseStatus& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Ratio, ratio_);
          };
          friend void from_json(const Darabonba::Json& j, ResponseStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
          };
          ResponseStatus() = default ;
          ResponseStatus(const ResponseStatus &) = default ;
          ResponseStatus(ResponseStatus &&) = default ;
          ResponseStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResponseStatus() = default ;
          ResponseStatus& operator=(const ResponseStatus &) = default ;
          ResponseStatus& operator=(ResponseStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->ratio_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
          inline ResponseStatus& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
          inline ResponseStatus& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // ratio Field Functions 
          bool hasRatio() const { return this->ratio_ != nullptr;};
          void deleteRatio() { this->ratio_ = nullptr;};
          inline int32_t getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0) };
          inline ResponseStatus& setRatio(int32_t ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


        protected:
          shared_ptr<int32_t> code_ {};
          shared_ptr<int32_t> count_ {};
          shared_ptr<int32_t> ratio_ {};
        };

        virtual bool empty() const override { return this->distinctManagedRules_ == nullptr
        && this->managedRulesBlocked_ == nullptr && this->request_ == nullptr && this->responseStatus_ == nullptr && this->traffic_ == nullptr; };
        // distinctManagedRules Field Functions 
        bool hasDistinctManagedRules() const { return this->distinctManagedRules_ != nullptr;};
        void deleteDistinctManagedRules() { this->distinctManagedRules_ = nullptr;};
        inline int32_t getDistinctManagedRules() const { DARABONBA_PTR_GET_DEFAULT(distinctManagedRules_, 0) };
        inline Threshold& setDistinctManagedRules(int32_t distinctManagedRules) { DARABONBA_PTR_SET_VALUE(distinctManagedRules_, distinctManagedRules) };


        // managedRulesBlocked Field Functions 
        bool hasManagedRulesBlocked() const { return this->managedRulesBlocked_ != nullptr;};
        void deleteManagedRulesBlocked() { this->managedRulesBlocked_ = nullptr;};
        inline int32_t getManagedRulesBlocked() const { DARABONBA_PTR_GET_DEFAULT(managedRulesBlocked_, 0) };
        inline Threshold& setManagedRulesBlocked(int32_t managedRulesBlocked) { DARABONBA_PTR_SET_VALUE(managedRulesBlocked_, managedRulesBlocked) };


        // request Field Functions 
        bool hasRequest() const { return this->request_ != nullptr;};
        void deleteRequest() { this->request_ = nullptr;};
        inline int32_t getRequest() const { DARABONBA_PTR_GET_DEFAULT(request_, 0) };
        inline Threshold& setRequest(int32_t request) { DARABONBA_PTR_SET_VALUE(request_, request) };


        // responseStatus Field Functions 
        bool hasResponseStatus() const { return this->responseStatus_ != nullptr;};
        void deleteResponseStatus() { this->responseStatus_ = nullptr;};
        inline const Threshold::ResponseStatus & getResponseStatus() const { DARABONBA_PTR_GET_CONST(responseStatus_, Threshold::ResponseStatus) };
        inline Threshold::ResponseStatus getResponseStatus() { DARABONBA_PTR_GET(responseStatus_, Threshold::ResponseStatus) };
        inline Threshold& setResponseStatus(const Threshold::ResponseStatus & responseStatus) { DARABONBA_PTR_SET_VALUE(responseStatus_, responseStatus) };
        inline Threshold& setResponseStatus(Threshold::ResponseStatus && responseStatus) { DARABONBA_PTR_SET_RVALUE(responseStatus_, responseStatus) };


        // traffic Field Functions 
        bool hasTraffic() const { return this->traffic_ != nullptr;};
        void deleteTraffic() { this->traffic_ = nullptr;};
        inline string getTraffic() const { DARABONBA_PTR_GET_DEFAULT(traffic_, "") };
        inline Threshold& setTraffic(string traffic) { DARABONBA_PTR_SET_VALUE(traffic_, traffic) };


      protected:
        shared_ptr<int32_t> distinctManagedRules_ {};
        shared_ptr<int32_t> managedRulesBlocked_ {};
        shared_ptr<int32_t> request_ {};
        shared_ptr<Threshold::ResponseStatus> responseStatus_ {};
        shared_ptr<string> traffic_ {};
      };

      virtual bool empty() const override { return this->characteristics_ == nullptr
        && this->interval_ == nullptr && this->onHit_ == nullptr && this->TTL_ == nullptr && this->threshold_ == nullptr; };
      // characteristics Field Functions 
      bool hasCharacteristics() const { return this->characteristics_ != nullptr;};
      void deleteCharacteristics() { this->characteristics_ = nullptr;};
      inline const WafRatelimitCharacteristics & getCharacteristics() const { DARABONBA_PTR_GET_CONST(characteristics_, WafRatelimitCharacteristics) };
      inline WafRatelimitCharacteristics getCharacteristics() { DARABONBA_PTR_GET(characteristics_, WafRatelimitCharacteristics) };
      inline RateLimit& setCharacteristics(const WafRatelimitCharacteristics & characteristics) { DARABONBA_PTR_SET_VALUE(characteristics_, characteristics) };
      inline RateLimit& setCharacteristics(WafRatelimitCharacteristics && characteristics) { DARABONBA_PTR_SET_RVALUE(characteristics_, characteristics) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline RateLimit& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // onHit Field Functions 
      bool hasOnHit() const { return this->onHit_ != nullptr;};
      void deleteOnHit() { this->onHit_ = nullptr;};
      inline bool getOnHit() const { DARABONBA_PTR_GET_DEFAULT(onHit_, false) };
      inline RateLimit& setOnHit(bool onHit) { DARABONBA_PTR_SET_VALUE(onHit_, onHit) };


      // TTL Field Functions 
      bool hasTTL() const { return this->TTL_ != nullptr;};
      void deleteTTL() { this->TTL_ = nullptr;};
      inline int32_t getTTL() const { DARABONBA_PTR_GET_DEFAULT(TTL_, 0) };
      inline RateLimit& setTTL(int32_t TTL) { DARABONBA_PTR_SET_VALUE(TTL_, TTL) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline const RateLimit::Threshold & getThreshold() const { DARABONBA_PTR_GET_CONST(threshold_, RateLimit::Threshold) };
      inline RateLimit::Threshold getThreshold() { DARABONBA_PTR_GET(threshold_, RateLimit::Threshold) };
      inline RateLimit& setThreshold(const RateLimit::Threshold & threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };
      inline RateLimit& setThreshold(RateLimit::Threshold && threshold) { DARABONBA_PTR_SET_RVALUE(threshold_, threshold) };


    protected:
      shared_ptr<WafRatelimitCharacteristics> characteristics_ {};
      shared_ptr<int32_t> interval_ {};
      shared_ptr<bool> onHit_ {};
      shared_ptr<int32_t> TTL_ {};
      shared_ptr<RateLimit::Threshold> threshold_ {};
    };

    class ManagedRulesets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ManagedRulesets& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(AttackType, attackType_);
        DARABONBA_PTR_TO_JSON(ManagedRules, managedRules_);
        DARABONBA_PTR_TO_JSON(NumberEnabled, numberEnabled_);
        DARABONBA_PTR_TO_JSON(NumberTotal, numberTotal_);
        DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
      };
      friend void from_json(const Darabonba::Json& j, ManagedRulesets& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
        DARABONBA_PTR_FROM_JSON(ManagedRules, managedRules_);
        DARABONBA_PTR_FROM_JSON(NumberEnabled, numberEnabled_);
        DARABONBA_PTR_FROM_JSON(NumberTotal, numberTotal_);
        DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
      };
      ManagedRulesets() = default ;
      ManagedRulesets(const ManagedRulesets &) = default ;
      ManagedRulesets(ManagedRulesets &&) = default ;
      ManagedRulesets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ManagedRulesets() = default ;
      ManagedRulesets& operator=(const ManagedRulesets &) = default ;
      ManagedRulesets& operator=(ManagedRulesets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ManagedRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManagedRules& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ManagedRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ManagedRules() = default ;
        ManagedRules(const ManagedRules &) = default ;
        ManagedRules(ManagedRules &&) = default ;
        ManagedRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ManagedRules() = default ;
        ManagedRules& operator=(const ManagedRules &) = default ;
        ManagedRules& operator=(ManagedRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->id_ == nullptr && this->status_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline ManagedRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ManagedRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ManagedRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->action_ == nullptr
        && this->attackType_ == nullptr && this->managedRules_ == nullptr && this->numberEnabled_ == nullptr && this->numberTotal_ == nullptr && this->protectionLevel_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline ManagedRulesets& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // attackType Field Functions 
      bool hasAttackType() const { return this->attackType_ != nullptr;};
      void deleteAttackType() { this->attackType_ = nullptr;};
      inline int32_t getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0) };
      inline ManagedRulesets& setAttackType(int32_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


      // managedRules Field Functions 
      bool hasManagedRules() const { return this->managedRules_ != nullptr;};
      void deleteManagedRules() { this->managedRules_ = nullptr;};
      inline const vector<ManagedRulesets::ManagedRules> & getManagedRules() const { DARABONBA_PTR_GET_CONST(managedRules_, vector<ManagedRulesets::ManagedRules>) };
      inline vector<ManagedRulesets::ManagedRules> getManagedRules() { DARABONBA_PTR_GET(managedRules_, vector<ManagedRulesets::ManagedRules>) };
      inline ManagedRulesets& setManagedRules(const vector<ManagedRulesets::ManagedRules> & managedRules) { DARABONBA_PTR_SET_VALUE(managedRules_, managedRules) };
      inline ManagedRulesets& setManagedRules(vector<ManagedRulesets::ManagedRules> && managedRules) { DARABONBA_PTR_SET_RVALUE(managedRules_, managedRules) };


      // numberEnabled Field Functions 
      bool hasNumberEnabled() const { return this->numberEnabled_ != nullptr;};
      void deleteNumberEnabled() { this->numberEnabled_ = nullptr;};
      inline int32_t getNumberEnabled() const { DARABONBA_PTR_GET_DEFAULT(numberEnabled_, 0) };
      inline ManagedRulesets& setNumberEnabled(int32_t numberEnabled) { DARABONBA_PTR_SET_VALUE(numberEnabled_, numberEnabled) };


      // numberTotal Field Functions 
      bool hasNumberTotal() const { return this->numberTotal_ != nullptr;};
      void deleteNumberTotal() { this->numberTotal_ = nullptr;};
      inline int32_t getNumberTotal() const { DARABONBA_PTR_GET_DEFAULT(numberTotal_, 0) };
      inline ManagedRulesets& setNumberTotal(int32_t numberTotal) { DARABONBA_PTR_SET_VALUE(numberTotal_, numberTotal) };


      // protectionLevel Field Functions 
      bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
      void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
      inline int32_t getProtectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, 0) };
      inline ManagedRulesets& setProtectionLevel(int32_t protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<int32_t> attackType_ {};
      shared_ptr<vector<ManagedRulesets::ManagedRules>> managedRules_ {};
      shared_ptr<int32_t> numberEnabled_ {};
      shared_ptr<int32_t> numberTotal_ {};
      shared_ptr<int32_t> protectionLevel_ {};
    };

    class AppSdk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppSdk& obj) { 
        DARABONBA_PTR_TO_JSON(CustomSign, customSign_);
        DARABONBA_PTR_TO_JSON(CustomSignStatus, customSignStatus_);
        DARABONBA_PTR_TO_JSON(FeatureAbnormal, featureAbnormal_);
      };
      friend void from_json(const Darabonba::Json& j, AppSdk& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomSign, customSign_);
        DARABONBA_PTR_FROM_JSON(CustomSignStatus, customSignStatus_);
        DARABONBA_PTR_FROM_JSON(FeatureAbnormal, featureAbnormal_);
      };
      AppSdk() = default ;
      AppSdk(const AppSdk &) = default ;
      AppSdk(AppSdk &&) = default ;
      AppSdk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppSdk() = default ;
      AppSdk& operator=(const AppSdk &) = default ;
      AppSdk& operator=(AppSdk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomSign : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomSign& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, CustomSign& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        CustomSign() = default ;
        CustomSign(const CustomSign &) = default ;
        CustomSign(CustomSign &&) = default ;
        CustomSign(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomSign() = default ;
        CustomSign& operator=(const CustomSign &) = default ;
        CustomSign& operator=(CustomSign &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline CustomSign& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline CustomSign& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->customSign_ == nullptr
        && this->customSignStatus_ == nullptr && this->featureAbnormal_ == nullptr; };
      // customSign Field Functions 
      bool hasCustomSign() const { return this->customSign_ != nullptr;};
      void deleteCustomSign() { this->customSign_ = nullptr;};
      inline const AppSdk::CustomSign & getCustomSign() const { DARABONBA_PTR_GET_CONST(customSign_, AppSdk::CustomSign) };
      inline AppSdk::CustomSign getCustomSign() { DARABONBA_PTR_GET(customSign_, AppSdk::CustomSign) };
      inline AppSdk& setCustomSign(const AppSdk::CustomSign & customSign) { DARABONBA_PTR_SET_VALUE(customSign_, customSign) };
      inline AppSdk& setCustomSign(AppSdk::CustomSign && customSign) { DARABONBA_PTR_SET_RVALUE(customSign_, customSign) };


      // customSignStatus Field Functions 
      bool hasCustomSignStatus() const { return this->customSignStatus_ != nullptr;};
      void deleteCustomSignStatus() { this->customSignStatus_ = nullptr;};
      inline string getCustomSignStatus() const { DARABONBA_PTR_GET_DEFAULT(customSignStatus_, "") };
      inline AppSdk& setCustomSignStatus(string customSignStatus) { DARABONBA_PTR_SET_VALUE(customSignStatus_, customSignStatus) };


      // featureAbnormal Field Functions 
      bool hasFeatureAbnormal() const { return this->featureAbnormal_ != nullptr;};
      void deleteFeatureAbnormal() { this->featureAbnormal_ = nullptr;};
      inline const vector<string> & getFeatureAbnormal() const { DARABONBA_PTR_GET_CONST(featureAbnormal_, vector<string>) };
      inline vector<string> getFeatureAbnormal() { DARABONBA_PTR_GET(featureAbnormal_, vector<string>) };
      inline AppSdk& setFeatureAbnormal(const vector<string> & featureAbnormal) { DARABONBA_PTR_SET_VALUE(featureAbnormal_, featureAbnormal) };
      inline AppSdk& setFeatureAbnormal(vector<string> && featureAbnormal) { DARABONBA_PTR_SET_RVALUE(featureAbnormal_, featureAbnormal) };


    protected:
      shared_ptr<AppSdk::CustomSign> customSign_ {};
      shared_ptr<string> customSignStatus_ {};
      shared_ptr<vector<string>> featureAbnormal_ {};
    };

    class AppPackage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppPackage& obj) { 
        DARABONBA_PTR_TO_JSON(PackageSigns, packageSigns_);
      };
      friend void from_json(const Darabonba::Json& j, AppPackage& obj) { 
        DARABONBA_PTR_FROM_JSON(PackageSigns, packageSigns_);
      };
      AppPackage() = default ;
      AppPackage(const AppPackage &) = default ;
      AppPackage(AppPackage &&) = default ;
      AppPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppPackage() = default ;
      AppPackage& operator=(const AppPackage &) = default ;
      AppPackage& operator=(AppPackage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PackageSigns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PackageSigns& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Sign, sign_);
        };
        friend void from_json(const Darabonba::Json& j, PackageSigns& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Sign, sign_);
        };
        PackageSigns() = default ;
        PackageSigns(const PackageSigns &) = default ;
        PackageSigns(PackageSigns &&) = default ;
        PackageSigns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PackageSigns() = default ;
        PackageSigns& operator=(const PackageSigns &) = default ;
        PackageSigns& operator=(PackageSigns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->sign_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PackageSigns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sign Field Functions 
        bool hasSign() const { return this->sign_ != nullptr;};
        void deleteSign() { this->sign_ = nullptr;};
        inline string getSign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
        inline PackageSigns& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> sign_ {};
      };

      virtual bool empty() const override { return this->packageSigns_ == nullptr; };
      // packageSigns Field Functions 
      bool hasPackageSigns() const { return this->packageSigns_ != nullptr;};
      void deletePackageSigns() { this->packageSigns_ = nullptr;};
      inline const vector<AppPackage::PackageSigns> & getPackageSigns() const { DARABONBA_PTR_GET_CONST(packageSigns_, vector<AppPackage::PackageSigns>) };
      inline vector<AppPackage::PackageSigns> getPackageSigns() { DARABONBA_PTR_GET(packageSigns_, vector<AppPackage::PackageSigns>) };
      inline AppPackage& setPackageSigns(const vector<AppPackage::PackageSigns> & packageSigns) { DARABONBA_PTR_SET_VALUE(packageSigns_, packageSigns) };
      inline AppPackage& setPackageSigns(vector<AppPackage::PackageSigns> && packageSigns) { DARABONBA_PTR_SET_RVALUE(packageSigns_, packageSigns) };


    protected:
      shared_ptr<vector<AppPackage::PackageSigns>> packageSigns_ {};
    };

    class Actions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Actions& obj) { 
        DARABONBA_PTR_TO_JSON(Bypass, bypass_);
        DARABONBA_PTR_TO_JSON(Response, response_);
      };
      friend void from_json(const Darabonba::Json& j, Actions& obj) { 
        DARABONBA_PTR_FROM_JSON(Bypass, bypass_);
        DARABONBA_PTR_FROM_JSON(Response, response_);
      };
      Actions() = default ;
      Actions(const Actions &) = default ;
      Actions(Actions &&) = default ;
      Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Actions() = default ;
      Actions& operator=(const Actions &) = default ;
      Actions& operator=(Actions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Response : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Response& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, Response& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        Response() = default ;
        Response(const Response &) = default ;
        Response(Response &&) = default ;
        Response(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Response() = default ;
        Response& operator=(const Response &) = default ;
        Response& operator=(Response &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->id_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline Response& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Response& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<int32_t> code_ {};
        shared_ptr<int64_t> id_ {};
      };

      class Bypass : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Bypass& obj) { 
          DARABONBA_PTR_TO_JSON(CustomRules, customRules_);
          DARABONBA_PTR_TO_JSON(RegularRules, regularRules_);
          DARABONBA_PTR_TO_JSON(RegularTypes, regularTypes_);
          DARABONBA_PTR_TO_JSON(Skip, skip_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, Bypass& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomRules, customRules_);
          DARABONBA_PTR_FROM_JSON(RegularRules, regularRules_);
          DARABONBA_PTR_FROM_JSON(RegularTypes, regularTypes_);
          DARABONBA_PTR_FROM_JSON(Skip, skip_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        Bypass() = default ;
        Bypass(const Bypass &) = default ;
        Bypass(Bypass &&) = default ;
        Bypass(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Bypass() = default ;
        Bypass& operator=(const Bypass &) = default ;
        Bypass& operator=(Bypass &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customRules_ == nullptr
        && this->regularRules_ == nullptr && this->regularTypes_ == nullptr && this->skip_ == nullptr && this->tags_ == nullptr; };
        // customRules Field Functions 
        bool hasCustomRules() const { return this->customRules_ != nullptr;};
        void deleteCustomRules() { this->customRules_ = nullptr;};
        inline const vector<int64_t> & getCustomRules() const { DARABONBA_PTR_GET_CONST(customRules_, vector<int64_t>) };
        inline vector<int64_t> getCustomRules() { DARABONBA_PTR_GET(customRules_, vector<int64_t>) };
        inline Bypass& setCustomRules(const vector<int64_t> & customRules) { DARABONBA_PTR_SET_VALUE(customRules_, customRules) };
        inline Bypass& setCustomRules(vector<int64_t> && customRules) { DARABONBA_PTR_SET_RVALUE(customRules_, customRules) };


        // regularRules Field Functions 
        bool hasRegularRules() const { return this->regularRules_ != nullptr;};
        void deleteRegularRules() { this->regularRules_ = nullptr;};
        inline const vector<int64_t> & getRegularRules() const { DARABONBA_PTR_GET_CONST(regularRules_, vector<int64_t>) };
        inline vector<int64_t> getRegularRules() { DARABONBA_PTR_GET(regularRules_, vector<int64_t>) };
        inline Bypass& setRegularRules(const vector<int64_t> & regularRules) { DARABONBA_PTR_SET_VALUE(regularRules_, regularRules) };
        inline Bypass& setRegularRules(vector<int64_t> && regularRules) { DARABONBA_PTR_SET_RVALUE(regularRules_, regularRules) };


        // regularTypes Field Functions 
        bool hasRegularTypes() const { return this->regularTypes_ != nullptr;};
        void deleteRegularTypes() { this->regularTypes_ = nullptr;};
        inline const vector<string> & getRegularTypes() const { DARABONBA_PTR_GET_CONST(regularTypes_, vector<string>) };
        inline vector<string> getRegularTypes() { DARABONBA_PTR_GET(regularTypes_, vector<string>) };
        inline Bypass& setRegularTypes(const vector<string> & regularTypes) { DARABONBA_PTR_SET_VALUE(regularTypes_, regularTypes) };
        inline Bypass& setRegularTypes(vector<string> && regularTypes) { DARABONBA_PTR_SET_RVALUE(regularTypes_, regularTypes) };


        // skip Field Functions 
        bool hasSkip() const { return this->skip_ != nullptr;};
        void deleteSkip() { this->skip_ = nullptr;};
        inline string getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, "") };
        inline Bypass& setSkip(string skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline Bypass& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Bypass& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<vector<int64_t>> customRules_ {};
        shared_ptr<vector<int64_t>> regularRules_ {};
        shared_ptr<vector<string>> regularTypes_ {};
        shared_ptr<string> skip_ {};
        shared_ptr<vector<string>> tags_ {};
      };

      virtual bool empty() const override { return this->bypass_ == nullptr
        && this->response_ == nullptr; };
      // bypass Field Functions 
      bool hasBypass() const { return this->bypass_ != nullptr;};
      void deleteBypass() { this->bypass_ = nullptr;};
      inline const Actions::Bypass & getBypass() const { DARABONBA_PTR_GET_CONST(bypass_, Actions::Bypass) };
      inline Actions::Bypass getBypass() { DARABONBA_PTR_GET(bypass_, Actions::Bypass) };
      inline Actions& setBypass(const Actions::Bypass & bypass) { DARABONBA_PTR_SET_VALUE(bypass_, bypass) };
      inline Actions& setBypass(Actions::Bypass && bypass) { DARABONBA_PTR_SET_RVALUE(bypass_, bypass) };


      // response Field Functions 
      bool hasResponse() const { return this->response_ != nullptr;};
      void deleteResponse() { this->response_ = nullptr;};
      inline const Actions::Response & getResponse() const { DARABONBA_PTR_GET_CONST(response_, Actions::Response) };
      inline Actions::Response getResponse() { DARABONBA_PTR_GET(response_, Actions::Response) };
      inline Actions& setResponse(const Actions::Response & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
      inline Actions& setResponse(Actions::Response && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


    protected:
      shared_ptr<Actions::Bypass> bypass_ {};
      shared_ptr<Actions::Response> response_ {};
    };

    virtual bool empty() const override { return this->action_ == nullptr
        && this->actions_ == nullptr && this->appPackage_ == nullptr && this->appSdk_ == nullptr && this->expression_ == nullptr && this->id_ == nullptr
        && this->managedGroupId_ == nullptr && this->managedList_ == nullptr && this->managedRulesets_ == nullptr && this->name_ == nullptr && this->notes_ == nullptr
        && this->rateLimit_ == nullptr && this->securityLevel_ == nullptr && this->sigchl_ == nullptr && this->status_ == nullptr && this->timer_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline WafRuleConfig& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const WafRuleConfig::Actions & getActions() const { DARABONBA_PTR_GET_CONST(actions_, WafRuleConfig::Actions) };
    inline WafRuleConfig::Actions getActions() { DARABONBA_PTR_GET(actions_, WafRuleConfig::Actions) };
    inline WafRuleConfig& setActions(const WafRuleConfig::Actions & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline WafRuleConfig& setActions(WafRuleConfig::Actions && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // appPackage Field Functions 
    bool hasAppPackage() const { return this->appPackage_ != nullptr;};
    void deleteAppPackage() { this->appPackage_ = nullptr;};
    inline const WafRuleConfig::AppPackage & getAppPackage() const { DARABONBA_PTR_GET_CONST(appPackage_, WafRuleConfig::AppPackage) };
    inline WafRuleConfig::AppPackage getAppPackage() { DARABONBA_PTR_GET(appPackage_, WafRuleConfig::AppPackage) };
    inline WafRuleConfig& setAppPackage(const WafRuleConfig::AppPackage & appPackage) { DARABONBA_PTR_SET_VALUE(appPackage_, appPackage) };
    inline WafRuleConfig& setAppPackage(WafRuleConfig::AppPackage && appPackage) { DARABONBA_PTR_SET_RVALUE(appPackage_, appPackage) };


    // appSdk Field Functions 
    bool hasAppSdk() const { return this->appSdk_ != nullptr;};
    void deleteAppSdk() { this->appSdk_ = nullptr;};
    inline const WafRuleConfig::AppSdk & getAppSdk() const { DARABONBA_PTR_GET_CONST(appSdk_, WafRuleConfig::AppSdk) };
    inline WafRuleConfig::AppSdk getAppSdk() { DARABONBA_PTR_GET(appSdk_, WafRuleConfig::AppSdk) };
    inline WafRuleConfig& setAppSdk(const WafRuleConfig::AppSdk & appSdk) { DARABONBA_PTR_SET_VALUE(appSdk_, appSdk) };
    inline WafRuleConfig& setAppSdk(WafRuleConfig::AppSdk && appSdk) { DARABONBA_PTR_SET_RVALUE(appSdk_, appSdk) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline WafRuleConfig& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline WafRuleConfig& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // managedGroupId Field Functions 
    bool hasManagedGroupId() const { return this->managedGroupId_ != nullptr;};
    void deleteManagedGroupId() { this->managedGroupId_ = nullptr;};
    inline int64_t getManagedGroupId() const { DARABONBA_PTR_GET_DEFAULT(managedGroupId_, 0L) };
    inline WafRuleConfig& setManagedGroupId(int64_t managedGroupId) { DARABONBA_PTR_SET_VALUE(managedGroupId_, managedGroupId) };


    // managedList Field Functions 
    bool hasManagedList() const { return this->managedList_ != nullptr;};
    void deleteManagedList() { this->managedList_ = nullptr;};
    inline string getManagedList() const { DARABONBA_PTR_GET_DEFAULT(managedList_, "") };
    inline WafRuleConfig& setManagedList(string managedList) { DARABONBA_PTR_SET_VALUE(managedList_, managedList) };


    // managedRulesets Field Functions 
    bool hasManagedRulesets() const { return this->managedRulesets_ != nullptr;};
    void deleteManagedRulesets() { this->managedRulesets_ = nullptr;};
    inline const vector<WafRuleConfig::ManagedRulesets> & getManagedRulesets() const { DARABONBA_PTR_GET_CONST(managedRulesets_, vector<WafRuleConfig::ManagedRulesets>) };
    inline vector<WafRuleConfig::ManagedRulesets> getManagedRulesets() { DARABONBA_PTR_GET(managedRulesets_, vector<WafRuleConfig::ManagedRulesets>) };
    inline WafRuleConfig& setManagedRulesets(const vector<WafRuleConfig::ManagedRulesets> & managedRulesets) { DARABONBA_PTR_SET_VALUE(managedRulesets_, managedRulesets) };
    inline WafRuleConfig& setManagedRulesets(vector<WafRuleConfig::ManagedRulesets> && managedRulesets) { DARABONBA_PTR_SET_RVALUE(managedRulesets_, managedRulesets) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline WafRuleConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline WafRuleConfig& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // rateLimit Field Functions 
    bool hasRateLimit() const { return this->rateLimit_ != nullptr;};
    void deleteRateLimit() { this->rateLimit_ = nullptr;};
    inline const WafRuleConfig::RateLimit & getRateLimit() const { DARABONBA_PTR_GET_CONST(rateLimit_, WafRuleConfig::RateLimit) };
    inline WafRuleConfig::RateLimit getRateLimit() { DARABONBA_PTR_GET(rateLimit_, WafRuleConfig::RateLimit) };
    inline WafRuleConfig& setRateLimit(const WafRuleConfig::RateLimit & rateLimit) { DARABONBA_PTR_SET_VALUE(rateLimit_, rateLimit) };
    inline WafRuleConfig& setRateLimit(WafRuleConfig::RateLimit && rateLimit) { DARABONBA_PTR_SET_RVALUE(rateLimit_, rateLimit) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline const WafRuleConfig::SecurityLevel & getSecurityLevel() const { DARABONBA_PTR_GET_CONST(securityLevel_, WafRuleConfig::SecurityLevel) };
    inline WafRuleConfig::SecurityLevel getSecurityLevel() { DARABONBA_PTR_GET(securityLevel_, WafRuleConfig::SecurityLevel) };
    inline WafRuleConfig& setSecurityLevel(const WafRuleConfig::SecurityLevel & securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };
    inline WafRuleConfig& setSecurityLevel(WafRuleConfig::SecurityLevel && securityLevel) { DARABONBA_PTR_SET_RVALUE(securityLevel_, securityLevel) };


    // sigchl Field Functions 
    bool hasSigchl() const { return this->sigchl_ != nullptr;};
    void deleteSigchl() { this->sigchl_ = nullptr;};
    inline const vector<string> & getSigchl() const { DARABONBA_PTR_GET_CONST(sigchl_, vector<string>) };
    inline vector<string> getSigchl() { DARABONBA_PTR_GET(sigchl_, vector<string>) };
    inline WafRuleConfig& setSigchl(const vector<string> & sigchl) { DARABONBA_PTR_SET_VALUE(sigchl_, sigchl) };
    inline WafRuleConfig& setSigchl(vector<string> && sigchl) { DARABONBA_PTR_SET_RVALUE(sigchl_, sigchl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline WafRuleConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timer Field Functions 
    bool hasTimer() const { return this->timer_ != nullptr;};
    void deleteTimer() { this->timer_ = nullptr;};
    inline const WafTimer & getTimer() const { DARABONBA_PTR_GET_CONST(timer_, WafTimer) };
    inline WafTimer getTimer() { DARABONBA_PTR_GET(timer_, WafTimer) };
    inline WafRuleConfig& setTimer(const WafTimer & timer) { DARABONBA_PTR_SET_VALUE(timer_, timer) };
    inline WafRuleConfig& setTimer(WafTimer && timer) { DARABONBA_PTR_SET_RVALUE(timer_, timer) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline WafRuleConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline WafRuleConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> action_ {};
    shared_ptr<WafRuleConfig::Actions> actions_ {};
    shared_ptr<WafRuleConfig::AppPackage> appPackage_ {};
    shared_ptr<WafRuleConfig::AppSdk> appSdk_ {};
    shared_ptr<string> expression_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int64_t> managedGroupId_ {};
    shared_ptr<string> managedList_ {};
    shared_ptr<vector<WafRuleConfig::ManagedRulesets>> managedRulesets_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> notes_ {};
    shared_ptr<WafRuleConfig::RateLimit> rateLimit_ {};
    shared_ptr<WafRuleConfig::SecurityLevel> securityLevel_ {};
    shared_ptr<vector<string>> sigchl_ {};
    shared_ptr<string> status_ {};
    shared_ptr<WafTimer> timer_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
