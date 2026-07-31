// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFORMATIONCRAWLERSCHEDULESTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFORMATIONCRAWLERSCHEDULESTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UpdateFormationCrawlerScheduleStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFormationCrawlerScheduleStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrawlerTaskId, crawlerTaskId_);
      DARABONBA_PTR_TO_JSON(CrawlerTaskName, crawlerTaskName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScheduleState, scheduleState_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFormationCrawlerScheduleStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrawlerTaskId, crawlerTaskId_);
      DARABONBA_PTR_FROM_JSON(CrawlerTaskName, crawlerTaskName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScheduleState, scheduleState_);
    };
    UpdateFormationCrawlerScheduleStateRequest() = default ;
    UpdateFormationCrawlerScheduleStateRequest(const UpdateFormationCrawlerScheduleStateRequest &) = default ;
    UpdateFormationCrawlerScheduleStateRequest(UpdateFormationCrawlerScheduleStateRequest &&) = default ;
    UpdateFormationCrawlerScheduleStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFormationCrawlerScheduleStateRequest() = default ;
    UpdateFormationCrawlerScheduleStateRequest& operator=(const UpdateFormationCrawlerScheduleStateRequest &) = default ;
    UpdateFormationCrawlerScheduleStateRequest& operator=(UpdateFormationCrawlerScheduleStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crawlerTaskId_ == nullptr
        && this->crawlerTaskName_ == nullptr && this->DBClusterId_ == nullptr && this->regionId_ == nullptr && this->scheduleState_ == nullptr; };
    // crawlerTaskId Field Functions 
    bool hasCrawlerTaskId() const { return this->crawlerTaskId_ != nullptr;};
    void deleteCrawlerTaskId() { this->crawlerTaskId_ = nullptr;};
    inline int64_t getCrawlerTaskId() const { DARABONBA_PTR_GET_DEFAULT(crawlerTaskId_, 0L) };
    inline UpdateFormationCrawlerScheduleStateRequest& setCrawlerTaskId(int64_t crawlerTaskId) { DARABONBA_PTR_SET_VALUE(crawlerTaskId_, crawlerTaskId) };


    // crawlerTaskName Field Functions 
    bool hasCrawlerTaskName() const { return this->crawlerTaskName_ != nullptr;};
    void deleteCrawlerTaskName() { this->crawlerTaskName_ = nullptr;};
    inline string getCrawlerTaskName() const { DARABONBA_PTR_GET_DEFAULT(crawlerTaskName_, "") };
    inline UpdateFormationCrawlerScheduleStateRequest& setCrawlerTaskName(string crawlerTaskName) { DARABONBA_PTR_SET_VALUE(crawlerTaskName_, crawlerTaskName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpdateFormationCrawlerScheduleStateRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateFormationCrawlerScheduleStateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scheduleState Field Functions 
    bool hasScheduleState() const { return this->scheduleState_ != nullptr;};
    void deleteScheduleState() { this->scheduleState_ = nullptr;};
    inline string getScheduleState() const { DARABONBA_PTR_GET_DEFAULT(scheduleState_, "") };
    inline UpdateFormationCrawlerScheduleStateRequest& setScheduleState(string scheduleState) { DARABONBA_PTR_SET_VALUE(scheduleState_, scheduleState) };


  protected:
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> crawlerTaskId_ {};
    // The name of the crawler task.
    // 
    // This parameter is required.
    shared_ptr<string> crawlerTaskName_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region ID.
    // >You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the region ID of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The scheduling state. Valid values:
    // 
    // - NORMAL: resume.
    // 
    // - DISABLED: pause.
    // 
    // This parameter is required.
    shared_ptr<string> scheduleState_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
