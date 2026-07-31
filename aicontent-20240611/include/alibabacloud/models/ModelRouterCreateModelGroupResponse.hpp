// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCREATEMODELGROUPRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCREATEMODELGROUPRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModelRouterCreateModelGroupResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterCreateModelGroupResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterCreateModelGroupResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterCreateModelGroupResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModelRouterCreateModelGroupResponse() = default ;
    ModelRouterCreateModelGroupResponse(const ModelRouterCreateModelGroupResponse &) = default ;
    ModelRouterCreateModelGroupResponse(ModelRouterCreateModelGroupResponse &&) = default ;
    ModelRouterCreateModelGroupResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterCreateModelGroupResponse() = default ;
    ModelRouterCreateModelGroupResponse& operator=(const ModelRouterCreateModelGroupResponse &) = default ;
    ModelRouterCreateModelGroupResponse& operator=(ModelRouterCreateModelGroupResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ModelRouterCreateModelGroupResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModelRouterCreateModelGroupResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModelRouterCreateModelGroupResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModelRouterCreateModelGroupResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ModelRouterCreateModelGroupResponseBody) };
    inline ModelRouterCreateModelGroupResponseBody getBody() { DARABONBA_PTR_GET(body_, ModelRouterCreateModelGroupResponseBody) };
    inline ModelRouterCreateModelGroupResponse& setBody(const ModelRouterCreateModelGroupResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModelRouterCreateModelGroupResponse& setBody(ModelRouterCreateModelGroupResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ModelRouterCreateModelGroupResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
