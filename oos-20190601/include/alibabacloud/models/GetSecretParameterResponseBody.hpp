// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETPARAMETERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETPARAMETERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSecretParameterResponseBodyParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetSecretParameterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretParameterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Parameter, parameter_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretParameterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSecretParameterResponseBody() = default ;
    GetSecretParameterResponseBody(const GetSecretParameterResponseBody &) = default ;
    GetSecretParameterResponseBody(GetSecretParameterResponseBody &&) = default ;
    GetSecretParameterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretParameterResponseBody() = default ;
    GetSecretParameterResponseBody& operator=(const GetSecretParameterResponseBody &) = default ;
    GetSecretParameterResponseBody& operator=(GetSecretParameterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameter_ == nullptr
        && return this->requestId_ == nullptr; };
    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const GetSecretParameterResponseBodyParameter & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, GetSecretParameterResponseBodyParameter) };
    inline GetSecretParameterResponseBodyParameter parameter() { DARABONBA_PTR_GET(parameter_, GetSecretParameterResponseBodyParameter) };
    inline GetSecretParameterResponseBody& setParameter(const GetSecretParameterResponseBodyParameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline GetSecretParameterResponseBody& setParameter(GetSecretParameterResponseBodyParameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecretParameterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the encryption parameter.
    std::shared_ptr<GetSecretParameterResponseBodyParameter> parameter_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
