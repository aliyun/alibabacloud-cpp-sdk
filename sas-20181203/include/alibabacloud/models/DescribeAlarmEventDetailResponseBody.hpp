// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAlarmEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAlarmEventDetailResponseBody() = default ;
    DescribeAlarmEventDetailResponseBody(const DescribeAlarmEventDetailResponseBody &) = default ;
    DescribeAlarmEventDetailResponseBody(DescribeAlarmEventDetailResponseBody &&) = default ;
    DescribeAlarmEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmEventDetailResponseBody() = default ;
    DescribeAlarmEventDetailResponseBody& operator=(const DescribeAlarmEventDetailResponseBody &) = default ;
    DescribeAlarmEventDetailResponseBody& operator=(DescribeAlarmEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmEventAliasName, alarmEventAliasName_);
        DARABONBA_PTR_TO_JSON(AlarmEventDesc, alarmEventDesc_);
        DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(CanBeDealOnLine, canBeDealOnLine_);
        DARABONBA_PTR_TO_JSON(CanCancelFault, canCancelFault_);
        DARABONBA_PTR_TO_JSON(CauseDetails, causeDetails_);
        DARABONBA_PTR_TO_JSON(ContainHwMode, containHwMode_);
        DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
        DARABONBA_PTR_TO_JSON(ContainerImageId, containerImageId_);
        DARABONBA_PTR_TO_JSON(ContainerImageName, containerImageName_);
        DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(K8sClusterId, k8sClusterId_);
        DARABONBA_PTR_TO_JSON(K8sClusterName, k8sClusterName_);
        DARABONBA_PTR_TO_JSON(K8sNamespace, k8sNamespace_);
        DARABONBA_PTR_TO_JSON(K8sNodeId, k8sNodeId_);
        DARABONBA_PTR_TO_JSON(K8sNodeName, k8sNodeName_);
        DARABONBA_PTR_TO_JSON(K8sPodName, k8sPodName_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Solution, solution_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmEventAliasName, alarmEventAliasName_);
        DARABONBA_PTR_FROM_JSON(AlarmEventDesc, alarmEventDesc_);
        DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(CanBeDealOnLine, canBeDealOnLine_);
        DARABONBA_PTR_FROM_JSON(CanCancelFault, canCancelFault_);
        DARABONBA_PTR_FROM_JSON(CauseDetails, causeDetails_);
        DARABONBA_PTR_FROM_JSON(ContainHwMode, containHwMode_);
        DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
        DARABONBA_PTR_FROM_JSON(ContainerImageId, containerImageId_);
        DARABONBA_PTR_FROM_JSON(ContainerImageName, containerImageName_);
        DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(K8sClusterId, k8sClusterId_);
        DARABONBA_PTR_FROM_JSON(K8sClusterName, k8sClusterName_);
        DARABONBA_PTR_FROM_JSON(K8sNamespace, k8sNamespace_);
        DARABONBA_PTR_FROM_JSON(K8sNodeId, k8sNodeId_);
        DARABONBA_PTR_FROM_JSON(K8sNodeName, k8sNodeName_);
        DARABONBA_PTR_FROM_JSON(K8sPodName, k8sPodName_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Solution, solution_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
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
      class CauseDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CauseDetails& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, CauseDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        CauseDetails() = default ;
        CauseDetails(const CauseDetails &) = default ;
        CauseDetails(CauseDetails &&) = default ;
        CauseDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CauseDetails() = default ;
        CauseDetails& operator=(const CauseDetails &) = default ;
        CauseDetails& operator=(CauseDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Value : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Value& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Value& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Value() = default ;
          Value(const Value &) = default ;
          Value(Value &&) = default ;
          Value(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Value() = default ;
          Value& operator=(const Value &) = default ;
          Value& operator=(Value &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Value& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Value& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Value& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the field that displays the tracing information.
          shared_ptr<string> name_ {};
          // The type of the field that displays the tracing information. Valid values:
          // 
          // *   **text**
          // *   **html**
          shared_ptr<string> type_ {};
          // The value of the field that displays the tracing information.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline CauseDetails& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline const vector<CauseDetails::Value> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<CauseDetails::Value>) };
        inline vector<CauseDetails::Value> getValue() { DARABONBA_PTR_GET(value_, vector<CauseDetails::Value>) };
        inline CauseDetails& setValue(const vector<CauseDetails::Value> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
        inline CauseDetails& setValue(vector<CauseDetails::Value> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


      protected:
        // The key that is used to trace the alert event.
        shared_ptr<string> key_ {};
        // The value that is used to trace the alert event.
        shared_ptr<vector<CauseDetails::Value>> value_ {};
      };

      virtual bool empty() const override { return this->alarmEventAliasName_ == nullptr
        && this->alarmEventDesc_ == nullptr && this->alarmUniqueInfo_ == nullptr && this->appName_ == nullptr && this->canBeDealOnLine_ == nullptr && this->canCancelFault_ == nullptr
        && this->causeDetails_ == nullptr && this->containHwMode_ == nullptr && this->containerId_ == nullptr && this->containerImageId_ == nullptr && this->containerImageName_ == nullptr
        && this->dataSource_ == nullptr && this->endTime_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr
        && this->k8sClusterId_ == nullptr && this->k8sClusterName_ == nullptr && this->k8sNamespace_ == nullptr && this->k8sNodeId_ == nullptr && this->k8sNodeName_ == nullptr
        && this->k8sPodName_ == nullptr && this->level_ == nullptr && this->solution_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr
        && this->uuid_ == nullptr; };
      // alarmEventAliasName Field Functions 
      bool hasAlarmEventAliasName() const { return this->alarmEventAliasName_ != nullptr;};
      void deleteAlarmEventAliasName() { this->alarmEventAliasName_ = nullptr;};
      inline string getAlarmEventAliasName() const { DARABONBA_PTR_GET_DEFAULT(alarmEventAliasName_, "") };
      inline Data& setAlarmEventAliasName(string alarmEventAliasName) { DARABONBA_PTR_SET_VALUE(alarmEventAliasName_, alarmEventAliasName) };


      // alarmEventDesc Field Functions 
      bool hasAlarmEventDesc() const { return this->alarmEventDesc_ != nullptr;};
      void deleteAlarmEventDesc() { this->alarmEventDesc_ = nullptr;};
      inline string getAlarmEventDesc() const { DARABONBA_PTR_GET_DEFAULT(alarmEventDesc_, "") };
      inline Data& setAlarmEventDesc(string alarmEventDesc) { DARABONBA_PTR_SET_VALUE(alarmEventDesc_, alarmEventDesc) };


      // alarmUniqueInfo Field Functions 
      bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
      void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
      inline string getAlarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
      inline Data& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // canBeDealOnLine Field Functions 
      bool hasCanBeDealOnLine() const { return this->canBeDealOnLine_ != nullptr;};
      void deleteCanBeDealOnLine() { this->canBeDealOnLine_ = nullptr;};
      inline bool getCanBeDealOnLine() const { DARABONBA_PTR_GET_DEFAULT(canBeDealOnLine_, false) };
      inline Data& setCanBeDealOnLine(bool canBeDealOnLine) { DARABONBA_PTR_SET_VALUE(canBeDealOnLine_, canBeDealOnLine) };


      // canCancelFault Field Functions 
      bool hasCanCancelFault() const { return this->canCancelFault_ != nullptr;};
      void deleteCanCancelFault() { this->canCancelFault_ = nullptr;};
      inline bool getCanCancelFault() const { DARABONBA_PTR_GET_DEFAULT(canCancelFault_, false) };
      inline Data& setCanCancelFault(bool canCancelFault) { DARABONBA_PTR_SET_VALUE(canCancelFault_, canCancelFault) };


      // causeDetails Field Functions 
      bool hasCauseDetails() const { return this->causeDetails_ != nullptr;};
      void deleteCauseDetails() { this->causeDetails_ = nullptr;};
      inline const vector<Data::CauseDetails> & getCauseDetails() const { DARABONBA_PTR_GET_CONST(causeDetails_, vector<Data::CauseDetails>) };
      inline vector<Data::CauseDetails> getCauseDetails() { DARABONBA_PTR_GET(causeDetails_, vector<Data::CauseDetails>) };
      inline Data& setCauseDetails(const vector<Data::CauseDetails> & causeDetails) { DARABONBA_PTR_SET_VALUE(causeDetails_, causeDetails) };
      inline Data& setCauseDetails(vector<Data::CauseDetails> && causeDetails) { DARABONBA_PTR_SET_RVALUE(causeDetails_, causeDetails) };


      // containHwMode Field Functions 
      bool hasContainHwMode() const { return this->containHwMode_ != nullptr;};
      void deleteContainHwMode() { this->containHwMode_ = nullptr;};
      inline bool getContainHwMode() const { DARABONBA_PTR_GET_DEFAULT(containHwMode_, false) };
      inline Data& setContainHwMode(bool containHwMode) { DARABONBA_PTR_SET_VALUE(containHwMode_, containHwMode) };


      // containerId Field Functions 
      bool hasContainerId() const { return this->containerId_ != nullptr;};
      void deleteContainerId() { this->containerId_ = nullptr;};
      inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
      inline Data& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


      // containerImageId Field Functions 
      bool hasContainerImageId() const { return this->containerImageId_ != nullptr;};
      void deleteContainerImageId() { this->containerImageId_ = nullptr;};
      inline string getContainerImageId() const { DARABONBA_PTR_GET_DEFAULT(containerImageId_, "") };
      inline Data& setContainerImageId(string containerImageId) { DARABONBA_PTR_SET_VALUE(containerImageId_, containerImageId) };


      // containerImageName Field Functions 
      bool hasContainerImageName() const { return this->containerImageName_ != nullptr;};
      void deleteContainerImageName() { this->containerImageName_ = nullptr;};
      inline string getContainerImageName() const { DARABONBA_PTR_GET_DEFAULT(containerImageName_, "") };
      inline Data& setContainerImageName(string containerImageName) { DARABONBA_PTR_SET_VALUE(containerImageName_, containerImageName) };


      // dataSource Field Functions 
      bool hasDataSource() const { return this->dataSource_ != nullptr;};
      void deleteDataSource() { this->dataSource_ = nullptr;};
      inline string getDataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
      inline Data& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Data& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Data& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // k8sClusterId Field Functions 
      bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
      void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
      inline string getK8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
      inline Data& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


      // k8sClusterName Field Functions 
      bool hasK8sClusterName() const { return this->k8sClusterName_ != nullptr;};
      void deleteK8sClusterName() { this->k8sClusterName_ = nullptr;};
      inline string getK8sClusterName() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterName_, "") };
      inline Data& setK8sClusterName(string k8sClusterName) { DARABONBA_PTR_SET_VALUE(k8sClusterName_, k8sClusterName) };


      // k8sNamespace Field Functions 
      bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
      void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
      inline string getK8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
      inline Data& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


      // k8sNodeId Field Functions 
      bool hasK8sNodeId() const { return this->k8sNodeId_ != nullptr;};
      void deleteK8sNodeId() { this->k8sNodeId_ = nullptr;};
      inline string getK8sNodeId() const { DARABONBA_PTR_GET_DEFAULT(k8sNodeId_, "") };
      inline Data& setK8sNodeId(string k8sNodeId) { DARABONBA_PTR_SET_VALUE(k8sNodeId_, k8sNodeId) };


      // k8sNodeName Field Functions 
      bool hasK8sNodeName() const { return this->k8sNodeName_ != nullptr;};
      void deleteK8sNodeName() { this->k8sNodeName_ = nullptr;};
      inline string getK8sNodeName() const { DARABONBA_PTR_GET_DEFAULT(k8sNodeName_, "") };
      inline Data& setK8sNodeName(string k8sNodeName) { DARABONBA_PTR_SET_VALUE(k8sNodeName_, k8sNodeName) };


      // k8sPodName Field Functions 
      bool hasK8sPodName() const { return this->k8sPodName_ != nullptr;};
      void deleteK8sPodName() { this->k8sPodName_ = nullptr;};
      inline string getK8sPodName() const { DARABONBA_PTR_GET_DEFAULT(k8sPodName_, "") };
      inline Data& setK8sPodName(string k8sPodName) { DARABONBA_PTR_SET_VALUE(k8sPodName_, k8sPodName) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Data& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // solution Field Functions 
      bool hasSolution() const { return this->solution_ != nullptr;};
      void deleteSolution() { this->solution_ = nullptr;};
      inline string getSolution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
      inline Data& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The name of the alert event.
      shared_ptr<string> alarmEventAliasName_ {};
      // The description of the alert event.
      shared_ptr<string> alarmEventDesc_ {};
      // The unique identifier of the alert event.
      // 
      // > To query the details of an alert event, you must provide the unique identifier of the alert event. You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to obtain the identifier.
      shared_ptr<string> alarmUniqueInfo_ {};
      // The name of the container application.
      shared_ptr<string> appName_ {};
      // Indicates whether the online handling of the alert event is supported. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> canBeDealOnLine_ {};
      // Indicates whether you can cancel marking the alert event as a false positive. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> canCancelFault_ {};
      // An array consisting of the cause of the alert event, which can be used to trace the alert event.
      shared_ptr<vector<Data::CauseDetails>> causeDetails_ {};
      // Indicates whether the Safeguard Mode For Major Activities mode is enabled.
      shared_ptr<bool> containHwMode_ {};
      // The ID of the container application.
      shared_ptr<string> containerId_ {};
      // The ID of the image to which the container belongs.
      shared_ptr<string> containerImageId_ {};
      // The name of the image to which the container belongs.
      shared_ptr<string> containerImageName_ {};
      // The data source of the alert event.
      shared_ptr<string> dataSource_ {};
      // The timestamp when the alert event ends. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the associated instance.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the associated instance.
      shared_ptr<string> intranetIp_ {};
      // The ID of the Kubernetes cluster.
      shared_ptr<string> k8sClusterId_ {};
      // The name of the Kubernetes cluster.
      shared_ptr<string> k8sClusterName_ {};
      // The namespace of the Kubernetes cluster.
      shared_ptr<string> k8sNamespace_ {};
      // The ID of the Kubernetes cluster node.
      shared_ptr<string> k8sNodeId_ {};
      // The name of the Kubernetes cluster node.
      shared_ptr<string> k8sNodeName_ {};
      // The name of the Kubernetes pod.
      shared_ptr<string> k8sPodName_ {};
      // The severity of the alert event. Valid values:
      // 
      // *   **serious**
      // *   **suspicious**
      // *   **remind**
      shared_ptr<string> level_ {};
      // The solution to the alert event.
      shared_ptr<string> solution_ {};
      // The timestamp when the alert event starts. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The alert type of the alert event. Valid values:
      // 
      // *   Suspicious process
      // *   Webshell
      // *   Unusual logon
      // *   Exception
      // *   Sensitive file tampering
      // *   Malicious process (cloud threat detection)
      // *   Suspicious network connection
      // *   Other
      // *   Abnormal account
      // *   Application intrusion event
      // *   Cloud threat detection
      // *   Precise defense
      // *   Application whitelist
      // *   Persistent webshell
      // *   Web application threat detection
      // *   Malicious script
      // *   Threat intelligence
      // *   Malicious network activity
      // *   Cluster exception
      // *   Webshell (on-premises threat detection)
      // *   Vulnerability exploitation
      // *   Malicious process (on-premises threat detection)
      // *   Trusted exception
      shared_ptr<string> type_ {};
      // The instance UUID of the asset.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAlarmEventDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAlarmEventDetailResponseBody::Data) };
    inline DescribeAlarmEventDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAlarmEventDetailResponseBody::Data) };
    inline DescribeAlarmEventDetailResponseBody& setData(const DescribeAlarmEventDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAlarmEventDetailResponseBody& setData(DescribeAlarmEventDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlarmEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the alert event.
    shared_ptr<DescribeAlarmEventDetailResponseBody::Data> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
