// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTSESSIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPORTSESSIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class ReportSessionStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportSessionStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionChangeTime, sessionChangeTime_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ReportSessionStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionChangeTime, sessionChangeTime_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
    };
    ReportSessionStatusRequest() = default ;
    ReportSessionStatusRequest(const ReportSessionStatusRequest &) = default ;
    ReportSessionStatusRequest(ReportSessionStatusRequest &&) = default ;
    ReportSessionStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportSessionStatusRequest() = default ;
    ReportSessionStatusRequest& operator=(const ReportSessionStatusRequest &) = default ;
    ReportSessionStatusRequest& operator=(ReportSessionStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->sessionChangeTime_ == nullptr && this->sessionId_ == nullptr && this->sessionStatus_ == nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ReportSessionStatusRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReportSessionStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReportSessionStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionChangeTime Field Functions 
    bool hasSessionChangeTime() const { return this->sessionChangeTime_ != nullptr;};
    void deleteSessionChangeTime() { this->sessionChangeTime_ = nullptr;};
    inline int64_t getSessionChangeTime() const { DARABONBA_PTR_GET_DEFAULT(sessionChangeTime_, 0L) };
    inline ReportSessionStatusRequest& setSessionChangeTime(int64_t sessionChangeTime) { DARABONBA_PTR_SET_VALUE(sessionChangeTime_, sessionChangeTime) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ReportSessionStatusRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline string getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
    inline ReportSessionStatusRequest& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


  protected:
    shared_ptr<string> endUserId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<int64_t> sessionChangeTime_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    // This parameter is required.
    shared_ptr<string> sessionStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
