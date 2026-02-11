// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class StopAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, StopAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    StopAlertRequest() = default ;
    StopAlertRequest(const StopAlertRequest &) = default ;
    StopAlertRequest(StopAlertRequest &&) = default ;
    StopAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopAlertRequest() = default ;
    StopAlertRequest& operator=(const StopAlertRequest &) = default ;
    StopAlertRequest& operator=(StopAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertId_ == nullptr
        && this->regionId_ == nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline string getAlertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, "") };
    inline StopAlertRequest& setAlertId(string alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StopAlertRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> alertId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
