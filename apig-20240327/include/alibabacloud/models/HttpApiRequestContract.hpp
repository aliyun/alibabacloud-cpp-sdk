// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIREQUESTCONTRACT_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIREQUESTCONTRACT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiRequestContractBody.hpp>
#include <vector>
#include <alibabacloud/APIG20240327.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiRequestContract : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiRequestContract& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(headerParameters, headerParameters_);
      DARABONBA_PTR_TO_JSON(pathParameters, pathParameters_);
      DARABONBA_PTR_TO_JSON(queryParameters, queryParameters_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiRequestContract& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(headerParameters, headerParameters_);
      DARABONBA_PTR_FROM_JSON(pathParameters, pathParameters_);
      DARABONBA_PTR_FROM_JSON(queryParameters, queryParameters_);
    };
    HttpApiRequestContract() = default ;
    HttpApiRequestContract(const HttpApiRequestContract &) = default ;
    HttpApiRequestContract(HttpApiRequestContract &&) = default ;
    HttpApiRequestContract(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiRequestContract() = default ;
    HttpApiRequestContract& operator=(const HttpApiRequestContract &) = default ;
    HttpApiRequestContract& operator=(HttpApiRequestContract &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->headerParameters_ != nullptr && this->pathParameters_ != nullptr && this->queryParameters_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const HttpApiRequestContractBody & body() const { DARABONBA_PTR_GET_CONST(body_, HttpApiRequestContractBody) };
    inline HttpApiRequestContractBody body() { DARABONBA_PTR_GET(body_, HttpApiRequestContractBody) };
    inline HttpApiRequestContract& setBody(const HttpApiRequestContractBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline HttpApiRequestContract& setBody(HttpApiRequestContractBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // headerParameters Field Functions 
    bool hasHeaderParameters() const { return this->headerParameters_ != nullptr;};
    void deleteHeaderParameters() { this->headerParameters_ = nullptr;};
    inline const vector<HttpApiParameter> & headerParameters() const { DARABONBA_PTR_GET_CONST(headerParameters_, vector<HttpApiParameter>) };
    inline vector<HttpApiParameter> headerParameters() { DARABONBA_PTR_GET(headerParameters_, vector<HttpApiParameter>) };
    inline HttpApiRequestContract& setHeaderParameters(const vector<HttpApiParameter> & headerParameters) { DARABONBA_PTR_SET_VALUE(headerParameters_, headerParameters) };
    inline HttpApiRequestContract& setHeaderParameters(vector<HttpApiParameter> && headerParameters) { DARABONBA_PTR_SET_RVALUE(headerParameters_, headerParameters) };


    // pathParameters Field Functions 
    bool hasPathParameters() const { return this->pathParameters_ != nullptr;};
    void deletePathParameters() { this->pathParameters_ = nullptr;};
    inline const vector<HttpApiParameter> & pathParameters() const { DARABONBA_PTR_GET_CONST(pathParameters_, vector<HttpApiParameter>) };
    inline vector<HttpApiParameter> pathParameters() { DARABONBA_PTR_GET(pathParameters_, vector<HttpApiParameter>) };
    inline HttpApiRequestContract& setPathParameters(const vector<HttpApiParameter> & pathParameters) { DARABONBA_PTR_SET_VALUE(pathParameters_, pathParameters) };
    inline HttpApiRequestContract& setPathParameters(vector<HttpApiParameter> && pathParameters) { DARABONBA_PTR_SET_RVALUE(pathParameters_, pathParameters) };


    // queryParameters Field Functions 
    bool hasQueryParameters() const { return this->queryParameters_ != nullptr;};
    void deleteQueryParameters() { this->queryParameters_ = nullptr;};
    inline const vector<HttpApiParameter> & queryParameters() const { DARABONBA_PTR_GET_CONST(queryParameters_, vector<HttpApiParameter>) };
    inline vector<HttpApiParameter> queryParameters() { DARABONBA_PTR_GET(queryParameters_, vector<HttpApiParameter>) };
    inline HttpApiRequestContract& setQueryParameters(const vector<HttpApiParameter> & queryParameters) { DARABONBA_PTR_SET_VALUE(queryParameters_, queryParameters) };
    inline HttpApiRequestContract& setQueryParameters(vector<HttpApiParameter> && queryParameters) { DARABONBA_PTR_SET_RVALUE(queryParameters_, queryParameters) };


  protected:
    std::shared_ptr<HttpApiRequestContractBody> body_ = nullptr;
    std::shared_ptr<vector<HttpApiParameter>> headerParameters_ = nullptr;
    std::shared_ptr<vector<HttpApiParameter>> pathParameters_ = nullptr;
    std::shared_ptr<vector<HttpApiParameter>> queryParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
