// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTLABELRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTLABELRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateProjectLabelResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProjectLabelResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectLabelResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectLabelResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateProjectLabelResponse() = default ;
    UpdateProjectLabelResponse(const UpdateProjectLabelResponse &) = default ;
    UpdateProjectLabelResponse(UpdateProjectLabelResponse &&) = default ;
    UpdateProjectLabelResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectLabelResponse() = default ;
    UpdateProjectLabelResponse& operator=(const UpdateProjectLabelResponse &) = default ;
    UpdateProjectLabelResponse& operator=(UpdateProjectLabelResponse &&) = default ;
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
    inline UpdateProjectLabelResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateProjectLabelResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateProjectLabelResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateProjectLabelResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateProjectLabelResponseBody) };
    inline UpdateProjectLabelResponseBody body() { DARABONBA_PTR_GET(body_, UpdateProjectLabelResponseBody) };
    inline UpdateProjectLabelResponse& setBody(const UpdateProjectLabelResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateProjectLabelResponse& setBody(UpdateProjectLabelResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UpdateProjectLabelResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
