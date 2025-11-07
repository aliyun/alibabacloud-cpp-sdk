// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETPARAMETERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETPARAMETERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSecretParameterResponseBodyParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateSecretParameterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretParameterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Parameter, parameter_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretParameterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSecretParameterResponseBody() = default ;
    CreateSecretParameterResponseBody(const CreateSecretParameterResponseBody &) = default ;
    CreateSecretParameterResponseBody(CreateSecretParameterResponseBody &&) = default ;
    CreateSecretParameterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretParameterResponseBody() = default ;
    CreateSecretParameterResponseBody& operator=(const CreateSecretParameterResponseBody &) = default ;
    CreateSecretParameterResponseBody& operator=(CreateSecretParameterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameter_ == nullptr
        && return this->requestId_ == nullptr; };
    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const CreateSecretParameterResponseBodyParameter & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, CreateSecretParameterResponseBodyParameter) };
    inline CreateSecretParameterResponseBodyParameter parameter() { DARABONBA_PTR_GET(parameter_, CreateSecretParameterResponseBodyParameter) };
    inline CreateSecretParameterResponseBody& setParameter(const CreateSecretParameterResponseBodyParameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline CreateSecretParameterResponseBody& setParameter(CreateSecretParameterResponseBodyParameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSecretParameterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the encryption parameter.
    std::shared_ptr<CreateSecretParameterResponseBodyParameter> parameter_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
