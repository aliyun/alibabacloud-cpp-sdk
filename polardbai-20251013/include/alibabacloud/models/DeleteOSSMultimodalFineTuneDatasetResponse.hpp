// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOSSMULTIMODALFINETUNEDATASETRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEOSSMULTIMODALFINETUNEDATASETRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteOSSMultimodalFineTuneDatasetResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class DeleteOSSMultimodalFineTuneDatasetResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOSSMultimodalFineTuneDatasetResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOSSMultimodalFineTuneDatasetResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteOSSMultimodalFineTuneDatasetResponse() = default ;
    DeleteOSSMultimodalFineTuneDatasetResponse(const DeleteOSSMultimodalFineTuneDatasetResponse &) = default ;
    DeleteOSSMultimodalFineTuneDatasetResponse(DeleteOSSMultimodalFineTuneDatasetResponse &&) = default ;
    DeleteOSSMultimodalFineTuneDatasetResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOSSMultimodalFineTuneDatasetResponse() = default ;
    DeleteOSSMultimodalFineTuneDatasetResponse& operator=(const DeleteOSSMultimodalFineTuneDatasetResponse &) = default ;
    DeleteOSSMultimodalFineTuneDatasetResponse& operator=(DeleteOSSMultimodalFineTuneDatasetResponse &&) = default ;
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
    inline DeleteOSSMultimodalFineTuneDatasetResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteOSSMultimodalFineTuneDatasetResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteOSSMultimodalFineTuneDatasetResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteOSSMultimodalFineTuneDatasetResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeleteOSSMultimodalFineTuneDatasetResponseBody) };
    inline DeleteOSSMultimodalFineTuneDatasetResponseBody getBody() { DARABONBA_PTR_GET(body_, DeleteOSSMultimodalFineTuneDatasetResponseBody) };
    inline DeleteOSSMultimodalFineTuneDatasetResponse& setBody(const DeleteOSSMultimodalFineTuneDatasetResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteOSSMultimodalFineTuneDatasetResponse& setBody(DeleteOSSMultimodalFineTuneDatasetResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DeleteOSSMultimodalFineTuneDatasetResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
