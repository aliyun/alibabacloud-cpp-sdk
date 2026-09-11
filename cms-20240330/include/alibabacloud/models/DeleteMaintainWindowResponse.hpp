// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMAINTAINWINDOWRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEMAINTAINWINDOWRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteMaintainWindowResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteMaintainWindowResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMaintainWindowResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMaintainWindowResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteMaintainWindowResponse() = default ;
    DeleteMaintainWindowResponse(const DeleteMaintainWindowResponse &) = default ;
    DeleteMaintainWindowResponse(DeleteMaintainWindowResponse &&) = default ;
    DeleteMaintainWindowResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMaintainWindowResponse() = default ;
    DeleteMaintainWindowResponse& operator=(const DeleteMaintainWindowResponse &) = default ;
    DeleteMaintainWindowResponse& operator=(DeleteMaintainWindowResponse &&) = default ;
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
    inline DeleteMaintainWindowResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteMaintainWindowResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteMaintainWindowResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteMaintainWindowResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeleteMaintainWindowResponseBody) };
    inline DeleteMaintainWindowResponseBody getBody() { DARABONBA_PTR_GET(body_, DeleteMaintainWindowResponseBody) };
    inline DeleteMaintainWindowResponse& setBody(const DeleteMaintainWindowResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteMaintainWindowResponse& setBody(DeleteMaintainWindowResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DeleteMaintainWindowResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
