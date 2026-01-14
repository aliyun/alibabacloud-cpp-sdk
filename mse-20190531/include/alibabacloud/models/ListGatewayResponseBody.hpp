// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODY_HPP_
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
  class ListGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListGatewayResponseBody() = default ;
    ListGatewayResponseBody(const ListGatewayResponseBody &) = default ;
    ListGatewayResponseBody(ListGatewayResponseBody &&) = default ;
    ListGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayResponseBody() = default ;
    ListGatewayResponseBody& operator=(const ListGatewayResponseBody &) = default ;
    ListGatewayResponseBody& operator=(ListGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(AhasOn, ahasOn_);
          DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_TO_JSON(ArmsOn, armsOn_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
          DARABONBA_PTR_TO_JSON(Elastic, elastic_);
          DARABONBA_PTR_TO_JSON(ElasticInstanceId, elasticInstanceId_);
          DARABONBA_PTR_TO_JSON(ElasticPolicy, elasticPolicy_);
          DARABONBA_PTR_TO_JSON(ElasticReplica, elasticReplica_);
          DARABONBA_PTR_TO_JSON(ElasticType, elasticType_);
          DARABONBA_PTR_TO_JSON(EndDate, endDate_);
          DARABONBA_PTR_TO_JSON(GatewayEntry, gatewayEntry_);
          DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
          DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_TO_JSON(GatewayVersion, gatewayVersion_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InitConfig, initConfig_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InternetSlb, internetSlb_);
          DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
          DARABONBA_PTR_TO_JSON(MaintenancePeriod, maintenancePeriod_);
          DARABONBA_PTR_TO_JSON(MseTag, mseTag_);
          DARABONBA_PTR_TO_JSON(MseVersion, mseVersion_);
          DARABONBA_PTR_TO_JSON(MustUpgrade, mustUpgrade_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Replica, replica_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RollBack, rollBack_);
          DARABONBA_PTR_TO_JSON(Slb, slb_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
          DARABONBA_PTR_TO_JSON(SupportWasm, supportWasm_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(TotalReplica, totalReplica_);
          DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
          DARABONBA_PTR_TO_JSON(VersionLifecycle, versionLifecycle_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(Vswitch2, vswitch2_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(AhasOn, ahasOn_);
          DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_FROM_JSON(ArmsOn, armsOn_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
          DARABONBA_PTR_FROM_JSON(Elastic, elastic_);
          DARABONBA_PTR_FROM_JSON(ElasticInstanceId, elasticInstanceId_);
          DARABONBA_PTR_FROM_JSON(ElasticPolicy, elasticPolicy_);
          DARABONBA_PTR_FROM_JSON(ElasticReplica, elasticReplica_);
          DARABONBA_PTR_FROM_JSON(ElasticType, elasticType_);
          DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
          DARABONBA_PTR_FROM_JSON(GatewayEntry, gatewayEntry_);
          DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
          DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_FROM_JSON(GatewayVersion, gatewayVersion_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InitConfig, initConfig_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InternetSlb, internetSlb_);
          DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
          DARABONBA_PTR_FROM_JSON(MaintenancePeriod, maintenancePeriod_);
          DARABONBA_PTR_FROM_JSON(MseTag, mseTag_);
          DARABONBA_PTR_FROM_JSON(MseVersion, mseVersion_);
          DARABONBA_PTR_FROM_JSON(MustUpgrade, mustUpgrade_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Replica, replica_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RollBack, rollBack_);
          DARABONBA_PTR_FROM_JSON(Slb, slb_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
          DARABONBA_PTR_FROM_JSON(SupportWasm, supportWasm_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(TotalReplica, totalReplica_);
          DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
          DARABONBA_PTR_FROM_JSON(VersionLifecycle, versionLifecycle_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(Vswitch2, vswitch2_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Slb : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Slb& obj) { 
            DARABONBA_PTR_TO_JSON(GatewaySlbMode, gatewaySlbMode_);
            DARABONBA_PTR_TO_JSON(GatewaySlbStatus, gatewaySlbStatus_);
            DARABONBA_PTR_TO_JSON(SlbId, slbId_);
            DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
            DARABONBA_PTR_TO_JSON(SlbPort, slbPort_);
            DARABONBA_PTR_TO_JSON(SlbSpec, slbSpec_);
            DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Slb& obj) { 
            DARABONBA_PTR_FROM_JSON(GatewaySlbMode, gatewaySlbMode_);
            DARABONBA_PTR_FROM_JSON(GatewaySlbStatus, gatewaySlbStatus_);
            DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
            DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
            DARABONBA_PTR_FROM_JSON(SlbPort, slbPort_);
            DARABONBA_PTR_FROM_JSON(SlbSpec, slbSpec_);
            DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Slb() = default ;
          Slb(const Slb &) = default ;
          Slb(Slb &&) = default ;
          Slb(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Slb() = default ;
          Slb& operator=(const Slb &) = default ;
          Slb& operator=(Slb &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->gatewaySlbMode_ == nullptr
        && this->gatewaySlbStatus_ == nullptr && this->slbId_ == nullptr && this->slbIp_ == nullptr && this->slbPort_ == nullptr && this->slbSpec_ == nullptr
        && this->statusDesc_ == nullptr && this->type_ == nullptr; };
          // gatewaySlbMode Field Functions 
          bool hasGatewaySlbMode() const { return this->gatewaySlbMode_ != nullptr;};
          void deleteGatewaySlbMode() { this->gatewaySlbMode_ = nullptr;};
          inline string getGatewaySlbMode() const { DARABONBA_PTR_GET_DEFAULT(gatewaySlbMode_, "") };
          inline Slb& setGatewaySlbMode(string gatewaySlbMode) { DARABONBA_PTR_SET_VALUE(gatewaySlbMode_, gatewaySlbMode) };


          // gatewaySlbStatus Field Functions 
          bool hasGatewaySlbStatus() const { return this->gatewaySlbStatus_ != nullptr;};
          void deleteGatewaySlbStatus() { this->gatewaySlbStatus_ = nullptr;};
          inline string getGatewaySlbStatus() const { DARABONBA_PTR_GET_DEFAULT(gatewaySlbStatus_, "") };
          inline Slb& setGatewaySlbStatus(string gatewaySlbStatus) { DARABONBA_PTR_SET_VALUE(gatewaySlbStatus_, gatewaySlbStatus) };


          // slbId Field Functions 
          bool hasSlbId() const { return this->slbId_ != nullptr;};
          void deleteSlbId() { this->slbId_ = nullptr;};
          inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
          inline Slb& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


          // slbIp Field Functions 
          bool hasSlbIp() const { return this->slbIp_ != nullptr;};
          void deleteSlbIp() { this->slbIp_ = nullptr;};
          inline string getSlbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
          inline Slb& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


          // slbPort Field Functions 
          bool hasSlbPort() const { return this->slbPort_ != nullptr;};
          void deleteSlbPort() { this->slbPort_ = nullptr;};
          inline string getSlbPort() const { DARABONBA_PTR_GET_DEFAULT(slbPort_, "") };
          inline Slb& setSlbPort(string slbPort) { DARABONBA_PTR_SET_VALUE(slbPort_, slbPort) };


          // slbSpec Field Functions 
          bool hasSlbSpec() const { return this->slbSpec_ != nullptr;};
          void deleteSlbSpec() { this->slbSpec_ = nullptr;};
          inline string getSlbSpec() const { DARABONBA_PTR_GET_DEFAULT(slbSpec_, "") };
          inline Slb& setSlbSpec(string slbSpec) { DARABONBA_PTR_SET_VALUE(slbSpec_, slbSpec) };


          // statusDesc Field Functions 
          bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
          void deleteStatusDesc() { this->statusDesc_ = nullptr;};
          inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
          inline Slb& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Slb& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The mode of the SLB instance.
          shared_ptr<string> gatewaySlbMode_ {};
          // The state of the SLB instance.
          shared_ptr<string> gatewaySlbStatus_ {};
          // The ID of the SLB instance.
          shared_ptr<string> slbId_ {};
          // The IP address of the SLB instance.
          shared_ptr<string> slbIp_ {};
          // The port number of the SLB instance.
          shared_ptr<string> slbPort_ {};
          // The specifications of the SLB instance.
          shared_ptr<string> slbSpec_ {};
          // The description of the state.
          shared_ptr<string> statusDesc_ {};
          // The network type. Valid values:
          // 
          // *   PUB_NET
          // *   PRIVATE_NET
          shared_ptr<string> type_ {};
        };

        class MaintenancePeriod : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MaintenancePeriod& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
          };
          friend void from_json(const Darabonba::Json& j, MaintenancePeriod& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
          };
          MaintenancePeriod() = default ;
          MaintenancePeriod(const MaintenancePeriod &) = default ;
          MaintenancePeriod(MaintenancePeriod &&) = default ;
          MaintenancePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MaintenancePeriod() = default ;
          MaintenancePeriod& operator=(const MaintenancePeriod &) = default ;
          MaintenancePeriod& operator=(MaintenancePeriod &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->timeZone_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline MaintenancePeriod& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline MaintenancePeriod& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // timeZone Field Functions 
          bool hasTimeZone() const { return this->timeZone_ != nullptr;};
          void deleteTimeZone() { this->timeZone_ = nullptr;};
          inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
          inline MaintenancePeriod& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


        protected:
          shared_ptr<string> endTime_ {};
          shared_ptr<string> startTime_ {};
          shared_ptr<string> timeZone_ {};
        };

        class InternetSlb : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InternetSlb& obj) { 
            DARABONBA_PTR_TO_JSON(GatewaySlbMode, gatewaySlbMode_);
            DARABONBA_PTR_TO_JSON(GatewaySlbStatus, gatewaySlbStatus_);
            DARABONBA_PTR_TO_JSON(InternetNetworkFlow, internetNetworkFlow_);
            DARABONBA_PTR_TO_JSON(SlbId, slbId_);
            DARABONBA_PTR_TO_JSON(SlbIp, slbIp_);
            DARABONBA_PTR_TO_JSON(SlbPort, slbPort_);
            DARABONBA_PTR_TO_JSON(SlbSpec, slbSpec_);
            DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, InternetSlb& obj) { 
            DARABONBA_PTR_FROM_JSON(GatewaySlbMode, gatewaySlbMode_);
            DARABONBA_PTR_FROM_JSON(GatewaySlbStatus, gatewaySlbStatus_);
            DARABONBA_PTR_FROM_JSON(InternetNetworkFlow, internetNetworkFlow_);
            DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
            DARABONBA_PTR_FROM_JSON(SlbIp, slbIp_);
            DARABONBA_PTR_FROM_JSON(SlbPort, slbPort_);
            DARABONBA_PTR_FROM_JSON(SlbSpec, slbSpec_);
            DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          InternetSlb() = default ;
          InternetSlb(const InternetSlb &) = default ;
          InternetSlb(InternetSlb &&) = default ;
          InternetSlb(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InternetSlb() = default ;
          InternetSlb& operator=(const InternetSlb &) = default ;
          InternetSlb& operator=(InternetSlb &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->gatewaySlbMode_ == nullptr
        && this->gatewaySlbStatus_ == nullptr && this->internetNetworkFlow_ == nullptr && this->slbId_ == nullptr && this->slbIp_ == nullptr && this->slbPort_ == nullptr
        && this->slbSpec_ == nullptr && this->statusDesc_ == nullptr && this->type_ == nullptr; };
          // gatewaySlbMode Field Functions 
          bool hasGatewaySlbMode() const { return this->gatewaySlbMode_ != nullptr;};
          void deleteGatewaySlbMode() { this->gatewaySlbMode_ = nullptr;};
          inline string getGatewaySlbMode() const { DARABONBA_PTR_GET_DEFAULT(gatewaySlbMode_, "") };
          inline InternetSlb& setGatewaySlbMode(string gatewaySlbMode) { DARABONBA_PTR_SET_VALUE(gatewaySlbMode_, gatewaySlbMode) };


          // gatewaySlbStatus Field Functions 
          bool hasGatewaySlbStatus() const { return this->gatewaySlbStatus_ != nullptr;};
          void deleteGatewaySlbStatus() { this->gatewaySlbStatus_ = nullptr;};
          inline string getGatewaySlbStatus() const { DARABONBA_PTR_GET_DEFAULT(gatewaySlbStatus_, "") };
          inline InternetSlb& setGatewaySlbStatus(string gatewaySlbStatus) { DARABONBA_PTR_SET_VALUE(gatewaySlbStatus_, gatewaySlbStatus) };


          // internetNetworkFlow Field Functions 
          bool hasInternetNetworkFlow() const { return this->internetNetworkFlow_ != nullptr;};
          void deleteInternetNetworkFlow() { this->internetNetworkFlow_ = nullptr;};
          inline string getInternetNetworkFlow() const { DARABONBA_PTR_GET_DEFAULT(internetNetworkFlow_, "") };
          inline InternetSlb& setInternetNetworkFlow(string internetNetworkFlow) { DARABONBA_PTR_SET_VALUE(internetNetworkFlow_, internetNetworkFlow) };


          // slbId Field Functions 
          bool hasSlbId() const { return this->slbId_ != nullptr;};
          void deleteSlbId() { this->slbId_ = nullptr;};
          inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
          inline InternetSlb& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


          // slbIp Field Functions 
          bool hasSlbIp() const { return this->slbIp_ != nullptr;};
          void deleteSlbIp() { this->slbIp_ = nullptr;};
          inline string getSlbIp() const { DARABONBA_PTR_GET_DEFAULT(slbIp_, "") };
          inline InternetSlb& setSlbIp(string slbIp) { DARABONBA_PTR_SET_VALUE(slbIp_, slbIp) };


          // slbPort Field Functions 
          bool hasSlbPort() const { return this->slbPort_ != nullptr;};
          void deleteSlbPort() { this->slbPort_ = nullptr;};
          inline string getSlbPort() const { DARABONBA_PTR_GET_DEFAULT(slbPort_, "") };
          inline InternetSlb& setSlbPort(string slbPort) { DARABONBA_PTR_SET_VALUE(slbPort_, slbPort) };


          // slbSpec Field Functions 
          bool hasSlbSpec() const { return this->slbSpec_ != nullptr;};
          void deleteSlbSpec() { this->slbSpec_ = nullptr;};
          inline string getSlbSpec() const { DARABONBA_PTR_GET_DEFAULT(slbSpec_, "") };
          inline InternetSlb& setSlbSpec(string slbSpec) { DARABONBA_PTR_SET_VALUE(slbSpec_, slbSpec) };


          // statusDesc Field Functions 
          bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
          void deleteStatusDesc() { this->statusDesc_ = nullptr;};
          inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
          inline InternetSlb& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline InternetSlb& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The mode of the SLB instance.
          shared_ptr<string> gatewaySlbMode_ {};
          // The state of the SLB instance.
          shared_ptr<string> gatewaySlbStatus_ {};
          // The traffic of the gateway.
          shared_ptr<string> internetNetworkFlow_ {};
          // The ID of the SLB instance.
          shared_ptr<string> slbId_ {};
          // The IP address of the SLB instance.
          shared_ptr<string> slbIp_ {};
          // The port number of the SLB instance.
          shared_ptr<string> slbPort_ {};
          // The specifications of the SLB instance.
          shared_ptr<string> slbSpec_ {};
          // The description of the state.
          shared_ptr<string> statusDesc_ {};
          // The type of the SLB instance.
          shared_ptr<string> type_ {};
        };

        class InitConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InitConfig& obj) { 
            DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
            DARABONBA_PTR_TO_JSON(SupportWaf, supportWaf_);
          };
          friend void from_json(const Darabonba::Json& j, InitConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
            DARABONBA_PTR_FROM_JSON(SupportWaf, supportWaf_);
          };
          InitConfig() = default ;
          InitConfig(const InitConfig &) = default ;
          InitConfig(InitConfig &&) = default ;
          InitConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InitConfig() = default ;
          InitConfig& operator=(const InitConfig &) = default ;
          InitConfig& operator=(InitConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enableWaf_ == nullptr
        && this->supportWaf_ == nullptr; };
          // enableWaf Field Functions 
          bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
          void deleteEnableWaf() { this->enableWaf_ = nullptr;};
          inline bool getEnableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
          inline InitConfig& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


          // supportWaf Field Functions 
          bool hasSupportWaf() const { return this->supportWaf_ != nullptr;};
          void deleteSupportWaf() { this->supportWaf_ = nullptr;};
          inline bool getSupportWaf() const { DARABONBA_PTR_GET_DEFAULT(supportWaf_, false) };
          inline InitConfig& setSupportWaf(bool supportWaf) { DARABONBA_PTR_SET_VALUE(supportWaf_, supportWaf) };


        protected:
          // Indicates whether Web Application Firewall (WAF) is enabled.
          shared_ptr<bool> enableWaf_ {};
          // Indicates whether WAF is supported.
          shared_ptr<bool> supportWaf_ {};
        };

        class GatewayEntry : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GatewayEntry& obj) { 
            DARABONBA_PTR_TO_JSON(EntryDomain, entryDomain_);
            DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
            DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
            DARABONBA_PTR_TO_JSON(IpList, ipList_);
            DARABONBA_PTR_TO_JSON(Ipv6List, ipv6List_);
            DARABONBA_PTR_TO_JSON(NetType, netType_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, GatewayEntry& obj) { 
            DARABONBA_PTR_FROM_JSON(EntryDomain, entryDomain_);
            DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
            DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
            DARABONBA_PTR_FROM_JSON(IpList, ipList_);
            DARABONBA_PTR_FROM_JSON(Ipv6List, ipv6List_);
            DARABONBA_PTR_FROM_JSON(NetType, netType_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          GatewayEntry() = default ;
          GatewayEntry(const GatewayEntry &) = default ;
          GatewayEntry(GatewayEntry &&) = default ;
          GatewayEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GatewayEntry() = default ;
          GatewayEntry& operator=(const GatewayEntry &) = default ;
          GatewayEntry& operator=(GatewayEntry &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->entryDomain_ == nullptr
        && this->httpPorts_ == nullptr && this->httpsPorts_ == nullptr && this->ipList_ == nullptr && this->ipv6List_ == nullptr && this->netType_ == nullptr
        && this->status_ == nullptr; };
          // entryDomain Field Functions 
          bool hasEntryDomain() const { return this->entryDomain_ != nullptr;};
          void deleteEntryDomain() { this->entryDomain_ = nullptr;};
          inline string getEntryDomain() const { DARABONBA_PTR_GET_DEFAULT(entryDomain_, "") };
          inline GatewayEntry& setEntryDomain(string entryDomain) { DARABONBA_PTR_SET_VALUE(entryDomain_, entryDomain) };


          // httpPorts Field Functions 
          bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
          void deleteHttpPorts() { this->httpPorts_ = nullptr;};
          inline const vector<int32_t> & getHttpPorts() const { DARABONBA_PTR_GET_CONST(httpPorts_, vector<int32_t>) };
          inline vector<int32_t> getHttpPorts() { DARABONBA_PTR_GET(httpPorts_, vector<int32_t>) };
          inline GatewayEntry& setHttpPorts(const vector<int32_t> & httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };
          inline GatewayEntry& setHttpPorts(vector<int32_t> && httpPorts) { DARABONBA_PTR_SET_RVALUE(httpPorts_, httpPorts) };


          // httpsPorts Field Functions 
          bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
          void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
          inline const vector<int32_t> & getHttpsPorts() const { DARABONBA_PTR_GET_CONST(httpsPorts_, vector<int32_t>) };
          inline vector<int32_t> getHttpsPorts() { DARABONBA_PTR_GET(httpsPorts_, vector<int32_t>) };
          inline GatewayEntry& setHttpsPorts(const vector<int32_t> & httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };
          inline GatewayEntry& setHttpsPorts(vector<int32_t> && httpsPorts) { DARABONBA_PTR_SET_RVALUE(httpsPorts_, httpsPorts) };


          // ipList Field Functions 
          bool hasIpList() const { return this->ipList_ != nullptr;};
          void deleteIpList() { this->ipList_ = nullptr;};
          inline const vector<string> & getIpList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<string>) };
          inline vector<string> getIpList() { DARABONBA_PTR_GET(ipList_, vector<string>) };
          inline GatewayEntry& setIpList(const vector<string> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
          inline GatewayEntry& setIpList(vector<string> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


          // ipv6List Field Functions 
          bool hasIpv6List() const { return this->ipv6List_ != nullptr;};
          void deleteIpv6List() { this->ipv6List_ = nullptr;};
          inline const vector<string> & getIpv6List() const { DARABONBA_PTR_GET_CONST(ipv6List_, vector<string>) };
          inline vector<string> getIpv6List() { DARABONBA_PTR_GET(ipv6List_, vector<string>) };
          inline GatewayEntry& setIpv6List(const vector<string> & ipv6List) { DARABONBA_PTR_SET_VALUE(ipv6List_, ipv6List) };
          inline GatewayEntry& setIpv6List(vector<string> && ipv6List) { DARABONBA_PTR_SET_RVALUE(ipv6List_, ipv6List) };


          // netType Field Functions 
          bool hasNetType() const { return this->netType_ != nullptr;};
          void deleteNetType() { this->netType_ = nullptr;};
          inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
          inline GatewayEntry& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline GatewayEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<string> entryDomain_ {};
          shared_ptr<vector<int32_t>> httpPorts_ {};
          shared_ptr<vector<int32_t>> httpsPorts_ {};
          shared_ptr<vector<string>> ipList_ {};
          shared_ptr<vector<string>> ipv6List_ {};
          shared_ptr<string> netType_ {};
          shared_ptr<string> status_ {};
        };

        class ElasticPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ElasticPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(Elastic, elastic_);
            DARABONBA_PTR_TO_JSON(ElasticType, elasticType_);
            DARABONBA_PTR_TO_JSON(EnableScaleTimePolicyList, enableScaleTimePolicyList_);
            DARABONBA_PTR_TO_JSON(LoadWarningThreshold, loadWarningThreshold_);
            DARABONBA_PTR_TO_JSON(MaxReplica, maxReplica_);
            DARABONBA_PTR_TO_JSON(TimePolicyList, timePolicyList_);
          };
          friend void from_json(const Darabonba::Json& j, ElasticPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(Elastic, elastic_);
            DARABONBA_PTR_FROM_JSON(ElasticType, elasticType_);
            DARABONBA_PTR_FROM_JSON(EnableScaleTimePolicyList, enableScaleTimePolicyList_);
            DARABONBA_PTR_FROM_JSON(LoadWarningThreshold, loadWarningThreshold_);
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
            // The expected number of replicas for auto scale-out.
            shared_ptr<int32_t> desiredReplica_ {};
            // The end time of auto scale-out.
            shared_ptr<string> endTime_ {};
            // The start time of auto scale-out.
            shared_ptr<string> startTime_ {};
          };

          class EnableScaleTimePolicyList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EnableScaleTimePolicyList& obj) { 
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            };
            friend void from_json(const Darabonba::Json& j, EnableScaleTimePolicyList& obj) { 
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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

          virtual bool empty() const override { return this->elastic_ == nullptr
        && this->elasticType_ == nullptr && this->enableScaleTimePolicyList_ == nullptr && this->loadWarningThreshold_ == nullptr && this->maxReplica_ == nullptr && this->timePolicyList_ == nullptr; };
          // elastic Field Functions 
          bool hasElastic() const { return this->elastic_ != nullptr;};
          void deleteElastic() { this->elastic_ = nullptr;};
          inline bool getElastic() const { DARABONBA_PTR_GET_DEFAULT(elastic_, false) };
          inline ElasticPolicy& setElastic(bool elastic) { DARABONBA_PTR_SET_VALUE(elastic_, elastic) };


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
          // Indicates whether auto scale-out is enabled.
          shared_ptr<bool> elastic_ {};
          // The type of auto scale-out. Valid value:
          // 
          // *   CronHPA: scale-out by time
          shared_ptr<string> elasticType_ {};
          shared_ptr<vector<ElasticPolicy::EnableScaleTimePolicyList>> enableScaleTimePolicyList_ {};
          shared_ptr<bool> loadWarningThreshold_ {};
          // The maximum number of instances that are automatically scaled out. This parameter is used for horizontal scale-out.
          shared_ptr<int32_t> maxReplica_ {};
          // The time policy list for auto scale-out.
          shared_ptr<vector<ElasticPolicy::TimePolicyList>> timePolicyList_ {};
        };

        virtual bool empty() const override { return this->ahasOn_ == nullptr
        && this->appVersion_ == nullptr && this->armsOn_ == nullptr && this->chargeType_ == nullptr && this->currentVersion_ == nullptr && this->elastic_ == nullptr
        && this->elasticInstanceId_ == nullptr && this->elasticPolicy_ == nullptr && this->elasticReplica_ == nullptr && this->elasticType_ == nullptr && this->endDate_ == nullptr
        && this->gatewayEntry_ == nullptr && this->gatewayType_ == nullptr && this->gatewayUniqueId_ == nullptr && this->gatewayVersion_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->initConfig_ == nullptr && this->instanceId_ == nullptr && this->internetSlb_ == nullptr
        && this->latestVersion_ == nullptr && this->maintenancePeriod_ == nullptr && this->mseTag_ == nullptr && this->mseVersion_ == nullptr && this->mustUpgrade_ == nullptr
        && this->name_ == nullptr && this->primaryUser_ == nullptr && this->region_ == nullptr && this->replica_ == nullptr && this->resourceGroupId_ == nullptr
        && this->rollBack_ == nullptr && this->slb_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr
        && this->supportWasm_ == nullptr && this->tag_ == nullptr && this->totalReplica_ == nullptr && this->upgrade_ == nullptr && this->versionLifecycle_ == nullptr
        && this->vpcId_ == nullptr && this->vswitch2_ == nullptr; };
        // ahasOn Field Functions 
        bool hasAhasOn() const { return this->ahasOn_ != nullptr;};
        void deleteAhasOn() { this->ahasOn_ = nullptr;};
        inline bool getAhasOn() const { DARABONBA_PTR_GET_DEFAULT(ahasOn_, false) };
        inline Result& setAhasOn(bool ahasOn) { DARABONBA_PTR_SET_VALUE(ahasOn_, ahasOn) };


        // appVersion Field Functions 
        bool hasAppVersion() const { return this->appVersion_ != nullptr;};
        void deleteAppVersion() { this->appVersion_ = nullptr;};
        inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
        inline Result& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


        // armsOn Field Functions 
        bool hasArmsOn() const { return this->armsOn_ != nullptr;};
        void deleteArmsOn() { this->armsOn_ = nullptr;};
        inline bool getArmsOn() const { DARABONBA_PTR_GET_DEFAULT(armsOn_, false) };
        inline Result& setArmsOn(bool armsOn) { DARABONBA_PTR_SET_VALUE(armsOn_, armsOn) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline Result& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // currentVersion Field Functions 
        bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
        void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
        inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
        inline Result& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


        // elastic Field Functions 
        bool hasElastic() const { return this->elastic_ != nullptr;};
        void deleteElastic() { this->elastic_ = nullptr;};
        inline bool getElastic() const { DARABONBA_PTR_GET_DEFAULT(elastic_, false) };
        inline Result& setElastic(bool elastic) { DARABONBA_PTR_SET_VALUE(elastic_, elastic) };


        // elasticInstanceId Field Functions 
        bool hasElasticInstanceId() const { return this->elasticInstanceId_ != nullptr;};
        void deleteElasticInstanceId() { this->elasticInstanceId_ = nullptr;};
        inline string getElasticInstanceId() const { DARABONBA_PTR_GET_DEFAULT(elasticInstanceId_, "") };
        inline Result& setElasticInstanceId(string elasticInstanceId) { DARABONBA_PTR_SET_VALUE(elasticInstanceId_, elasticInstanceId) };


        // elasticPolicy Field Functions 
        bool hasElasticPolicy() const { return this->elasticPolicy_ != nullptr;};
        void deleteElasticPolicy() { this->elasticPolicy_ = nullptr;};
        inline const Result::ElasticPolicy & getElasticPolicy() const { DARABONBA_PTR_GET_CONST(elasticPolicy_, Result::ElasticPolicy) };
        inline Result::ElasticPolicy getElasticPolicy() { DARABONBA_PTR_GET(elasticPolicy_, Result::ElasticPolicy) };
        inline Result& setElasticPolicy(const Result::ElasticPolicy & elasticPolicy) { DARABONBA_PTR_SET_VALUE(elasticPolicy_, elasticPolicy) };
        inline Result& setElasticPolicy(Result::ElasticPolicy && elasticPolicy) { DARABONBA_PTR_SET_RVALUE(elasticPolicy_, elasticPolicy) };


        // elasticReplica Field Functions 
        bool hasElasticReplica() const { return this->elasticReplica_ != nullptr;};
        void deleteElasticReplica() { this->elasticReplica_ = nullptr;};
        inline int32_t getElasticReplica() const { DARABONBA_PTR_GET_DEFAULT(elasticReplica_, 0) };
        inline Result& setElasticReplica(int32_t elasticReplica) { DARABONBA_PTR_SET_VALUE(elasticReplica_, elasticReplica) };


        // elasticType Field Functions 
        bool hasElasticType() const { return this->elasticType_ != nullptr;};
        void deleteElasticType() { this->elasticType_ = nullptr;};
        inline string getElasticType() const { DARABONBA_PTR_GET_DEFAULT(elasticType_, "") };
        inline Result& setElasticType(string elasticType) { DARABONBA_PTR_SET_VALUE(elasticType_, elasticType) };


        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
        inline Result& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // gatewayEntry Field Functions 
        bool hasGatewayEntry() const { return this->gatewayEntry_ != nullptr;};
        void deleteGatewayEntry() { this->gatewayEntry_ = nullptr;};
        inline const vector<Result::GatewayEntry> & getGatewayEntry() const { DARABONBA_PTR_GET_CONST(gatewayEntry_, vector<Result::GatewayEntry>) };
        inline vector<Result::GatewayEntry> getGatewayEntry() { DARABONBA_PTR_GET(gatewayEntry_, vector<Result::GatewayEntry>) };
        inline Result& setGatewayEntry(const vector<Result::GatewayEntry> & gatewayEntry) { DARABONBA_PTR_SET_VALUE(gatewayEntry_, gatewayEntry) };
        inline Result& setGatewayEntry(vector<Result::GatewayEntry> && gatewayEntry) { DARABONBA_PTR_SET_RVALUE(gatewayEntry_, gatewayEntry) };


        // gatewayType Field Functions 
        bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
        void deleteGatewayType() { this->gatewayType_ = nullptr;};
        inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
        inline Result& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline Result& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // gatewayVersion Field Functions 
        bool hasGatewayVersion() const { return this->gatewayVersion_ != nullptr;};
        void deleteGatewayVersion() { this->gatewayVersion_ = nullptr;};
        inline string getGatewayVersion() const { DARABONBA_PTR_GET_DEFAULT(gatewayVersion_, "") };
        inline Result& setGatewayVersion(string gatewayVersion) { DARABONBA_PTR_SET_VALUE(gatewayVersion_, gatewayVersion) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Result& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // initConfig Field Functions 
        bool hasInitConfig() const { return this->initConfig_ != nullptr;};
        void deleteInitConfig() { this->initConfig_ = nullptr;};
        inline const Result::InitConfig & getInitConfig() const { DARABONBA_PTR_GET_CONST(initConfig_, Result::InitConfig) };
        inline Result::InitConfig getInitConfig() { DARABONBA_PTR_GET(initConfig_, Result::InitConfig) };
        inline Result& setInitConfig(const Result::InitConfig & initConfig) { DARABONBA_PTR_SET_VALUE(initConfig_, initConfig) };
        inline Result& setInitConfig(Result::InitConfig && initConfig) { DARABONBA_PTR_SET_RVALUE(initConfig_, initConfig) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // internetSlb Field Functions 
        bool hasInternetSlb() const { return this->internetSlb_ != nullptr;};
        void deleteInternetSlb() { this->internetSlb_ = nullptr;};
        inline const vector<Result::InternetSlb> & getInternetSlb() const { DARABONBA_PTR_GET_CONST(internetSlb_, vector<Result::InternetSlb>) };
        inline vector<Result::InternetSlb> getInternetSlb() { DARABONBA_PTR_GET(internetSlb_, vector<Result::InternetSlb>) };
        inline Result& setInternetSlb(const vector<Result::InternetSlb> & internetSlb) { DARABONBA_PTR_SET_VALUE(internetSlb_, internetSlb) };
        inline Result& setInternetSlb(vector<Result::InternetSlb> && internetSlb) { DARABONBA_PTR_SET_RVALUE(internetSlb_, internetSlb) };


        // latestVersion Field Functions 
        bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
        void deleteLatestVersion() { this->latestVersion_ = nullptr;};
        inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
        inline Result& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


        // maintenancePeriod Field Functions 
        bool hasMaintenancePeriod() const { return this->maintenancePeriod_ != nullptr;};
        void deleteMaintenancePeriod() { this->maintenancePeriod_ = nullptr;};
        inline const Result::MaintenancePeriod & getMaintenancePeriod() const { DARABONBA_PTR_GET_CONST(maintenancePeriod_, Result::MaintenancePeriod) };
        inline Result::MaintenancePeriod getMaintenancePeriod() { DARABONBA_PTR_GET(maintenancePeriod_, Result::MaintenancePeriod) };
        inline Result& setMaintenancePeriod(const Result::MaintenancePeriod & maintenancePeriod) { DARABONBA_PTR_SET_VALUE(maintenancePeriod_, maintenancePeriod) };
        inline Result& setMaintenancePeriod(Result::MaintenancePeriod && maintenancePeriod) { DARABONBA_PTR_SET_RVALUE(maintenancePeriod_, maintenancePeriod) };


        // mseTag Field Functions 
        bool hasMseTag() const { return this->mseTag_ != nullptr;};
        void deleteMseTag() { this->mseTag_ = nullptr;};
        inline string getMseTag() const { DARABONBA_PTR_GET_DEFAULT(mseTag_, "") };
        inline Result& setMseTag(string mseTag) { DARABONBA_PTR_SET_VALUE(mseTag_, mseTag) };


        // mseVersion Field Functions 
        bool hasMseVersion() const { return this->mseVersion_ != nullptr;};
        void deleteMseVersion() { this->mseVersion_ = nullptr;};
        inline string getMseVersion() const { DARABONBA_PTR_GET_DEFAULT(mseVersion_, "") };
        inline Result& setMseVersion(string mseVersion) { DARABONBA_PTR_SET_VALUE(mseVersion_, mseVersion) };


        // mustUpgrade Field Functions 
        bool hasMustUpgrade() const { return this->mustUpgrade_ != nullptr;};
        void deleteMustUpgrade() { this->mustUpgrade_ = nullptr;};
        inline bool getMustUpgrade() const { DARABONBA_PTR_GET_DEFAULT(mustUpgrade_, false) };
        inline Result& setMustUpgrade(bool mustUpgrade) { DARABONBA_PTR_SET_VALUE(mustUpgrade_, mustUpgrade) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // primaryUser Field Functions 
        bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
        void deletePrimaryUser() { this->primaryUser_ = nullptr;};
        inline string getPrimaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
        inline Result& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Result& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // replica Field Functions 
        bool hasReplica() const { return this->replica_ != nullptr;};
        void deleteReplica() { this->replica_ = nullptr;};
        inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
        inline Result& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Result& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // rollBack Field Functions 
        bool hasRollBack() const { return this->rollBack_ != nullptr;};
        void deleteRollBack() { this->rollBack_ = nullptr;};
        inline bool getRollBack() const { DARABONBA_PTR_GET_DEFAULT(rollBack_, false) };
        inline Result& setRollBack(bool rollBack) { DARABONBA_PTR_SET_VALUE(rollBack_, rollBack) };


        // slb Field Functions 
        bool hasSlb() const { return this->slb_ != nullptr;};
        void deleteSlb() { this->slb_ = nullptr;};
        inline const vector<Result::Slb> & getSlb() const { DARABONBA_PTR_GET_CONST(slb_, vector<Result::Slb>) };
        inline vector<Result::Slb> getSlb() { DARABONBA_PTR_GET(slb_, vector<Result::Slb>) };
        inline Result& setSlb(const vector<Result::Slb> & slb) { DARABONBA_PTR_SET_VALUE(slb_, slb) };
        inline Result& setSlb(vector<Result::Slb> && slb) { DARABONBA_PTR_SET_RVALUE(slb_, slb) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline Result& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusDesc Field Functions 
        bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
        void deleteStatusDesc() { this->statusDesc_ = nullptr;};
        inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
        inline Result& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


        // supportWasm Field Functions 
        bool hasSupportWasm() const { return this->supportWasm_ != nullptr;};
        void deleteSupportWasm() { this->supportWasm_ = nullptr;};
        inline bool getSupportWasm() const { DARABONBA_PTR_GET_DEFAULT(supportWasm_, false) };
        inline Result& setSupportWasm(bool supportWasm) { DARABONBA_PTR_SET_VALUE(supportWasm_, supportWasm) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline Result& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // totalReplica Field Functions 
        bool hasTotalReplica() const { return this->totalReplica_ != nullptr;};
        void deleteTotalReplica() { this->totalReplica_ = nullptr;};
        inline int32_t getTotalReplica() const { DARABONBA_PTR_GET_DEFAULT(totalReplica_, 0) };
        inline Result& setTotalReplica(int32_t totalReplica) { DARABONBA_PTR_SET_VALUE(totalReplica_, totalReplica) };


        // upgrade Field Functions 
        bool hasUpgrade() const { return this->upgrade_ != nullptr;};
        void deleteUpgrade() { this->upgrade_ = nullptr;};
        inline bool getUpgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
        inline Result& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


        // versionLifecycle Field Functions 
        bool hasVersionLifecycle() const { return this->versionLifecycle_ != nullptr;};
        void deleteVersionLifecycle() { this->versionLifecycle_ = nullptr;};
        inline string getVersionLifecycle() const { DARABONBA_PTR_GET_DEFAULT(versionLifecycle_, "") };
        inline Result& setVersionLifecycle(string versionLifecycle) { DARABONBA_PTR_SET_VALUE(versionLifecycle_, versionLifecycle) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Result& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vswitch2 Field Functions 
        bool hasVswitch2() const { return this->vswitch2_ != nullptr;};
        void deleteVswitch2() { this->vswitch2_ = nullptr;};
        inline string getVswitch2() const { DARABONBA_PTR_GET_DEFAULT(vswitch2_, "") };
        inline Result& setVswitch2(string vswitch2) { DARABONBA_PTR_SET_VALUE(vswitch2_, vswitch2) };


      protected:
        // Indicates whether Application High Availability Service (AHAS) is activated.
        shared_ptr<bool> ahasOn_ {};
        // The version of the application.
        shared_ptr<string> appVersion_ {};
        // Indicates whether Application Real-Time Monitoring Service (ARMS) is activated.
        shared_ptr<bool> armsOn_ {};
        // The billing method.
        shared_ptr<string> chargeType_ {};
        // The current version of the gateway.
        shared_ptr<string> currentVersion_ {};
        // Indicates whether auto scale-out is enabled.
        shared_ptr<bool> elastic_ {};
        // The ID of the elastic gateway. This parameter is returned if auto scale-out is used.
        shared_ptr<string> elasticInstanceId_ {};
        // The auto scale-out policy.
        shared_ptr<Result::ElasticPolicy> elasticPolicy_ {};
        // The number of replicas that are automatically scaled out.
        shared_ptr<int32_t> elasticReplica_ {};
        // The type of auto scale-out. Valid value:
        // 
        // *   CronHPA: scale-out by time
        shared_ptr<string> elasticType_ {};
        // The time when the instance expires.
        shared_ptr<string> endDate_ {};
        shared_ptr<vector<Result::GatewayEntry>> gatewayEntry_ {};
        // The gateway type.
        shared_ptr<string> gatewayType_ {};
        // The unique ID of the gateway.
        shared_ptr<string> gatewayUniqueId_ {};
        // The version of the gateway.
        shared_ptr<string> gatewayVersion_ {};
        // The time when the gateway was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the gateway was modified.
        shared_ptr<string> gmtModified_ {};
        // The gateway ID.
        shared_ptr<int64_t> id_ {};
        // The configurations.
        shared_ptr<Result::InitConfig> initConfig_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The details of the Internet-facing SLB instances.
        shared_ptr<vector<Result::InternetSlb>> internetSlb_ {};
        // The latest version of the gateway.
        shared_ptr<string> latestVersion_ {};
        shared_ptr<Result::MaintenancePeriod> maintenancePeriod_ {};
        // The resource tag.
        shared_ptr<string> mseTag_ {};
        shared_ptr<string> mseVersion_ {};
        // Indicates whether the instance was forcefully upgraded.
        shared_ptr<bool> mustUpgrade_ {};
        // The gateway name.
        shared_ptr<string> name_ {};
        // The user information.
        shared_ptr<string> primaryUser_ {};
        // The region ID.
        shared_ptr<string> region_ {};
        // The number of replicas.
        shared_ptr<int32_t> replica_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // Indicates whether rollbacks are allowed.
        shared_ptr<bool> rollBack_ {};
        // The details of Server Load Balancer (SLB) instances.
        shared_ptr<vector<Result::Slb>> slb_ {};
        // The specifications of the gateway.
        shared_ptr<string> spec_ {};
        // The gateway state. Valid values:
        // 
        // *   0: The gateway is being created.
        // *   1: The gateway failed to be created.
        // *   2: The gateway is running.
        // *   3: The gateway is being changed.
        // *   4: The gateway is scaling in.
        // *   6: The gateway is scaling out.
        // *   8: The gateway is being deleted.
        // *   9: The gateway is suspended and is to be released.
        // *   10: The gateway is restarting.
        // *   11: The gateway is being rebuilt.
        // *   12: The gateway is being upgraded.
        // *   13: The gateway failed to be upgraded.
        shared_ptr<int32_t> status_ {};
        // The description of the gateway state.
        shared_ptr<string> statusDesc_ {};
        // Indicates whether WebAssembly (Wasm) is supported.
        shared_ptr<bool> supportWasm_ {};
        // The tag.
        shared_ptr<string> tag_ {};
        // The total number of replicas, including the number of replicas that are automatically scaled out.
        shared_ptr<int32_t> totalReplica_ {};
        // Indicates whether the instance was upgraded.
        shared_ptr<bool> upgrade_ {};
        shared_ptr<string> versionLifecycle_ {};
        // The ID of the virtual private cloud (VPC) to which the gateway belongs.
        shared_ptr<string> vpcId_ {};
        // The ID of the secondary vSwitch.
        shared_ptr<string> vswitch2_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Data& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The data returned.
      shared_ptr<vector<Data::Result>> result_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListGatewayResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListGatewayResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListGatewayResponseBody::Data) };
    inline ListGatewayResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListGatewayResponseBody::Data) };
    inline ListGatewayResponseBody& setData(const ListGatewayResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayResponseBody& setData(ListGatewayResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListGatewayResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewayResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGatewayResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The return value.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<ListGatewayResponseBody::Data> data_ {};
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
