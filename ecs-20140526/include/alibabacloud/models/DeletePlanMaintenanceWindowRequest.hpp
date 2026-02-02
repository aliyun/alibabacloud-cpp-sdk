// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPLANMAINTENANCEWINDOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPLANMAINTENANCEWINDOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeletePlanMaintenanceWindowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePlanMaintenanceWindowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PlanWindowId, planWindowId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePlanMaintenanceWindowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PlanWindowId, planWindowId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeletePlanMaintenanceWindowRequest() = default ;
    DeletePlanMaintenanceWindowRequest(const DeletePlanMaintenanceWindowRequest &) = default ;
    DeletePlanMaintenanceWindowRequest(DeletePlanMaintenanceWindowRequest &&) = default ;
    DeletePlanMaintenanceWindowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePlanMaintenanceWindowRequest() = default ;
    DeletePlanMaintenanceWindowRequest& operator=(const DeletePlanMaintenanceWindowRequest &) = default ;
    DeletePlanMaintenanceWindowRequest& operator=(DeletePlanMaintenanceWindowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->planWindowId_ == nullptr
        && this->regionId_ == nullptr; };
    // planWindowId Field Functions 
    bool hasPlanWindowId() const { return this->planWindowId_ != nullptr;};
    void deletePlanWindowId() { this->planWindowId_ = nullptr;};
    inline string getPlanWindowId() const { DARABONBA_PTR_GET_DEFAULT(planWindowId_, "") };
    inline DeletePlanMaintenanceWindowRequest& setPlanWindowId(string planWindowId) { DARABONBA_PTR_SET_VALUE(planWindowId_, planWindowId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeletePlanMaintenanceWindowRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> planWindowId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
