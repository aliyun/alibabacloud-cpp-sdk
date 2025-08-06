// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppPolicyResponseBodyAppPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateAppPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppPolicy, appPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPolicy, appPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAppPolicyResponseBody() = default ;
    CreateAppPolicyResponseBody(const CreateAppPolicyResponseBody &) = default ;
    CreateAppPolicyResponseBody(CreateAppPolicyResponseBody &&) = default ;
    CreateAppPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppPolicyResponseBody() = default ;
    CreateAppPolicyResponseBody& operator=(const CreateAppPolicyResponseBody &) = default ;
    CreateAppPolicyResponseBody& operator=(CreateAppPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appPolicy_ != nullptr
        && this->requestId_ != nullptr; };
    // appPolicy Field Functions 
    bool hasAppPolicy() const { return this->appPolicy_ != nullptr;};
    void deleteAppPolicy() { this->appPolicy_ = nullptr;};
    inline const CreateAppPolicyResponseBodyAppPolicy & appPolicy() const { DARABONBA_PTR_GET_CONST(appPolicy_, CreateAppPolicyResponseBodyAppPolicy) };
    inline CreateAppPolicyResponseBodyAppPolicy appPolicy() { DARABONBA_PTR_GET(appPolicy_, CreateAppPolicyResponseBodyAppPolicy) };
    inline CreateAppPolicyResponseBody& setAppPolicy(const CreateAppPolicyResponseBodyAppPolicy & appPolicy) { DARABONBA_PTR_SET_VALUE(appPolicy_, appPolicy) };
    inline CreateAppPolicyResponseBody& setAppPolicy(CreateAppPolicyResponseBodyAppPolicy && appPolicy) { DARABONBA_PTR_SET_RVALUE(appPolicy_, appPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateAppPolicyResponseBodyAppPolicy> appPolicy_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
