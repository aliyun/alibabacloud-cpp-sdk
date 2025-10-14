// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENBACKUPSETRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENBACKUPSETRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeOpenBackupSetResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeOpenBackupSetResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenBackupSetResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenBackupSetResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeOpenBackupSetResponse() = default ;
    DescribeOpenBackupSetResponse(const DescribeOpenBackupSetResponse &) = default ;
    DescribeOpenBackupSetResponse(DescribeOpenBackupSetResponse &&) = default ;
    DescribeOpenBackupSetResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenBackupSetResponse() = default ;
    DescribeOpenBackupSetResponse& operator=(const DescribeOpenBackupSetResponse &) = default ;
    DescribeOpenBackupSetResponse& operator=(DescribeOpenBackupSetResponse &&) = default ;
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
    inline DescribeOpenBackupSetResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeOpenBackupSetResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeOpenBackupSetResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeOpenBackupSetResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeOpenBackupSetResponseBody) };
    inline DescribeOpenBackupSetResponseBody body() { DARABONBA_PTR_GET(body_, DescribeOpenBackupSetResponseBody) };
    inline DescribeOpenBackupSetResponse& setBody(const DescribeOpenBackupSetResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeOpenBackupSetResponse& setBody(DescribeOpenBackupSetResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeOpenBackupSetResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
