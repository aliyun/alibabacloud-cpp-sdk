// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICERESPONSEBODYDRYRUNRESULTROLEPOLICYMISSINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICERESPONSEBODYDRYRUNRESULTROLEPOLICYMISSINGPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy() = default ;
    CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy(const CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy &) = default ;
    CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy(CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy &&) = default ;
    CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy() = default ;
    CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy& operator=(const CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy &) = default ;
    CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy& operator=(CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->resource_ != nullptr && this->serviceName_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline const vector<string> & action() const { DARABONBA_PTR_GET_CONST(action_, vector<string>) };
    inline vector<string> action() { DARABONBA_PTR_GET(action_, vector<string>) };
    inline CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy& setAction(const vector<string> & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
    inline CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy& setAction(vector<string> && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateServiceResponseBodyDryRunResultRolePolicyMissingPolicy& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The Actions.
    std::shared_ptr<vector<string>> action_ = nullptr;
    // Resource in ram policy.
    std::shared_ptr<string> resource_ = nullptr;
    // The service name in ram policy.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
