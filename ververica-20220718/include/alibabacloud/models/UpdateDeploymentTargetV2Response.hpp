// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTTARGETV2RESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTTARGETV2RESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateDeploymentTargetV2ResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UpdateDeploymentTargetV2Response : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeploymentTargetV2Response& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeploymentTargetV2Response& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateDeploymentTargetV2Response() = default ;
    UpdateDeploymentTargetV2Response(const UpdateDeploymentTargetV2Response &) = default ;
    UpdateDeploymentTargetV2Response(UpdateDeploymentTargetV2Response &&) = default ;
    UpdateDeploymentTargetV2Response(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeploymentTargetV2Response() = default ;
    UpdateDeploymentTargetV2Response& operator=(const UpdateDeploymentTargetV2Response &) = default ;
    UpdateDeploymentTargetV2Response& operator=(UpdateDeploymentTargetV2Response &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline UpdateDeploymentTargetV2Response& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateDeploymentTargetV2Response& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateDeploymentTargetV2Response& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateDeploymentTargetV2ResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateDeploymentTargetV2ResponseBody) };
    inline UpdateDeploymentTargetV2ResponseBody body() { DARABONBA_PTR_GET(body_, UpdateDeploymentTargetV2ResponseBody) };
    inline UpdateDeploymentTargetV2Response& setBody(const UpdateDeploymentTargetV2ResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateDeploymentTargetV2Response& setBody(UpdateDeploymentTargetV2ResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UpdateDeploymentTargetV2ResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
