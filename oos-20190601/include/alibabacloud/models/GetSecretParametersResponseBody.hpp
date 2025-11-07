// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSecretParametersResponseBodyParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetSecretParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvalidParameters, invalidParameters_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvalidParameters, invalidParameters_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSecretParametersResponseBody() = default ;
    GetSecretParametersResponseBody(const GetSecretParametersResponseBody &) = default ;
    GetSecretParametersResponseBody(GetSecretParametersResponseBody &&) = default ;
    GetSecretParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretParametersResponseBody() = default ;
    GetSecretParametersResponseBody& operator=(const GetSecretParametersResponseBody &) = default ;
    GetSecretParametersResponseBody& operator=(GetSecretParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invalidParameters_ == nullptr
        && return this->parameters_ == nullptr && return this->requestId_ == nullptr; };
    // invalidParameters Field Functions 
    bool hasInvalidParameters() const { return this->invalidParameters_ != nullptr;};
    void deleteInvalidParameters() { this->invalidParameters_ = nullptr;};
    inline const vector<string> & invalidParameters() const { DARABONBA_PTR_GET_CONST(invalidParameters_, vector<string>) };
    inline vector<string> invalidParameters() { DARABONBA_PTR_GET(invalidParameters_, vector<string>) };
    inline GetSecretParametersResponseBody& setInvalidParameters(const vector<string> & invalidParameters) { DARABONBA_PTR_SET_VALUE(invalidParameters_, invalidParameters) };
    inline GetSecretParametersResponseBody& setInvalidParameters(vector<string> && invalidParameters) { DARABONBA_PTR_SET_RVALUE(invalidParameters_, invalidParameters) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetSecretParametersResponseBodyParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetSecretParametersResponseBodyParameters>) };
    inline vector<GetSecretParametersResponseBodyParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<GetSecretParametersResponseBodyParameters>) };
    inline GetSecretParametersResponseBody& setParameters(const vector<GetSecretParametersResponseBodyParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetSecretParametersResponseBody& setParameters(vector<GetSecretParametersResponseBodyParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecretParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Invalid encryption parameter.
    std::shared_ptr<vector<string>> invalidParameters_ = nullptr;
    // The information about the encryption parameter.
    std::shared_ptr<vector<GetSecretParametersResponseBodyParameters>> parameters_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
