// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTECSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTECSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class RebootECSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootECSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RebootTime, rebootTime_);
    };
    friend void from_json(const Darabonba::Json& j, RebootECSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RebootTime, rebootTime_);
    };
    RebootECSRequest() = default ;
    RebootECSRequest(const RebootECSRequest &) = default ;
    RebootECSRequest(RebootECSRequest &&) = default ;
    RebootECSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootECSRequest() = default ;
    RebootECSRequest& operator=(const RebootECSRequest &) = default ;
    RebootECSRequest& operator=(RebootECSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && this->instanceId_ == nullptr && this->rebootTime_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline RebootECSRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RebootECSRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // rebootTime Field Functions 
    bool hasRebootTime() const { return this->rebootTime_ != nullptr;};
    void deleteRebootTime() { this->rebootTime_ = nullptr;};
    inline int64_t getRebootTime() const { DARABONBA_PTR_GET_DEFAULT(rebootTime_, 0L) };
    inline RebootECSRequest& setRebootTime(int64_t rebootTime) { DARABONBA_PTR_SET_VALUE(rebootTime_, rebootTime) };


  protected:
    shared_ptr<string> eventId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> rebootTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
