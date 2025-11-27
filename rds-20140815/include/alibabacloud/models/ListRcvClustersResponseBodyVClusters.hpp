// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRCVCLUSTERSRESPONSEBODYVCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_LISTRCVCLUSTERSRESPONSEBODYVCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ListRCVClustersResponseBodyVClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRCVClustersResponseBodyVClusters& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SupportDiskPerformanceLevel, supportDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRCVClustersResponseBodyVClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SupportDiskPerformanceLevel, supportDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListRCVClustersResponseBodyVClusters() = default ;
    ListRCVClustersResponseBodyVClusters(const ListRCVClustersResponseBodyVClusters &) = default ;
    ListRCVClustersResponseBodyVClusters(ListRCVClustersResponseBodyVClusters &&) = default ;
    ListRCVClustersResponseBodyVClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRCVClustersResponseBodyVClusters() = default ;
    ListRCVClustersResponseBodyVClusters& operator=(const ListRCVClustersResponseBodyVClusters &) = default ;
    ListRCVClustersResponseBodyVClusters& operator=(ListRCVClustersResponseBodyVClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->instanceCount_ == nullptr && return this->regionId_ == nullptr && return this->supportDiskPerformanceLevel_ == nullptr && return this->vpcId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListRCVClustersResponseBodyVClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int64_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
    inline ListRCVClustersResponseBodyVClusters& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListRCVClustersResponseBodyVClusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supportDiskPerformanceLevel Field Functions 
    bool hasSupportDiskPerformanceLevel() const { return this->supportDiskPerformanceLevel_ != nullptr;};
    void deleteSupportDiskPerformanceLevel() { this->supportDiskPerformanceLevel_ = nullptr;};
    inline const vector<string> & supportDiskPerformanceLevel() const { DARABONBA_PTR_GET_CONST(supportDiskPerformanceLevel_, vector<string>) };
    inline vector<string> supportDiskPerformanceLevel() { DARABONBA_PTR_GET(supportDiskPerformanceLevel_, vector<string>) };
    inline ListRCVClustersResponseBodyVClusters& setSupportDiskPerformanceLevel(const vector<string> & supportDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(supportDiskPerformanceLevel_, supportDiskPerformanceLevel) };
    inline ListRCVClustersResponseBodyVClusters& setSupportDiskPerformanceLevel(vector<string> && supportDiskPerformanceLevel) { DARABONBA_PTR_SET_RVALUE(supportDiskPerformanceLevel_, supportDiskPerformanceLevel) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListRCVClustersResponseBodyVClusters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<int64_t> instanceCount_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<string>> supportDiskPerformanceLevel_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
