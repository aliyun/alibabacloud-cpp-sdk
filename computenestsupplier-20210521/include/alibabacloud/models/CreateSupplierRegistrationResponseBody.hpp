// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUPPLIERREGISTRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESUPPLIERREGISTRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateSupplierRegistrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSupplierRegistrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSupplierRegistrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSupplierRegistrationResponseBody() = default ;
    CreateSupplierRegistrationResponseBody(const CreateSupplierRegistrationResponseBody &) = default ;
    CreateSupplierRegistrationResponseBody(CreateSupplierRegistrationResponseBody &&) = default ;
    CreateSupplierRegistrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSupplierRegistrationResponseBody() = default ;
    CreateSupplierRegistrationResponseBody& operator=(const CreateSupplierRegistrationResponseBody &) = default ;
    CreateSupplierRegistrationResponseBody& operator=(CreateSupplierRegistrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSupplierRegistrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
