// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEHOLOWAREHOUSERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SCALEHOLOWAREHOUSERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ScaleHoloWarehouseResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ScaleHoloWarehouseResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleHoloWarehouseResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleHoloWarehouseResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ScaleHoloWarehouseResponse() = default ;
    ScaleHoloWarehouseResponse(const ScaleHoloWarehouseResponse &) = default ;
    ScaleHoloWarehouseResponse(ScaleHoloWarehouseResponse &&) = default ;
    ScaleHoloWarehouseResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleHoloWarehouseResponse() = default ;
    ScaleHoloWarehouseResponse& operator=(const ScaleHoloWarehouseResponse &) = default ;
    ScaleHoloWarehouseResponse& operator=(ScaleHoloWarehouseResponse &&) = default ;
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
    inline ScaleHoloWarehouseResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ScaleHoloWarehouseResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ScaleHoloWarehouseResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ScaleHoloWarehouseResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ScaleHoloWarehouseResponseBody) };
    inline ScaleHoloWarehouseResponseBody body() { DARABONBA_PTR_GET(body_, ScaleHoloWarehouseResponseBody) };
    inline ScaleHoloWarehouseResponse& setBody(const ScaleHoloWarehouseResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ScaleHoloWarehouseResponse& setBody(ScaleHoloWarehouseResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ScaleHoloWarehouseResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
