// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACTIVATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACTIVATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateActivationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateActivationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActivationCode, activationCode_);
      DARABONBA_PTR_TO_JSON(ActivationId, activationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateActivationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivationCode, activationCode_);
      DARABONBA_PTR_FROM_JSON(ActivationId, activationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateActivationResponseBody() = default ;
    CreateActivationResponseBody(const CreateActivationResponseBody &) = default ;
    CreateActivationResponseBody(CreateActivationResponseBody &&) = default ;
    CreateActivationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateActivationResponseBody() = default ;
    CreateActivationResponseBody& operator=(const CreateActivationResponseBody &) = default ;
    CreateActivationResponseBody& operator=(CreateActivationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activationCode_ == nullptr
        && return this->activationId_ == nullptr && return this->requestId_ == nullptr; };
    // activationCode Field Functions 
    bool hasActivationCode() const { return this->activationCode_ != nullptr;};
    void deleteActivationCode() { this->activationCode_ = nullptr;};
    inline string activationCode() const { DARABONBA_PTR_GET_DEFAULT(activationCode_, "") };
    inline CreateActivationResponseBody& setActivationCode(string activationCode) { DARABONBA_PTR_SET_VALUE(activationCode_, activationCode) };


    // activationId Field Functions 
    bool hasActivationId() const { return this->activationId_ != nullptr;};
    void deleteActivationId() { this->activationId_ = nullptr;};
    inline string activationId() const { DARABONBA_PTR_GET_DEFAULT(activationId_, "") };
    inline CreateActivationResponseBody& setActivationId(string activationId) { DARABONBA_PTR_SET_VALUE(activationId_, activationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateActivationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The value of the activation code. The value is returned only once after the CreateActivation operation is called and cannot be queried afterward. Properly save the return value.
    std::shared_ptr<string> activationCode_ = nullptr;
    // The ID of the activation code.
    std::shared_ptr<string> activationId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
