// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterArchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterArchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(HotStandbyCluster, hotStandbyCluster_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StandbyAZ, standbyAZ_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterArchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(HotStandbyCluster, hotStandbyCluster_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StandbyAZ, standbyAZ_);
    };
    ModifyDBClusterArchRequest() = default ;
    ModifyDBClusterArchRequest(const ModifyDBClusterArchRequest &) = default ;
    ModifyDBClusterArchRequest(ModifyDBClusterArchRequest &&) = default ;
    ModifyDBClusterArchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterArchRequest() = default ;
    ModifyDBClusterArchRequest& operator=(const ModifyDBClusterArchRequest &) = default ;
    ModifyDBClusterArchRequest& operator=(ModifyDBClusterArchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->hotStandbyCluster_ == nullptr && return this->regionId_ == nullptr && return this->standbyAZ_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterArchRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // hotStandbyCluster Field Functions 
    bool hasHotStandbyCluster() const { return this->hotStandbyCluster_ != nullptr;};
    void deleteHotStandbyCluster() { this->hotStandbyCluster_ = nullptr;};
    inline string hotStandbyCluster() const { DARABONBA_PTR_GET_DEFAULT(hotStandbyCluster_, "") };
    inline ModifyDBClusterArchRequest& setHotStandbyCluster(string hotStandbyCluster) { DARABONBA_PTR_SET_VALUE(hotStandbyCluster_, hotStandbyCluster) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDBClusterArchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // standbyAZ Field Functions 
    bool hasStandbyAZ() const { return this->standbyAZ_ != nullptr;};
    void deleteStandbyAZ() { this->standbyAZ_ = nullptr;};
    inline string standbyAZ() const { DARABONBA_PTR_GET_DEFAULT(standbyAZ_, "") };
    inline ModifyDBClusterArchRequest& setStandbyAZ(string standbyAZ) { DARABONBA_PTR_SET_VALUE(standbyAZ_, standbyAZ) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to enable the hot standby storage cluster feature. Valid values:
    // 
    // *   **on**: enables hot standby storage cluster.
    // *   **equal**: Enable a peer-to-peer cluster.
    std::shared_ptr<string> hotStandbyCluster_ = nullptr;
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query information about regions.
    std::shared_ptr<string> regionId_ = nullptr;
    // The zone of the hot standby storage cluster. Valid values:
    // 
    // *   **auto** (default): The zone is automatically selected.
    // 
    // >  You can use the default value when HotStandbyCluster is set to on. If HotStandbyCluster is set to equal, specify the zone of the hot standby storage cluster. You can call the [DescribeZones](https://help.aliyun.com/document_detail/98041.html) operation to query information about zones.
    std::shared_ptr<string> standbyAZ_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
