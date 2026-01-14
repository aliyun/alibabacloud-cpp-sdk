// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetGatewayResponseBody() = default ;
    GetGatewayResponseBody(const GetGatewayResponseBody &) = default ;
    GetGatewayResponseBody(GetGatewayResponseBody &&) = default ;
    GetGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResponseBody() = default ;
    GetGatewayResponseBody& operator=(const GetGatewayResponseBody &) = default ;
    GetGatewayResponseBody& operator=(GetGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Elastic, elastic_);
        DARABONBA_PTR_TO_JSON(ElasticPolicy, elasticPolicy_);
        DARABONBA_PTR_TO_JSON(ElasticReplica, elasticReplica_);
        DARABONBA_PTR_TO_JSON(ElasticType, elasticType_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LogConfigDetails, logConfigDetails_);
        DARABONBA_PTR_TO_JSON(MseTag, mseTag_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Replica, replica_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_TO_JSON(TotalReplica, totalReplica_);
        DARABONBA_PTR_TO_JSON(Vpc, vpc_);
        DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
        DARABONBA_PTR_TO_JSON(Vswitch2, vswitch2_);
        DARABONBA_PTR_TO_JSON(XtraceDetails, xtraceDetails_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Elastic, elastic_);
        DARABONBA_PTR_FROM_JSON(ElasticPolicy, elasticPolicy_);
        DARABONBA_PTR_FROM_JSON(ElasticReplica, elasticReplica_);
        DARABONBA_PTR_FROM_JSON(ElasticType, elasticType_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LogConfigDetails, logConfigDetails_);
        DARABONBA_PTR_FROM_JSON(MseTag, mseTag_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Replica, replica_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_FROM_JSON(TotalReplica, totalReplica_);
        DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
        DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
        DARABONBA_PTR_FROM_JSON(Vswitch2, vswitch2_);
        DARABONBA_PTR_FROM_JSON(XtraceDetails, xtraceDetails_);
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
      class XtraceDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const XtraceDetails& obj) { 
          DARABONBA_PTR_TO_JSON(Sample, sample_);
          DARABONBA_PTR_TO_JSON(TraceOn, traceOn_);
        };
        friend void from_json(const Darabonba::Json& j, XtraceDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(Sample, sample_);
          DARABONBA_PTR_FROM_JSON(TraceOn, traceOn_);
        };
        XtraceDetails() = default ;
        XtraceDetails(const XtraceDetails &) = default ;
        XtraceDetails(XtraceDetails &&) = default ;
        XtraceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~XtraceDetails() = default ;
        XtraceDetails& operator=(const XtraceDetails &) = default ;
        XtraceDetails& operator=(XtraceDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sample_ == nullptr
        && this->traceOn_ == nullptr; };
        // sample Field Functions 
        bool hasSample() const { return this->sample_ != nullptr;};
        void deleteSample() { this->sample_ = nullptr;};
        inline int32_t getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, 0) };
        inline XtraceDetails& setSample(int32_t sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


        // traceOn Field Functions 
        bool hasTraceOn() const { return this->traceOn_ != nullptr;};
        void deleteTraceOn() { this->traceOn_ = nullptr;};
        inline bool getTraceOn() const { DARABONBA_PTR_GET_DEFAULT(traceOn_, false) };
        inline XtraceDetails& setTraceOn(bool traceOn) { DARABONBA_PTR_SET_VALUE(traceOn_, traceOn) };


      protected:
        // The sampling rate of Tracing Analysis.
        shared_ptr<int32_t> sample_ {};
        // Indicates whether sampling by using Tracing Analysis is enabled.
        shared_ptr<bool> traceOn_ {};
      };

      class LogConfigDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogConfigDetails& obj) { 
          DARABONBA_PTR_TO_JSON(LogEnabled, logEnabled_);
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        };
        friend void from_json(const Darabonba::Json& j, LogConfigDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(LogEnabled, logEnabled_);
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        };
        LogConfigDetails() = default ;
        LogConfigDetails(const LogConfigDetails &) = default ;
        LogConfigDetails(LogConfigDetails &&) = default ;
        LogConfigDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogConfigDetails() = default ;
        LogConfigDetails& operator=(const LogConfigDetails &) = default ;
        LogConfigDetails& operator=(LogConfigDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logEnabled_ == nullptr
        && this->logStoreName_ == nullptr && this->projectName_ == nullptr; };
        // logEnabled Field Functions 
        bool hasLogEnabled() const { return this->logEnabled_ != nullptr;};
        void deleteLogEnabled() { this->logEnabled_ = nullptr;};
        inline bool getLogEnabled() const { DARABONBA_PTR_GET_DEFAULT(logEnabled_, false) };
        inline LogConfigDetails& setLogEnabled(bool logEnabled) { DARABONBA_PTR_SET_VALUE(logEnabled_, logEnabled) };


        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline LogConfigDetails& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline LogConfigDetails& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      protected:
        // Indicates whether Log Service is activated.
        shared_ptr<bool> logEnabled_ {};
        // The name of the Logstore.
        shared_ptr<string> logStoreName_ {};
        // The name of the project.
        shared_ptr<string> projectName_ {};
      };

      class ElasticPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ElasticPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(ElasticType, elasticType_);
          DARABONBA_PTR_TO_JSON(MaxReplica, maxReplica_);
          DARABONBA_PTR_TO_JSON(TimePolicyList, timePolicyList_);
        };
        friend void from_json(const Darabonba::Json& j, ElasticPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(ElasticType, elasticType_);
          DARABONBA_PTR_FROM_JSON(MaxReplica, maxReplica_);
          DARABONBA_PTR_FROM_JSON(TimePolicyList, timePolicyList_);
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
            DARABONBA_PTR_TO_JSON(DesiredReplica, desiredReplica_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          };
          friend void from_json(const Darabonba::Json& j, TimePolicyList& obj) { 
            DARABONBA_PTR_FROM_JSON(DesiredReplica, desiredReplica_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
          virtual bool empty() const override { return this->desiredReplica_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
          // desiredReplica Field Functions 
          bool hasDesiredReplica() const { return this->desiredReplica_ != nullptr;};
          void deleteDesiredReplica() { this->desiredReplica_ = nullptr;};
          inline int32_t getDesiredReplica() const { DARABONBA_PTR_GET_DEFAULT(desiredReplica_, 0) };
          inline TimePolicyList& setDesiredReplica(int32_t desiredReplica) { DARABONBA_PTR_SET_VALUE(desiredReplica_, desiredReplica) };


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


        protected:
          // The number of expected replicas.
          shared_ptr<int32_t> desiredReplica_ {};
          // The end time of auto scale-out.
          shared_ptr<string> endTime_ {};
          // The start time of auto scale-out.
          shared_ptr<string> startTime_ {};
        };

        virtual bool empty() const override { return this->elasticType_ == nullptr
        && this->maxReplica_ == nullptr && this->timePolicyList_ == nullptr; };
        // elasticType Field Functions 
        bool hasElasticType() const { return this->elasticType_ != nullptr;};
        void deleteElasticType() { this->elasticType_ = nullptr;};
        inline string getElasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
        inline ElasticPolicy& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


        // maxReplica Field Functions 
        bool hasMaxReplica() const { return this->maxReplica_ != nullptr;};
        void deleteMaxReplica() { this->maxReplica_ = nullptr;};
        inline int32_t getMaxReplica() const { DARABONBA_PTR_GET_DEFAULT(maxReplica_, 0) };
        inline ElasticPolicy& setMaxReplica(int32_t maxReplica) { DARABONBA_PTR_SET_VALUE(maxReplica_, maxReplica) };


        // timePolicyList Field Functions 
        bool hasTimePolicyList() const { return this->timePolicyList_ != nullptr;};
        void deleteTimePolicyList() { this->timePolicyList_ = nullptr;};
        inline const vector<ElasticPolicy::TimePolicyList> & getTimePolicyList() const { DARABONBA_PTR_GET_CONST(timePolicyList_, vector<ElasticPolicy::TimePolicyList>) };
        inline vector<ElasticPolicy::TimePolicyList> getTimePolicyList() { DARABONBA_PTR_GET(timePolicyList_, vector<ElasticPolicy::TimePolicyList>) };
        inline ElasticPolicy& setTimePolicyList(const vector<ElasticPolicy::TimePolicyList> & timePolicyList) { DARABONBA_PTR_SET_VALUE(timePolicyList_, timePolicyList) };
        inline ElasticPolicy& setTimePolicyList(vector<ElasticPolicy::TimePolicyList> && timePolicyList) { DARABONBA_PTR_SET_RVALUE(timePolicyList_, timePolicyList) };


      protected:
        // The type of auto scale-out. Valid value:
        // 
        // *   CronHPA: scale-out by time
        shared_ptr<string> elasticType_ {};
        // The maximum number of instances that are automatically scaled out. This parameter is used for horizontal scale-out.
        shared_ptr<int32_t> maxReplica_ {};
        // The policy of scale-out by time.
        shared_ptr<vector<ElasticPolicy::TimePolicyList>> timePolicyList_ {};
      };

      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->elastic_ == nullptr && this->elasticPolicy_ == nullptr && this->elasticReplica_ == nullptr && this->elasticType_ == nullptr && this->endDate_ == nullptr
        && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr
        && this->logConfigDetails_ == nullptr && this->mseTag_ == nullptr && this->name_ == nullptr && this->primaryUser_ == nullptr && this->region_ == nullptr
        && this->replica_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroup_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr
        && this->statusDesc_ == nullptr && this->totalReplica_ == nullptr && this->vpc_ == nullptr && this->vswitch_ == nullptr && this->vswitch2_ == nullptr
        && this->xtraceDetails_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Data& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // elastic Field Functions 
      bool hasElastic() const { return this->elastic_ != nullptr;};
      void deleteElastic() { this->elastic_ = nullptr;};
      inline bool getElastic() const { DARABONBA_PTR_GET_DEFAULT(elastic_, false) };
      inline Data& setElastic(bool elastic) { DARABONBA_PTR_SET_VALUE(elastic_, elastic) };


      // elasticPolicy Field Functions 
      bool hasElasticPolicy() const { return this->elasticPolicy_ != nullptr;};
      void deleteElasticPolicy() { this->elasticPolicy_ = nullptr;};
      inline const Data::ElasticPolicy & getElasticPolicy() const { DARABONBA_PTR_GET_CONST(elasticPolicy_, Data::ElasticPolicy) };
      inline Data::ElasticPolicy getElasticPolicy() { DARABONBA_PTR_GET(elasticPolicy_, Data::ElasticPolicy) };
      inline Data& setElasticPolicy(const Data::ElasticPolicy & elasticPolicy) { DARABONBA_PTR_SET_VALUE(elasticPolicy_, elasticPolicy) };
      inline Data& setElasticPolicy(Data::ElasticPolicy && elasticPolicy) { DARABONBA_PTR_SET_RVALUE(elasticPolicy_, elasticPolicy) };


      // elasticReplica Field Functions 
      bool hasElasticReplica() const { return this->elasticReplica_ != nullptr;};
      void deleteElasticReplica() { this->elasticReplica_ = nullptr;};
      inline int32_t getElasticReplica() const { DARABONBA_PTR_GET_DEFAULT(elasticReplica_, 0) };
      inline Data& setElasticReplica(int32_t elasticReplica) { DARABONBA_PTR_SET_VALUE(elasticReplica_, elasticReplica) };


      // elasticType Field Functions 
      bool hasElasticType() const { return this->elasticType_ != nullptr;};
      void deleteElasticType() { this->elasticType_ = nullptr;};
      inline string getElasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
      inline Data& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Data& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline Data& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // logConfigDetails Field Functions 
      bool hasLogConfigDetails() const { return this->logConfigDetails_ != nullptr;};
      void deleteLogConfigDetails() { this->logConfigDetails_ = nullptr;};
      inline const Data::LogConfigDetails & getLogConfigDetails() const { DARABONBA_PTR_GET_CONST(logConfigDetails_, Data::LogConfigDetails) };
      inline Data::LogConfigDetails getLogConfigDetails() { DARABONBA_PTR_GET(logConfigDetails_, Data::LogConfigDetails) };
      inline Data& setLogConfigDetails(const Data::LogConfigDetails & logConfigDetails) { DARABONBA_PTR_SET_VALUE(logConfigDetails_, logConfigDetails) };
      inline Data& setLogConfigDetails(Data::LogConfigDetails && logConfigDetails) { DARABONBA_PTR_SET_RVALUE(logConfigDetails_, logConfigDetails) };


      // mseTag Field Functions 
      bool hasMseTag() const { return this->mseTag_ != nullptr;};
      void deleteMseTag() { this->mseTag_ = nullptr;};
      inline string getMseTag() const { DARABONBA_PTR_GET_DEFAULT(mseTag_, "") };
      inline Data& setMseTag(string mseTag) { DARABONBA_PTR_SET_VALUE(mseTag_, mseTag) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // primaryUser Field Functions 
      bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
      void deletePrimaryUser() { this->primaryUser_ = nullptr;};
      inline string getPrimaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
      inline Data& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // replica Field Functions 
      bool hasReplica() const { return this->replica_ != nullptr;};
      void deleteReplica() { this->replica_ = nullptr;};
      inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
      inline Data& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityGroup Field Functions 
      bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
      void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
      inline string getSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
      inline Data& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Data& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline Data& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // totalReplica Field Functions 
      bool hasTotalReplica() const { return this->totalReplica_ != nullptr;};
      void deleteTotalReplica() { this->totalReplica_ = nullptr;};
      inline int32_t getTotalReplica() const { DARABONBA_PTR_GET_DEFAULT(totalReplica_, 0) };
      inline Data& setTotalReplica(int32_t totalReplica) { DARABONBA_PTR_SET_VALUE(totalReplica_, totalReplica) };


      // vpc Field Functions 
      bool hasVpc() const { return this->vpc_ != nullptr;};
      void deleteVpc() { this->vpc_ = nullptr;};
      inline string getVpc() const { DARABONBA_PTR_GET_DEFAULT(vpc_, "") };
      inline Data& setVpc(string vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };


      // vswitch Field Functions 
      bool hasVswitch() const { return this->vswitch_ != nullptr;};
      void deleteVswitch() { this->vswitch_ = nullptr;};
      inline string getVswitch() const { DARABONBA_PTR_GET_DEFAULT(vswitch_, "") };
      inline Data& setVswitch(string vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };


      // vswitch2 Field Functions 
      bool hasVswitch2() const { return this->vswitch2_ != nullptr;};
      void deleteVswitch2() { this->vswitch2_ = nullptr;};
      inline string getVswitch2() const { DARABONBA_PTR_GET_DEFAULT(vswitch2_, "") };
      inline Data& setVswitch2(string vswitch2) { DARABONBA_PTR_SET_VALUE(vswitch2_, vswitch2) };


      // xtraceDetails Field Functions 
      bool hasXtraceDetails() const { return this->xtraceDetails_ != nullptr;};
      void deleteXtraceDetails() { this->xtraceDetails_ = nullptr;};
      inline const Data::XtraceDetails & getXtraceDetails() const { DARABONBA_PTR_GET_CONST(xtraceDetails_, Data::XtraceDetails) };
      inline Data::XtraceDetails getXtraceDetails() { DARABONBA_PTR_GET(xtraceDetails_, Data::XtraceDetails) };
      inline Data& setXtraceDetails(const Data::XtraceDetails & xtraceDetails) { DARABONBA_PTR_SET_VALUE(xtraceDetails_, xtraceDetails) };
      inline Data& setXtraceDetails(Data::XtraceDetails && xtraceDetails) { DARABONBA_PTR_SET_RVALUE(xtraceDetails_, xtraceDetails) };


    protected:
      // The billing method, such as subscription or pay-as-you-go.
      shared_ptr<string> chargeType_ {};
      // Indicates whether auto scale-out is enabled.
      shared_ptr<bool> elastic_ {};
      // The auto scale-out policy.
      shared_ptr<Data::ElasticPolicy> elasticPolicy_ {};
      // The number of replicas that are automatically scaled out.
      shared_ptr<int32_t> elasticReplica_ {};
      // The type of auto scale-out. Valid value:
      // 
      // *   CronHPA: scale-out by time
      shared_ptr<string> elasticType_ {};
      // The time when the gateway expires.
      shared_ptr<string> endDate_ {};
      // The unique ID of the gateway.
      shared_ptr<string> gatewayUniqueId_ {};
      // The time when the gateway was created. The time is displayed in GMT. The time is the local time of the region in which the gateway resides.
      shared_ptr<string> gmtCreate_ {};
      // The time when the gateway was last modified.
      shared_ptr<string> gmtModified_ {};
      // The ID of the gateway.
      shared_ptr<int64_t> id_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The log configuration.
      shared_ptr<Data::LogConfigDetails> logConfigDetails_ {};
      // The tag of the resource.
      shared_ptr<string> mseTag_ {};
      // The name of the gateway.
      shared_ptr<string> name_ {};
      // The Alibaba Cloud account ID of the user who created the gateway.
      shared_ptr<string> primaryUser_ {};
      // The region ID.
      shared_ptr<string> region_ {};
      // The number of gateway replicas.
      shared_ptr<int32_t> replica_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the security group.
      shared_ptr<string> securityGroup_ {};
      // The specifications of the gateway.
      shared_ptr<string> spec_ {};
      // The status of the gateway. Valid values:
      // 
      // *   0: The gateway is being created.
      // *   1: The gateway fails to be created.
      // *   2: The gateway is running.
      // *   3: The gateway is changing.
      // *   4: The gateway is scaling in.
      // *   6: The gateway is scaling out.
      // *   8: The gateway is being deleted.
      // *   10: The gateway is restarting.
      // *   11: The gateway is being rebuilt.
      // *   12: The gateway is updating.
      // *   13: The gateway fails to be updated.
      shared_ptr<int32_t> status_ {};
      // The description of the status.
      shared_ptr<string> statusDesc_ {};
      // The total number of replicas, including the number of replicas that are automatically scaled out.
      shared_ptr<int32_t> totalReplica_ {};
      // The ID of the VPC.
      shared_ptr<string> vpc_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vswitch_ {};
      // The ID of the secondary vSwitch.
      shared_ptr<string> vswitch2_ {};
      // The details of Tracing Analysis.
      shared_ptr<Data::XtraceDetails> xtraceDetails_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetGatewayResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayResponseBody::Data) };
    inline GetGatewayResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayResponseBody::Data) };
    inline GetGatewayResponseBody& setData(const GetGatewayResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayResponseBody& setData(GetGatewayResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetGatewayResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetGatewayResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. A value of 200 indicates that the request is successful.
    shared_ptr<int32_t> code_ {};
    // The information about the gateway.
    shared_ptr<GetGatewayResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
