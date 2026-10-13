// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMIGRATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMIGRATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetMigrateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMigrateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(migrationId, migrationId_);
      DARABONBA_PTR_TO_JSON(migrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMigrateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(migrationId, migrationId_);
      DARABONBA_PTR_FROM_JSON(migrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GetMigrateApplicationRequest() = default ;
    GetMigrateApplicationRequest(const GetMigrateApplicationRequest &) = default ;
    GetMigrateApplicationRequest(GetMigrateApplicationRequest &&) = default ;
    GetMigrateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMigrateApplicationRequest() = default ;
    GetMigrateApplicationRequest& operator=(const GetMigrateApplicationRequest &) = default ;
    GetMigrateApplicationRequest& operator=(GetMigrateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->migrationId_ == nullptr
        && this->migrationType_ == nullptr && this->regionId_ == nullptr; };
    // migrationId Field Functions 
    bool hasMigrationId() const { return this->migrationId_ != nullptr;};
    void deleteMigrationId() { this->migrationId_ = nullptr;};
    inline string getMigrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, "") };
    inline GetMigrateApplicationRequest& setMigrationId(string migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline int64_t getMigrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, 0L) };
    inline GetMigrateApplicationRequest& setMigrationType(int64_t migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetMigrateApplicationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The migration ID.
    shared_ptr<string> migrationId_ {};
    // The operation type of the migration task. Valid values: 1: import. 2: export. 3: clone. If this parameter is not specified, all types are returned.
    shared_ptr<int64_t> migrationType_ {};
    // regionId
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
