// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPMIGRATIONWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPMIGRATIONWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class StopMigrationWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopMigrationWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, StopMigrationWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    StopMigrationWorkflowRequest() = default ;
    StopMigrationWorkflowRequest(const StopMigrationWorkflowRequest &) = default ;
    StopMigrationWorkflowRequest(StopMigrationWorkflowRequest &&) = default ;
    StopMigrationWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopMigrationWorkflowRequest() = default ;
    StopMigrationWorkflowRequest& operator=(const StopMigrationWorkflowRequest &) = default ;
    StopMigrationWorkflowRequest& operator=(StopMigrationWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StopMigrationWorkflowRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the migration task instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
