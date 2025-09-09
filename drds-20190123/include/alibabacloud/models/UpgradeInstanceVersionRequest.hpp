// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEINSTANCEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEINSTANCEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class UpgradeInstanceVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeInstanceVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Rpm, rpm_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeInstanceVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Rpm, rpm_);
    };
    UpgradeInstanceVersionRequest() = default ;
    UpgradeInstanceVersionRequest(const UpgradeInstanceVersionRequest &) = default ;
    UpgradeInstanceVersionRequest(UpgradeInstanceVersionRequest &&) = default ;
    UpgradeInstanceVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeInstanceVersionRequest() = default ;
    UpgradeInstanceVersionRequest& operator=(const UpgradeInstanceVersionRequest &) = default ;
    UpgradeInstanceVersionRequest& operator=(UpgradeInstanceVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drdsInstanceId_ != nullptr
        && this->regionId_ != nullptr && this->rpm_ != nullptr; };
    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline UpgradeInstanceVersionRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeInstanceVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rpm Field Functions 
    bool hasRpm() const { return this->rpm_ != nullptr;};
    void deleteRpm() { this->rpm_ = nullptr;};
    inline string rpm() const { DARABONBA_PTR_GET_DEFAULT(rpm_, "") };
    inline UpgradeInstanceVersionRequest& setRpm(string rpm) { DARABONBA_PTR_SET_VALUE(rpm_, rpm) };


  protected:
    // The ID of the PolarDB-X 1.0 instance that you want to upgrade.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The version number of the PolarDB-X 1.0 instance. You can leave this parameter unspecified.
    std::shared_ptr<string> rpm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
