// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMPRIVACYPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMPRIVACYPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateCustomPrivacyPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomPrivacyPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomPrivacyPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomPrivacyPolicyResponseBody() = default ;
    CreateCustomPrivacyPolicyResponseBody(const CreateCustomPrivacyPolicyResponseBody &) = default ;
    CreateCustomPrivacyPolicyResponseBody(CreateCustomPrivacyPolicyResponseBody &&) = default ;
    CreateCustomPrivacyPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomPrivacyPolicyResponseBody() = default ;
    CreateCustomPrivacyPolicyResponseBody& operator=(const CreateCustomPrivacyPolicyResponseBody &) = default ;
    CreateCustomPrivacyPolicyResponseBody& operator=(CreateCustomPrivacyPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPrivacyPolicyId_ == nullptr
        && return this->requestId_ == nullptr; };
    // customPrivacyPolicyId Field Functions 
    bool hasCustomPrivacyPolicyId() const { return this->customPrivacyPolicyId_ != nullptr;};
    void deleteCustomPrivacyPolicyId() { this->customPrivacyPolicyId_ = nullptr;};
    inline string customPrivacyPolicyId() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyId_, "") };
    inline CreateCustomPrivacyPolicyResponseBody& setCustomPrivacyPolicyId(string customPrivacyPolicyId) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyId_, customPrivacyPolicyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomPrivacyPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> customPrivacyPolicyId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
