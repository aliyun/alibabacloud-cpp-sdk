// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALIGNSTORAGEPRIMARYAZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALIGNSTORAGEPRIMARYAZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class AlignStoragePrimaryAzoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlignStoragePrimaryAzoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StorageInstanceName, storageInstanceName_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(SwitchTimeMode, switchTimeMode_);
    };
    friend void from_json(const Darabonba::Json& j, AlignStoragePrimaryAzoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StorageInstanceName, storageInstanceName_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(SwitchTimeMode, switchTimeMode_);
    };
    AlignStoragePrimaryAzoneRequest() = default ;
    AlignStoragePrimaryAzoneRequest(const AlignStoragePrimaryAzoneRequest &) = default ;
    AlignStoragePrimaryAzoneRequest(AlignStoragePrimaryAzoneRequest &&) = default ;
    AlignStoragePrimaryAzoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlignStoragePrimaryAzoneRequest() = default ;
    AlignStoragePrimaryAzoneRequest& operator=(const AlignStoragePrimaryAzoneRequest &) = default ;
    AlignStoragePrimaryAzoneRequest& operator=(AlignStoragePrimaryAzoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && return this->regionId_ == nullptr && return this->storageInstanceName_ == nullptr && return this->switchTime_ == nullptr && return this->switchTimeMode_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline AlignStoragePrimaryAzoneRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AlignStoragePrimaryAzoneRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // storageInstanceName Field Functions 
    bool hasStorageInstanceName() const { return this->storageInstanceName_ != nullptr;};
    void deleteStorageInstanceName() { this->storageInstanceName_ = nullptr;};
    inline string storageInstanceName() const { DARABONBA_PTR_GET_DEFAULT(storageInstanceName_, "") };
    inline AlignStoragePrimaryAzoneRequest& setStorageInstanceName(string storageInstanceName) { DARABONBA_PTR_SET_VALUE(storageInstanceName_, storageInstanceName) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string switchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline AlignStoragePrimaryAzoneRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // switchTimeMode Field Functions 
    bool hasSwitchTimeMode() const { return this->switchTimeMode_ != nullptr;};
    void deleteSwitchTimeMode() { this->switchTimeMode_ = nullptr;};
    inline string switchTimeMode() const { DARABONBA_PTR_GET_DEFAULT(switchTimeMode_, "") };
    inline AlignStoragePrimaryAzoneRequest& setSwitchTimeMode(string switchTimeMode) { DARABONBA_PTR_SET_VALUE(switchTimeMode_, switchTimeMode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> storageInstanceName_ = nullptr;
    std::shared_ptr<string> switchTime_ = nullptr;
    std::shared_ptr<string> switchTimeMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
