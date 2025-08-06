// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMULTIDIMTABLERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ADDMULTIDIMTABLERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddMultiDimTableResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMultiDimTableResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AddMultiDimTableResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AddMultiDimTableResponse() = default ;
    AddMultiDimTableResponse(const AddMultiDimTableResponse &) = default ;
    AddMultiDimTableResponse(AddMultiDimTableResponse &&) = default ;
    AddMultiDimTableResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMultiDimTableResponse() = default ;
    AddMultiDimTableResponse& operator=(const AddMultiDimTableResponse &) = default ;
    AddMultiDimTableResponse& operator=(AddMultiDimTableResponse &&) = default ;
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
    inline AddMultiDimTableResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline AddMultiDimTableResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline AddMultiDimTableResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AddMultiDimTableResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, AddMultiDimTableResponseBody) };
    inline AddMultiDimTableResponseBody body() { DARABONBA_PTR_GET(body_, AddMultiDimTableResponseBody) };
    inline AddMultiDimTableResponse& setBody(const AddMultiDimTableResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AddMultiDimTableResponse& setBody(AddMultiDimTableResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<AddMultiDimTableResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
