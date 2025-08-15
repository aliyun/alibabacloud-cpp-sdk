// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEORESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDVIDEORESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryCloudRecordVideoResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryCloudRecordVideoResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordVideoResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordVideoResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryCloudRecordVideoResponse() = default ;
    QueryCloudRecordVideoResponse(const QueryCloudRecordVideoResponse &) = default ;
    QueryCloudRecordVideoResponse(QueryCloudRecordVideoResponse &&) = default ;
    QueryCloudRecordVideoResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordVideoResponse() = default ;
    QueryCloudRecordVideoResponse& operator=(const QueryCloudRecordVideoResponse &) = default ;
    QueryCloudRecordVideoResponse& operator=(QueryCloudRecordVideoResponse &&) = default ;
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
    inline QueryCloudRecordVideoResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryCloudRecordVideoResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryCloudRecordVideoResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryCloudRecordVideoResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, QueryCloudRecordVideoResponseBody) };
    inline QueryCloudRecordVideoResponseBody body() { DARABONBA_PTR_GET(body_, QueryCloudRecordVideoResponseBody) };
    inline QueryCloudRecordVideoResponse& setBody(const QueryCloudRecordVideoResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryCloudRecordVideoResponse& setBody(QueryCloudRecordVideoResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<QueryCloudRecordVideoResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
