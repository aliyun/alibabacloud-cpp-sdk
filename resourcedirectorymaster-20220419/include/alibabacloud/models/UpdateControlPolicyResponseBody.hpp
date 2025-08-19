// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTROLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTROLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateControlPolicyResponseBodyControlPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class UpdateControlPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ControlPolicy, controlPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlPolicy, controlPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateControlPolicyResponseBody() = default ;
    UpdateControlPolicyResponseBody(const UpdateControlPolicyResponseBody &) = default ;
    UpdateControlPolicyResponseBody(UpdateControlPolicyResponseBody &&) = default ;
    UpdateControlPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateControlPolicyResponseBody() = default ;
    UpdateControlPolicyResponseBody& operator=(const UpdateControlPolicyResponseBody &) = default ;
    UpdateControlPolicyResponseBody& operator=(UpdateControlPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->controlPolicy_ != nullptr
        && this->requestId_ != nullptr; };
    // controlPolicy Field Functions 
    bool hasControlPolicy() const { return this->controlPolicy_ != nullptr;};
    void deleteControlPolicy() { this->controlPolicy_ = nullptr;};
    inline const UpdateControlPolicyResponseBodyControlPolicy & controlPolicy() const { DARABONBA_PTR_GET_CONST(controlPolicy_, UpdateControlPolicyResponseBodyControlPolicy) };
    inline UpdateControlPolicyResponseBodyControlPolicy controlPolicy() { DARABONBA_PTR_GET(controlPolicy_, UpdateControlPolicyResponseBodyControlPolicy) };
    inline UpdateControlPolicyResponseBody& setControlPolicy(const UpdateControlPolicyResponseBodyControlPolicy & controlPolicy) { DARABONBA_PTR_SET_VALUE(controlPolicy_, controlPolicy) };
    inline UpdateControlPolicyResponseBody& setControlPolicy(UpdateControlPolicyResponseBodyControlPolicy && controlPolicy) { DARABONBA_PTR_SET_RVALUE(controlPolicy_, controlPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateControlPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access control policy.
    std::shared_ptr<UpdateControlPolicyResponseBodyControlPolicy> controlPolicy_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
