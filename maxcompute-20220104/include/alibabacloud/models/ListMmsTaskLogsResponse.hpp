// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTASKLOGSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTASKLOGSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListMmsTaskLogsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTaskLogsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTaskLogsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTaskLogsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListMmsTaskLogsResponse() = default ;
    ListMmsTaskLogsResponse(const ListMmsTaskLogsResponse &) = default ;
    ListMmsTaskLogsResponse(ListMmsTaskLogsResponse &&) = default ;
    ListMmsTaskLogsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTaskLogsResponse() = default ;
    ListMmsTaskLogsResponse& operator=(const ListMmsTaskLogsResponse &) = default ;
    ListMmsTaskLogsResponse& operator=(ListMmsTaskLogsResponse &&) = default ;
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
    inline ListMmsTaskLogsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListMmsTaskLogsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListMmsTaskLogsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListMmsTaskLogsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListMmsTaskLogsResponseBody) };
    inline ListMmsTaskLogsResponseBody body() { DARABONBA_PTR_GET(body_, ListMmsTaskLogsResponseBody) };
    inline ListMmsTaskLogsResponse& setBody(const ListMmsTaskLogsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListMmsTaskLogsResponse& setBody(ListMmsTaskLogsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListMmsTaskLogsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
