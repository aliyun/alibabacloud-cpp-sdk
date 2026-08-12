// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEGROUPREFRESHTASKRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEGROUPREFRESHTASKRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeNodeGroupRefreshTaskResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNodeGroupRefreshTaskResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeGroupRefreshTaskResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeGroupRefreshTaskResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeNodeGroupRefreshTaskResponse() = default ;
    DescribeNodeGroupRefreshTaskResponse(const DescribeNodeGroupRefreshTaskResponse &) = default ;
    DescribeNodeGroupRefreshTaskResponse(DescribeNodeGroupRefreshTaskResponse &&) = default ;
    DescribeNodeGroupRefreshTaskResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeGroupRefreshTaskResponse() = default ;
    DescribeNodeGroupRefreshTaskResponse& operator=(const DescribeNodeGroupRefreshTaskResponse &) = default ;
    DescribeNodeGroupRefreshTaskResponse& operator=(DescribeNodeGroupRefreshTaskResponse &&) = default ;
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
    inline DescribeNodeGroupRefreshTaskResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeNodeGroupRefreshTaskResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeNodeGroupRefreshTaskResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeNodeGroupRefreshTaskResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DescribeNodeGroupRefreshTaskResponseBody) };
    inline DescribeNodeGroupRefreshTaskResponseBody getBody() { DARABONBA_PTR_GET(body_, DescribeNodeGroupRefreshTaskResponseBody) };
    inline DescribeNodeGroupRefreshTaskResponse& setBody(const DescribeNodeGroupRefreshTaskResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeNodeGroupRefreshTaskResponse& setBody(DescribeNodeGroupRefreshTaskResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DescribeNodeGroupRefreshTaskResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
