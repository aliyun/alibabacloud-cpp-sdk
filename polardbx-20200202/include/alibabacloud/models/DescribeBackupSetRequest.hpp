// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeBackupSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DestCrossRegion, destCrossRegion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DestCrossRegion, destCrossRegion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeBackupSetRequest() = default ;
    DescribeBackupSetRequest(const DescribeBackupSetRequest &) = default ;
    DescribeBackupSetRequest(DescribeBackupSetRequest &&) = default ;
    DescribeBackupSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetRequest() = default ;
    DescribeBackupSetRequest& operator=(const DescribeBackupSetRequest &) = default ;
    DescribeBackupSetRequest& operator=(DescribeBackupSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetId_ == nullptr
        && return this->DBInstanceName_ == nullptr && return this->destCrossRegion_ == nullptr && return this->regionId_ == nullptr; };
    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline DescribeBackupSetRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeBackupSetRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // destCrossRegion Field Functions 
    bool hasDestCrossRegion() const { return this->destCrossRegion_ != nullptr;};
    void deleteDestCrossRegion() { this->destCrossRegion_ = nullptr;};
    inline string destCrossRegion() const { DARABONBA_PTR_GET_DEFAULT(destCrossRegion_, "") };
    inline DescribeBackupSetRequest& setDestCrossRegion(string destCrossRegion) { DARABONBA_PTR_SET_VALUE(destCrossRegion_, destCrossRegion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBackupSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> backupSetId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<string> destCrossRegion_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
