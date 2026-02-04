// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDCDNSPECIFICCONFIGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEDCDNSPECIFICCONFIGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteDcdnSpecificConfigResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DeleteDcdnSpecificConfigResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDcdnSpecificConfigResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDcdnSpecificConfigResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteDcdnSpecificConfigResponse() = default ;
    DeleteDcdnSpecificConfigResponse(const DeleteDcdnSpecificConfigResponse &) = default ;
    DeleteDcdnSpecificConfigResponse(DeleteDcdnSpecificConfigResponse &&) = default ;
    DeleteDcdnSpecificConfigResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDcdnSpecificConfigResponse() = default ;
    DeleteDcdnSpecificConfigResponse& operator=(const DeleteDcdnSpecificConfigResponse &) = default ;
    DeleteDcdnSpecificConfigResponse& operator=(DeleteDcdnSpecificConfigResponse &&) = default ;
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
    inline DeleteDcdnSpecificConfigResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteDcdnSpecificConfigResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteDcdnSpecificConfigResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteDcdnSpecificConfigResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeleteDcdnSpecificConfigResponseBody) };
    inline DeleteDcdnSpecificConfigResponseBody getBody() { DARABONBA_PTR_GET(body_, DeleteDcdnSpecificConfigResponseBody) };
    inline DeleteDcdnSpecificConfigResponse& setBody(const DeleteDcdnSpecificConfigResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteDcdnSpecificConfigResponse& setBody(DeleteDcdnSpecificConfigResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DeleteDcdnSpecificConfigResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
