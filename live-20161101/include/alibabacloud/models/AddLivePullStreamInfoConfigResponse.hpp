// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVEPULLSTREAMINFOCONFIGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVEPULLSTREAMINFOCONFIGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AddLivePullStreamInfoConfigResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLivePullStreamInfoConfigResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLivePullStreamInfoConfigResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AddLivePullStreamInfoConfigResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AddLivePullStreamInfoConfigResponse() = default ;
    AddLivePullStreamInfoConfigResponse(const AddLivePullStreamInfoConfigResponse &) = default ;
    AddLivePullStreamInfoConfigResponse(AddLivePullStreamInfoConfigResponse &&) = default ;
    AddLivePullStreamInfoConfigResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLivePullStreamInfoConfigResponse() = default ;
    AddLivePullStreamInfoConfigResponse& operator=(const AddLivePullStreamInfoConfigResponse &) = default ;
    AddLivePullStreamInfoConfigResponse& operator=(AddLivePullStreamInfoConfigResponse &&) = default ;
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
    inline AddLivePullStreamInfoConfigResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline AddLivePullStreamInfoConfigResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline AddLivePullStreamInfoConfigResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AddLivePullStreamInfoConfigResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, AddLivePullStreamInfoConfigResponseBody) };
    inline AddLivePullStreamInfoConfigResponseBody getBody() { DARABONBA_PTR_GET(body_, AddLivePullStreamInfoConfigResponseBody) };
    inline AddLivePullStreamInfoConfigResponse& setBody(const AddLivePullStreamInfoConfigResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AddLivePullStreamInfoConfigResponse& setBody(AddLivePullStreamInfoConfigResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<AddLivePullStreamInfoConfigResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
