// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATABASESPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATABASESPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyDatabasesProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDatabasesProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseIds, databaseIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetProjectId, targetProjectId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDatabasesProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseIds, databaseIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetProjectId, targetProjectId_);
    };
    ModifyDatabasesProjectRequest() = default ;
    ModifyDatabasesProjectRequest(const ModifyDatabasesProjectRequest &) = default ;
    ModifyDatabasesProjectRequest(ModifyDatabasesProjectRequest &&) = default ;
    ModifyDatabasesProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDatabasesProjectRequest() = default ;
    ModifyDatabasesProjectRequest& operator=(const ModifyDatabasesProjectRequest &) = default ;
    ModifyDatabasesProjectRequest& operator=(ModifyDatabasesProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseIds_ == nullptr
        && this->instanceId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr && this->targetProjectId_ == nullptr; };
    // databaseIds Field Functions 
    bool hasDatabaseIds() const { return this->databaseIds_ != nullptr;};
    void deleteDatabaseIds() { this->databaseIds_ = nullptr;};
    inline string getDatabaseIds() const { DARABONBA_PTR_GET_DEFAULT(databaseIds_, "") };
    inline ModifyDatabasesProjectRequest& setDatabaseIds(string databaseIds) { DARABONBA_PTR_SET_VALUE(databaseIds_, databaseIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDatabasesProjectRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ModifyDatabasesProjectRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDatabasesProjectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetProjectId Field Functions 
    bool hasTargetProjectId() const { return this->targetProjectId_ != nullptr;};
    void deleteTargetProjectId() { this->targetProjectId_ = nullptr;};
    inline int64_t getTargetProjectId() const { DARABONBA_PTR_GET_DEFAULT(targetProjectId_, 0L) };
    inline ModifyDatabasesProjectRequest& setTargetProjectId(int64_t targetProjectId) { DARABONBA_PTR_SET_VALUE(targetProjectId_, targetProjectId) };


  protected:
    // The IDs of the database instances that you want to move. The value is a JSON string. You can specify up to 100 database instance IDs. Separate multiple IDs with commas (,).
    // 
    // > You can call the [ListDatabases](https://help.aliyun.com/document_detail/2758822.html) operation to query the database instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> databaseIds_ {};
    // The ID of the Bastionhost instance.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the project to which the database instances currently belong.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the Bastionhost instance.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The ID of the destination project to which you want to move the database instances.
    // > You can call the ListProjectsForProjectAuthorizationPrincipal operation to query the project ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> targetProjectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
