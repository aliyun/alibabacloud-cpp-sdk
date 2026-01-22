// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class UpgradeDBInstanceKernelVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBInstanceKernelVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SwitchMode, switchMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDBInstanceKernelVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SwitchMode, switchMode_);
    };
    UpgradeDBInstanceKernelVersionRequest() = default ;
    UpgradeDBInstanceKernelVersionRequest(const UpgradeDBInstanceKernelVersionRequest &) = default ;
    UpgradeDBInstanceKernelVersionRequest(UpgradeDBInstanceKernelVersionRequest &&) = default ;
    UpgradeDBInstanceKernelVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDBInstanceKernelVersionRequest() = default ;
    UpgradeDBInstanceKernelVersionRequest& operator=(const UpgradeDBInstanceKernelVersionRequest &) = default ;
    UpgradeDBInstanceKernelVersionRequest& operator=(UpgradeDBInstanceKernelVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->minorVersion_ == nullptr && this->regionId_ == nullptr && this->switchMode_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // switchMode Field Functions 
    bool hasSwitchMode() const { return this->switchMode_ != nullptr;};
    void deleteSwitchMode() { this->switchMode_ = nullptr;};
    inline string getSwitchMode() const { DARABONBA_PTR_GET_DEFAULT(switchMode_, "") };
    inline UpgradeDBInstanceKernelVersionRequest& setSwitchMode(string switchMode) { DARABONBA_PTR_SET_VALUE(switchMode_, switchMode) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> minorVersion_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> switchMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
