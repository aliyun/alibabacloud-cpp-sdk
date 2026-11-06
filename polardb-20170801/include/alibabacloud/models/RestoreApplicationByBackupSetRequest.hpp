// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREAPPLICATIONBYBACKUPSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTOREAPPLICATIONBYBACKUPSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RestoreApplicationByBackupSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreApplicationByBackupSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreApplicationByBackupSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RestoreApplicationByBackupSetRequest() = default ;
    RestoreApplicationByBackupSetRequest(const RestoreApplicationByBackupSetRequest &) = default ;
    RestoreApplicationByBackupSetRequest(RestoreApplicationByBackupSetRequest &&) = default ;
    RestoreApplicationByBackupSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreApplicationByBackupSetRequest() = default ;
    RestoreApplicationByBackupSetRequest& operator=(const RestoreApplicationByBackupSetRequest &) = default ;
    RestoreApplicationByBackupSetRequest& operator=(RestoreApplicationByBackupSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationType_ == nullptr && this->backupSetId_ == nullptr && this->regionId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RestoreApplicationByBackupSetRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline RestoreApplicationByBackupSetRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline RestoreApplicationByBackupSetRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RestoreApplicationByBackupSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The application type.
    shared_ptr<string> applicationType_ {};
    // The ID of the backup set used to restore the application.
    shared_ptr<string> backupSetId_ {};
    // The region ID of the application.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
