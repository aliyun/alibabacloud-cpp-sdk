// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPULLTOPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPULLTOPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePullToPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePullToPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePullToPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeLivePullToPushRequest() = default ;
    DescribeLivePullToPushRequest(const DescribeLivePullToPushRequest &) = default ;
    DescribeLivePullToPushRequest(DescribeLivePullToPushRequest &&) = default ;
    DescribeLivePullToPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePullToPushRequest() = default ;
    DescribeLivePullToPushRequest& operator=(const DescribeLivePullToPushRequest &) = default ;
    DescribeLivePullToPushRequest& operator=(DescribeLivePullToPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && return this->region_ == nullptr && return this->regionId_ == nullptr && return this->taskId_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLivePullToPushRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLivePullToPushRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLivePullToPushRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeLivePullToPushRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region where the task is started. Valid values:
    // 
    // *   ap-southeast-1: Singapore
    // *   ap-southeast-5: Indonesia (Jakarta)
    // *   cn-beijing: China (Beijing)
    // *   cn-shanghai: China (Shanghai)
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The task ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
