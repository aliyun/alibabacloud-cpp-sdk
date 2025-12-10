// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMIGRATIONWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNMIGRATIONWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class RunMigrationWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMigrationWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunMigrationWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    RunMigrationWorkflowRequest() = default ;
    RunMigrationWorkflowRequest(const RunMigrationWorkflowRequest &) = default ;
    RunMigrationWorkflowRequest(RunMigrationWorkflowRequest &&) = default ;
    RunMigrationWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMigrationWorkflowRequest() = default ;
    RunMigrationWorkflowRequest& operator=(const RunMigrationWorkflowRequest &) = default ;
    RunMigrationWorkflowRequest& operator=(RunMigrationWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RunMigrationWorkflowRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the migration instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
