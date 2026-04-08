// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTASKDEPLOYRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTASKDEPLOYRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QueryTrafficControlTaskDeployResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTrafficControlTaskDeployResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTrafficControlTaskDeployResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    QueryTrafficControlTaskDeployResultRequest() = default ;
    QueryTrafficControlTaskDeployResultRequest(const QueryTrafficControlTaskDeployResultRequest &) = default ;
    QueryTrafficControlTaskDeployResultRequest(QueryTrafficControlTaskDeployResultRequest &&) = default ;
    QueryTrafficControlTaskDeployResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTrafficControlTaskDeployResultRequest() = default ;
    QueryTrafficControlTaskDeployResultRequest& operator=(const QueryTrafficControlTaskDeployResultRequest &) = default ;
    QueryTrafficControlTaskDeployResultRequest& operator=(QueryTrafficControlTaskDeployResultRequest &&) = default ;
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
    inline QueryTrafficControlTaskDeployResultRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryTrafficControlTaskDeployResultRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> environment_ {};
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
