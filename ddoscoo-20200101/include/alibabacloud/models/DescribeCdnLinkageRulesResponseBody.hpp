// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCdnLinkageRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnLinkageRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchedulerRules, schedulerRules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnLinkageRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchedulerRules, schedulerRules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCdnLinkageRulesResponseBody() = default ;
    DescribeCdnLinkageRulesResponseBody(const DescribeCdnLinkageRulesResponseBody &) = default ;
    DescribeCdnLinkageRulesResponseBody(DescribeCdnLinkageRulesResponseBody &&) = default ;
    DescribeCdnLinkageRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnLinkageRulesResponseBody() = default ;
    DescribeCdnLinkageRulesResponseBody& operator=(const DescribeCdnLinkageRulesResponseBody &) = default ;
    DescribeCdnLinkageRulesResponseBody& operator=(DescribeCdnLinkageRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SchedulerRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SchedulerRules& obj) { 
        DARABONBA_PTR_TO_JSON(CdnLinkageEnable, cdnLinkageEnable_);
        DARABONBA_PTR_TO_JSON(CdnLinkageRule, cdnLinkageRule_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
      };
      friend void from_json(const Darabonba::Json& j, SchedulerRules& obj) { 
        DARABONBA_PTR_FROM_JSON(CdnLinkageEnable, cdnLinkageEnable_);
        DARABONBA_PTR_FROM_JSON(CdnLinkageRule, cdnLinkageRule_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
      };
      SchedulerRules() = default ;
      SchedulerRules(const SchedulerRules &) = default ;
      SchedulerRules(SchedulerRules &&) = default ;
      SchedulerRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SchedulerRules() = default ;
      SchedulerRules& operator=(const SchedulerRules &) = default ;
      SchedulerRules& operator=(SchedulerRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CdnLinkageRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CdnLinkageRule& obj) { 
          DARABONBA_PTR_TO_JSON(Cname, cname_);
          DARABONBA_PTR_TO_JSON(Param, param_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
        };
        friend void from_json(const Darabonba::Json& j, CdnLinkageRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Cname, cname_);
          DARABONBA_PTR_FROM_JSON(Param, param_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
        };
        CdnLinkageRule() = default ;
        CdnLinkageRule(const CdnLinkageRule &) = default ;
        CdnLinkageRule(CdnLinkageRule &&) = default ;
        CdnLinkageRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CdnLinkageRule() = default ;
        CdnLinkageRule& operator=(const CdnLinkageRule &) = default ;
        CdnLinkageRule& operator=(CdnLinkageRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(Priority, priority_);
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
            DARABONBA_PTR_TO_JSON(ValueType, valueType_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(Priority, priority_);
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
            DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
          };
          Rules() = default ;
          Rules(const Rules &) = default ;
          Rules(Rules &&) = default ;
          Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rules() = default ;
          Rules& operator=(const Rules &) = default ;
          Rules& operator=(Rules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->priority_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->value_ == nullptr && this->valueType_ == nullptr; };
          // priority Field Functions 
          bool hasPriority() const { return this->priority_ != nullptr;};
          void deletePriority() { this->priority_ = nullptr;};
          inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
          inline Rules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline Rules& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline Rules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Rules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Rules& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          // valueType Field Functions 
          bool hasValueType() const { return this->valueType_ != nullptr;};
          void deleteValueType() { this->valueType_ = nullptr;};
          inline int32_t getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, 0) };
          inline Rules& setValueType(int32_t valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


        protected:
          shared_ptr<int32_t> priority_ {};
          shared_ptr<string> regionId_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> value_ {};
          shared_ptr<int32_t> valueType_ {};
        };

        class Param : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Param& obj) { 
            DARABONBA_PTR_TO_JSON(ParamData, paramData_);
            DARABONBA_PTR_TO_JSON(ParamType, paramType_);
          };
          friend void from_json(const Darabonba::Json& j, Param& obj) { 
            DARABONBA_PTR_FROM_JSON(ParamData, paramData_);
            DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
          };
          Param() = default ;
          Param(const Param &) = default ;
          Param(Param &&) = default ;
          Param(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Param() = default ;
          Param& operator=(const Param &) = default ;
          Param& operator=(Param &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ParamData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ParamData& obj) { 
              DARABONBA_PTR_TO_JSON(AccessQps, accessQps_);
              DARABONBA_PTR_TO_JSON(UpstreamQps, upstreamQps_);
            };
            friend void from_json(const Darabonba::Json& j, ParamData& obj) { 
              DARABONBA_PTR_FROM_JSON(AccessQps, accessQps_);
              DARABONBA_PTR_FROM_JSON(UpstreamQps, upstreamQps_);
            };
            ParamData() = default ;
            ParamData(const ParamData &) = default ;
            ParamData(ParamData &&) = default ;
            ParamData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ParamData() = default ;
            ParamData& operator=(const ParamData &) = default ;
            ParamData& operator=(ParamData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->accessQps_ == nullptr
        && this->upstreamQps_ == nullptr; };
            // accessQps Field Functions 
            bool hasAccessQps() const { return this->accessQps_ != nullptr;};
            void deleteAccessQps() { this->accessQps_ = nullptr;};
            inline int64_t getAccessQps() const { DARABONBA_PTR_GET_DEFAULT(accessQps_, 0L) };
            inline ParamData& setAccessQps(int64_t accessQps) { DARABONBA_PTR_SET_VALUE(accessQps_, accessQps) };


            // upstreamQps Field Functions 
            bool hasUpstreamQps() const { return this->upstreamQps_ != nullptr;};
            void deleteUpstreamQps() { this->upstreamQps_ = nullptr;};
            inline int64_t getUpstreamQps() const { DARABONBA_PTR_GET_DEFAULT(upstreamQps_, 0L) };
            inline ParamData& setUpstreamQps(int64_t upstreamQps) { DARABONBA_PTR_SET_VALUE(upstreamQps_, upstreamQps) };


          protected:
            shared_ptr<int64_t> accessQps_ {};
            shared_ptr<int64_t> upstreamQps_ {};
          };

          virtual bool empty() const override { return this->paramData_ == nullptr
        && this->paramType_ == nullptr; };
          // paramData Field Functions 
          bool hasParamData() const { return this->paramData_ != nullptr;};
          void deleteParamData() { this->paramData_ = nullptr;};
          inline const Param::ParamData & getParamData() const { DARABONBA_PTR_GET_CONST(paramData_, Param::ParamData) };
          inline Param::ParamData getParamData() { DARABONBA_PTR_GET(paramData_, Param::ParamData) };
          inline Param& setParamData(const Param::ParamData & paramData) { DARABONBA_PTR_SET_VALUE(paramData_, paramData) };
          inline Param& setParamData(Param::ParamData && paramData) { DARABONBA_PTR_SET_RVALUE(paramData_, paramData) };


          // paramType Field Functions 
          bool hasParamType() const { return this->paramType_ != nullptr;};
          void deleteParamType() { this->paramType_ = nullptr;};
          inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
          inline Param& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


        protected:
          shared_ptr<Param::ParamData> paramData_ {};
          shared_ptr<string> paramType_ {};
        };

        virtual bool empty() const override { return this->cname_ == nullptr
        && this->param_ == nullptr && this->ruleName_ == nullptr && this->rules_ == nullptr; };
        // cname Field Functions 
        bool hasCname() const { return this->cname_ != nullptr;};
        void deleteCname() { this->cname_ = nullptr;};
        inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
        inline CdnLinkageRule& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


        // param Field Functions 
        bool hasParam() const { return this->param_ != nullptr;};
        void deleteParam() { this->param_ = nullptr;};
        inline const CdnLinkageRule::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, CdnLinkageRule::Param) };
        inline CdnLinkageRule::Param getParam() { DARABONBA_PTR_GET(param_, CdnLinkageRule::Param) };
        inline CdnLinkageRule& setParam(const CdnLinkageRule::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
        inline CdnLinkageRule& setParam(CdnLinkageRule::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline CdnLinkageRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<CdnLinkageRule::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<CdnLinkageRule::Rules>) };
        inline vector<CdnLinkageRule::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<CdnLinkageRule::Rules>) };
        inline CdnLinkageRule& setRules(const vector<CdnLinkageRule::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline CdnLinkageRule& setRules(vector<CdnLinkageRule::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      protected:
        shared_ptr<string> cname_ {};
        shared_ptr<CdnLinkageRule::Param> param_ {};
        shared_ptr<string> ruleName_ {};
        shared_ptr<vector<CdnLinkageRule::Rules>> rules_ {};
      };

      virtual bool empty() const override { return this->cdnLinkageEnable_ == nullptr
        && this->cdnLinkageRule_ == nullptr && this->domain_ == nullptr; };
      // cdnLinkageEnable Field Functions 
      bool hasCdnLinkageEnable() const { return this->cdnLinkageEnable_ != nullptr;};
      void deleteCdnLinkageEnable() { this->cdnLinkageEnable_ = nullptr;};
      inline int32_t getCdnLinkageEnable() const { DARABONBA_PTR_GET_DEFAULT(cdnLinkageEnable_, 0) };
      inline SchedulerRules& setCdnLinkageEnable(int32_t cdnLinkageEnable) { DARABONBA_PTR_SET_VALUE(cdnLinkageEnable_, cdnLinkageEnable) };


      // cdnLinkageRule Field Functions 
      bool hasCdnLinkageRule() const { return this->cdnLinkageRule_ != nullptr;};
      void deleteCdnLinkageRule() { this->cdnLinkageRule_ = nullptr;};
      inline const SchedulerRules::CdnLinkageRule & getCdnLinkageRule() const { DARABONBA_PTR_GET_CONST(cdnLinkageRule_, SchedulerRules::CdnLinkageRule) };
      inline SchedulerRules::CdnLinkageRule getCdnLinkageRule() { DARABONBA_PTR_GET(cdnLinkageRule_, SchedulerRules::CdnLinkageRule) };
      inline SchedulerRules& setCdnLinkageRule(const SchedulerRules::CdnLinkageRule & cdnLinkageRule) { DARABONBA_PTR_SET_VALUE(cdnLinkageRule_, cdnLinkageRule) };
      inline SchedulerRules& setCdnLinkageRule(SchedulerRules::CdnLinkageRule && cdnLinkageRule) { DARABONBA_PTR_SET_RVALUE(cdnLinkageRule_, cdnLinkageRule) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline SchedulerRules& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    protected:
      shared_ptr<int32_t> cdnLinkageEnable_ {};
      shared_ptr<SchedulerRules::CdnLinkageRule> cdnLinkageRule_ {};
      shared_ptr<string> domain_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->schedulerRules_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnLinkageRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schedulerRules Field Functions 
    bool hasSchedulerRules() const { return this->schedulerRules_ != nullptr;};
    void deleteSchedulerRules() { this->schedulerRules_ = nullptr;};
    inline const vector<DescribeCdnLinkageRulesResponseBody::SchedulerRules> & getSchedulerRules() const { DARABONBA_PTR_GET_CONST(schedulerRules_, vector<DescribeCdnLinkageRulesResponseBody::SchedulerRules>) };
    inline vector<DescribeCdnLinkageRulesResponseBody::SchedulerRules> getSchedulerRules() { DARABONBA_PTR_GET(schedulerRules_, vector<DescribeCdnLinkageRulesResponseBody::SchedulerRules>) };
    inline DescribeCdnLinkageRulesResponseBody& setSchedulerRules(const vector<DescribeCdnLinkageRulesResponseBody::SchedulerRules> & schedulerRules) { DARABONBA_PTR_SET_VALUE(schedulerRules_, schedulerRules) };
    inline DescribeCdnLinkageRulesResponseBody& setSchedulerRules(vector<DescribeCdnLinkageRulesResponseBody::SchedulerRules> && schedulerRules) { DARABONBA_PTR_SET_RVALUE(schedulerRules_, schedulerRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeCdnLinkageRulesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeCdnLinkageRulesResponseBody::SchedulerRules>> schedulerRules_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
