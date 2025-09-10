// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDBINSTANCETDERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDBINSTANCETDERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateDBInstanceTDEResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class UpdateDBInstanceTDEResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDBInstanceTDEResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDBInstanceTDEResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateDBInstanceTDEResponse() = default ;
    UpdateDBInstanceTDEResponse(const UpdateDBInstanceTDEResponse &) = default ;
    UpdateDBInstanceTDEResponse(UpdateDBInstanceTDEResponse &&) = default ;
    UpdateDBInstanceTDEResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDBInstanceTDEResponse() = default ;
    UpdateDBInstanceTDEResponse& operator=(const UpdateDBInstanceTDEResponse &) = default ;
    UpdateDBInstanceTDEResponse& operator=(UpdateDBInstanceTDEResponse &&) = default ;
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
    inline UpdateDBInstanceTDEResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateDBInstanceTDEResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateDBInstanceTDEResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateDBInstanceTDEResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateDBInstanceTDEResponseBody) };
    inline UpdateDBInstanceTDEResponseBody body() { DARABONBA_PTR_GET(body_, UpdateDBInstanceTDEResponseBody) };
    inline UpdateDBInstanceTDEResponse& setBody(const UpdateDBInstanceTDEResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateDBInstanceTDEResponse& setBody(UpdateDBInstanceTDEResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UpdateDBInstanceTDEResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
