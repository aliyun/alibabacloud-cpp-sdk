// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSYNCJOBREQUESTSOURCEDBCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSYNCJOBREQUESTSOURCEDBCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class ModifySyncJobRequestSourceDBCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySyncJobRequestSourceDBCluster& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySyncJobRequestSourceDBCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifySyncJobRequestSourceDBCluster() = default ;
    ModifySyncJobRequestSourceDBCluster(const ModifySyncJobRequestSourceDBCluster &) = default ;
    ModifySyncJobRequestSourceDBCluster(ModifySyncJobRequestSourceDBCluster &&) = default ;
    ModifySyncJobRequestSourceDBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySyncJobRequestSourceDBCluster() = default ;
    ModifySyncJobRequestSourceDBCluster& operator=(const ModifySyncJobRequestSourceDBCluster &) = default ;
    ModifySyncJobRequestSourceDBCluster& operator=(ModifySyncJobRequestSourceDBCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterIds_ != nullptr
        && this->jobId_ != nullptr && this->operateType_ != nullptr && this->regionId_ != nullptr && this->type_ != nullptr; };
    // clusterIds Field Functions 
    bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
    void deleteClusterIds() { this->clusterIds_ = nullptr;};
    inline string clusterIds() const { DARABONBA_PTR_GET_DEFAULT(clusterIds_, "") };
    inline ModifySyncJobRequestSourceDBCluster& setClusterIds(string clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ModifySyncJobRequestSourceDBCluster& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline ModifySyncJobRequestSourceDBCluster& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySyncJobRequestSourceDBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifySyncJobRequestSourceDBCluster& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the source instance or cluster. Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterIds_ = nullptr;
    // The ID of the synchronization job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The operation type.
    // 
    // Valid values:
    // 
    // *   Create
    // *   Modify
    // 
    // This parameter is required.
    std::shared_ptr<string> operateType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The source database type.
    // 
    // Valid values:
    // 
    // *   rds: ApsaraDB RDS.
    // *   sls: Simple Log Service.
    // *   polardb: PolarDB.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
