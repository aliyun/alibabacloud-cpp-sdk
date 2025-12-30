// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDESKTOPGROUPTIMERSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDESKTOPGROUPTIMERSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SetDesktopGroupTimerStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDesktopGroupTimerStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimerType, timerType_);
    };
    friend void from_json(const Darabonba::Json& j, SetDesktopGroupTimerStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
    };
    SetDesktopGroupTimerStatusRequest() = default ;
    SetDesktopGroupTimerStatusRequest(const SetDesktopGroupTimerStatusRequest &) = default ;
    SetDesktopGroupTimerStatusRequest(SetDesktopGroupTimerStatusRequest &&) = default ;
    SetDesktopGroupTimerStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDesktopGroupTimerStatusRequest() = default ;
    SetDesktopGroupTimerStatusRequest& operator=(const SetDesktopGroupTimerStatusRequest &) = default ;
    SetDesktopGroupTimerStatusRequest& operator=(SetDesktopGroupTimerStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopGroupId_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr && this->timerType_ == nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline SetDesktopGroupTimerStatusRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetDesktopGroupTimerStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline SetDesktopGroupTimerStatusRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timerType Field Functions 
    bool hasTimerType() const { return this->timerType_ != nullptr;};
    void deleteTimerType() { this->timerType_ = nullptr;};
    inline int32_t getTimerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, 0) };
    inline SetDesktopGroupTimerStatusRequest& setTimerType(int32_t timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


  protected:
    // The ID of the cloud computer share.
    // 
    // This parameter is required.
    shared_ptr<string> desktopGroupId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The status of the scheduled task.
    // 
    // Valid values:
    // 
    // *   1: enabled
    // *   2: disabled
    // *   3: deleted
    // *   100: unknown
    shared_ptr<int32_t> status_ {};
    // The type of the scheduled task.
    // 
    // Valid values:
    // 
    // *   1: scheduled reset
    // *   2: scheduled startup
    // *   3: scheduled stop
    // *   4: scheduled restart
    // 
    // This parameter is required.
    shared_ptr<int32_t> timerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
