// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYMAINTENANCEPERIODREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYMAINTENANCEPERIODREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateGatewayMaintenancePeriodRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayMaintenancePeriodRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maintenancePeriod, maintenancePeriod_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayMaintenancePeriodRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maintenancePeriod, maintenancePeriod_);
    };
    UpdateGatewayMaintenancePeriodRequest() = default ;
    UpdateGatewayMaintenancePeriodRequest(const UpdateGatewayMaintenancePeriodRequest &) = default ;
    UpdateGatewayMaintenancePeriodRequest(UpdateGatewayMaintenancePeriodRequest &&) = default ;
    UpdateGatewayMaintenancePeriodRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayMaintenancePeriodRequest() = default ;
    UpdateGatewayMaintenancePeriodRequest& operator=(const UpdateGatewayMaintenancePeriodRequest &) = default ;
    UpdateGatewayMaintenancePeriodRequest& operator=(UpdateGatewayMaintenancePeriodRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MaintenancePeriod : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MaintenancePeriod& obj) { 
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, MaintenancePeriod& obj) { 
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      };
      MaintenancePeriod() = default ;
      MaintenancePeriod(const MaintenancePeriod &) = default ;
      MaintenancePeriod(MaintenancePeriod &&) = default ;
      MaintenancePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MaintenancePeriod() = default ;
      MaintenancePeriod& operator=(const MaintenancePeriod &) = default ;
      MaintenancePeriod& operator=(MaintenancePeriod &&) = default ;
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
      inline MaintenancePeriod& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline MaintenancePeriod& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<string> endTime_ {};
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->maintenancePeriod_ == nullptr; };
    // maintenancePeriod Field Functions 
    bool hasMaintenancePeriod() const { return this->maintenancePeriod_ != nullptr;};
    void deleteMaintenancePeriod() { this->maintenancePeriod_ = nullptr;};
    inline const UpdateGatewayMaintenancePeriodRequest::MaintenancePeriod & getMaintenancePeriod() const { DARABONBA_PTR_GET_CONST(maintenancePeriod_, UpdateGatewayMaintenancePeriodRequest::MaintenancePeriod) };
    inline UpdateGatewayMaintenancePeriodRequest::MaintenancePeriod getMaintenancePeriod() { DARABONBA_PTR_GET(maintenancePeriod_, UpdateGatewayMaintenancePeriodRequest::MaintenancePeriod) };
    inline UpdateGatewayMaintenancePeriodRequest& setMaintenancePeriod(const UpdateGatewayMaintenancePeriodRequest::MaintenancePeriod & maintenancePeriod) { DARABONBA_PTR_SET_VALUE(maintenancePeriod_, maintenancePeriod) };
    inline UpdateGatewayMaintenancePeriodRequest& setMaintenancePeriod(UpdateGatewayMaintenancePeriodRequest::MaintenancePeriod && maintenancePeriod) { DARABONBA_PTR_SET_RVALUE(maintenancePeriod_, maintenancePeriod) };


  protected:
    shared_ptr<UpdateGatewayMaintenancePeriodRequest::MaintenancePeriod> maintenancePeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
