// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBAKDATASOURCESTORAGEACCESSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBAKDATASOURCESTORAGEACCESSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeBakDataSourceStorageAccessInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBakDataSourceStorageAccessInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBakDataSourceStorageAccessInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    DescribeBakDataSourceStorageAccessInfoRequest() = default ;
    DescribeBakDataSourceStorageAccessInfoRequest(const DescribeBakDataSourceStorageAccessInfoRequest &) = default ;
    DescribeBakDataSourceStorageAccessInfoRequest(DescribeBakDataSourceStorageAccessInfoRequest &&) = default ;
    DescribeBakDataSourceStorageAccessInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBakDataSourceStorageAccessInfoRequest() = default ;
    DescribeBakDataSourceStorageAccessInfoRequest& operator=(const DescribeBakDataSourceStorageAccessInfoRequest &) = default ;
    DescribeBakDataSourceStorageAccessInfoRequest& operator=(DescribeBakDataSourceStorageAccessInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetId_ == nullptr
        && this->backupType_ == nullptr && this->clientToken_ == nullptr && this->dataSourceId_ == nullptr && this->durationSeconds_ == nullptr && this->regionCode_ == nullptr
        && this->regionId_ == nullptr && this->storageType_ == nullptr; };
    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline DescribeBakDataSourceStorageAccessInfoRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeBakDataSourceStorageAccessInfoRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeBakDataSourceStorageAccessInfoRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline DescribeBakDataSourceStorageAccessInfoRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // durationSeconds Field Functions 
    bool hasDurationSeconds() const { return this->durationSeconds_ != nullptr;};
    void deleteDurationSeconds() { this->durationSeconds_ = nullptr;};
    inline int64_t getDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(durationSeconds_, 0L) };
    inline DescribeBakDataSourceStorageAccessInfoRequest& setDurationSeconds(int64_t durationSeconds) { DARABONBA_PTR_SET_VALUE(durationSeconds_, durationSeconds) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline DescribeBakDataSourceStorageAccessInfoRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBakDataSourceStorageAccessInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeBakDataSourceStorageAccessInfoRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // This parameter is required.
    shared_ptr<string> backupSetId_ {};
    // This parameter is required.
    shared_ptr<string> backupType_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> dataSourceId_ {};
    shared_ptr<int64_t> durationSeconds_ {};
    // This parameter is required.
    shared_ptr<string> regionCode_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> storageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
