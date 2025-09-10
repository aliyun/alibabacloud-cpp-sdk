// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTREAMINGDATASERVICERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETESTREAMINGDATASERVICERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteStreamingDataServiceResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteStreamingDataServiceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStreamingDataServiceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStreamingDataServiceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteStreamingDataServiceResponse() = default ;
    DeleteStreamingDataServiceResponse(const DeleteStreamingDataServiceResponse &) = default ;
    DeleteStreamingDataServiceResponse(DeleteStreamingDataServiceResponse &&) = default ;
    DeleteStreamingDataServiceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStreamingDataServiceResponse() = default ;
    DeleteStreamingDataServiceResponse& operator=(const DeleteStreamingDataServiceResponse &) = default ;
    DeleteStreamingDataServiceResponse& operator=(DeleteStreamingDataServiceResponse &&) = default ;
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
    inline DeleteStreamingDataServiceResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteStreamingDataServiceResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteStreamingDataServiceResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteStreamingDataServiceResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DeleteStreamingDataServiceResponseBody) };
    inline DeleteStreamingDataServiceResponseBody body() { DARABONBA_PTR_GET(body_, DeleteStreamingDataServiceResponseBody) };
    inline DeleteStreamingDataServiceResponse& setBody(const DeleteStreamingDataServiceResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteStreamingDataServiceResponse& setBody(DeleteStreamingDataServiceResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DeleteStreamingDataServiceResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
