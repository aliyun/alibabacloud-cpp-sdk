// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETLSCIPHERPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETLSCIPHERPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateTLSCipherPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTLSCipherPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TLSCipherPolicyId, TLSCipherPolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTLSCipherPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TLSCipherPolicyId, TLSCipherPolicyId_);
    };
    CreateTLSCipherPolicyResponseBody() = default ;
    CreateTLSCipherPolicyResponseBody(const CreateTLSCipherPolicyResponseBody &) = default ;
    CreateTLSCipherPolicyResponseBody(CreateTLSCipherPolicyResponseBody &&) = default ;
    CreateTLSCipherPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTLSCipherPolicyResponseBody() = default ;
    CreateTLSCipherPolicyResponseBody& operator=(const CreateTLSCipherPolicyResponseBody &) = default ;
    CreateTLSCipherPolicyResponseBody& operator=(CreateTLSCipherPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->TLSCipherPolicyId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTLSCipherPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // TLSCipherPolicyId Field Functions 
    bool hasTLSCipherPolicyId() const { return this->TLSCipherPolicyId_ != nullptr;};
    void deleteTLSCipherPolicyId() { this->TLSCipherPolicyId_ = nullptr;};
    inline string TLSCipherPolicyId() const { DARABONBA_PTR_GET_DEFAULT(TLSCipherPolicyId_, "") };
    inline CreateTLSCipherPolicyResponseBody& setTLSCipherPolicyId(string TLSCipherPolicyId) { DARABONBA_PTR_SET_VALUE(TLSCipherPolicyId_, TLSCipherPolicyId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<string> TLSCipherPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
