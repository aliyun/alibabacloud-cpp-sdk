// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSPECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSPECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateInspectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInspectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(DBClusterList, DBClusterList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TaskDescription, taskDescription_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInspectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(DBClusterList, DBClusterList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TaskDescription, taskDescription_);
    };
    CreateInspectionTaskRequest() = default ;
    CreateInspectionTaskRequest(const CreateInspectionTaskRequest &) = default ;
    CreateInspectionTaskRequest(CreateInspectionTaskRequest &&) = default ;
    CreateInspectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInspectionTaskRequest() = default ;
    CreateInspectionTaskRequest& operator=(const CreateInspectionTaskRequest &) = default ;
    CreateInspectionTaskRequest& operator=(CreateInspectionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBClusterList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBClusterList& obj) { 
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, DBClusterList& obj) { 
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      DBClusterList() = default ;
      DBClusterList(const DBClusterList &) = default ;
      DBClusterList(DBClusterList &&) = default ;
      DBClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBClusterList() = default ;
      DBClusterList& operator=(const DBClusterList &) = default ;
      DBClusterList& operator=(DBClusterList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->regionId_ == nullptr; };
      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline DBClusterList& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DBClusterList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The ID of the PolarDB cluster to be inspected.
      shared_ptr<string> DBClusterId_ {};
      // The ID of the region where the cluster to be inspected is located.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->DBClusterList_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->spaceId_ == nullptr && this->taskDescription_ == nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline CreateInspectionTaskRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // DBClusterList Field Functions 
    bool hasDBClusterList() const { return this->DBClusterList_ != nullptr;};
    void deleteDBClusterList() { this->DBClusterList_ = nullptr;};
    inline const vector<CreateInspectionTaskRequest::DBClusterList> & getDBClusterList() const { DARABONBA_PTR_GET_CONST(DBClusterList_, vector<CreateInspectionTaskRequest::DBClusterList>) };
    inline vector<CreateInspectionTaskRequest::DBClusterList> getDBClusterList() { DARABONBA_PTR_GET(DBClusterList_, vector<CreateInspectionTaskRequest::DBClusterList>) };
    inline CreateInspectionTaskRequest& setDBClusterList(const vector<CreateInspectionTaskRequest::DBClusterList> & dBClusterList) { DARABONBA_PTR_SET_VALUE(DBClusterList_, dBClusterList) };
    inline CreateInspectionTaskRequest& setDBClusterList(vector<CreateInspectionTaskRequest::DBClusterList> && dBClusterList) { DARABONBA_PTR_SET_RVALUE(DBClusterList_, dBClusterList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateInspectionTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInspectionTaskRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline CreateInspectionTaskRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline CreateInspectionTaskRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


  protected:
    // The cron expression for the inspection task, which specifies the periodic execution schedule.
    shared_ptr<string> cronExpression_ {};
    // The list of clusters associated with the inspection task.
    shared_ptr<vector<CreateInspectionTaskRequest::DBClusterList>> DBClusterList_ {};
    // The ID of the region where the task is located.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the inspection workspace.
    shared_ptr<string> spaceId_ {};
    // The description of the inspection task.
    shared_ptr<string> taskDescription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
