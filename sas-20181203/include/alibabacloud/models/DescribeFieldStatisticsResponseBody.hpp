// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIELDSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIELDSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeFieldStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFieldStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupedFields, groupedFields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFieldStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupedFields, groupedFields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFieldStatisticsResponseBody() = default ;
    DescribeFieldStatisticsResponseBody(const DescribeFieldStatisticsResponseBody &) = default ;
    DescribeFieldStatisticsResponseBody(DescribeFieldStatisticsResponseBody &&) = default ;
    DescribeFieldStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFieldStatisticsResponseBody() = default ;
    DescribeFieldStatisticsResponseBody& operator=(const DescribeFieldStatisticsResponseBody &) = default ;
    DescribeFieldStatisticsResponseBody& operator=(DescribeFieldStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupedFields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupedFields& obj) { 
        DARABONBA_PTR_TO_JSON(AliYunInstanceCount, aliYunInstanceCount_);
        DARABONBA_PTR_TO_JSON(AwsInstanceCount, awsInstanceCount_);
        DARABONBA_PTR_TO_JSON(AzureInstanceCount, azureInstanceCount_);
        DARABONBA_PTR_TO_JSON(ExposedInstanceCoreCount, exposedInstanceCoreCount_);
        DARABONBA_PTR_TO_JSON(ExposedInstanceCount, exposedInstanceCount_);
        DARABONBA_PTR_TO_JSON(GeneralAssetCount, generalAssetCount_);
        DARABONBA_PTR_TO_JSON(GoogleInstanceCount, googleInstanceCount_);
        DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
        DARABONBA_PTR_TO_JSON(HuaweiInstanceCount, huaweiInstanceCount_);
        DARABONBA_PTR_TO_JSON(IdcInstanceCount, idcInstanceCount_);
        DARABONBA_PTR_TO_JSON(ImportantAssetCount, importantAssetCount_);
        DARABONBA_PTR_TO_JSON(InstanceCoreCount, instanceCoreCount_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(InstanceSyncTaskCount, instanceSyncTaskCount_);
        DARABONBA_PTR_TO_JSON(NewInstanceCoreCount, newInstanceCoreCount_);
        DARABONBA_PTR_TO_JSON(NewInstanceCount, newInstanceCount_);
        DARABONBA_PTR_TO_JSON(NoRiskInstanceCount, noRiskInstanceCount_);
        DARABONBA_PTR_TO_JSON(NotBindMachineInstanceCount, notBindMachineInstanceCount_);
        DARABONBA_PTR_TO_JSON(NotRunningStatusCoreCount, notRunningStatusCoreCount_);
        DARABONBA_PTR_TO_JSON(NotRunningStatusCount, notRunningStatusCount_);
        DARABONBA_PTR_TO_JSON(OfflineInstanceCount, offlineInstanceCount_);
        DARABONBA_PTR_TO_JSON(OutMachineInstanceCount, outMachineInstanceCount_);
        DARABONBA_PTR_TO_JSON(PauseInstanceCount, pauseInstanceCount_);
        DARABONBA_PTR_TO_JSON(RegionCount, regionCount_);
        DARABONBA_PTR_TO_JSON(RiskInstanceCoreCount, riskInstanceCoreCount_);
        DARABONBA_PTR_TO_JSON(RiskInstanceCount, riskInstanceCount_);
        DARABONBA_PTR_TO_JSON(TencentInstanceCount, tencentInstanceCount_);
        DARABONBA_PTR_TO_JSON(TestAssetCount, testAssetCount_);
        DARABONBA_PTR_TO_JSON(TripartiteInstanceCount, tripartiteInstanceCount_);
        DARABONBA_PTR_TO_JSON(UnKnowStatusInstanceCount, unKnowStatusInstanceCount_);
        DARABONBA_PTR_TO_JSON(UnprotectedInstanceCoreCount, unprotectedInstanceCoreCount_);
        DARABONBA_PTR_TO_JSON(UnprotectedInstanceCount, unprotectedInstanceCount_);
        DARABONBA_PTR_TO_JSON(VolcengineInstanceCount, volcengineInstanceCount_);
        DARABONBA_PTR_TO_JSON(VpcCount, vpcCount_);
      };
      friend void from_json(const Darabonba::Json& j, GroupedFields& obj) { 
        DARABONBA_PTR_FROM_JSON(AliYunInstanceCount, aliYunInstanceCount_);
        DARABONBA_PTR_FROM_JSON(AwsInstanceCount, awsInstanceCount_);
        DARABONBA_PTR_FROM_JSON(AzureInstanceCount, azureInstanceCount_);
        DARABONBA_PTR_FROM_JSON(ExposedInstanceCoreCount, exposedInstanceCoreCount_);
        DARABONBA_PTR_FROM_JSON(ExposedInstanceCount, exposedInstanceCount_);
        DARABONBA_PTR_FROM_JSON(GeneralAssetCount, generalAssetCount_);
        DARABONBA_PTR_FROM_JSON(GoogleInstanceCount, googleInstanceCount_);
        DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
        DARABONBA_PTR_FROM_JSON(HuaweiInstanceCount, huaweiInstanceCount_);
        DARABONBA_PTR_FROM_JSON(IdcInstanceCount, idcInstanceCount_);
        DARABONBA_PTR_FROM_JSON(ImportantAssetCount, importantAssetCount_);
        DARABONBA_PTR_FROM_JSON(InstanceCoreCount, instanceCoreCount_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(InstanceSyncTaskCount, instanceSyncTaskCount_);
        DARABONBA_PTR_FROM_JSON(NewInstanceCoreCount, newInstanceCoreCount_);
        DARABONBA_PTR_FROM_JSON(NewInstanceCount, newInstanceCount_);
        DARABONBA_PTR_FROM_JSON(NoRiskInstanceCount, noRiskInstanceCount_);
        DARABONBA_PTR_FROM_JSON(NotBindMachineInstanceCount, notBindMachineInstanceCount_);
        DARABONBA_PTR_FROM_JSON(NotRunningStatusCoreCount, notRunningStatusCoreCount_);
        DARABONBA_PTR_FROM_JSON(NotRunningStatusCount, notRunningStatusCount_);
        DARABONBA_PTR_FROM_JSON(OfflineInstanceCount, offlineInstanceCount_);
        DARABONBA_PTR_FROM_JSON(OutMachineInstanceCount, outMachineInstanceCount_);
        DARABONBA_PTR_FROM_JSON(PauseInstanceCount, pauseInstanceCount_);
        DARABONBA_PTR_FROM_JSON(RegionCount, regionCount_);
        DARABONBA_PTR_FROM_JSON(RiskInstanceCoreCount, riskInstanceCoreCount_);
        DARABONBA_PTR_FROM_JSON(RiskInstanceCount, riskInstanceCount_);
        DARABONBA_PTR_FROM_JSON(TencentInstanceCount, tencentInstanceCount_);
        DARABONBA_PTR_FROM_JSON(TestAssetCount, testAssetCount_);
        DARABONBA_PTR_FROM_JSON(TripartiteInstanceCount, tripartiteInstanceCount_);
        DARABONBA_PTR_FROM_JSON(UnKnowStatusInstanceCount, unKnowStatusInstanceCount_);
        DARABONBA_PTR_FROM_JSON(UnprotectedInstanceCoreCount, unprotectedInstanceCoreCount_);
        DARABONBA_PTR_FROM_JSON(UnprotectedInstanceCount, unprotectedInstanceCount_);
        DARABONBA_PTR_FROM_JSON(VolcengineInstanceCount, volcengineInstanceCount_);
        DARABONBA_PTR_FROM_JSON(VpcCount, vpcCount_);
      };
      GroupedFields() = default ;
      GroupedFields(const GroupedFields &) = default ;
      GroupedFields(GroupedFields &&) = default ;
      GroupedFields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupedFields() = default ;
      GroupedFields& operator=(const GroupedFields &) = default ;
      GroupedFields& operator=(GroupedFields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliYunInstanceCount_ == nullptr
        && this->awsInstanceCount_ == nullptr && this->azureInstanceCount_ == nullptr && this->exposedInstanceCoreCount_ == nullptr && this->exposedInstanceCount_ == nullptr && this->generalAssetCount_ == nullptr
        && this->googleInstanceCount_ == nullptr && this->groupCount_ == nullptr && this->huaweiInstanceCount_ == nullptr && this->idcInstanceCount_ == nullptr && this->importantAssetCount_ == nullptr
        && this->instanceCoreCount_ == nullptr && this->instanceCount_ == nullptr && this->instanceSyncTaskCount_ == nullptr && this->newInstanceCoreCount_ == nullptr && this->newInstanceCount_ == nullptr
        && this->noRiskInstanceCount_ == nullptr && this->notBindMachineInstanceCount_ == nullptr && this->notRunningStatusCoreCount_ == nullptr && this->notRunningStatusCount_ == nullptr && this->offlineInstanceCount_ == nullptr
        && this->outMachineInstanceCount_ == nullptr && this->pauseInstanceCount_ == nullptr && this->regionCount_ == nullptr && this->riskInstanceCoreCount_ == nullptr && this->riskInstanceCount_ == nullptr
        && this->tencentInstanceCount_ == nullptr && this->testAssetCount_ == nullptr && this->tripartiteInstanceCount_ == nullptr && this->unKnowStatusInstanceCount_ == nullptr && this->unprotectedInstanceCoreCount_ == nullptr
        && this->unprotectedInstanceCount_ == nullptr && this->volcengineInstanceCount_ == nullptr && this->vpcCount_ == nullptr; };
      // aliYunInstanceCount Field Functions 
      bool hasAliYunInstanceCount() const { return this->aliYunInstanceCount_ != nullptr;};
      void deleteAliYunInstanceCount() { this->aliYunInstanceCount_ = nullptr;};
      inline int32_t getAliYunInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(aliYunInstanceCount_, 0) };
      inline GroupedFields& setAliYunInstanceCount(int32_t aliYunInstanceCount) { DARABONBA_PTR_SET_VALUE(aliYunInstanceCount_, aliYunInstanceCount) };


      // awsInstanceCount Field Functions 
      bool hasAwsInstanceCount() const { return this->awsInstanceCount_ != nullptr;};
      void deleteAwsInstanceCount() { this->awsInstanceCount_ = nullptr;};
      inline int32_t getAwsInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(awsInstanceCount_, 0) };
      inline GroupedFields& setAwsInstanceCount(int32_t awsInstanceCount) { DARABONBA_PTR_SET_VALUE(awsInstanceCount_, awsInstanceCount) };


      // azureInstanceCount Field Functions 
      bool hasAzureInstanceCount() const { return this->azureInstanceCount_ != nullptr;};
      void deleteAzureInstanceCount() { this->azureInstanceCount_ = nullptr;};
      inline int32_t getAzureInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(azureInstanceCount_, 0) };
      inline GroupedFields& setAzureInstanceCount(int32_t azureInstanceCount) { DARABONBA_PTR_SET_VALUE(azureInstanceCount_, azureInstanceCount) };


      // exposedInstanceCoreCount Field Functions 
      bool hasExposedInstanceCoreCount() const { return this->exposedInstanceCoreCount_ != nullptr;};
      void deleteExposedInstanceCoreCount() { this->exposedInstanceCoreCount_ = nullptr;};
      inline int64_t getExposedInstanceCoreCount() const { DARABONBA_PTR_GET_DEFAULT(exposedInstanceCoreCount_, 0L) };
      inline GroupedFields& setExposedInstanceCoreCount(int64_t exposedInstanceCoreCount) { DARABONBA_PTR_SET_VALUE(exposedInstanceCoreCount_, exposedInstanceCoreCount) };


      // exposedInstanceCount Field Functions 
      bool hasExposedInstanceCount() const { return this->exposedInstanceCount_ != nullptr;};
      void deleteExposedInstanceCount() { this->exposedInstanceCount_ = nullptr;};
      inline int32_t getExposedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(exposedInstanceCount_, 0) };
      inline GroupedFields& setExposedInstanceCount(int32_t exposedInstanceCount) { DARABONBA_PTR_SET_VALUE(exposedInstanceCount_, exposedInstanceCount) };


      // generalAssetCount Field Functions 
      bool hasGeneralAssetCount() const { return this->generalAssetCount_ != nullptr;};
      void deleteGeneralAssetCount() { this->generalAssetCount_ = nullptr;};
      inline int32_t getGeneralAssetCount() const { DARABONBA_PTR_GET_DEFAULT(generalAssetCount_, 0) };
      inline GroupedFields& setGeneralAssetCount(int32_t generalAssetCount) { DARABONBA_PTR_SET_VALUE(generalAssetCount_, generalAssetCount) };


      // googleInstanceCount Field Functions 
      bool hasGoogleInstanceCount() const { return this->googleInstanceCount_ != nullptr;};
      void deleteGoogleInstanceCount() { this->googleInstanceCount_ = nullptr;};
      inline int32_t getGoogleInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(googleInstanceCount_, 0) };
      inline GroupedFields& setGoogleInstanceCount(int32_t googleInstanceCount) { DARABONBA_PTR_SET_VALUE(googleInstanceCount_, googleInstanceCount) };


      // groupCount Field Functions 
      bool hasGroupCount() const { return this->groupCount_ != nullptr;};
      void deleteGroupCount() { this->groupCount_ = nullptr;};
      inline int32_t getGroupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0) };
      inline GroupedFields& setGroupCount(int32_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


      // huaweiInstanceCount Field Functions 
      bool hasHuaweiInstanceCount() const { return this->huaweiInstanceCount_ != nullptr;};
      void deleteHuaweiInstanceCount() { this->huaweiInstanceCount_ = nullptr;};
      inline int32_t getHuaweiInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(huaweiInstanceCount_, 0) };
      inline GroupedFields& setHuaweiInstanceCount(int32_t huaweiInstanceCount) { DARABONBA_PTR_SET_VALUE(huaweiInstanceCount_, huaweiInstanceCount) };


      // idcInstanceCount Field Functions 
      bool hasIdcInstanceCount() const { return this->idcInstanceCount_ != nullptr;};
      void deleteIdcInstanceCount() { this->idcInstanceCount_ = nullptr;};
      inline int32_t getIdcInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(idcInstanceCount_, 0) };
      inline GroupedFields& setIdcInstanceCount(int32_t idcInstanceCount) { DARABONBA_PTR_SET_VALUE(idcInstanceCount_, idcInstanceCount) };


      // importantAssetCount Field Functions 
      bool hasImportantAssetCount() const { return this->importantAssetCount_ != nullptr;};
      void deleteImportantAssetCount() { this->importantAssetCount_ = nullptr;};
      inline int32_t getImportantAssetCount() const { DARABONBA_PTR_GET_DEFAULT(importantAssetCount_, 0) };
      inline GroupedFields& setImportantAssetCount(int32_t importantAssetCount) { DARABONBA_PTR_SET_VALUE(importantAssetCount_, importantAssetCount) };


      // instanceCoreCount Field Functions 
      bool hasInstanceCoreCount() const { return this->instanceCoreCount_ != nullptr;};
      void deleteInstanceCoreCount() { this->instanceCoreCount_ = nullptr;};
      inline int64_t getInstanceCoreCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCoreCount_, 0L) };
      inline GroupedFields& setInstanceCoreCount(int64_t instanceCoreCount) { DARABONBA_PTR_SET_VALUE(instanceCoreCount_, instanceCoreCount) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline GroupedFields& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // instanceSyncTaskCount Field Functions 
      bool hasInstanceSyncTaskCount() const { return this->instanceSyncTaskCount_ != nullptr;};
      void deleteInstanceSyncTaskCount() { this->instanceSyncTaskCount_ = nullptr;};
      inline int32_t getInstanceSyncTaskCount() const { DARABONBA_PTR_GET_DEFAULT(instanceSyncTaskCount_, 0) };
      inline GroupedFields& setInstanceSyncTaskCount(int32_t instanceSyncTaskCount) { DARABONBA_PTR_SET_VALUE(instanceSyncTaskCount_, instanceSyncTaskCount) };


      // newInstanceCoreCount Field Functions 
      bool hasNewInstanceCoreCount() const { return this->newInstanceCoreCount_ != nullptr;};
      void deleteNewInstanceCoreCount() { this->newInstanceCoreCount_ = nullptr;};
      inline int64_t getNewInstanceCoreCount() const { DARABONBA_PTR_GET_DEFAULT(newInstanceCoreCount_, 0L) };
      inline GroupedFields& setNewInstanceCoreCount(int64_t newInstanceCoreCount) { DARABONBA_PTR_SET_VALUE(newInstanceCoreCount_, newInstanceCoreCount) };


      // newInstanceCount Field Functions 
      bool hasNewInstanceCount() const { return this->newInstanceCount_ != nullptr;};
      void deleteNewInstanceCount() { this->newInstanceCount_ = nullptr;};
      inline int32_t getNewInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(newInstanceCount_, 0) };
      inline GroupedFields& setNewInstanceCount(int32_t newInstanceCount) { DARABONBA_PTR_SET_VALUE(newInstanceCount_, newInstanceCount) };


      // noRiskInstanceCount Field Functions 
      bool hasNoRiskInstanceCount() const { return this->noRiskInstanceCount_ != nullptr;};
      void deleteNoRiskInstanceCount() { this->noRiskInstanceCount_ = nullptr;};
      inline int32_t getNoRiskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(noRiskInstanceCount_, 0) };
      inline GroupedFields& setNoRiskInstanceCount(int32_t noRiskInstanceCount) { DARABONBA_PTR_SET_VALUE(noRiskInstanceCount_, noRiskInstanceCount) };


      // notBindMachineInstanceCount Field Functions 
      bool hasNotBindMachineInstanceCount() const { return this->notBindMachineInstanceCount_ != nullptr;};
      void deleteNotBindMachineInstanceCount() { this->notBindMachineInstanceCount_ = nullptr;};
      inline int32_t getNotBindMachineInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(notBindMachineInstanceCount_, 0) };
      inline GroupedFields& setNotBindMachineInstanceCount(int32_t notBindMachineInstanceCount) { DARABONBA_PTR_SET_VALUE(notBindMachineInstanceCount_, notBindMachineInstanceCount) };


      // notRunningStatusCoreCount Field Functions 
      bool hasNotRunningStatusCoreCount() const { return this->notRunningStatusCoreCount_ != nullptr;};
      void deleteNotRunningStatusCoreCount() { this->notRunningStatusCoreCount_ = nullptr;};
      inline int64_t getNotRunningStatusCoreCount() const { DARABONBA_PTR_GET_DEFAULT(notRunningStatusCoreCount_, 0L) };
      inline GroupedFields& setNotRunningStatusCoreCount(int64_t notRunningStatusCoreCount) { DARABONBA_PTR_SET_VALUE(notRunningStatusCoreCount_, notRunningStatusCoreCount) };


      // notRunningStatusCount Field Functions 
      bool hasNotRunningStatusCount() const { return this->notRunningStatusCount_ != nullptr;};
      void deleteNotRunningStatusCount() { this->notRunningStatusCount_ = nullptr;};
      inline int32_t getNotRunningStatusCount() const { DARABONBA_PTR_GET_DEFAULT(notRunningStatusCount_, 0) };
      inline GroupedFields& setNotRunningStatusCount(int32_t notRunningStatusCount) { DARABONBA_PTR_SET_VALUE(notRunningStatusCount_, notRunningStatusCount) };


      // offlineInstanceCount Field Functions 
      bool hasOfflineInstanceCount() const { return this->offlineInstanceCount_ != nullptr;};
      void deleteOfflineInstanceCount() { this->offlineInstanceCount_ = nullptr;};
      inline int32_t getOfflineInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(offlineInstanceCount_, 0) };
      inline GroupedFields& setOfflineInstanceCount(int32_t offlineInstanceCount) { DARABONBA_PTR_SET_VALUE(offlineInstanceCount_, offlineInstanceCount) };


      // outMachineInstanceCount Field Functions 
      bool hasOutMachineInstanceCount() const { return this->outMachineInstanceCount_ != nullptr;};
      void deleteOutMachineInstanceCount() { this->outMachineInstanceCount_ = nullptr;};
      inline int32_t getOutMachineInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(outMachineInstanceCount_, 0) };
      inline GroupedFields& setOutMachineInstanceCount(int32_t outMachineInstanceCount) { DARABONBA_PTR_SET_VALUE(outMachineInstanceCount_, outMachineInstanceCount) };


      // pauseInstanceCount Field Functions 
      bool hasPauseInstanceCount() const { return this->pauseInstanceCount_ != nullptr;};
      void deletePauseInstanceCount() { this->pauseInstanceCount_ = nullptr;};
      inline int32_t getPauseInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(pauseInstanceCount_, 0) };
      inline GroupedFields& setPauseInstanceCount(int32_t pauseInstanceCount) { DARABONBA_PTR_SET_VALUE(pauseInstanceCount_, pauseInstanceCount) };


      // regionCount Field Functions 
      bool hasRegionCount() const { return this->regionCount_ != nullptr;};
      void deleteRegionCount() { this->regionCount_ = nullptr;};
      inline int32_t getRegionCount() const { DARABONBA_PTR_GET_DEFAULT(regionCount_, 0) };
      inline GroupedFields& setRegionCount(int32_t regionCount) { DARABONBA_PTR_SET_VALUE(regionCount_, regionCount) };


      // riskInstanceCoreCount Field Functions 
      bool hasRiskInstanceCoreCount() const { return this->riskInstanceCoreCount_ != nullptr;};
      void deleteRiskInstanceCoreCount() { this->riskInstanceCoreCount_ = nullptr;};
      inline int64_t getRiskInstanceCoreCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCoreCount_, 0L) };
      inline GroupedFields& setRiskInstanceCoreCount(int64_t riskInstanceCoreCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCoreCount_, riskInstanceCoreCount) };


      // riskInstanceCount Field Functions 
      bool hasRiskInstanceCount() const { return this->riskInstanceCount_ != nullptr;};
      void deleteRiskInstanceCount() { this->riskInstanceCount_ = nullptr;};
      inline int32_t getRiskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCount_, 0) };
      inline GroupedFields& setRiskInstanceCount(int32_t riskInstanceCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCount_, riskInstanceCount) };


      // tencentInstanceCount Field Functions 
      bool hasTencentInstanceCount() const { return this->tencentInstanceCount_ != nullptr;};
      void deleteTencentInstanceCount() { this->tencentInstanceCount_ = nullptr;};
      inline int32_t getTencentInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(tencentInstanceCount_, 0) };
      inline GroupedFields& setTencentInstanceCount(int32_t tencentInstanceCount) { DARABONBA_PTR_SET_VALUE(tencentInstanceCount_, tencentInstanceCount) };


      // testAssetCount Field Functions 
      bool hasTestAssetCount() const { return this->testAssetCount_ != nullptr;};
      void deleteTestAssetCount() { this->testAssetCount_ = nullptr;};
      inline int32_t getTestAssetCount() const { DARABONBA_PTR_GET_DEFAULT(testAssetCount_, 0) };
      inline GroupedFields& setTestAssetCount(int32_t testAssetCount) { DARABONBA_PTR_SET_VALUE(testAssetCount_, testAssetCount) };


      // tripartiteInstanceCount Field Functions 
      bool hasTripartiteInstanceCount() const { return this->tripartiteInstanceCount_ != nullptr;};
      void deleteTripartiteInstanceCount() { this->tripartiteInstanceCount_ = nullptr;};
      inline int32_t getTripartiteInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(tripartiteInstanceCount_, 0) };
      inline GroupedFields& setTripartiteInstanceCount(int32_t tripartiteInstanceCount) { DARABONBA_PTR_SET_VALUE(tripartiteInstanceCount_, tripartiteInstanceCount) };


      // unKnowStatusInstanceCount Field Functions 
      bool hasUnKnowStatusInstanceCount() const { return this->unKnowStatusInstanceCount_ != nullptr;};
      void deleteUnKnowStatusInstanceCount() { this->unKnowStatusInstanceCount_ = nullptr;};
      inline int32_t getUnKnowStatusInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(unKnowStatusInstanceCount_, 0) };
      inline GroupedFields& setUnKnowStatusInstanceCount(int32_t unKnowStatusInstanceCount) { DARABONBA_PTR_SET_VALUE(unKnowStatusInstanceCount_, unKnowStatusInstanceCount) };


      // unprotectedInstanceCoreCount Field Functions 
      bool hasUnprotectedInstanceCoreCount() const { return this->unprotectedInstanceCoreCount_ != nullptr;};
      void deleteUnprotectedInstanceCoreCount() { this->unprotectedInstanceCoreCount_ = nullptr;};
      inline int64_t getUnprotectedInstanceCoreCount() const { DARABONBA_PTR_GET_DEFAULT(unprotectedInstanceCoreCount_, 0L) };
      inline GroupedFields& setUnprotectedInstanceCoreCount(int64_t unprotectedInstanceCoreCount) { DARABONBA_PTR_SET_VALUE(unprotectedInstanceCoreCount_, unprotectedInstanceCoreCount) };


      // unprotectedInstanceCount Field Functions 
      bool hasUnprotectedInstanceCount() const { return this->unprotectedInstanceCount_ != nullptr;};
      void deleteUnprotectedInstanceCount() { this->unprotectedInstanceCount_ = nullptr;};
      inline int32_t getUnprotectedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(unprotectedInstanceCount_, 0) };
      inline GroupedFields& setUnprotectedInstanceCount(int32_t unprotectedInstanceCount) { DARABONBA_PTR_SET_VALUE(unprotectedInstanceCount_, unprotectedInstanceCount) };


      // volcengineInstanceCount Field Functions 
      bool hasVolcengineInstanceCount() const { return this->volcengineInstanceCount_ != nullptr;};
      void deleteVolcengineInstanceCount() { this->volcengineInstanceCount_ = nullptr;};
      inline int32_t getVolcengineInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(volcengineInstanceCount_, 0) };
      inline GroupedFields& setVolcengineInstanceCount(int32_t volcengineInstanceCount) { DARABONBA_PTR_SET_VALUE(volcengineInstanceCount_, volcengineInstanceCount) };


      // vpcCount Field Functions 
      bool hasVpcCount() const { return this->vpcCount_ != nullptr;};
      void deleteVpcCount() { this->vpcCount_ = nullptr;};
      inline int32_t getVpcCount() const { DARABONBA_PTR_GET_DEFAULT(vpcCount_, 0) };
      inline GroupedFields& setVpcCount(int32_t vpcCount) { DARABONBA_PTR_SET_VALUE(vpcCount_, vpcCount) };


    protected:
      // The number of assets that are deployed on Alibaba Cloud.
      shared_ptr<int32_t> aliYunInstanceCount_ {};
      // The number of servers.
      shared_ptr<int32_t> awsInstanceCount_ {};
      // The number of third-party cloud servers.
      shared_ptr<int32_t> azureInstanceCount_ {};
      // The number of cores of exposed assets.
      shared_ptr<int64_t> exposedInstanceCoreCount_ {};
      // The number of exposed servers.
      shared_ptr<int32_t> exposedInstanceCount_ {};
      // The number of assets whose importance is common.
      shared_ptr<int32_t> generalAssetCount_ {};
      // The number of instances that are provisioned by third-party providers.
      shared_ptr<int32_t> googleInstanceCount_ {};
      // The number of server groups.
      shared_ptr<int32_t> groupCount_ {};
      // The number of instances that are provisioned by third-party providers.
      shared_ptr<int32_t> huaweiInstanceCount_ {};
      // The number of assets that can be protected by Security Center.
      shared_ptr<int32_t> idcInstanceCount_ {};
      // The number of assets whose importance is important.
      shared_ptr<int32_t> importantAssetCount_ {};
      // The number of cores of assets in the specified asset type. If the asset type is not specified, the value of this parameter indicates the total number of cores of servers and Alibaba Cloud services within your account.
      shared_ptr<int64_t> instanceCoreCount_ {};
      // The total number of assets of the specified type. If no asset types are specified, this parameter indicates the total number of all servers and Alibaba Cloud services within your account.
      shared_ptr<int32_t> instanceCount_ {};
      // The total number of tasks for the specified type of assets. If no asset types are specified, this parameter indicates the total number of all servers and Alibaba Cloud services within your account.
      shared_ptr<int32_t> instanceSyncTaskCount_ {};
      // The number of cores of new servers.
      shared_ptr<int64_t> newInstanceCoreCount_ {};
      // The number of newly added servers.
      shared_ptr<int32_t> newInstanceCount_ {};
      // The number of servers on which no risks are detected.
      shared_ptr<int32_t> noRiskInstanceCount_ {};
      // The number of assets that are not added to Security Center of the specified asset type.
      shared_ptr<int32_t> notBindMachineInstanceCount_ {};
      // The number of cores of servers that are not started.
      shared_ptr<int64_t> notRunningStatusCoreCount_ {};
      // The number of servers that are shut down.
      shared_ptr<int32_t> notRunningStatusCount_ {};
      // The number of servers whose Security Center agent status is Offline.
      shared_ptr<int32_t> offlineInstanceCount_ {};
      // The number of servers outside the cloud.
      shared_ptr<int32_t> outMachineInstanceCount_ {};
      // The number of servers for which the Security Center agent suspends protection.
      shared_ptr<int32_t> pauseInstanceCount_ {};
      // The number of regions to which the servers belong.
      shared_ptr<int32_t> regionCount_ {};
      // The number of cores of vulnerable assets.
      shared_ptr<int64_t> riskInstanceCoreCount_ {};
      // The number of assets that are at risk.
      shared_ptr<int32_t> riskInstanceCount_ {};
      // The total number of cloud services that are protected by Security Center.
      shared_ptr<int32_t> tencentInstanceCount_ {};
      // The number of assets whose importance is test.
      shared_ptr<int32_t> testAssetCount_ {};
      // The number of simple application servers.
      shared_ptr<int32_t> tripartiteInstanceCount_ {};
      // The number of servers that are in the Unknown state.
      shared_ptr<int32_t> unKnowStatusInstanceCount_ {};
      // The number of cores of unprotected assets.
      shared_ptr<int64_t> unprotectedInstanceCoreCount_ {};
      // The number of unprotected assets.
      shared_ptr<int32_t> unprotectedInstanceCount_ {};
      // The number of instances that are provisioned by third-party providers.
      shared_ptr<int32_t> volcengineInstanceCount_ {};
      // The number of virtual private clouds (VPCs).
      shared_ptr<int32_t> vpcCount_ {};
    };

    virtual bool empty() const override { return this->groupedFields_ == nullptr
        && this->requestId_ == nullptr; };
    // groupedFields Field Functions 
    bool hasGroupedFields() const { return this->groupedFields_ != nullptr;};
    void deleteGroupedFields() { this->groupedFields_ = nullptr;};
    inline const DescribeFieldStatisticsResponseBody::GroupedFields & getGroupedFields() const { DARABONBA_PTR_GET_CONST(groupedFields_, DescribeFieldStatisticsResponseBody::GroupedFields) };
    inline DescribeFieldStatisticsResponseBody::GroupedFields getGroupedFields() { DARABONBA_PTR_GET(groupedFields_, DescribeFieldStatisticsResponseBody::GroupedFields) };
    inline DescribeFieldStatisticsResponseBody& setGroupedFields(const DescribeFieldStatisticsResponseBody::GroupedFields & groupedFields) { DARABONBA_PTR_SET_VALUE(groupedFields_, groupedFields) };
    inline DescribeFieldStatisticsResponseBody& setGroupedFields(DescribeFieldStatisticsResponseBody::GroupedFields && groupedFields) { DARABONBA_PTR_SET_RVALUE(groupedFields_, groupedFields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFieldStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about servers that are returned.
    shared_ptr<DescribeFieldStatisticsResponseBody::GroupedFields> groupedFields_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
