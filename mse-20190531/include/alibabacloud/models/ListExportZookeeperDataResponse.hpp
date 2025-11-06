// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPORTZOOKEEPERDATARESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPORTZOOKEEPERDATARESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListExportZookeeperDataResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListExportZookeeperDataResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExportZookeeperDataResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListExportZookeeperDataResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListExportZookeeperDataResponse() = default ;
    ListExportZookeeperDataResponse(const ListExportZookeeperDataResponse &) = default ;
    ListExportZookeeperDataResponse(ListExportZookeeperDataResponse &&) = default ;
    ListExportZookeeperDataResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExportZookeeperDataResponse() = default ;
    ListExportZookeeperDataResponse& operator=(const ListExportZookeeperDataResponse &) = default ;
    ListExportZookeeperDataResponse& operator=(ListExportZookeeperDataResponse &&) = default ;
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
    inline ListExportZookeeperDataResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListExportZookeeperDataResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListExportZookeeperDataResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListExportZookeeperDataResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListExportZookeeperDataResponseBody) };
    inline ListExportZookeeperDataResponseBody body() { DARABONBA_PTR_GET(body_, ListExportZookeeperDataResponseBody) };
    inline ListExportZookeeperDataResponse& setBody(const ListExportZookeeperDataResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListExportZookeeperDataResponse& setBody(ListExportZookeeperDataResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListExportZookeeperDataResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
