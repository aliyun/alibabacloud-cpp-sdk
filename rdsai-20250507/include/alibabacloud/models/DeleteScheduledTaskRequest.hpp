// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCHEDULEDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCHEDULEDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DeleteScheduledTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScheduledTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScheduledId, scheduledId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScheduledTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScheduledId, scheduledId_);
    };
    DeleteScheduledTaskRequest() = default ;
    DeleteScheduledTaskRequest(const DeleteScheduledTaskRequest &) = default ;
    DeleteScheduledTaskRequest(DeleteScheduledTaskRequest &&) = default ;
    DeleteScheduledTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScheduledTaskRequest() = default ;
    DeleteScheduledTaskRequest& operator=(const DeleteScheduledTaskRequest &) = default ;
    DeleteScheduledTaskRequest& operator=(DeleteScheduledTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scheduledId_ == nullptr; };
    // scheduledId Field Functions 
    bool hasScheduledId() const { return this->scheduledId_ != nullptr;};
    void deleteScheduledId() { this->scheduledId_ = nullptr;};
    inline string getScheduledId() const { DARABONBA_PTR_GET_DEFAULT(scheduledId_, "") };
    inline DeleteScheduledTaskRequest& setScheduledId(string scheduledId) { DARABONBA_PTR_SET_VALUE(scheduledId_, scheduledId) };


  protected:
    // This parameter is required.
    shared_ptr<string> scheduledId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
