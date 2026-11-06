// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONBACKUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONBACKUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateApplicationBackupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationBackupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(JobMode, jobMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationBackupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(JobMode, jobMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateApplicationBackupRequest() = default ;
    CreateApplicationBackupRequest(const CreateApplicationBackupRequest &) = default ;
    CreateApplicationBackupRequest(CreateApplicationBackupRequest &&) = default ;
    CreateApplicationBackupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationBackupRequest() = default ;
    CreateApplicationBackupRequest& operator=(const CreateApplicationBackupRequest &) = default ;
    CreateApplicationBackupRequest& operator=(CreateApplicationBackupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationType_ == nullptr && this->jobMode_ == nullptr && this->regionId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreateApplicationBackupRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline CreateApplicationBackupRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // jobMode Field Functions 
    bool hasJobMode() const { return this->jobMode_ != nullptr;};
    void deleteJobMode() { this->jobMode_ = nullptr;};
    inline string getJobMode() const { DARABONBA_PTR_GET_DEFAULT(jobMode_, "") };
    inline CreateApplicationBackupRequest& setJobMode(string jobMode) { DARABONBA_PTR_SET_VALUE(jobMode_, jobMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApplicationBackupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application to back up.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The application type, such as polarclaw.
    shared_ptr<string> applicationType_ {};
    // The backup mode. Automated indicates an automatic backup, and Manual indicates a manual backup.
    // 
    // This parameter is required.
    shared_ptr<string> jobMode_ {};
    // The ID of the region where the application resides. The server uses the actual region of the application.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
