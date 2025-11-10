// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTEGRATIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTEGRATIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIntegrationPolicyResponseBodyPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateIntegrationPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntegrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntegrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateIntegrationPolicyResponseBody() = default ;
    CreateIntegrationPolicyResponseBody(const CreateIntegrationPolicyResponseBody &) = default ;
    CreateIntegrationPolicyResponseBody(CreateIntegrationPolicyResponseBody &&) = default ;
    CreateIntegrationPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntegrationPolicyResponseBody() = default ;
    CreateIntegrationPolicyResponseBody& operator=(const CreateIntegrationPolicyResponseBody &) = default ;
    CreateIntegrationPolicyResponseBody& operator=(CreateIntegrationPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->created_ == nullptr
        && return this->policy_ == nullptr && return this->requestId_ == nullptr; };
    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline bool created() const { DARABONBA_PTR_GET_DEFAULT(created_, false) };
    inline CreateIntegrationPolicyResponseBody& setCreated(bool created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const CreateIntegrationPolicyResponseBodyPolicy & policy() const { DARABONBA_PTR_GET_CONST(policy_, CreateIntegrationPolicyResponseBodyPolicy) };
    inline CreateIntegrationPolicyResponseBodyPolicy policy() { DARABONBA_PTR_GET(policy_, CreateIntegrationPolicyResponseBodyPolicy) };
    inline CreateIntegrationPolicyResponseBody& setPolicy(const CreateIntegrationPolicyResponseBodyPolicy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline CreateIntegrationPolicyResponseBody& setPolicy(CreateIntegrationPolicyResponseBodyPolicy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIntegrationPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Whether it is created.
    std::shared_ptr<bool> created_ = nullptr;
    // Uploaded policy.
    std::shared_ptr<CreateIntegrationPolicyResponseBodyPolicy> policy_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
