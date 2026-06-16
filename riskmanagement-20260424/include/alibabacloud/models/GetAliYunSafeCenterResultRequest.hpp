// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIYUNSAFECENTERRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALIYUNSAFECENTERRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetAliYunSafeCenterResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAliYunSafeCenterResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateSimilarSecurityEventsQueryTaskRequest, createSimilarSecurityEventsQueryTaskRequest_);
      DARABONBA_PTR_TO_JSON(DescribeInstancesFullStatusRequest, describeInstancesFullStatusRequest_);
      DARABONBA_PTR_TO_JSON(DescribeSecurityEventOperationStatusRequest, describeSecurityEventOperationStatusRequest_);
      DARABONBA_PTR_TO_JSON(DescribeSimilarSecurityEventsRequest, describeSimilarSecurityEventsRequest_);
      DARABONBA_PTR_TO_JSON(GetAssetDetailByUuidRequest, getAssetDetailByUuidRequest_);
      DARABONBA_PTR_TO_JSON(HandleSecurityEventsRequest, handleSecurityEventsRequest_);
      DARABONBA_PTR_TO_JSON(HandleSimilarSecurityEventsRequest, handleSimilarSecurityEventsRequest_);
      DARABONBA_PTR_TO_JSON(InterfaceCode, interfaceCode_);
      DARABONBA_PTR_TO_JSON(ListInstancesRequest, listInstancesRequest_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAliYunSafeCenterResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateSimilarSecurityEventsQueryTaskRequest, createSimilarSecurityEventsQueryTaskRequest_);
      DARABONBA_PTR_FROM_JSON(DescribeInstancesFullStatusRequest, describeInstancesFullStatusRequest_);
      DARABONBA_PTR_FROM_JSON(DescribeSecurityEventOperationStatusRequest, describeSecurityEventOperationStatusRequest_);
      DARABONBA_PTR_FROM_JSON(DescribeSimilarSecurityEventsRequest, describeSimilarSecurityEventsRequest_);
      DARABONBA_PTR_FROM_JSON(GetAssetDetailByUuidRequest, getAssetDetailByUuidRequest_);
      DARABONBA_PTR_FROM_JSON(HandleSecurityEventsRequest, handleSecurityEventsRequest_);
      DARABONBA_PTR_FROM_JSON(HandleSimilarSecurityEventsRequest, handleSimilarSecurityEventsRequest_);
      DARABONBA_PTR_FROM_JSON(InterfaceCode, interfaceCode_);
      DARABONBA_PTR_FROM_JSON(ListInstancesRequest, listInstancesRequest_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetAliYunSafeCenterResultRequest() = default ;
    GetAliYunSafeCenterResultRequest(const GetAliYunSafeCenterResultRequest &) = default ;
    GetAliYunSafeCenterResultRequest(GetAliYunSafeCenterResultRequest &&) = default ;
    GetAliYunSafeCenterResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAliYunSafeCenterResultRequest() = default ;
    GetAliYunSafeCenterResultRequest& operator=(const GetAliYunSafeCenterResultRequest &) = default ;
    GetAliYunSafeCenterResultRequest& operator=(GetAliYunSafeCenterResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListInstancesRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListInstancesRequest& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, ListInstancesRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      ListInstancesRequest() = default ;
      ListInstancesRequest(const ListInstancesRequest &) = default ;
      ListInstancesRequest(ListInstancesRequest &&) = default ;
      ListInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListInstancesRequest() = default ;
      ListInstancesRequest& operator=(const ListInstancesRequest &) = default ;
      ListInstancesRequest& operator=(ListInstancesRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->regionId_ == nullptr; };
      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
      inline ListInstancesRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ListInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      shared_ptr<string> instanceIds_ {};
      shared_ptr<string> regionId_ {};
    };

    class HandleSimilarSecurityEventsRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HandleSimilarSecurityEventsRequest& obj) { 
        DARABONBA_PTR_TO_JSON(AlertType, alertType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
        DARABONBA_PTR_TO_JSON(OperationParams, operationParams_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, HandleSimilarSecurityEventsRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
        DARABONBA_PTR_FROM_JSON(OperationParams, operationParams_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      HandleSimilarSecurityEventsRequest() = default ;
      HandleSimilarSecurityEventsRequest(const HandleSimilarSecurityEventsRequest &) = default ;
      HandleSimilarSecurityEventsRequest(HandleSimilarSecurityEventsRequest &&) = default ;
      HandleSimilarSecurityEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HandleSimilarSecurityEventsRequest() = default ;
      HandleSimilarSecurityEventsRequest& operator=(const HandleSimilarSecurityEventsRequest &) = default ;
      HandleSimilarSecurityEventsRequest& operator=(HandleSimilarSecurityEventsRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertType_ == nullptr
        && this->instanceId_ == nullptr && this->ip_ == nullptr && this->operationCode_ == nullptr && this->operationParams_ == nullptr && this->regionId_ == nullptr
        && this->sourceIp_ == nullptr && this->taskId_ == nullptr; };
      // alertType Field Functions 
      bool hasAlertType() const { return this->alertType_ != nullptr;};
      void deleteAlertType() { this->alertType_ = nullptr;};
      inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
      inline HandleSimilarSecurityEventsRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline HandleSimilarSecurityEventsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline HandleSimilarSecurityEventsRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // operationCode Field Functions 
      bool hasOperationCode() const { return this->operationCode_ != nullptr;};
      void deleteOperationCode() { this->operationCode_ = nullptr;};
      inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
      inline HandleSimilarSecurityEventsRequest& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


      // operationParams Field Functions 
      bool hasOperationParams() const { return this->operationParams_ != nullptr;};
      void deleteOperationParams() { this->operationParams_ = nullptr;};
      inline string getOperationParams() const { DARABONBA_PTR_GET_DEFAULT(operationParams_, "") };
      inline HandleSimilarSecurityEventsRequest& setOperationParams(string operationParams) { DARABONBA_PTR_SET_VALUE(operationParams_, operationParams) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline HandleSimilarSecurityEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // sourceIp Field Functions 
      bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
      void deleteSourceIp() { this->sourceIp_ = nullptr;};
      inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
      inline HandleSimilarSecurityEventsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline HandleSimilarSecurityEventsRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> alertType_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> ip_ {};
      shared_ptr<string> operationCode_ {};
      shared_ptr<string> operationParams_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> sourceIp_ {};
      shared_ptr<int64_t> taskId_ {};
    };

    class HandleSecurityEventsRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HandleSecurityEventsRequest& obj) { 
        DARABONBA_PTR_TO_JSON(AlertType, alertType_);
        DARABONBA_PTR_TO_JSON(FileMd5, fileMd5_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(MarkBatch, markBatch_);
        DARABONBA_PTR_TO_JSON(MarkMissParam, markMissParam_);
        DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
        DARABONBA_PTR_TO_JSON(OperationParams, operationParams_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(SecurityEventIds, securityEventIds_);
      };
      friend void from_json(const Darabonba::Json& j, HandleSecurityEventsRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
        DARABONBA_PTR_FROM_JSON(FileMd5, fileMd5_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(MarkBatch, markBatch_);
        DARABONBA_PTR_FROM_JSON(MarkMissParam, markMissParam_);
        DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
        DARABONBA_PTR_FROM_JSON(OperationParams, operationParams_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(SecurityEventIds, securityEventIds_);
      };
      HandleSecurityEventsRequest() = default ;
      HandleSecurityEventsRequest(const HandleSecurityEventsRequest &) = default ;
      HandleSecurityEventsRequest(HandleSecurityEventsRequest &&) = default ;
      HandleSecurityEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HandleSecurityEventsRequest() = default ;
      HandleSecurityEventsRequest& operator=(const HandleSecurityEventsRequest &) = default ;
      HandleSecurityEventsRequest& operator=(HandleSecurityEventsRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertType_ == nullptr
        && this->fileMd5_ == nullptr && this->filePath_ == nullptr && this->instanceId_ == nullptr && this->ip_ == nullptr && this->markBatch_ == nullptr
        && this->markMissParam_ == nullptr && this->operationCode_ == nullptr && this->operationParams_ == nullptr && this->regionId_ == nullptr && this->remark_ == nullptr
        && this->securityEventIds_ == nullptr; };
      // alertType Field Functions 
      bool hasAlertType() const { return this->alertType_ != nullptr;};
      void deleteAlertType() { this->alertType_ = nullptr;};
      inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
      inline HandleSecurityEventsRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


      // fileMd5 Field Functions 
      bool hasFileMd5() const { return this->fileMd5_ != nullptr;};
      void deleteFileMd5() { this->fileMd5_ = nullptr;};
      inline string getFileMd5() const { DARABONBA_PTR_GET_DEFAULT(fileMd5_, "") };
      inline HandleSecurityEventsRequest& setFileMd5(string fileMd5) { DARABONBA_PTR_SET_VALUE(fileMd5_, fileMd5) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline HandleSecurityEventsRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline HandleSecurityEventsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline HandleSecurityEventsRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // markBatch Field Functions 
      bool hasMarkBatch() const { return this->markBatch_ != nullptr;};
      void deleteMarkBatch() { this->markBatch_ = nullptr;};
      inline string getMarkBatch() const { DARABONBA_PTR_GET_DEFAULT(markBatch_, "") };
      inline HandleSecurityEventsRequest& setMarkBatch(string markBatch) { DARABONBA_PTR_SET_VALUE(markBatch_, markBatch) };


      // markMissParam Field Functions 
      bool hasMarkMissParam() const { return this->markMissParam_ != nullptr;};
      void deleteMarkMissParam() { this->markMissParam_ = nullptr;};
      inline string getMarkMissParam() const { DARABONBA_PTR_GET_DEFAULT(markMissParam_, "") };
      inline HandleSecurityEventsRequest& setMarkMissParam(string markMissParam) { DARABONBA_PTR_SET_VALUE(markMissParam_, markMissParam) };


      // operationCode Field Functions 
      bool hasOperationCode() const { return this->operationCode_ != nullptr;};
      void deleteOperationCode() { this->operationCode_ = nullptr;};
      inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
      inline HandleSecurityEventsRequest& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


      // operationParams Field Functions 
      bool hasOperationParams() const { return this->operationParams_ != nullptr;};
      void deleteOperationParams() { this->operationParams_ = nullptr;};
      inline string getOperationParams() const { DARABONBA_PTR_GET_DEFAULT(operationParams_, "") };
      inline HandleSecurityEventsRequest& setOperationParams(string operationParams) { DARABONBA_PTR_SET_VALUE(operationParams_, operationParams) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline HandleSecurityEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline HandleSecurityEventsRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // securityEventIds Field Functions 
      bool hasSecurityEventIds() const { return this->securityEventIds_ != nullptr;};
      void deleteSecurityEventIds() { this->securityEventIds_ = nullptr;};
      inline const vector<string> & getSecurityEventIds() const { DARABONBA_PTR_GET_CONST(securityEventIds_, vector<string>) };
      inline vector<string> getSecurityEventIds() { DARABONBA_PTR_GET(securityEventIds_, vector<string>) };
      inline HandleSecurityEventsRequest& setSecurityEventIds(const vector<string> & securityEventIds) { DARABONBA_PTR_SET_VALUE(securityEventIds_, securityEventIds) };
      inline HandleSecurityEventsRequest& setSecurityEventIds(vector<string> && securityEventIds) { DARABONBA_PTR_SET_RVALUE(securityEventIds_, securityEventIds) };


    protected:
      shared_ptr<string> alertType_ {};
      shared_ptr<string> fileMd5_ {};
      shared_ptr<string> filePath_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> ip_ {};
      shared_ptr<string> markBatch_ {};
      shared_ptr<string> markMissParam_ {};
      shared_ptr<string> operationCode_ {};
      shared_ptr<string> operationParams_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<vector<string>> securityEventIds_ {};
    };

    class GetAssetDetailByUuidRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GetAssetDetailByUuidRequest& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, GetAssetDetailByUuidRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      GetAssetDetailByUuidRequest() = default ;
      GetAssetDetailByUuidRequest(const GetAssetDetailByUuidRequest &) = default ;
      GetAssetDetailByUuidRequest(GetAssetDetailByUuidRequest &&) = default ;
      GetAssetDetailByUuidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GetAssetDetailByUuidRequest() = default ;
      GetAssetDetailByUuidRequest& operator=(const GetAssetDetailByUuidRequest &) = default ;
      GetAssetDetailByUuidRequest& operator=(GetAssetDetailByUuidRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->uuid_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline GetAssetDetailByUuidRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline GetAssetDetailByUuidRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<string> regionId_ {};
      shared_ptr<string> uuid_ {};
    };

    class DescribeSimilarSecurityEventsRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DescribeSimilarSecurityEventsRequest& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, DescribeSimilarSecurityEventsRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      DescribeSimilarSecurityEventsRequest() = default ;
      DescribeSimilarSecurityEventsRequest(const DescribeSimilarSecurityEventsRequest &) = default ;
      DescribeSimilarSecurityEventsRequest(DescribeSimilarSecurityEventsRequest &&) = default ;
      DescribeSimilarSecurityEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DescribeSimilarSecurityEventsRequest() = default ;
      DescribeSimilarSecurityEventsRequest& operator=(const DescribeSimilarSecurityEventsRequest &) = default ;
      DescribeSimilarSecurityEventsRequest& operator=(DescribeSimilarSecurityEventsRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->taskId_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DescribeSimilarSecurityEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline DescribeSimilarSecurityEventsRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> regionId_ {};
      shared_ptr<int64_t> taskId_ {};
    };

    class DescribeSecurityEventOperationStatusRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationStatusRequest& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SecurityEventIds, securityEventIds_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationStatusRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SecurityEventIds, securityEventIds_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      DescribeSecurityEventOperationStatusRequest() = default ;
      DescribeSecurityEventOperationStatusRequest(const DescribeSecurityEventOperationStatusRequest &) = default ;
      DescribeSecurityEventOperationStatusRequest(DescribeSecurityEventOperationStatusRequest &&) = default ;
      DescribeSecurityEventOperationStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DescribeSecurityEventOperationStatusRequest() = default ;
      DescribeSecurityEventOperationStatusRequest& operator=(const DescribeSecurityEventOperationStatusRequest &) = default ;
      DescribeSecurityEventOperationStatusRequest& operator=(DescribeSecurityEventOperationStatusRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->securityEventIds_ == nullptr && this->taskId_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DescribeSecurityEventOperationStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // securityEventIds Field Functions 
      bool hasSecurityEventIds() const { return this->securityEventIds_ != nullptr;};
      void deleteSecurityEventIds() { this->securityEventIds_ = nullptr;};
      inline const vector<string> & getSecurityEventIds() const { DARABONBA_PTR_GET_CONST(securityEventIds_, vector<string>) };
      inline vector<string> getSecurityEventIds() { DARABONBA_PTR_GET(securityEventIds_, vector<string>) };
      inline DescribeSecurityEventOperationStatusRequest& setSecurityEventIds(const vector<string> & securityEventIds) { DARABONBA_PTR_SET_VALUE(securityEventIds_, securityEventIds) };
      inline DescribeSecurityEventOperationStatusRequest& setSecurityEventIds(vector<string> && securityEventIds) { DARABONBA_PTR_SET_RVALUE(securityEventIds_, securityEventIds) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline DescribeSecurityEventOperationStatusRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> regionId_ {};
      shared_ptr<vector<string>> securityEventIds_ {};
      shared_ptr<int64_t> taskId_ {};
    };

    class DescribeInstancesFullStatusRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DescribeInstancesFullStatusRequest& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, DescribeInstancesFullStatusRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      DescribeInstancesFullStatusRequest() = default ;
      DescribeInstancesFullStatusRequest(const DescribeInstancesFullStatusRequest &) = default ;
      DescribeInstancesFullStatusRequest(DescribeInstancesFullStatusRequest &&) = default ;
      DescribeInstancesFullStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DescribeInstancesFullStatusRequest() = default ;
      DescribeInstancesFullStatusRequest& operator=(const DescribeInstancesFullStatusRequest &) = default ;
      DescribeInstancesFullStatusRequest& operator=(DescribeInstancesFullStatusRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
      inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
      inline DescribeInstancesFullStatusRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
      inline DescribeInstancesFullStatusRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DescribeInstancesFullStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      shared_ptr<vector<string>> instanceId_ {};
      shared_ptr<string> regionId_ {};
    };

    class CreateSimilarSecurityEventsQueryTaskRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateSimilarSecurityEventsQueryTaskRequest& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
        DARABONBA_PTR_TO_JSON(SimilarEventScenarioCode, similarEventScenarioCode_);
      };
      friend void from_json(const Darabonba::Json& j, CreateSimilarSecurityEventsQueryTaskRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SecurityEventId, securityEventId_);
        DARABONBA_PTR_FROM_JSON(SimilarEventScenarioCode, similarEventScenarioCode_);
      };
      CreateSimilarSecurityEventsQueryTaskRequest() = default ;
      CreateSimilarSecurityEventsQueryTaskRequest(const CreateSimilarSecurityEventsQueryTaskRequest &) = default ;
      CreateSimilarSecurityEventsQueryTaskRequest(CreateSimilarSecurityEventsQueryTaskRequest &&) = default ;
      CreateSimilarSecurityEventsQueryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateSimilarSecurityEventsQueryTaskRequest() = default ;
      CreateSimilarSecurityEventsQueryTaskRequest& operator=(const CreateSimilarSecurityEventsQueryTaskRequest &) = default ;
      CreateSimilarSecurityEventsQueryTaskRequest& operator=(CreateSimilarSecurityEventsQueryTaskRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->securityEventId_ == nullptr && this->similarEventScenarioCode_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline CreateSimilarSecurityEventsQueryTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // securityEventId Field Functions 
      bool hasSecurityEventId() const { return this->securityEventId_ != nullptr;};
      void deleteSecurityEventId() { this->securityEventId_ = nullptr;};
      inline int64_t getSecurityEventId() const { DARABONBA_PTR_GET_DEFAULT(securityEventId_, 0L) };
      inline CreateSimilarSecurityEventsQueryTaskRequest& setSecurityEventId(int64_t securityEventId) { DARABONBA_PTR_SET_VALUE(securityEventId_, securityEventId) };


      // similarEventScenarioCode Field Functions 
      bool hasSimilarEventScenarioCode() const { return this->similarEventScenarioCode_ != nullptr;};
      void deleteSimilarEventScenarioCode() { this->similarEventScenarioCode_ = nullptr;};
      inline string getSimilarEventScenarioCode() const { DARABONBA_PTR_GET_DEFAULT(similarEventScenarioCode_, "") };
      inline CreateSimilarSecurityEventsQueryTaskRequest& setSimilarEventScenarioCode(string similarEventScenarioCode) { DARABONBA_PTR_SET_VALUE(similarEventScenarioCode_, similarEventScenarioCode) };


    protected:
      shared_ptr<string> regionId_ {};
      shared_ptr<int64_t> securityEventId_ {};
      shared_ptr<string> similarEventScenarioCode_ {};
    };

    virtual bool empty() const override { return this->createSimilarSecurityEventsQueryTaskRequest_ == nullptr
        && this->describeInstancesFullStatusRequest_ == nullptr && this->describeSecurityEventOperationStatusRequest_ == nullptr && this->describeSimilarSecurityEventsRequest_ == nullptr && this->getAssetDetailByUuidRequest_ == nullptr && this->handleSecurityEventsRequest_ == nullptr
        && this->handleSimilarSecurityEventsRequest_ == nullptr && this->interfaceCode_ == nullptr && this->listInstancesRequest_ == nullptr && this->regionId_ == nullptr; };
    // createSimilarSecurityEventsQueryTaskRequest Field Functions 
    bool hasCreateSimilarSecurityEventsQueryTaskRequest() const { return this->createSimilarSecurityEventsQueryTaskRequest_ != nullptr;};
    void deleteCreateSimilarSecurityEventsQueryTaskRequest() { this->createSimilarSecurityEventsQueryTaskRequest_ = nullptr;};
    inline const GetAliYunSafeCenterResultRequest::CreateSimilarSecurityEventsQueryTaskRequest & getCreateSimilarSecurityEventsQueryTaskRequest() const { DARABONBA_PTR_GET_CONST(createSimilarSecurityEventsQueryTaskRequest_, GetAliYunSafeCenterResultRequest::CreateSimilarSecurityEventsQueryTaskRequest) };
    inline GetAliYunSafeCenterResultRequest::CreateSimilarSecurityEventsQueryTaskRequest getCreateSimilarSecurityEventsQueryTaskRequest() { DARABONBA_PTR_GET(createSimilarSecurityEventsQueryTaskRequest_, GetAliYunSafeCenterResultRequest::CreateSimilarSecurityEventsQueryTaskRequest) };
    inline GetAliYunSafeCenterResultRequest& setCreateSimilarSecurityEventsQueryTaskRequest(const GetAliYunSafeCenterResultRequest::CreateSimilarSecurityEventsQueryTaskRequest & createSimilarSecurityEventsQueryTaskRequest) { DARABONBA_PTR_SET_VALUE(createSimilarSecurityEventsQueryTaskRequest_, createSimilarSecurityEventsQueryTaskRequest) };
    inline GetAliYunSafeCenterResultRequest& setCreateSimilarSecurityEventsQueryTaskRequest(GetAliYunSafeCenterResultRequest::CreateSimilarSecurityEventsQueryTaskRequest && createSimilarSecurityEventsQueryTaskRequest) { DARABONBA_PTR_SET_RVALUE(createSimilarSecurityEventsQueryTaskRequest_, createSimilarSecurityEventsQueryTaskRequest) };


    // describeInstancesFullStatusRequest Field Functions 
    bool hasDescribeInstancesFullStatusRequest() const { return this->describeInstancesFullStatusRequest_ != nullptr;};
    void deleteDescribeInstancesFullStatusRequest() { this->describeInstancesFullStatusRequest_ = nullptr;};
    inline const GetAliYunSafeCenterResultRequest::DescribeInstancesFullStatusRequest & getDescribeInstancesFullStatusRequest() const { DARABONBA_PTR_GET_CONST(describeInstancesFullStatusRequest_, GetAliYunSafeCenterResultRequest::DescribeInstancesFullStatusRequest) };
    inline GetAliYunSafeCenterResultRequest::DescribeInstancesFullStatusRequest getDescribeInstancesFullStatusRequest() { DARABONBA_PTR_GET(describeInstancesFullStatusRequest_, GetAliYunSafeCenterResultRequest::DescribeInstancesFullStatusRequest) };
    inline GetAliYunSafeCenterResultRequest& setDescribeInstancesFullStatusRequest(const GetAliYunSafeCenterResultRequest::DescribeInstancesFullStatusRequest & describeInstancesFullStatusRequest) { DARABONBA_PTR_SET_VALUE(describeInstancesFullStatusRequest_, describeInstancesFullStatusRequest) };
    inline GetAliYunSafeCenterResultRequest& setDescribeInstancesFullStatusRequest(GetAliYunSafeCenterResultRequest::DescribeInstancesFullStatusRequest && describeInstancesFullStatusRequest) { DARABONBA_PTR_SET_RVALUE(describeInstancesFullStatusRequest_, describeInstancesFullStatusRequest) };


    // describeSecurityEventOperationStatusRequest Field Functions 
    bool hasDescribeSecurityEventOperationStatusRequest() const { return this->describeSecurityEventOperationStatusRequest_ != nullptr;};
    void deleteDescribeSecurityEventOperationStatusRequest() { this->describeSecurityEventOperationStatusRequest_ = nullptr;};
    inline const GetAliYunSafeCenterResultRequest::DescribeSecurityEventOperationStatusRequest & getDescribeSecurityEventOperationStatusRequest() const { DARABONBA_PTR_GET_CONST(describeSecurityEventOperationStatusRequest_, GetAliYunSafeCenterResultRequest::DescribeSecurityEventOperationStatusRequest) };
    inline GetAliYunSafeCenterResultRequest::DescribeSecurityEventOperationStatusRequest getDescribeSecurityEventOperationStatusRequest() { DARABONBA_PTR_GET(describeSecurityEventOperationStatusRequest_, GetAliYunSafeCenterResultRequest::DescribeSecurityEventOperationStatusRequest) };
    inline GetAliYunSafeCenterResultRequest& setDescribeSecurityEventOperationStatusRequest(const GetAliYunSafeCenterResultRequest::DescribeSecurityEventOperationStatusRequest & describeSecurityEventOperationStatusRequest) { DARABONBA_PTR_SET_VALUE(describeSecurityEventOperationStatusRequest_, describeSecurityEventOperationStatusRequest) };
    inline GetAliYunSafeCenterResultRequest& setDescribeSecurityEventOperationStatusRequest(GetAliYunSafeCenterResultRequest::DescribeSecurityEventOperationStatusRequest && describeSecurityEventOperationStatusRequest) { DARABONBA_PTR_SET_RVALUE(describeSecurityEventOperationStatusRequest_, describeSecurityEventOperationStatusRequest) };


    // describeSimilarSecurityEventsRequest Field Functions 
    bool hasDescribeSimilarSecurityEventsRequest() const { return this->describeSimilarSecurityEventsRequest_ != nullptr;};
    void deleteDescribeSimilarSecurityEventsRequest() { this->describeSimilarSecurityEventsRequest_ = nullptr;};
    inline const GetAliYunSafeCenterResultRequest::DescribeSimilarSecurityEventsRequest & getDescribeSimilarSecurityEventsRequest() const { DARABONBA_PTR_GET_CONST(describeSimilarSecurityEventsRequest_, GetAliYunSafeCenterResultRequest::DescribeSimilarSecurityEventsRequest) };
    inline GetAliYunSafeCenterResultRequest::DescribeSimilarSecurityEventsRequest getDescribeSimilarSecurityEventsRequest() { DARABONBA_PTR_GET(describeSimilarSecurityEventsRequest_, GetAliYunSafeCenterResultRequest::DescribeSimilarSecurityEventsRequest) };
    inline GetAliYunSafeCenterResultRequest& setDescribeSimilarSecurityEventsRequest(const GetAliYunSafeCenterResultRequest::DescribeSimilarSecurityEventsRequest & describeSimilarSecurityEventsRequest) { DARABONBA_PTR_SET_VALUE(describeSimilarSecurityEventsRequest_, describeSimilarSecurityEventsRequest) };
    inline GetAliYunSafeCenterResultRequest& setDescribeSimilarSecurityEventsRequest(GetAliYunSafeCenterResultRequest::DescribeSimilarSecurityEventsRequest && describeSimilarSecurityEventsRequest) { DARABONBA_PTR_SET_RVALUE(describeSimilarSecurityEventsRequest_, describeSimilarSecurityEventsRequest) };


    // getAssetDetailByUuidRequest Field Functions 
    bool hasGetAssetDetailByUuidRequest() const { return this->getAssetDetailByUuidRequest_ != nullptr;};
    void deleteGetAssetDetailByUuidRequest() { this->getAssetDetailByUuidRequest_ = nullptr;};
    inline const GetAliYunSafeCenterResultRequest::GetAssetDetailByUuidRequest & getGetAssetDetailByUuidRequest() const { DARABONBA_PTR_GET_CONST(getAssetDetailByUuidRequest_, GetAliYunSafeCenterResultRequest::GetAssetDetailByUuidRequest) };
    inline GetAliYunSafeCenterResultRequest::GetAssetDetailByUuidRequest getGetAssetDetailByUuidRequest() { DARABONBA_PTR_GET(getAssetDetailByUuidRequest_, GetAliYunSafeCenterResultRequest::GetAssetDetailByUuidRequest) };
    inline GetAliYunSafeCenterResultRequest& setGetAssetDetailByUuidRequest(const GetAliYunSafeCenterResultRequest::GetAssetDetailByUuidRequest & getAssetDetailByUuidRequest) { DARABONBA_PTR_SET_VALUE(getAssetDetailByUuidRequest_, getAssetDetailByUuidRequest) };
    inline GetAliYunSafeCenterResultRequest& setGetAssetDetailByUuidRequest(GetAliYunSafeCenterResultRequest::GetAssetDetailByUuidRequest && getAssetDetailByUuidRequest) { DARABONBA_PTR_SET_RVALUE(getAssetDetailByUuidRequest_, getAssetDetailByUuidRequest) };


    // handleSecurityEventsRequest Field Functions 
    bool hasHandleSecurityEventsRequest() const { return this->handleSecurityEventsRequest_ != nullptr;};
    void deleteHandleSecurityEventsRequest() { this->handleSecurityEventsRequest_ = nullptr;};
    inline const GetAliYunSafeCenterResultRequest::HandleSecurityEventsRequest & getHandleSecurityEventsRequest() const { DARABONBA_PTR_GET_CONST(handleSecurityEventsRequest_, GetAliYunSafeCenterResultRequest::HandleSecurityEventsRequest) };
    inline GetAliYunSafeCenterResultRequest::HandleSecurityEventsRequest getHandleSecurityEventsRequest() { DARABONBA_PTR_GET(handleSecurityEventsRequest_, GetAliYunSafeCenterResultRequest::HandleSecurityEventsRequest) };
    inline GetAliYunSafeCenterResultRequest& setHandleSecurityEventsRequest(const GetAliYunSafeCenterResultRequest::HandleSecurityEventsRequest & handleSecurityEventsRequest) { DARABONBA_PTR_SET_VALUE(handleSecurityEventsRequest_, handleSecurityEventsRequest) };
    inline GetAliYunSafeCenterResultRequest& setHandleSecurityEventsRequest(GetAliYunSafeCenterResultRequest::HandleSecurityEventsRequest && handleSecurityEventsRequest) { DARABONBA_PTR_SET_RVALUE(handleSecurityEventsRequest_, handleSecurityEventsRequest) };


    // handleSimilarSecurityEventsRequest Field Functions 
    bool hasHandleSimilarSecurityEventsRequest() const { return this->handleSimilarSecurityEventsRequest_ != nullptr;};
    void deleteHandleSimilarSecurityEventsRequest() { this->handleSimilarSecurityEventsRequest_ = nullptr;};
    inline const GetAliYunSafeCenterResultRequest::HandleSimilarSecurityEventsRequest & getHandleSimilarSecurityEventsRequest() const { DARABONBA_PTR_GET_CONST(handleSimilarSecurityEventsRequest_, GetAliYunSafeCenterResultRequest::HandleSimilarSecurityEventsRequest) };
    inline GetAliYunSafeCenterResultRequest::HandleSimilarSecurityEventsRequest getHandleSimilarSecurityEventsRequest() { DARABONBA_PTR_GET(handleSimilarSecurityEventsRequest_, GetAliYunSafeCenterResultRequest::HandleSimilarSecurityEventsRequest) };
    inline GetAliYunSafeCenterResultRequest& setHandleSimilarSecurityEventsRequest(const GetAliYunSafeCenterResultRequest::HandleSimilarSecurityEventsRequest & handleSimilarSecurityEventsRequest) { DARABONBA_PTR_SET_VALUE(handleSimilarSecurityEventsRequest_, handleSimilarSecurityEventsRequest) };
    inline GetAliYunSafeCenterResultRequest& setHandleSimilarSecurityEventsRequest(GetAliYunSafeCenterResultRequest::HandleSimilarSecurityEventsRequest && handleSimilarSecurityEventsRequest) { DARABONBA_PTR_SET_RVALUE(handleSimilarSecurityEventsRequest_, handleSimilarSecurityEventsRequest) };


    // interfaceCode Field Functions 
    bool hasInterfaceCode() const { return this->interfaceCode_ != nullptr;};
    void deleteInterfaceCode() { this->interfaceCode_ = nullptr;};
    inline string getInterfaceCode() const { DARABONBA_PTR_GET_DEFAULT(interfaceCode_, "") };
    inline GetAliYunSafeCenterResultRequest& setInterfaceCode(string interfaceCode) { DARABONBA_PTR_SET_VALUE(interfaceCode_, interfaceCode) };


    // listInstancesRequest Field Functions 
    bool hasListInstancesRequest() const { return this->listInstancesRequest_ != nullptr;};
    void deleteListInstancesRequest() { this->listInstancesRequest_ = nullptr;};
    inline const GetAliYunSafeCenterResultRequest::ListInstancesRequest & getListInstancesRequest() const { DARABONBA_PTR_GET_CONST(listInstancesRequest_, GetAliYunSafeCenterResultRequest::ListInstancesRequest) };
    inline GetAliYunSafeCenterResultRequest::ListInstancesRequest getListInstancesRequest() { DARABONBA_PTR_GET(listInstancesRequest_, GetAliYunSafeCenterResultRequest::ListInstancesRequest) };
    inline GetAliYunSafeCenterResultRequest& setListInstancesRequest(const GetAliYunSafeCenterResultRequest::ListInstancesRequest & listInstancesRequest) { DARABONBA_PTR_SET_VALUE(listInstancesRequest_, listInstancesRequest) };
    inline GetAliYunSafeCenterResultRequest& setListInstancesRequest(GetAliYunSafeCenterResultRequest::ListInstancesRequest && listInstancesRequest) { DARABONBA_PTR_SET_RVALUE(listInstancesRequest_, listInstancesRequest) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAliYunSafeCenterResultRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<GetAliYunSafeCenterResultRequest::CreateSimilarSecurityEventsQueryTaskRequest> createSimilarSecurityEventsQueryTaskRequest_ {};
    shared_ptr<GetAliYunSafeCenterResultRequest::DescribeInstancesFullStatusRequest> describeInstancesFullStatusRequest_ {};
    shared_ptr<GetAliYunSafeCenterResultRequest::DescribeSecurityEventOperationStatusRequest> describeSecurityEventOperationStatusRequest_ {};
    shared_ptr<GetAliYunSafeCenterResultRequest::DescribeSimilarSecurityEventsRequest> describeSimilarSecurityEventsRequest_ {};
    shared_ptr<GetAliYunSafeCenterResultRequest::GetAssetDetailByUuidRequest> getAssetDetailByUuidRequest_ {};
    shared_ptr<GetAliYunSafeCenterResultRequest::HandleSecurityEventsRequest> handleSecurityEventsRequest_ {};
    shared_ptr<GetAliYunSafeCenterResultRequest::HandleSimilarSecurityEventsRequest> handleSimilarSecurityEventsRequest_ {};
    // This parameter is required.
    shared_ptr<string> interfaceCode_ {};
    shared_ptr<GetAliYunSafeCenterResultRequest::ListInstancesRequest> listInstancesRequest_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
