// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class CreateVirtualClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveClusterId, activeClusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StandbyClusterId, standbyClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveClusterId, activeClusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StandbyClusterId, standbyClusterId_);
    };
    CreateVirtualClusterRequest() = default ;
    CreateVirtualClusterRequest(const CreateVirtualClusterRequest &) = default ;
    CreateVirtualClusterRequest(CreateVirtualClusterRequest &&) = default ;
    CreateVirtualClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualClusterRequest() = default ;
    CreateVirtualClusterRequest& operator=(const CreateVirtualClusterRequest &) = default ;
    CreateVirtualClusterRequest& operator=(CreateVirtualClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeClusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->DBInstanceId_ == nullptr && return this->regionId_ == nullptr && return this->standbyClusterId_ == nullptr; };
    // activeClusterId Field Functions 
    bool hasActiveClusterId() const { return this->activeClusterId_ != nullptr;};
    void deleteActiveClusterId() { this->activeClusterId_ = nullptr;};
    inline string activeClusterId() const { DARABONBA_PTR_GET_DEFAULT(activeClusterId_, "") };
    inline CreateVirtualClusterRequest& setActiveClusterId(string activeClusterId) { DARABONBA_PTR_SET_VALUE(activeClusterId_, activeClusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateVirtualClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateVirtualClusterRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVirtualClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // standbyClusterId Field Functions 
    bool hasStandbyClusterId() const { return this->standbyClusterId_ != nullptr;};
    void deleteStandbyClusterId() { this->standbyClusterId_ = nullptr;};
    inline string standbyClusterId() const { DARABONBA_PTR_GET_DEFAULT(standbyClusterId_, "") };
    inline CreateVirtualClusterRequest& setStandbyClusterId(string standbyClusterId) { DARABONBA_PTR_SET_VALUE(standbyClusterId_, standbyClusterId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> activeClusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> standbyClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
