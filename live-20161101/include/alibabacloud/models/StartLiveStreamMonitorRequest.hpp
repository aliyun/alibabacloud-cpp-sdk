// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLIVESTREAMMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTLIVESTREAMMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartLiveStreamMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartLiveStreamMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorId, monitorId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, StartLiveStreamMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorId, monitorId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    StartLiveStreamMonitorRequest() = default ;
    StartLiveStreamMonitorRequest(const StartLiveStreamMonitorRequest &) = default ;
    StartLiveStreamMonitorRequest(StartLiveStreamMonitorRequest &&) = default ;
    StartLiveStreamMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartLiveStreamMonitorRequest() = default ;
    StartLiveStreamMonitorRequest& operator=(const StartLiveStreamMonitorRequest &) = default ;
    StartLiveStreamMonitorRequest& operator=(StartLiveStreamMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorId_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr; };
    // monitorId Field Functions 
    bool hasMonitorId() const { return this->monitorId_ != nullptr;};
    void deleteMonitorId() { this->monitorId_ = nullptr;};
    inline string getMonitorId() const { DARABONBA_PTR_GET_DEFAULT(monitorId_, "") };
    inline StartLiveStreamMonitorRequest& setMonitorId(string monitorId) { DARABONBA_PTR_SET_VALUE(monitorId_, monitorId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartLiveStreamMonitorRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartLiveStreamMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the monitoring session.
    // 
    // >  You can obtain the monitoring session ID from the response of the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> monitorId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
