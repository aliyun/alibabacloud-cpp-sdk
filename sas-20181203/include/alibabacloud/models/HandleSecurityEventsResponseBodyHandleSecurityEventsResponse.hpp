// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLESECURITYEVENTSRESPONSEBODYHANDLESECURITYEVENTSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_HANDLESECURITYEVENTSRESPONSEBODYHANDLESECURITYEVENTSRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class HandleSecurityEventsResponseBodyHandleSecurityEventsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleSecurityEventsResponseBodyHandleSecurityEventsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, HandleSecurityEventsResponseBodyHandleSecurityEventsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    HandleSecurityEventsResponseBodyHandleSecurityEventsResponse() = default ;
    HandleSecurityEventsResponseBodyHandleSecurityEventsResponse(const HandleSecurityEventsResponseBodyHandleSecurityEventsResponse &) = default ;
    HandleSecurityEventsResponseBodyHandleSecurityEventsResponse(HandleSecurityEventsResponseBodyHandleSecurityEventsResponse &&) = default ;
    HandleSecurityEventsResponseBodyHandleSecurityEventsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleSecurityEventsResponseBodyHandleSecurityEventsResponse() = default ;
    HandleSecurityEventsResponseBodyHandleSecurityEventsResponse& operator=(const HandleSecurityEventsResponseBodyHandleSecurityEventsResponse &) = default ;
    HandleSecurityEventsResponseBodyHandleSecurityEventsResponse& operator=(HandleSecurityEventsResponseBodyHandleSecurityEventsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline HandleSecurityEventsResponseBodyHandleSecurityEventsResponse& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the task to handle the alert events.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
