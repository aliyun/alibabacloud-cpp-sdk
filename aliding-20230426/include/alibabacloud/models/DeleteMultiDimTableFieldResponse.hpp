// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMULTIDIMTABLEFIELDRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEMULTIDIMTABLEFIELDRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteMultiDimTableFieldResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteMultiDimTableFieldResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMultiDimTableFieldResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMultiDimTableFieldResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteMultiDimTableFieldResponse() = default ;
    DeleteMultiDimTableFieldResponse(const DeleteMultiDimTableFieldResponse &) = default ;
    DeleteMultiDimTableFieldResponse(DeleteMultiDimTableFieldResponse &&) = default ;
    DeleteMultiDimTableFieldResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMultiDimTableFieldResponse() = default ;
    DeleteMultiDimTableFieldResponse& operator=(const DeleteMultiDimTableFieldResponse &) = default ;
    DeleteMultiDimTableFieldResponse& operator=(DeleteMultiDimTableFieldResponse &&) = default ;
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
    inline DeleteMultiDimTableFieldResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteMultiDimTableFieldResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteMultiDimTableFieldResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteMultiDimTableFieldResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DeleteMultiDimTableFieldResponseBody) };
    inline DeleteMultiDimTableFieldResponseBody body() { DARABONBA_PTR_GET(body_, DeleteMultiDimTableFieldResponseBody) };
    inline DeleteMultiDimTableFieldResponse& setBody(const DeleteMultiDimTableFieldResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteMultiDimTableFieldResponse& setBody(DeleteMultiDimTableFieldResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DeleteMultiDimTableFieldResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
