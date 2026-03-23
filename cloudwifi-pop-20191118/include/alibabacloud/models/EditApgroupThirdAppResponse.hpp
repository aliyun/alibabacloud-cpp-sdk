// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITAPGROUPTHIRDAPPRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_EDITAPGROUPTHIRDAPPRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/EditApgroupThirdAppResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class EditApgroupThirdAppResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditApgroupThirdAppResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, EditApgroupThirdAppResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    EditApgroupThirdAppResponse() = default ;
    EditApgroupThirdAppResponse(const EditApgroupThirdAppResponse &) = default ;
    EditApgroupThirdAppResponse(EditApgroupThirdAppResponse &&) = default ;
    EditApgroupThirdAppResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditApgroupThirdAppResponse() = default ;
    EditApgroupThirdAppResponse& operator=(const EditApgroupThirdAppResponse &) = default ;
    EditApgroupThirdAppResponse& operator=(EditApgroupThirdAppResponse &&) = default ;
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
    inline EditApgroupThirdAppResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline EditApgroupThirdAppResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline EditApgroupThirdAppResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const EditApgroupThirdAppResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, EditApgroupThirdAppResponseBody) };
    inline EditApgroupThirdAppResponseBody getBody() { DARABONBA_PTR_GET(body_, EditApgroupThirdAppResponseBody) };
    inline EditApgroupThirdAppResponse& setBody(const EditApgroupThirdAppResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline EditApgroupThirdAppResponse& setBody(EditApgroupThirdAppResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<EditApgroupThirdAppResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
