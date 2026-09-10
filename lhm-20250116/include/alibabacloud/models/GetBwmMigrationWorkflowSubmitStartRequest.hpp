// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBWMMIGRATIONWORKFLOWSUBMITSTARTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBWMMIGRATIONWORKFLOWSUBMITSTARTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetBwmMigrationWorkflowSubmitStartRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBwmMigrationWorkflowSubmitStartRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBwmMigrationWorkflowSubmitStartRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetBwmMigrationWorkflowSubmitStartRequest() = default ;
    GetBwmMigrationWorkflowSubmitStartRequest(const GetBwmMigrationWorkflowSubmitStartRequest &) = default ;
    GetBwmMigrationWorkflowSubmitStartRequest(GetBwmMigrationWorkflowSubmitStartRequest &&) = default ;
    GetBwmMigrationWorkflowSubmitStartRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBwmMigrationWorkflowSubmitStartRequest() = default ;
    GetBwmMigrationWorkflowSubmitStartRequest& operator=(const GetBwmMigrationWorkflowSubmitStartRequest &) = default ;
    GetBwmMigrationWorkflowSubmitStartRequest& operator=(GetBwmMigrationWorkflowSubmitStartRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetBwmMigrationWorkflowSubmitStartRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The scheduling migration task ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
