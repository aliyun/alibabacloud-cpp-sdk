// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELINEAGERELATIONSHIPRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATELINEAGERELATIONSHIPRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateLineageRelationshipResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateLineageRelationshipResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLineageRelationshipResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLineageRelationshipResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateLineageRelationshipResponse() = default ;
    CreateLineageRelationshipResponse(const CreateLineageRelationshipResponse &) = default ;
    CreateLineageRelationshipResponse(CreateLineageRelationshipResponse &&) = default ;
    CreateLineageRelationshipResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLineageRelationshipResponse() = default ;
    CreateLineageRelationshipResponse& operator=(const CreateLineageRelationshipResponse &) = default ;
    CreateLineageRelationshipResponse& operator=(CreateLineageRelationshipResponse &&) = default ;
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
    inline CreateLineageRelationshipResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateLineageRelationshipResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateLineageRelationshipResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateLineageRelationshipResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateLineageRelationshipResponseBody) };
    inline CreateLineageRelationshipResponseBody body() { DARABONBA_PTR_GET(body_, CreateLineageRelationshipResponseBody) };
    inline CreateLineageRelationshipResponse& setBody(const CreateLineageRelationshipResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateLineageRelationshipResponse& setBody(CreateLineageRelationshipResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateLineageRelationshipResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
