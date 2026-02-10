// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIMODALFINETUNEDATASETRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIMODALFINETUNEDATASETRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateMultimodalFineTuneDatasetResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class UpdateMultimodalFineTuneDatasetResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultimodalFineTuneDatasetResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultimodalFineTuneDatasetResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateMultimodalFineTuneDatasetResponse() = default ;
    UpdateMultimodalFineTuneDatasetResponse(const UpdateMultimodalFineTuneDatasetResponse &) = default ;
    UpdateMultimodalFineTuneDatasetResponse(UpdateMultimodalFineTuneDatasetResponse &&) = default ;
    UpdateMultimodalFineTuneDatasetResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultimodalFineTuneDatasetResponse() = default ;
    UpdateMultimodalFineTuneDatasetResponse& operator=(const UpdateMultimodalFineTuneDatasetResponse &) = default ;
    UpdateMultimodalFineTuneDatasetResponse& operator=(UpdateMultimodalFineTuneDatasetResponse &&) = default ;
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
    inline UpdateMultimodalFineTuneDatasetResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateMultimodalFineTuneDatasetResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateMultimodalFineTuneDatasetResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateMultimodalFineTuneDatasetResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateMultimodalFineTuneDatasetResponseBody) };
    inline UpdateMultimodalFineTuneDatasetResponseBody getBody() { DARABONBA_PTR_GET(body_, UpdateMultimodalFineTuneDatasetResponseBody) };
    inline UpdateMultimodalFineTuneDatasetResponse& setBody(const UpdateMultimodalFineTuneDatasetResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateMultimodalFineTuneDatasetResponse& setBody(UpdateMultimodalFineTuneDatasetResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UpdateMultimodalFineTuneDatasetResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
