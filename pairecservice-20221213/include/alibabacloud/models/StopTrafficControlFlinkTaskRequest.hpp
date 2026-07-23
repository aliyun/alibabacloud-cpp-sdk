// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPTRAFFICCONTROLFLINKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPTRAFFICCONTROLFLINKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class StopTrafficControlFlinkTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopTrafficControlFlinkTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, StopTrafficControlFlinkTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    StopTrafficControlFlinkTaskRequest() = default ;
    StopTrafficControlFlinkTaskRequest(const StopTrafficControlFlinkTaskRequest &) = default ;
    StopTrafficControlFlinkTaskRequest(StopTrafficControlFlinkTaskRequest &&) = default ;
    StopTrafficControlFlinkTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopTrafficControlFlinkTaskRequest() = default ;
    StopTrafficControlFlinkTaskRequest& operator=(const StopTrafficControlFlinkTaskRequest &) = default ;
    StopTrafficControlFlinkTaskRequest& operator=(StopTrafficControlFlinkTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environment_ == nullptr
        && this->instanceId_ == nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline StopTrafficControlFlinkTaskRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StopTrafficControlFlinkTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The environment to which the instance belongs. Valid values: 
    // 
    // - Daily: daily environment.
    // 
    // - Pre: staging environment.
    // 
    // - Prod: production environment.
    shared_ptr<string> environment_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
