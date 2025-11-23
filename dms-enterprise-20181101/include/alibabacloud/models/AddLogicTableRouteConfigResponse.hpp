// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLOGICTABLEROUTECONFIGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ADDLOGICTABLEROUTECONFIGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AddLogicTableRouteConfigResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddLogicTableRouteConfigResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLogicTableRouteConfigResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AddLogicTableRouteConfigResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AddLogicTableRouteConfigResponse() = default ;
    AddLogicTableRouteConfigResponse(const AddLogicTableRouteConfigResponse &) = default ;
    AddLogicTableRouteConfigResponse(AddLogicTableRouteConfigResponse &&) = default ;
    AddLogicTableRouteConfigResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLogicTableRouteConfigResponse() = default ;
    AddLogicTableRouteConfigResponse& operator=(const AddLogicTableRouteConfigResponse &) = default ;
    AddLogicTableRouteConfigResponse& operator=(AddLogicTableRouteConfigResponse &&) = default ;
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
    inline AddLogicTableRouteConfigResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline AddLogicTableRouteConfigResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline AddLogicTableRouteConfigResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AddLogicTableRouteConfigResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, AddLogicTableRouteConfigResponseBody) };
    inline AddLogicTableRouteConfigResponseBody body() { DARABONBA_PTR_GET(body_, AddLogicTableRouteConfigResponseBody) };
    inline AddLogicTableRouteConfigResponse& setBody(const AddLogicTableRouteConfigResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AddLogicTableRouteConfigResponse& setBody(AddLogicTableRouteConfigResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<AddLogicTableRouteConfigResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
