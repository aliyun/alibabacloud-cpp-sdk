// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEACTIVATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLEACTIVATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DisableActivationResponseBodyActivation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DisableActivationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableActivationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Activation, activation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableActivationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Activation, activation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DisableActivationResponseBody() = default ;
    DisableActivationResponseBody(const DisableActivationResponseBody &) = default ;
    DisableActivationResponseBody(DisableActivationResponseBody &&) = default ;
    DisableActivationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableActivationResponseBody() = default ;
    DisableActivationResponseBody& operator=(const DisableActivationResponseBody &) = default ;
    DisableActivationResponseBody& operator=(DisableActivationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activation_ != nullptr
        && this->requestId_ != nullptr; };
    // activation Field Functions 
    bool hasActivation() const { return this->activation_ != nullptr;};
    void deleteActivation() { this->activation_ = nullptr;};
    inline const DisableActivationResponseBodyActivation & activation() const { DARABONBA_PTR_GET_CONST(activation_, DisableActivationResponseBodyActivation) };
    inline DisableActivationResponseBodyActivation activation() { DARABONBA_PTR_GET(activation_, DisableActivationResponseBodyActivation) };
    inline DisableActivationResponseBody& setActivation(const DisableActivationResponseBodyActivation & activation) { DARABONBA_PTR_SET_VALUE(activation_, activation) };
    inline DisableActivationResponseBody& setActivation(DisableActivationResponseBodyActivation && activation) { DARABONBA_PTR_SET_RVALUE(activation_, activation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisableActivationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the activation code was created.
    std::shared_ptr<DisableActivationResponseBodyActivation> activation_ = nullptr;
    // Details about the activation code and its usage information.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
