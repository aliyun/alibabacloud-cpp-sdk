// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYTRAFFICCONTROLTASKCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYTRAFFICCONTROLTASKCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class DeployTrafficControlTaskCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployTrafficControlTaskCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RetryDeploy, retryDeploy_);
    };
    friend void from_json(const Darabonba::Json& j, DeployTrafficControlTaskCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RetryDeploy, retryDeploy_);
    };
    DeployTrafficControlTaskCodeRequest() = default ;
    DeployTrafficControlTaskCodeRequest(const DeployTrafficControlTaskCodeRequest &) = default ;
    DeployTrafficControlTaskCodeRequest(DeployTrafficControlTaskCodeRequest &&) = default ;
    DeployTrafficControlTaskCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployTrafficControlTaskCodeRequest() = default ;
    DeployTrafficControlTaskCodeRequest& operator=(const DeployTrafficControlTaskCodeRequest &) = default ;
    DeployTrafficControlTaskCodeRequest& operator=(DeployTrafficControlTaskCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environment_ == nullptr
        && this->instanceId_ == nullptr && this->retryDeploy_ == nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline DeployTrafficControlTaskCodeRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeployTrafficControlTaskCodeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // retryDeploy Field Functions 
    bool hasRetryDeploy() const { return this->retryDeploy_ != nullptr;};
    void deleteRetryDeploy() { this->retryDeploy_ = nullptr;};
    inline bool getRetryDeploy() const { DARABONBA_PTR_GET_DEFAULT(retryDeploy_, false) };
    inline DeployTrafficControlTaskCodeRequest& setRetryDeploy(bool retryDeploy) { DARABONBA_PTR_SET_VALUE(retryDeploy_, retryDeploy) };


  protected:
    shared_ptr<string> environment_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> retryDeploy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
