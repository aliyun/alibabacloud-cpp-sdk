// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetParametersResponseBodyParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvalidParameters, invalidParameters_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvalidParameters, invalidParameters_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetParametersResponseBody() = default ;
    GetParametersResponseBody(const GetParametersResponseBody &) = default ;
    GetParametersResponseBody(GetParametersResponseBody &&) = default ;
    GetParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParametersResponseBody() = default ;
    GetParametersResponseBody& operator=(const GetParametersResponseBody &) = default ;
    GetParametersResponseBody& operator=(GetParametersResponseBody &&) = default ;
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
    inline GetParametersResponseBody& setInvalidParameters(const vector<string> & invalidParameters) { DARABONBA_PTR_SET_VALUE(invalidParameters_, invalidParameters) };
    inline GetParametersResponseBody& setInvalidParameters(vector<string> && invalidParameters) { DARABONBA_PTR_SET_RVALUE(invalidParameters_, invalidParameters) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<GetParametersResponseBodyParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<GetParametersResponseBodyParameters>) };
    inline vector<GetParametersResponseBodyParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<GetParametersResponseBodyParameters>) };
    inline GetParametersResponseBody& setParameters(const vector<GetParametersResponseBodyParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetParametersResponseBody& setParameters(vector<GetParametersResponseBodyParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Invalid parameters.
    std::shared_ptr<vector<string>> invalidParameters_ = nullptr;
    // The information about the common parameters.
    std::shared_ptr<vector<GetParametersResponseBodyParameters>> parameters_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
