// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMIGRATIONPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMIGRATIONPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMigrationProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMigrationProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MigrationId, migrationId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMigrationProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MigrationId, migrationId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetMigrationProcessRequest() = default ;
    GetMigrationProcessRequest(const GetMigrationProcessRequest &) = default ;
    GetMigrationProcessRequest(GetMigrationProcessRequest &&) = default ;
    GetMigrationProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMigrationProcessRequest() = default ;
    GetMigrationProcessRequest& operator=(const GetMigrationProcessRequest &) = default ;
    GetMigrationProcessRequest& operator=(GetMigrationProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->migrationId_ != nullptr
        && this->projectId_ != nullptr; };
    // migrationId Field Functions 
    bool hasMigrationId() const { return this->migrationId_ != nullptr;};
    void deleteMigrationId() { this->migrationId_ = nullptr;};
    inline int64_t migrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, 0L) };
    inline GetMigrationProcessRequest& setMigrationId(int64_t migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetMigrationProcessRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The migration package ID. You can call the CreateImportMigration operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> migrationId_ = nullptr;
    // The workspace ID. You can log on to the DataWorks console and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
