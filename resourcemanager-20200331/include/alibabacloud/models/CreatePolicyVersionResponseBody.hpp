// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePolicyVersionResponseBodyPolicyVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreatePolicyVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePolicyVersionResponseBody() = default ;
    CreatePolicyVersionResponseBody(const CreatePolicyVersionResponseBody &) = default ;
    CreatePolicyVersionResponseBody(CreatePolicyVersionResponseBody &&) = default ;
    CreatePolicyVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyVersionResponseBody() = default ;
    CreatePolicyVersionResponseBody& operator=(const CreatePolicyVersionResponseBody &) = default ;
    CreatePolicyVersionResponseBody& operator=(CreatePolicyVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyVersion_ == nullptr
        && return this->requestId_ == nullptr; };
    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline const CreatePolicyVersionResponseBodyPolicyVersion & policyVersion() const { DARABONBA_PTR_GET_CONST(policyVersion_, CreatePolicyVersionResponseBodyPolicyVersion) };
    inline CreatePolicyVersionResponseBodyPolicyVersion policyVersion() { DARABONBA_PTR_GET(policyVersion_, CreatePolicyVersionResponseBodyPolicyVersion) };
    inline CreatePolicyVersionResponseBody& setPolicyVersion(const CreatePolicyVersionResponseBodyPolicyVersion & policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };
    inline CreatePolicyVersionResponseBody& setPolicyVersion(CreatePolicyVersionResponseBodyPolicyVersion && policyVersion) { DARABONBA_PTR_SET_RVALUE(policyVersion_, policyVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePolicyVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the policy version.
    std::shared_ptr<CreatePolicyVersionResponseBodyPolicyVersion> policyVersion_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
