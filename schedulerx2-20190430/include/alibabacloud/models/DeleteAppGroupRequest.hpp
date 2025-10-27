// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class DeleteAppGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteJobs, deleteJobs_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteJobs, deleteJobs_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteAppGroupRequest() = default ;
    DeleteAppGroupRequest(const DeleteAppGroupRequest &) = default ;
    DeleteAppGroupRequest(DeleteAppGroupRequest &&) = default ;
    DeleteAppGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppGroupRequest() = default ;
    DeleteAppGroupRequest& operator=(const DeleteAppGroupRequest &) = default ;
    DeleteAppGroupRequest& operator=(DeleteAppGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteJobs_ == nullptr
        && return this->groupId_ == nullptr && return this->namespace_ == nullptr && return this->regionId_ == nullptr; };
    // deleteJobs Field Functions 
    bool hasDeleteJobs() const { return this->deleteJobs_ != nullptr;};
    void deleteDeleteJobs() { this->deleteJobs_ = nullptr;};
    inline bool deleteJobs() const { DARABONBA_PTR_GET_DEFAULT(deleteJobs_, false) };
    inline DeleteAppGroupRequest& setDeleteJobs(bool deleteJobs) { DARABONBA_PTR_SET_VALUE(deleteJobs_, deleteJobs) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DeleteAppGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteAppGroupRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAppGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to delete the jobs in the application group. Valid values:
    // 
    // true: deletes the jobs in the application group.
    // false: does not delete the jobs in the application group.
    std::shared_ptr<bool> deleteJobs_ = nullptr;
    // The ID of the application. You can obtain the ID of the application on the Application Management page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the namespace. You can obtain the ID of the namespace on the Namespace page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
