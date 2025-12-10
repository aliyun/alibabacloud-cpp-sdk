// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTROLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTROLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetControlPolicyResponseBodyControlPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetControlPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ControlPolicy, controlPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlPolicy, controlPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetControlPolicyResponseBody() = default ;
    GetControlPolicyResponseBody(const GetControlPolicyResponseBody &) = default ;
    GetControlPolicyResponseBody(GetControlPolicyResponseBody &&) = default ;
    GetControlPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetControlPolicyResponseBody() = default ;
    GetControlPolicyResponseBody& operator=(const GetControlPolicyResponseBody &) = default ;
    GetControlPolicyResponseBody& operator=(GetControlPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlPolicy_ == nullptr
        && return this->requestId_ == nullptr; };
    // controlPolicy Field Functions 
    bool hasControlPolicy() const { return this->controlPolicy_ != nullptr;};
    void deleteControlPolicy() { this->controlPolicy_ = nullptr;};
    inline const GetControlPolicyResponseBodyControlPolicy & controlPolicy() const { DARABONBA_PTR_GET_CONST(controlPolicy_, GetControlPolicyResponseBodyControlPolicy) };
    inline GetControlPolicyResponseBodyControlPolicy controlPolicy() { DARABONBA_PTR_GET(controlPolicy_, GetControlPolicyResponseBodyControlPolicy) };
    inline GetControlPolicyResponseBody& setControlPolicy(const GetControlPolicyResponseBodyControlPolicy & controlPolicy) { DARABONBA_PTR_SET_VALUE(controlPolicy_, controlPolicy) };
    inline GetControlPolicyResponseBody& setControlPolicy(GetControlPolicyResponseBodyControlPolicy && controlPolicy) { DARABONBA_PTR_SET_RVALUE(controlPolicy_, controlPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetControlPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access control policy.
    std::shared_ptr<GetControlPolicyResponseBodyControlPolicy> controlPolicy_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
