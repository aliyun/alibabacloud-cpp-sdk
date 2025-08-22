// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetClusterResponseBodyDataVSwitches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetClusterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(InternetDomain, internetDomain_);
      DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_TO_JSON(JobNum, jobNum_);
      DARABONBA_PTR_TO_JSON(KubeConfig, kubeConfig_);
      DARABONBA_PTR_TO_JSON(MaxJobNum, maxJobNum_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Spm, spm_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(VersionLifecycle, versionLifecycle_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkerNum, workerNum_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(InternetDomain, internetDomain_);
      DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_FROM_JSON(JobNum, jobNum_);
      DARABONBA_PTR_FROM_JSON(KubeConfig, kubeConfig_);
      DARABONBA_PTR_FROM_JSON(MaxJobNum, maxJobNum_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Spm, spm_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(VersionLifecycle, versionLifecycle_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkerNum, workerNum_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    GetClusterResponseBodyData() = default ;
    GetClusterResponseBodyData(const GetClusterResponseBodyData &) = default ;
    GetClusterResponseBodyData(GetClusterResponseBodyData &&) = default ;
    GetClusterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBodyData() = default ;
    GetClusterResponseBodyData& operator=(const GetClusterResponseBodyData &) = default ;
    GetClusterResponseBodyData& operator=(GetClusterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->clusterSpec_ != nullptr && this->createTime_ != nullptr && this->endTime_ != nullptr
        && this->engineType_ != nullptr && this->engineVersion_ != nullptr && this->internetDomain_ != nullptr && this->intranetDomain_ != nullptr && this->jobNum_ != nullptr
        && this->kubeConfig_ != nullptr && this->maxJobNum_ != nullptr && this->productType_ != nullptr && this->spm_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr && this->vSwitches_ != nullptr && this->versionLifecycle_ != nullptr && this->vpcId_ != nullptr && this->workerNum_ != nullptr
        && this->zones_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetClusterResponseBodyData& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetClusterResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string clusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline GetClusterResponseBodyData& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetClusterResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetClusterResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline GetClusterResponseBodyData& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline GetClusterResponseBodyData& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // internetDomain Field Functions 
    bool hasInternetDomain() const { return this->internetDomain_ != nullptr;};
    void deleteInternetDomain() { this->internetDomain_ = nullptr;};
    inline string internetDomain() const { DARABONBA_PTR_GET_DEFAULT(internetDomain_, "") };
    inline GetClusterResponseBodyData& setInternetDomain(string internetDomain) { DARABONBA_PTR_SET_VALUE(internetDomain_, internetDomain) };


    // intranetDomain Field Functions 
    bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
    void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
    inline string intranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
    inline GetClusterResponseBodyData& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


    // jobNum Field Functions 
    bool hasJobNum() const { return this->jobNum_ != nullptr;};
    void deleteJobNum() { this->jobNum_ = nullptr;};
    inline int32_t jobNum() const { DARABONBA_PTR_GET_DEFAULT(jobNum_, 0) };
    inline GetClusterResponseBodyData& setJobNum(int32_t jobNum) { DARABONBA_PTR_SET_VALUE(jobNum_, jobNum) };


    // kubeConfig Field Functions 
    bool hasKubeConfig() const { return this->kubeConfig_ != nullptr;};
    void deleteKubeConfig() { this->kubeConfig_ = nullptr;};
    inline string kubeConfig() const { DARABONBA_PTR_GET_DEFAULT(kubeConfig_, "") };
    inline GetClusterResponseBodyData& setKubeConfig(string kubeConfig) { DARABONBA_PTR_SET_VALUE(kubeConfig_, kubeConfig) };


    // maxJobNum Field Functions 
    bool hasMaxJobNum() const { return this->maxJobNum_ != nullptr;};
    void deleteMaxJobNum() { this->maxJobNum_ = nullptr;};
    inline int32_t maxJobNum() const { DARABONBA_PTR_GET_DEFAULT(maxJobNum_, 0) };
    inline GetClusterResponseBodyData& setMaxJobNum(int32_t maxJobNum) { DARABONBA_PTR_SET_VALUE(maxJobNum_, maxJobNum) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline int32_t productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0) };
    inline GetClusterResponseBodyData& setProductType(int32_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // spm Field Functions 
    bool hasSpm() const { return this->spm_ != nullptr;};
    void deleteSpm() { this->spm_ = nullptr;};
    inline int32_t spm() const { DARABONBA_PTR_GET_DEFAULT(spm_, 0) };
    inline GetClusterResponseBodyData& setSpm(int32_t spm) { DARABONBA_PTR_SET_VALUE(spm_, spm) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetClusterResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline GetClusterResponseBodyData& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline GetClusterResponseBodyData& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<Models::GetClusterResponseBodyDataVSwitches> & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<Models::GetClusterResponseBodyDataVSwitches>) };
    inline vector<Models::GetClusterResponseBodyDataVSwitches> vSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<Models::GetClusterResponseBodyDataVSwitches>) };
    inline GetClusterResponseBodyData& setVSwitches(const vector<Models::GetClusterResponseBodyDataVSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline GetClusterResponseBodyData& setVSwitches(vector<Models::GetClusterResponseBodyDataVSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // versionLifecycle Field Functions 
    bool hasVersionLifecycle() const { return this->versionLifecycle_ != nullptr;};
    void deleteVersionLifecycle() { this->versionLifecycle_ = nullptr;};
    inline string versionLifecycle() const { DARABONBA_PTR_GET_DEFAULT(versionLifecycle_, "") };
    inline GetClusterResponseBodyData& setVersionLifecycle(string versionLifecycle) { DARABONBA_PTR_SET_VALUE(versionLifecycle_, versionLifecycle) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetClusterResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workerNum Field Functions 
    bool hasWorkerNum() const { return this->workerNum_ != nullptr;};
    void deleteWorkerNum() { this->workerNum_ = nullptr;};
    inline int32_t workerNum() const { DARABONBA_PTR_GET_DEFAULT(workerNum_, 0) };
    inline GetClusterResponseBodyData& setWorkerNum(int32_t workerNum) { DARABONBA_PTR_SET_VALUE(workerNum_, workerNum) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<string> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<string>) };
    inline vector<string> zones() { DARABONBA_PTR_GET(zones_, vector<string>) };
    inline GetClusterResponseBodyData& setZones(const vector<string> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline GetClusterResponseBodyData& setZones(vector<string> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<string> clusterSpec_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> engineType_ = nullptr;
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<string> internetDomain_ = nullptr;
    std::shared_ptr<string> intranetDomain_ = nullptr;
    std::shared_ptr<int32_t> jobNum_ = nullptr;
    std::shared_ptr<string> kubeConfig_ = nullptr;
    std::shared_ptr<int32_t> maxJobNum_ = nullptr;
    std::shared_ptr<int32_t> productType_ = nullptr;
    std::shared_ptr<int32_t> spm_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    Darabonba::Json tags_ = nullptr;
    std::shared_ptr<vector<Models::GetClusterResponseBodyDataVSwitches>> vSwitches_ = nullptr;
    std::shared_ptr<string> versionLifecycle_ = nullptr;
    // VPC ID
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<int32_t> workerNum_ = nullptr;
    std::shared_ptr<vector<string>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
