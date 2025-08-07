// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESERVICEPOLICYRESPONSEBODYMISSINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GENERATESERVICEPOLICYRESPONSEBODYMISSINGPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GenerateServicePolicyResponseBodyMissingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateServicePolicyResponseBodyMissingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateServicePolicyResponseBodyMissingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    GenerateServicePolicyResponseBodyMissingPolicy() = default ;
    GenerateServicePolicyResponseBodyMissingPolicy(const GenerateServicePolicyResponseBodyMissingPolicy &) = default ;
    GenerateServicePolicyResponseBodyMissingPolicy(GenerateServicePolicyResponseBodyMissingPolicy &&) = default ;
    GenerateServicePolicyResponseBodyMissingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateServicePolicyResponseBodyMissingPolicy() = default ;
    GenerateServicePolicyResponseBodyMissingPolicy& operator=(const GenerateServicePolicyResponseBodyMissingPolicy &) = default ;
    GenerateServicePolicyResponseBodyMissingPolicy& operator=(GenerateServicePolicyResponseBodyMissingPolicy &&) = default ;
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
    inline GenerateServicePolicyResponseBodyMissingPolicy& setAction(const vector<string> & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
    inline GenerateServicePolicyResponseBodyMissingPolicy& setAction(vector<string> && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline GenerateServicePolicyResponseBodyMissingPolicy& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GenerateServicePolicyResponseBodyMissingPolicy& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // Operations on specific resources.
    std::shared_ptr<vector<string>> action_ = nullptr;
    // The specific objects authorized. An asterisk (*) denotes all resources.
    std::shared_ptr<string> resource_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
