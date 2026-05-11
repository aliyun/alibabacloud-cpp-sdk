// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBRECORDDURATIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBRECORDDURATIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateJobRecordDurationResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class UpdateJobRecordDurationResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobRecordDurationResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobRecordDurationResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateJobRecordDurationResponse() = default ;
    UpdateJobRecordDurationResponse(const UpdateJobRecordDurationResponse &) = default ;
    UpdateJobRecordDurationResponse(UpdateJobRecordDurationResponse &&) = default ;
    UpdateJobRecordDurationResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobRecordDurationResponse() = default ;
    UpdateJobRecordDurationResponse& operator=(const UpdateJobRecordDurationResponse &) = default ;
    UpdateJobRecordDurationResponse& operator=(UpdateJobRecordDurationResponse &&) = default ;
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
    inline UpdateJobRecordDurationResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateJobRecordDurationResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateJobRecordDurationResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateJobRecordDurationResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateJobRecordDurationResponseBody) };
    inline UpdateJobRecordDurationResponseBody getBody() { DARABONBA_PTR_GET(body_, UpdateJobRecordDurationResponseBody) };
    inline UpdateJobRecordDurationResponse& setBody(const UpdateJobRecordDurationResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateJobRecordDurationResponse& setBody(UpdateJobRecordDurationResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UpdateJobRecordDurationResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
