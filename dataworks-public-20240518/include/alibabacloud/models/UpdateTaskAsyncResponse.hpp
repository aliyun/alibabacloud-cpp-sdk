// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKASYNCRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKASYNCRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateTaskAsyncResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTaskAsyncResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskAsyncResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskAsyncResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateTaskAsyncResponse() = default ;
    UpdateTaskAsyncResponse(const UpdateTaskAsyncResponse &) = default ;
    UpdateTaskAsyncResponse(UpdateTaskAsyncResponse &&) = default ;
    UpdateTaskAsyncResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskAsyncResponse() = default ;
    UpdateTaskAsyncResponse& operator=(const UpdateTaskAsyncResponse &) = default ;
    UpdateTaskAsyncResponse& operator=(UpdateTaskAsyncResponse &&) = default ;
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
    inline UpdateTaskAsyncResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateTaskAsyncResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateTaskAsyncResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateTaskAsyncResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateTaskAsyncResponseBody) };
    inline UpdateTaskAsyncResponseBody getBody() { DARABONBA_PTR_GET(body_, UpdateTaskAsyncResponseBody) };
    inline UpdateTaskAsyncResponse& setBody(const UpdateTaskAsyncResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateTaskAsyncResponse& setBody(UpdateTaskAsyncResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UpdateTaskAsyncResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
