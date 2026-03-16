// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESERVICEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATESERVICEPOLICYRESPONSEBODY_HPP_
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
  class GenerateServicePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateServicePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MissingPolicy, missingPolicy_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateServicePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MissingPolicy, missingPolicy_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateServicePolicyResponseBody() = default ;
    GenerateServicePolicyResponseBody(const GenerateServicePolicyResponseBody &) = default ;
    GenerateServicePolicyResponseBody(GenerateServicePolicyResponseBody &&) = default ;
    GenerateServicePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateServicePolicyResponseBody() = default ;
    GenerateServicePolicyResponseBody& operator=(const GenerateServicePolicyResponseBody &) = default ;
    GenerateServicePolicyResponseBody& operator=(GenerateServicePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MissingPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MissingPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      };
      friend void from_json(const Darabonba::Json& j, MissingPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      };
      MissingPolicy() = default ;
      MissingPolicy(const MissingPolicy &) = default ;
      MissingPolicy(MissingPolicy &&) = default ;
      MissingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MissingPolicy() = default ;
      MissingPolicy& operator=(const MissingPolicy &) = default ;
      MissingPolicy& operator=(MissingPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->resource_ == nullptr && this->serviceName_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline const vector<string> & getAction() const { DARABONBA_PTR_GET_CONST(action_, vector<string>) };
      inline vector<string> getAction() { DARABONBA_PTR_GET(action_, vector<string>) };
      inline MissingPolicy& setAction(const vector<string> & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
      inline MissingPolicy& setAction(vector<string> && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline MissingPolicy& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline MissingPolicy& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    protected:
      // Operations on specific resources.
      shared_ptr<vector<string>> action_ {};
      // The specific objects authorized. An asterisk (*) denotes all resources.
      shared_ptr<string> resource_ {};
      // The name of the service.
      shared_ptr<string> serviceName_ {};
    };

    virtual bool empty() const override { return this->missingPolicy_ == nullptr
        && this->policy_ == nullptr && this->requestId_ == nullptr; };
    // missingPolicy Field Functions 
    bool hasMissingPolicy() const { return this->missingPolicy_ != nullptr;};
    void deleteMissingPolicy() { this->missingPolicy_ = nullptr;};
    inline const vector<GenerateServicePolicyResponseBody::MissingPolicy> & getMissingPolicy() const { DARABONBA_PTR_GET_CONST(missingPolicy_, vector<GenerateServicePolicyResponseBody::MissingPolicy>) };
    inline vector<GenerateServicePolicyResponseBody::MissingPolicy> getMissingPolicy() { DARABONBA_PTR_GET(missingPolicy_, vector<GenerateServicePolicyResponseBody::MissingPolicy>) };
    inline GenerateServicePolicyResponseBody& setMissingPolicy(const vector<GenerateServicePolicyResponseBody::MissingPolicy> & missingPolicy) { DARABONBA_PTR_SET_VALUE(missingPolicy_, missingPolicy) };
    inline GenerateServicePolicyResponseBody& setMissingPolicy(vector<GenerateServicePolicyResponseBody::MissingPolicy> && missingPolicy) { DARABONBA_PTR_SET_RVALUE(missingPolicy_, missingPolicy) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GenerateServicePolicyResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateServicePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The policies that are missing.
    shared_ptr<vector<GenerateServicePolicyResponseBody::MissingPolicy>> missingPolicy_ {};
    // The RAM policy.
    shared_ptr<string> policy_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
