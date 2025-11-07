// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARAMETERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPARAMETERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetParameterResponseBodyParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetParameterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParameterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Parameter, parameter_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetParameterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetParameterResponseBody() = default ;
    GetParameterResponseBody(const GetParameterResponseBody &) = default ;
    GetParameterResponseBody(GetParameterResponseBody &&) = default ;
    GetParameterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParameterResponseBody() = default ;
    GetParameterResponseBody& operator=(const GetParameterResponseBody &) = default ;
    GetParameterResponseBody& operator=(GetParameterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameter_ == nullptr
        && return this->requestId_ == nullptr; };
    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const GetParameterResponseBodyParameter & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, GetParameterResponseBodyParameter) };
    inline GetParameterResponseBodyParameter parameter() { DARABONBA_PTR_GET(parameter_, GetParameterResponseBodyParameter) };
    inline GetParameterResponseBody& setParameter(const GetParameterResponseBodyParameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline GetParameterResponseBody& setParameter(GetParameterResponseBodyParameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetParameterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the common parameter.
    std::shared_ptr<GetParameterResponseBodyParameter> parameter_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
