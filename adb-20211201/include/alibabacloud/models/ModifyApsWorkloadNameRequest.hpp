// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPSWORKLOADNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPSWORKLOADNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyApsWorkloadNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApsWorkloadNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WorkloadId, workloadId_);
      DARABONBA_PTR_TO_JSON(WorkloadName, workloadName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApsWorkloadNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WorkloadId, workloadId_);
      DARABONBA_PTR_FROM_JSON(WorkloadName, workloadName_);
    };
    ModifyApsWorkloadNameRequest() = default ;
    ModifyApsWorkloadNameRequest(const ModifyApsWorkloadNameRequest &) = default ;
    ModifyApsWorkloadNameRequest(ModifyApsWorkloadNameRequest &&) = default ;
    ModifyApsWorkloadNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApsWorkloadNameRequest() = default ;
    ModifyApsWorkloadNameRequest& operator=(const ModifyApsWorkloadNameRequest &) = default ;
    ModifyApsWorkloadNameRequest& operator=(ModifyApsWorkloadNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->regionId_ != nullptr && this->workloadId_ != nullptr && this->workloadName_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyApsWorkloadNameRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApsWorkloadNameRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workloadId Field Functions 
    bool hasWorkloadId() const { return this->workloadId_ != nullptr;};
    void deleteWorkloadId() { this->workloadId_ = nullptr;};
    inline string workloadId() const { DARABONBA_PTR_GET_DEFAULT(workloadId_, "") };
    inline ModifyApsWorkloadNameRequest& setWorkloadId(string workloadId) { DARABONBA_PTR_SET_VALUE(workloadId_, workloadId) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string workloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline ModifyApsWorkloadNameRequest& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The job ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workloadId_ = nullptr;
    // The name of the workload.
    // 
    // This parameter is required.
    std::shared_ptr<string> workloadName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
