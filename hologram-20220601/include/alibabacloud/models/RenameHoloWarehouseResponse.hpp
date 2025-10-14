// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENAMEHOLOWAREHOUSERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_RENAMEHOLOWAREHOUSERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/RenameHoloWarehouseResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class RenameHoloWarehouseResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenameHoloWarehouseResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RenameHoloWarehouseResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RenameHoloWarehouseResponse() = default ;
    RenameHoloWarehouseResponse(const RenameHoloWarehouseResponse &) = default ;
    RenameHoloWarehouseResponse(RenameHoloWarehouseResponse &&) = default ;
    RenameHoloWarehouseResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenameHoloWarehouseResponse() = default ;
    RenameHoloWarehouseResponse& operator=(const RenameHoloWarehouseResponse &) = default ;
    RenameHoloWarehouseResponse& operator=(RenameHoloWarehouseResponse &&) = default ;
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
    inline RenameHoloWarehouseResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline RenameHoloWarehouseResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline RenameHoloWarehouseResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RenameHoloWarehouseResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, RenameHoloWarehouseResponseBody) };
    inline RenameHoloWarehouseResponseBody body() { DARABONBA_PTR_GET(body_, RenameHoloWarehouseResponseBody) };
    inline RenameHoloWarehouseResponse& setBody(const RenameHoloWarehouseResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RenameHoloWarehouseResponse& setBody(RenameHoloWarehouseResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<RenameHoloWarehouseResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
