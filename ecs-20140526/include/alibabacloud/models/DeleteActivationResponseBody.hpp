// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACTIVATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEACTIVATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteActivationResponseBodyActivation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteActivationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteActivationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Activation, activation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteActivationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Activation, activation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteActivationResponseBody() = default ;
    DeleteActivationResponseBody(const DeleteActivationResponseBody &) = default ;
    DeleteActivationResponseBody(DeleteActivationResponseBody &&) = default ;
    DeleteActivationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteActivationResponseBody() = default ;
    DeleteActivationResponseBody& operator=(const DeleteActivationResponseBody &) = default ;
    DeleteActivationResponseBody& operator=(DeleteActivationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activation_ != nullptr
        && this->requestId_ != nullptr; };
    // activation Field Functions 
    bool hasActivation() const { return this->activation_ != nullptr;};
    void deleteActivation() { this->activation_ = nullptr;};
    inline const DeleteActivationResponseBodyActivation & activation() const { DARABONBA_PTR_GET_CONST(activation_, DeleteActivationResponseBodyActivation) };
    inline DeleteActivationResponseBodyActivation activation() { DARABONBA_PTR_GET(activation_, DeleteActivationResponseBodyActivation) };
    inline DeleteActivationResponseBody& setActivation(const DeleteActivationResponseBodyActivation & activation) { DARABONBA_PTR_SET_VALUE(activation_, activation) };
    inline DeleteActivationResponseBody& setActivation(DeleteActivationResponseBodyActivation && activation) { DARABONBA_PTR_SET_RVALUE(activation_, activation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteActivationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the activation code and its usage information.
    std::shared_ptr<DeleteActivationResponseBodyActivation> activation_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
