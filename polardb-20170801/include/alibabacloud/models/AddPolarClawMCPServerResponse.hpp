// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPOLARCLAWMCPSERVERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ADDPOLARCLAWMCPSERVERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AddPolarClawMCPServerResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class AddPolarClawMCPServerResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPolarClawMCPServerResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AddPolarClawMCPServerResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AddPolarClawMCPServerResponse() = default ;
    AddPolarClawMCPServerResponse(const AddPolarClawMCPServerResponse &) = default ;
    AddPolarClawMCPServerResponse(AddPolarClawMCPServerResponse &&) = default ;
    AddPolarClawMCPServerResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPolarClawMCPServerResponse() = default ;
    AddPolarClawMCPServerResponse& operator=(const AddPolarClawMCPServerResponse &) = default ;
    AddPolarClawMCPServerResponse& operator=(AddPolarClawMCPServerResponse &&) = default ;
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
    inline AddPolarClawMCPServerResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline AddPolarClawMCPServerResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline AddPolarClawMCPServerResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AddPolarClawMCPServerResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, AddPolarClawMCPServerResponseBody) };
    inline AddPolarClawMCPServerResponseBody getBody() { DARABONBA_PTR_GET(body_, AddPolarClawMCPServerResponseBody) };
    inline AddPolarClawMCPServerResponse& setBody(const AddPolarClawMCPServerResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AddPolarClawMCPServerResponse& setBody(AddPolarClawMCPServerResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<AddPolarClawMCPServerResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
