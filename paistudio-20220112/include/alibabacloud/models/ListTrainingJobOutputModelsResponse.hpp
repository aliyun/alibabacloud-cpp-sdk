// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBOUTPUTMODELSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBOUTPUTMODELSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobOutputModelsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobOutputModelsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobOutputModelsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListTrainingJobOutputModelsResponse() = default ;
    ListTrainingJobOutputModelsResponse(const ListTrainingJobOutputModelsResponse &) = default ;
    ListTrainingJobOutputModelsResponse(ListTrainingJobOutputModelsResponse &&) = default ;
    ListTrainingJobOutputModelsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobOutputModelsResponse() = default ;
    ListTrainingJobOutputModelsResponse& operator=(const ListTrainingJobOutputModelsResponse &) = default ;
    ListTrainingJobOutputModelsResponse& operator=(ListTrainingJobOutputModelsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ListTrainingJobOutputModelsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListTrainingJobOutputModelsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListTrainingJobOutputModelsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListTrainingJobOutputModelsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListTrainingJobOutputModelsResponseBody) };
    inline ListTrainingJobOutputModelsResponseBody body() { DARABONBA_PTR_GET(body_, ListTrainingJobOutputModelsResponseBody) };
    inline ListTrainingJobOutputModelsResponse& setBody(const ListTrainingJobOutputModelsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListTrainingJobOutputModelsResponse& setBody(ListTrainingJobOutputModelsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListTrainingJobOutputModelsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
