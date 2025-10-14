// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECDCVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECDCVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class UpgradeCDCVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeCDCVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdcDbVersion, cdcDbVersion_);
      DARABONBA_PTR_TO_JSON(CdcMinorVersion, cdcMinorVersion_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SwitchMode, switchMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeCDCVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdcDbVersion, cdcDbVersion_);
      DARABONBA_PTR_FROM_JSON(CdcMinorVersion, cdcMinorVersion_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SwitchMode, switchMode_);
    };
    UpgradeCDCVersionRequest() = default ;
    UpgradeCDCVersionRequest(const UpgradeCDCVersionRequest &) = default ;
    UpgradeCDCVersionRequest(UpgradeCDCVersionRequest &&) = default ;
    UpgradeCDCVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeCDCVersionRequest() = default ;
    UpgradeCDCVersionRequest& operator=(const UpgradeCDCVersionRequest &) = default ;
    UpgradeCDCVersionRequest& operator=(UpgradeCDCVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdcDbVersion_ == nullptr
        && return this->cdcMinorVersion_ == nullptr && return this->DBInstanceName_ == nullptr && return this->instanceName_ == nullptr && return this->regionId_ == nullptr && return this->switchMode_ == nullptr; };
    // cdcDbVersion Field Functions 
    bool hasCdcDbVersion() const { return this->cdcDbVersion_ != nullptr;};
    void deleteCdcDbVersion() { this->cdcDbVersion_ = nullptr;};
    inline string cdcDbVersion() const { DARABONBA_PTR_GET_DEFAULT(cdcDbVersion_, "") };
    inline UpgradeCDCVersionRequest& setCdcDbVersion(string cdcDbVersion) { DARABONBA_PTR_SET_VALUE(cdcDbVersion_, cdcDbVersion) };


    // cdcMinorVersion Field Functions 
    bool hasCdcMinorVersion() const { return this->cdcMinorVersion_ != nullptr;};
    void deleteCdcMinorVersion() { this->cdcMinorVersion_ = nullptr;};
    inline string cdcMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(cdcMinorVersion_, "") };
    inline UpgradeCDCVersionRequest& setCdcMinorVersion(string cdcMinorVersion) { DARABONBA_PTR_SET_VALUE(cdcMinorVersion_, cdcMinorVersion) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline UpgradeCDCVersionRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpgradeCDCVersionRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeCDCVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // switchMode Field Functions 
    bool hasSwitchMode() const { return this->switchMode_ != nullptr;};
    void deleteSwitchMode() { this->switchMode_ = nullptr;};
    inline string switchMode() const { DARABONBA_PTR_GET_DEFAULT(switchMode_, "") };
    inline UpgradeCDCVersionRequest& setSwitchMode(string switchMode) { DARABONBA_PTR_SET_VALUE(switchMode_, switchMode) };


  protected:
    std::shared_ptr<string> cdcDbVersion_ = nullptr;
    std::shared_ptr<string> cdcMinorVersion_ = nullptr;
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> switchMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
