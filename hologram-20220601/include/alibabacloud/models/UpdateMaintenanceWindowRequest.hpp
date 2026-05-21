// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMAINTENANCEWINDOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMAINTENANCEWINDOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class UpdateMaintenanceWindowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMaintenanceWindowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMaintenanceWindowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    UpdateMaintenanceWindowRequest() = default ;
    UpdateMaintenanceWindowRequest(const UpdateMaintenanceWindowRequest &) = default ;
    UpdateMaintenanceWindowRequest(UpdateMaintenanceWindowRequest &&) = default ;
    UpdateMaintenanceWindowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMaintenanceWindowRequest() = default ;
    UpdateMaintenanceWindowRequest& operator=(const UpdateMaintenanceWindowRequest &) = default ;
    UpdateMaintenanceWindowRequest& operator=(UpdateMaintenanceWindowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateMaintenanceWindowRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateMaintenanceWindowRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
