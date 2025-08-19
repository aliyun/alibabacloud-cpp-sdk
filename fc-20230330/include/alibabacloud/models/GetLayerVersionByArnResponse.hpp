// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLAYERVERSIONBYARNRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETLAYERVERSIONBYARNRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/Layer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class GetLayerVersionByArnResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLayerVersionByArnResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetLayerVersionByArnResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetLayerVersionByArnResponse() = default ;
    GetLayerVersionByArnResponse(const GetLayerVersionByArnResponse &) = default ;
    GetLayerVersionByArnResponse(GetLayerVersionByArnResponse &&) = default ;
    GetLayerVersionByArnResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLayerVersionByArnResponse() = default ;
    GetLayerVersionByArnResponse& operator=(const GetLayerVersionByArnResponse &) = default ;
    GetLayerVersionByArnResponse& operator=(GetLayerVersionByArnResponse &&) = default ;
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
    inline GetLayerVersionByArnResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetLayerVersionByArnResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetLayerVersionByArnResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Layer & body() const { DARABONBA_PTR_GET_CONST(body_, Layer) };
    inline Layer body() { DARABONBA_PTR_GET(body_, Layer) };
    inline GetLayerVersionByArnResponse& setBody(const Layer & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetLayerVersionByArnResponse& setBody(Layer && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<Layer> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
