// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMPRIVACYPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMPRIVACYPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetCustomPrivacyPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomPrivacyPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicy, customPrivacyPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomPrivacyPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicy, customPrivacyPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCustomPrivacyPolicyResponseBody() = default ;
    GetCustomPrivacyPolicyResponseBody(const GetCustomPrivacyPolicyResponseBody &) = default ;
    GetCustomPrivacyPolicyResponseBody(GetCustomPrivacyPolicyResponseBody &&) = default ;
    GetCustomPrivacyPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomPrivacyPolicyResponseBody() = default ;
    GetCustomPrivacyPolicyResponseBody& operator=(const GetCustomPrivacyPolicyResponseBody &) = default ;
    GetCustomPrivacyPolicyResponseBody& operator=(GetCustomPrivacyPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPrivacyPolicy_ == nullptr
        && return this->requestId_ == nullptr; };
    // customPrivacyPolicy Field Functions 
    bool hasCustomPrivacyPolicy() const { return this->customPrivacyPolicy_ != nullptr;};
    void deleteCustomPrivacyPolicy() { this->customPrivacyPolicy_ = nullptr;};
    inline const GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicy & customPrivacyPolicy() const { DARABONBA_PTR_GET_CONST(customPrivacyPolicy_, GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicy) };
    inline GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicy customPrivacyPolicy() { DARABONBA_PTR_GET(customPrivacyPolicy_, GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicy) };
    inline GetCustomPrivacyPolicyResponseBody& setCustomPrivacyPolicy(const GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicy & customPrivacyPolicy) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicy_, customPrivacyPolicy) };
    inline GetCustomPrivacyPolicyResponseBody& setCustomPrivacyPolicy(GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicy && customPrivacyPolicy) { DARABONBA_PTR_SET_RVALUE(customPrivacyPolicy_, customPrivacyPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomPrivacyPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetCustomPrivacyPolicyResponseBodyCustomPrivacyPolicy> customPrivacyPolicy_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
