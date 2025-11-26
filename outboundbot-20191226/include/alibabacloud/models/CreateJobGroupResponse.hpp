// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBGROUPRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBGROUPRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateJobGroupResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateJobGroupResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobGroupResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobGroupResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateJobGroupResponse() = default ;
    CreateJobGroupResponse(const CreateJobGroupResponse &) = default ;
    CreateJobGroupResponse(CreateJobGroupResponse &&) = default ;
    CreateJobGroupResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobGroupResponse() = default ;
    CreateJobGroupResponse& operator=(const CreateJobGroupResponse &) = default ;
    CreateJobGroupResponse& operator=(CreateJobGroupResponse &&) = default ;
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
    inline CreateJobGroupResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateJobGroupResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateJobGroupResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateJobGroupResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateJobGroupResponseBody) };
    inline CreateJobGroupResponseBody body() { DARABONBA_PTR_GET(body_, CreateJobGroupResponseBody) };
    inline CreateJobGroupResponse& setBody(const CreateJobGroupResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateJobGroupResponse& setBody(CreateJobGroupResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateJobGroupResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
