// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFOTATASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFOTATASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class UpdateFotaTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFotaTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskUid, taskUid_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFotaTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskUid, taskUid_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    UpdateFotaTaskRequest() = default ;
    UpdateFotaTaskRequest(const UpdateFotaTaskRequest &) = default ;
    UpdateFotaTaskRequest(UpdateFotaTaskRequest &&) = default ;
    UpdateFotaTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFotaTaskRequest() = default ;
    UpdateFotaTaskRequest& operator=(const UpdateFotaTaskRequest &) = default ;
    UpdateFotaTaskRequest& operator=(UpdateFotaTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->taskUid_ == nullptr && return this->userStatus_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateFotaTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskUid Field Functions 
    bool hasTaskUid() const { return this->taskUid_ != nullptr;};
    void deleteTaskUid() { this->taskUid_ = nullptr;};
    inline string taskUid() const { DARABONBA_PTR_GET_DEFAULT(taskUid_, "") };
    inline UpdateFotaTaskRequest& setTaskUid(string taskUid) { DARABONBA_PTR_SET_VALUE(taskUid_, taskUid) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline string userStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
    inline UpdateFotaTaskRequest& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the image update task. You can call the [DescribeFotaTasks](https://help.aliyun.com/document_detail/437001.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskUid_ = nullptr;
    // Specifies whether to automatically push the image update task.
    // 
    // Valid values:
    // 
    // *   Running: automatically pushes the image update task.
    // *   Pending: does not automatically push the image update task.
    std::shared_ptr<string> userStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
