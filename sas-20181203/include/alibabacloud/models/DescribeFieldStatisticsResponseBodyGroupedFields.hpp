// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIELDSTATISTICSRESPONSEBODYGROUPEDFIELDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIELDSTATISTICSRESPONSEBODYGROUPEDFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeFieldStatisticsResponseBodyGroupedFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFieldStatisticsResponseBodyGroupedFields& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeFieldStatisticsResponseBodyGroupedFields& obj) { 
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
    DescribeFieldStatisticsResponseBodyGroupedFields() = default ;
    DescribeFieldStatisticsResponseBodyGroupedFields(const DescribeFieldStatisticsResponseBodyGroupedFields &) = default ;
    DescribeFieldStatisticsResponseBodyGroupedFields(DescribeFieldStatisticsResponseBodyGroupedFields &&) = default ;
    DescribeFieldStatisticsResponseBodyGroupedFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFieldStatisticsResponseBodyGroupedFields() = default ;
    DescribeFieldStatisticsResponseBodyGroupedFields& operator=(const DescribeFieldStatisticsResponseBodyGroupedFields &) = default ;
    DescribeFieldStatisticsResponseBodyGroupedFields& operator=(DescribeFieldStatisticsResponseBodyGroupedFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliYunInstanceCount_ == nullptr
        && return this->awsInstanceCount_ == nullptr && return this->azureInstanceCount_ == nullptr && return this->exposedInstanceCoreCount_ == nullptr && return this->exposedInstanceCount_ == nullptr && return this->generalAssetCount_ == nullptr
        && return this->googleInstanceCount_ == nullptr && return this->groupCount_ == nullptr && return this->huaweiInstanceCount_ == nullptr && return this->idcInstanceCount_ == nullptr && return this->importantAssetCount_ == nullptr
        && return this->instanceCoreCount_ == nullptr && return this->instanceCount_ == nullptr && return this->instanceSyncTaskCount_ == nullptr && return this->newInstanceCoreCount_ == nullptr && return this->newInstanceCount_ == nullptr
        && return this->noRiskInstanceCount_ == nullptr && return this->notBindMachineInstanceCount_ == nullptr && return this->notRunningStatusCoreCount_ == nullptr && return this->notRunningStatusCount_ == nullptr && return this->offlineInstanceCount_ == nullptr
        && return this->outMachineInstanceCount_ == nullptr && return this->pauseInstanceCount_ == nullptr && return this->regionCount_ == nullptr && return this->riskInstanceCoreCount_ == nullptr && return this->riskInstanceCount_ == nullptr
        && return this->tencentInstanceCount_ == nullptr && return this->testAssetCount_ == nullptr && return this->tripartiteInstanceCount_ == nullptr && return this->unKnowStatusInstanceCount_ == nullptr && return this->unprotectedInstanceCoreCount_ == nullptr
        && return this->unprotectedInstanceCount_ == nullptr && return this->volcengineInstanceCount_ == nullptr && return this->vpcCount_ == nullptr; };
    // aliYunInstanceCount Field Functions 
    bool hasAliYunInstanceCount() const { return this->aliYunInstanceCount_ != nullptr;};
    void deleteAliYunInstanceCount() { this->aliYunInstanceCount_ = nullptr;};
    inline int32_t aliYunInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(aliYunInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setAliYunInstanceCount(int32_t aliYunInstanceCount) { DARABONBA_PTR_SET_VALUE(aliYunInstanceCount_, aliYunInstanceCount) };


    // awsInstanceCount Field Functions 
    bool hasAwsInstanceCount() const { return this->awsInstanceCount_ != nullptr;};
    void deleteAwsInstanceCount() { this->awsInstanceCount_ = nullptr;};
    inline int32_t awsInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(awsInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setAwsInstanceCount(int32_t awsInstanceCount) { DARABONBA_PTR_SET_VALUE(awsInstanceCount_, awsInstanceCount) };


    // azureInstanceCount Field Functions 
    bool hasAzureInstanceCount() const { return this->azureInstanceCount_ != nullptr;};
    void deleteAzureInstanceCount() { this->azureInstanceCount_ = nullptr;};
    inline int32_t azureInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(azureInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setAzureInstanceCount(int32_t azureInstanceCount) { DARABONBA_PTR_SET_VALUE(azureInstanceCount_, azureInstanceCount) };


    // exposedInstanceCoreCount Field Functions 
    bool hasExposedInstanceCoreCount() const { return this->exposedInstanceCoreCount_ != nullptr;};
    void deleteExposedInstanceCoreCount() { this->exposedInstanceCoreCount_ = nullptr;};
    inline int64_t exposedInstanceCoreCount() const { DARABONBA_PTR_GET_DEFAULT(exposedInstanceCoreCount_, 0L) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setExposedInstanceCoreCount(int64_t exposedInstanceCoreCount) { DARABONBA_PTR_SET_VALUE(exposedInstanceCoreCount_, exposedInstanceCoreCount) };


    // exposedInstanceCount Field Functions 
    bool hasExposedInstanceCount() const { return this->exposedInstanceCount_ != nullptr;};
    void deleteExposedInstanceCount() { this->exposedInstanceCount_ = nullptr;};
    inline int32_t exposedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(exposedInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setExposedInstanceCount(int32_t exposedInstanceCount) { DARABONBA_PTR_SET_VALUE(exposedInstanceCount_, exposedInstanceCount) };


    // generalAssetCount Field Functions 
    bool hasGeneralAssetCount() const { return this->generalAssetCount_ != nullptr;};
    void deleteGeneralAssetCount() { this->generalAssetCount_ = nullptr;};
    inline int32_t generalAssetCount() const { DARABONBA_PTR_GET_DEFAULT(generalAssetCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setGeneralAssetCount(int32_t generalAssetCount) { DARABONBA_PTR_SET_VALUE(generalAssetCount_, generalAssetCount) };


    // googleInstanceCount Field Functions 
    bool hasGoogleInstanceCount() const { return this->googleInstanceCount_ != nullptr;};
    void deleteGoogleInstanceCount() { this->googleInstanceCount_ = nullptr;};
    inline int32_t googleInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(googleInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setGoogleInstanceCount(int32_t googleInstanceCount) { DARABONBA_PTR_SET_VALUE(googleInstanceCount_, googleInstanceCount) };


    // groupCount Field Functions 
    bool hasGroupCount() const { return this->groupCount_ != nullptr;};
    void deleteGroupCount() { this->groupCount_ = nullptr;};
    inline int32_t groupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setGroupCount(int32_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


    // huaweiInstanceCount Field Functions 
    bool hasHuaweiInstanceCount() const { return this->huaweiInstanceCount_ != nullptr;};
    void deleteHuaweiInstanceCount() { this->huaweiInstanceCount_ = nullptr;};
    inline int32_t huaweiInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(huaweiInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setHuaweiInstanceCount(int32_t huaweiInstanceCount) { DARABONBA_PTR_SET_VALUE(huaweiInstanceCount_, huaweiInstanceCount) };


    // idcInstanceCount Field Functions 
    bool hasIdcInstanceCount() const { return this->idcInstanceCount_ != nullptr;};
    void deleteIdcInstanceCount() { this->idcInstanceCount_ = nullptr;};
    inline int32_t idcInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(idcInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setIdcInstanceCount(int32_t idcInstanceCount) { DARABONBA_PTR_SET_VALUE(idcInstanceCount_, idcInstanceCount) };


    // importantAssetCount Field Functions 
    bool hasImportantAssetCount() const { return this->importantAssetCount_ != nullptr;};
    void deleteImportantAssetCount() { this->importantAssetCount_ = nullptr;};
    inline int32_t importantAssetCount() const { DARABONBA_PTR_GET_DEFAULT(importantAssetCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setImportantAssetCount(int32_t importantAssetCount) { DARABONBA_PTR_SET_VALUE(importantAssetCount_, importantAssetCount) };


    // instanceCoreCount Field Functions 
    bool hasInstanceCoreCount() const { return this->instanceCoreCount_ != nullptr;};
    void deleteInstanceCoreCount() { this->instanceCoreCount_ = nullptr;};
    inline int64_t instanceCoreCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCoreCount_, 0L) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setInstanceCoreCount(int64_t instanceCoreCount) { DARABONBA_PTR_SET_VALUE(instanceCoreCount_, instanceCoreCount) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceSyncTaskCount Field Functions 
    bool hasInstanceSyncTaskCount() const { return this->instanceSyncTaskCount_ != nullptr;};
    void deleteInstanceSyncTaskCount() { this->instanceSyncTaskCount_ = nullptr;};
    inline int32_t instanceSyncTaskCount() const { DARABONBA_PTR_GET_DEFAULT(instanceSyncTaskCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setInstanceSyncTaskCount(int32_t instanceSyncTaskCount) { DARABONBA_PTR_SET_VALUE(instanceSyncTaskCount_, instanceSyncTaskCount) };


    // newInstanceCoreCount Field Functions 
    bool hasNewInstanceCoreCount() const { return this->newInstanceCoreCount_ != nullptr;};
    void deleteNewInstanceCoreCount() { this->newInstanceCoreCount_ = nullptr;};
    inline int64_t newInstanceCoreCount() const { DARABONBA_PTR_GET_DEFAULT(newInstanceCoreCount_, 0L) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setNewInstanceCoreCount(int64_t newInstanceCoreCount) { DARABONBA_PTR_SET_VALUE(newInstanceCoreCount_, newInstanceCoreCount) };


    // newInstanceCount Field Functions 
    bool hasNewInstanceCount() const { return this->newInstanceCount_ != nullptr;};
    void deleteNewInstanceCount() { this->newInstanceCount_ = nullptr;};
    inline int32_t newInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(newInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setNewInstanceCount(int32_t newInstanceCount) { DARABONBA_PTR_SET_VALUE(newInstanceCount_, newInstanceCount) };


    // noRiskInstanceCount Field Functions 
    bool hasNoRiskInstanceCount() const { return this->noRiskInstanceCount_ != nullptr;};
    void deleteNoRiskInstanceCount() { this->noRiskInstanceCount_ = nullptr;};
    inline int32_t noRiskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(noRiskInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setNoRiskInstanceCount(int32_t noRiskInstanceCount) { DARABONBA_PTR_SET_VALUE(noRiskInstanceCount_, noRiskInstanceCount) };


    // notBindMachineInstanceCount Field Functions 
    bool hasNotBindMachineInstanceCount() const { return this->notBindMachineInstanceCount_ != nullptr;};
    void deleteNotBindMachineInstanceCount() { this->notBindMachineInstanceCount_ = nullptr;};
    inline int32_t notBindMachineInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(notBindMachineInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setNotBindMachineInstanceCount(int32_t notBindMachineInstanceCount) { DARABONBA_PTR_SET_VALUE(notBindMachineInstanceCount_, notBindMachineInstanceCount) };


    // notRunningStatusCoreCount Field Functions 
    bool hasNotRunningStatusCoreCount() const { return this->notRunningStatusCoreCount_ != nullptr;};
    void deleteNotRunningStatusCoreCount() { this->notRunningStatusCoreCount_ = nullptr;};
    inline int64_t notRunningStatusCoreCount() const { DARABONBA_PTR_GET_DEFAULT(notRunningStatusCoreCount_, 0L) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setNotRunningStatusCoreCount(int64_t notRunningStatusCoreCount) { DARABONBA_PTR_SET_VALUE(notRunningStatusCoreCount_, notRunningStatusCoreCount) };


    // notRunningStatusCount Field Functions 
    bool hasNotRunningStatusCount() const { return this->notRunningStatusCount_ != nullptr;};
    void deleteNotRunningStatusCount() { this->notRunningStatusCount_ = nullptr;};
    inline int32_t notRunningStatusCount() const { DARABONBA_PTR_GET_DEFAULT(notRunningStatusCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setNotRunningStatusCount(int32_t notRunningStatusCount) { DARABONBA_PTR_SET_VALUE(notRunningStatusCount_, notRunningStatusCount) };


    // offlineInstanceCount Field Functions 
    bool hasOfflineInstanceCount() const { return this->offlineInstanceCount_ != nullptr;};
    void deleteOfflineInstanceCount() { this->offlineInstanceCount_ = nullptr;};
    inline int32_t offlineInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(offlineInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setOfflineInstanceCount(int32_t offlineInstanceCount) { DARABONBA_PTR_SET_VALUE(offlineInstanceCount_, offlineInstanceCount) };


    // outMachineInstanceCount Field Functions 
    bool hasOutMachineInstanceCount() const { return this->outMachineInstanceCount_ != nullptr;};
    void deleteOutMachineInstanceCount() { this->outMachineInstanceCount_ = nullptr;};
    inline int32_t outMachineInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(outMachineInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setOutMachineInstanceCount(int32_t outMachineInstanceCount) { DARABONBA_PTR_SET_VALUE(outMachineInstanceCount_, outMachineInstanceCount) };


    // pauseInstanceCount Field Functions 
    bool hasPauseInstanceCount() const { return this->pauseInstanceCount_ != nullptr;};
    void deletePauseInstanceCount() { this->pauseInstanceCount_ = nullptr;};
    inline int32_t pauseInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(pauseInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setPauseInstanceCount(int32_t pauseInstanceCount) { DARABONBA_PTR_SET_VALUE(pauseInstanceCount_, pauseInstanceCount) };


    // regionCount Field Functions 
    bool hasRegionCount() const { return this->regionCount_ != nullptr;};
    void deleteRegionCount() { this->regionCount_ = nullptr;};
    inline int32_t regionCount() const { DARABONBA_PTR_GET_DEFAULT(regionCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setRegionCount(int32_t regionCount) { DARABONBA_PTR_SET_VALUE(regionCount_, regionCount) };


    // riskInstanceCoreCount Field Functions 
    bool hasRiskInstanceCoreCount() const { return this->riskInstanceCoreCount_ != nullptr;};
    void deleteRiskInstanceCoreCount() { this->riskInstanceCoreCount_ = nullptr;};
    inline int64_t riskInstanceCoreCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCoreCount_, 0L) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setRiskInstanceCoreCount(int64_t riskInstanceCoreCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCoreCount_, riskInstanceCoreCount) };


    // riskInstanceCount Field Functions 
    bool hasRiskInstanceCount() const { return this->riskInstanceCount_ != nullptr;};
    void deleteRiskInstanceCount() { this->riskInstanceCount_ = nullptr;};
    inline int32_t riskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setRiskInstanceCount(int32_t riskInstanceCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCount_, riskInstanceCount) };


    // tencentInstanceCount Field Functions 
    bool hasTencentInstanceCount() const { return this->tencentInstanceCount_ != nullptr;};
    void deleteTencentInstanceCount() { this->tencentInstanceCount_ = nullptr;};
    inline int32_t tencentInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(tencentInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setTencentInstanceCount(int32_t tencentInstanceCount) { DARABONBA_PTR_SET_VALUE(tencentInstanceCount_, tencentInstanceCount) };


    // testAssetCount Field Functions 
    bool hasTestAssetCount() const { return this->testAssetCount_ != nullptr;};
    void deleteTestAssetCount() { this->testAssetCount_ = nullptr;};
    inline int32_t testAssetCount() const { DARABONBA_PTR_GET_DEFAULT(testAssetCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setTestAssetCount(int32_t testAssetCount) { DARABONBA_PTR_SET_VALUE(testAssetCount_, testAssetCount) };


    // tripartiteInstanceCount Field Functions 
    bool hasTripartiteInstanceCount() const { return this->tripartiteInstanceCount_ != nullptr;};
    void deleteTripartiteInstanceCount() { this->tripartiteInstanceCount_ = nullptr;};
    inline int32_t tripartiteInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(tripartiteInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setTripartiteInstanceCount(int32_t tripartiteInstanceCount) { DARABONBA_PTR_SET_VALUE(tripartiteInstanceCount_, tripartiteInstanceCount) };


    // unKnowStatusInstanceCount Field Functions 
    bool hasUnKnowStatusInstanceCount() const { return this->unKnowStatusInstanceCount_ != nullptr;};
    void deleteUnKnowStatusInstanceCount() { this->unKnowStatusInstanceCount_ = nullptr;};
    inline int32_t unKnowStatusInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(unKnowStatusInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setUnKnowStatusInstanceCount(int32_t unKnowStatusInstanceCount) { DARABONBA_PTR_SET_VALUE(unKnowStatusInstanceCount_, unKnowStatusInstanceCount) };


    // unprotectedInstanceCoreCount Field Functions 
    bool hasUnprotectedInstanceCoreCount() const { return this->unprotectedInstanceCoreCount_ != nullptr;};
    void deleteUnprotectedInstanceCoreCount() { this->unprotectedInstanceCoreCount_ = nullptr;};
    inline int64_t unprotectedInstanceCoreCount() const { DARABONBA_PTR_GET_DEFAULT(unprotectedInstanceCoreCount_, 0L) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setUnprotectedInstanceCoreCount(int64_t unprotectedInstanceCoreCount) { DARABONBA_PTR_SET_VALUE(unprotectedInstanceCoreCount_, unprotectedInstanceCoreCount) };


    // unprotectedInstanceCount Field Functions 
    bool hasUnprotectedInstanceCount() const { return this->unprotectedInstanceCount_ != nullptr;};
    void deleteUnprotectedInstanceCount() { this->unprotectedInstanceCount_ = nullptr;};
    inline int32_t unprotectedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(unprotectedInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setUnprotectedInstanceCount(int32_t unprotectedInstanceCount) { DARABONBA_PTR_SET_VALUE(unprotectedInstanceCount_, unprotectedInstanceCount) };


    // volcengineInstanceCount Field Functions 
    bool hasVolcengineInstanceCount() const { return this->volcengineInstanceCount_ != nullptr;};
    void deleteVolcengineInstanceCount() { this->volcengineInstanceCount_ = nullptr;};
    inline int32_t volcengineInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(volcengineInstanceCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setVolcengineInstanceCount(int32_t volcengineInstanceCount) { DARABONBA_PTR_SET_VALUE(volcengineInstanceCount_, volcengineInstanceCount) };


    // vpcCount Field Functions 
    bool hasVpcCount() const { return this->vpcCount_ != nullptr;};
    void deleteVpcCount() { this->vpcCount_ = nullptr;};
    inline int32_t vpcCount() const { DARABONBA_PTR_GET_DEFAULT(vpcCount_, 0) };
    inline DescribeFieldStatisticsResponseBodyGroupedFields& setVpcCount(int32_t vpcCount) { DARABONBA_PTR_SET_VALUE(vpcCount_, vpcCount) };


  protected:
    // The number of assets that are deployed on Alibaba Cloud.
    std::shared_ptr<int32_t> aliYunInstanceCount_ = nullptr;
    // The number of servers.
    std::shared_ptr<int32_t> awsInstanceCount_ = nullptr;
    // The number of third-party cloud servers.
    std::shared_ptr<int32_t> azureInstanceCount_ = nullptr;
    // The number of cores of exposed assets.
    std::shared_ptr<int64_t> exposedInstanceCoreCount_ = nullptr;
    // The number of exposed servers.
    std::shared_ptr<int32_t> exposedInstanceCount_ = nullptr;
    // The number of assets whose importance is common.
    std::shared_ptr<int32_t> generalAssetCount_ = nullptr;
    // The number of instances that are provisioned by third-party providers.
    std::shared_ptr<int32_t> googleInstanceCount_ = nullptr;
    // The number of server groups.
    std::shared_ptr<int32_t> groupCount_ = nullptr;
    // The number of instances that are provisioned by third-party providers.
    std::shared_ptr<int32_t> huaweiInstanceCount_ = nullptr;
    // The number of assets that can be protected by Security Center.
    std::shared_ptr<int32_t> idcInstanceCount_ = nullptr;
    // The number of assets whose importance is important.
    std::shared_ptr<int32_t> importantAssetCount_ = nullptr;
    // The number of cores of assets in the specified asset type. If the asset type is not specified, the value of this parameter indicates the total number of cores of servers and Alibaba Cloud services within your account.
    std::shared_ptr<int64_t> instanceCoreCount_ = nullptr;
    // The total number of assets of the specified type. If no asset types are specified, this parameter indicates the total number of all servers and Alibaba Cloud services within your account.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The total number of tasks for the specified type of assets. If no asset types are specified, this parameter indicates the total number of all servers and Alibaba Cloud services within your account.
    std::shared_ptr<int32_t> instanceSyncTaskCount_ = nullptr;
    // The number of cores of new servers.
    std::shared_ptr<int64_t> newInstanceCoreCount_ = nullptr;
    // The number of newly added servers.
    std::shared_ptr<int32_t> newInstanceCount_ = nullptr;
    // The number of servers on which no risks are detected.
    std::shared_ptr<int32_t> noRiskInstanceCount_ = nullptr;
    // The number of assets that are not added to Security Center of the specified asset type.
    std::shared_ptr<int32_t> notBindMachineInstanceCount_ = nullptr;
    // The number of cores of servers that are not started.
    std::shared_ptr<int64_t> notRunningStatusCoreCount_ = nullptr;
    // The number of servers that are shut down.
    std::shared_ptr<int32_t> notRunningStatusCount_ = nullptr;
    // The number of servers whose Security Center agent status is Offline.
    std::shared_ptr<int32_t> offlineInstanceCount_ = nullptr;
    // The number of servers outside the cloud.
    std::shared_ptr<int32_t> outMachineInstanceCount_ = nullptr;
    // The number of servers for which the Security Center agent suspends protection.
    std::shared_ptr<int32_t> pauseInstanceCount_ = nullptr;
    // The number of regions to which the servers belong.
    std::shared_ptr<int32_t> regionCount_ = nullptr;
    // The number of cores of vulnerable assets.
    std::shared_ptr<int64_t> riskInstanceCoreCount_ = nullptr;
    // The number of assets that are at risk.
    std::shared_ptr<int32_t> riskInstanceCount_ = nullptr;
    // The total number of cloud services that are protected by Security Center.
    std::shared_ptr<int32_t> tencentInstanceCount_ = nullptr;
    // The number of assets whose importance is test.
    std::shared_ptr<int32_t> testAssetCount_ = nullptr;
    // The number of simple application servers.
    std::shared_ptr<int32_t> tripartiteInstanceCount_ = nullptr;
    // The number of servers that are in the Unknown state.
    std::shared_ptr<int32_t> unKnowStatusInstanceCount_ = nullptr;
    // The number of cores of unprotected assets.
    std::shared_ptr<int64_t> unprotectedInstanceCoreCount_ = nullptr;
    // The number of unprotected assets.
    std::shared_ptr<int32_t> unprotectedInstanceCount_ = nullptr;
    // The number of instances that are provisioned by third-party providers.
    std::shared_ptr<int32_t> volcengineInstanceCount_ = nullptr;
    // The number of virtual private clouds (VPCs).
    std::shared_ptr<int32_t> vpcCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
