// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIMODELKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIMODELKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class CreateMultiModelKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultiModelKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdbInstanceName, adbInstanceName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DbClusterAcu, dbClusterAcu_);
      DARABONBA_PTR_TO_JSON(LakeStorageBucketName, lakeStorageBucketName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceAcuMax, resourceAcuMax_);
      DARABONBA_PTR_TO_JSON(ResourceAcuMin, resourceAcuMin_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultiModelKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdbInstanceName, adbInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DbClusterAcu, dbClusterAcu_);
      DARABONBA_PTR_FROM_JSON(LakeStorageBucketName, lakeStorageBucketName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceAcuMax, resourceAcuMax_);
      DARABONBA_PTR_FROM_JSON(ResourceAcuMin, resourceAcuMin_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateMultiModelKnowledgeBaseRequest() = default ;
    CreateMultiModelKnowledgeBaseRequest(const CreateMultiModelKnowledgeBaseRequest &) = default ;
    CreateMultiModelKnowledgeBaseRequest(CreateMultiModelKnowledgeBaseRequest &&) = default ;
    CreateMultiModelKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultiModelKnowledgeBaseRequest() = default ;
    CreateMultiModelKnowledgeBaseRequest& operator=(const CreateMultiModelKnowledgeBaseRequest &) = default ;
    CreateMultiModelKnowledgeBaseRequest& operator=(CreateMultiModelKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adbInstanceName_ == nullptr
        && this->DBClusterId_ == nullptr && this->dbClusterAcu_ == nullptr && this->lakeStorageBucketName_ == nullptr && this->regionId_ == nullptr && this->resourceAcuMax_ == nullptr
        && this->resourceAcuMin_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // adbInstanceName Field Functions 
    bool hasAdbInstanceName() const { return this->adbInstanceName_ != nullptr;};
    void deleteAdbInstanceName() { this->adbInstanceName_ = nullptr;};
    inline string getAdbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(adbInstanceName_, "") };
    inline CreateMultiModelKnowledgeBaseRequest& setAdbInstanceName(string adbInstanceName) { DARABONBA_PTR_SET_VALUE(adbInstanceName_, adbInstanceName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateMultiModelKnowledgeBaseRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dbClusterAcu Field Functions 
    bool hasDbClusterAcu() const { return this->dbClusterAcu_ != nullptr;};
    void deleteDbClusterAcu() { this->dbClusterAcu_ = nullptr;};
    inline int32_t getDbClusterAcu() const { DARABONBA_PTR_GET_DEFAULT(dbClusterAcu_, 0) };
    inline CreateMultiModelKnowledgeBaseRequest& setDbClusterAcu(int32_t dbClusterAcu) { DARABONBA_PTR_SET_VALUE(dbClusterAcu_, dbClusterAcu) };


    // lakeStorageBucketName Field Functions 
    bool hasLakeStorageBucketName() const { return this->lakeStorageBucketName_ != nullptr;};
    void deleteLakeStorageBucketName() { this->lakeStorageBucketName_ = nullptr;};
    inline string getLakeStorageBucketName() const { DARABONBA_PTR_GET_DEFAULT(lakeStorageBucketName_, "") };
    inline CreateMultiModelKnowledgeBaseRequest& setLakeStorageBucketName(string lakeStorageBucketName) { DARABONBA_PTR_SET_VALUE(lakeStorageBucketName_, lakeStorageBucketName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMultiModelKnowledgeBaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceAcuMax Field Functions 
    bool hasResourceAcuMax() const { return this->resourceAcuMax_ != nullptr;};
    void deleteResourceAcuMax() { this->resourceAcuMax_ = nullptr;};
    inline int32_t getResourceAcuMax() const { DARABONBA_PTR_GET_DEFAULT(resourceAcuMax_, 0) };
    inline CreateMultiModelKnowledgeBaseRequest& setResourceAcuMax(int32_t resourceAcuMax) { DARABONBA_PTR_SET_VALUE(resourceAcuMax_, resourceAcuMax) };


    // resourceAcuMin Field Functions 
    bool hasResourceAcuMin() const { return this->resourceAcuMin_ != nullptr;};
    void deleteResourceAcuMin() { this->resourceAcuMin_ = nullptr;};
    inline int32_t getResourceAcuMin() const { DARABONBA_PTR_GET_DEFAULT(resourceAcuMin_, 0) };
    inline CreateMultiModelKnowledgeBaseRequest& setResourceAcuMin(int32_t resourceAcuMin) { DARABONBA_PTR_SET_VALUE(resourceAcuMin_, resourceAcuMin) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateMultiModelKnowledgeBaseRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateMultiModelKnowledgeBaseRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateMultiModelKnowledgeBaseRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> adbInstanceName_ {};
    // The instance cluster ID.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<int32_t> dbClusterAcu_ {};
    shared_ptr<string> lakeStorageBucketName_ {};
    // The region ID.
    // 
    // > You can call the DescribeRegions operation to query the region ID of a specified Data Lakehouse Edition cluster.
    shared_ptr<string> regionId_ {};
    shared_ptr<int32_t> resourceAcuMax_ {};
    shared_ptr<int32_t> resourceAcuMin_ {};
    shared_ptr<string> vSwitchId_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
