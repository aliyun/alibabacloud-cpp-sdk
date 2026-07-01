// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTICDBCOMPUTECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTICDBCOMPUTECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteAgenticDBComputeClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgenticDBComputeClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeClusterId, computeClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgenticDBComputeClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeClusterId, computeClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteAgenticDBComputeClusterRequest() = default ;
    DeleteAgenticDBComputeClusterRequest(const DeleteAgenticDBComputeClusterRequest &) = default ;
    DeleteAgenticDBComputeClusterRequest(DeleteAgenticDBComputeClusterRequest &&) = default ;
    DeleteAgenticDBComputeClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgenticDBComputeClusterRequest() = default ;
    DeleteAgenticDBComputeClusterRequest& operator=(const DeleteAgenticDBComputeClusterRequest &) = default ;
    DeleteAgenticDBComputeClusterRequest& operator=(DeleteAgenticDBComputeClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeClusterId_ == nullptr
        && this->DBClusterId_ == nullptr && this->regionId_ == nullptr; };
    // computeClusterId Field Functions 
    bool hasComputeClusterId() const { return this->computeClusterId_ != nullptr;};
    void deleteComputeClusterId() { this->computeClusterId_ = nullptr;};
    inline string getComputeClusterId() const { DARABONBA_PTR_GET_DEFAULT(computeClusterId_, "") };
    inline DeleteAgenticDBComputeClusterRequest& setComputeClusterId(string computeClusterId) { DARABONBA_PTR_SET_VALUE(computeClusterId_, computeClusterId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteAgenticDBComputeClusterRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAgenticDBComputeClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> computeClusterId_ {};
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
