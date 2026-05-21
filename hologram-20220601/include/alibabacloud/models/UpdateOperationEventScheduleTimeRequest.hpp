// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOPERATIONEVENTSCHEDULETIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOPERATIONEVENTSCHEDULETIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class UpdateOperationEventScheduleTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOperationEventScheduleTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(scheduleTime, scheduleTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOperationEventScheduleTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(scheduleTime, scheduleTime_);
    };
    UpdateOperationEventScheduleTimeRequest() = default ;
    UpdateOperationEventScheduleTimeRequest(const UpdateOperationEventScheduleTimeRequest &) = default ;
    UpdateOperationEventScheduleTimeRequest(UpdateOperationEventScheduleTimeRequest &&) = default ;
    UpdateOperationEventScheduleTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOperationEventScheduleTimeRequest() = default ;
    UpdateOperationEventScheduleTimeRequest& operator=(const UpdateOperationEventScheduleTimeRequest &) = default ;
    UpdateOperationEventScheduleTimeRequest& operator=(UpdateOperationEventScheduleTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->scheduleTime_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateOperationEventScheduleTimeRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline UpdateOperationEventScheduleTimeRequest& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> id_ {};
    // This parameter is required.
    shared_ptr<string> scheduleTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
