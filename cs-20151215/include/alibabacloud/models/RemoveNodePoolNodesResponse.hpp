// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVENODEPOOLNODESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_REMOVENODEPOOLNODESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/RemoveNodePoolNodesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class RemoveNodePoolNodesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveNodePoolNodesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveNodePoolNodesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RemoveNodePoolNodesResponse() = default ;
    RemoveNodePoolNodesResponse(const RemoveNodePoolNodesResponse &) = default ;
    RemoveNodePoolNodesResponse(RemoveNodePoolNodesResponse &&) = default ;
    RemoveNodePoolNodesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveNodePoolNodesResponse() = default ;
    RemoveNodePoolNodesResponse& operator=(const RemoveNodePoolNodesResponse &) = default ;
    RemoveNodePoolNodesResponse& operator=(RemoveNodePoolNodesResponse &&) = default ;
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
    inline RemoveNodePoolNodesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline RemoveNodePoolNodesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline RemoveNodePoolNodesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RemoveNodePoolNodesResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, RemoveNodePoolNodesResponseBody) };
    inline RemoveNodePoolNodesResponseBody body() { DARABONBA_PTR_GET(body_, RemoveNodePoolNodesResponseBody) };
    inline RemoveNodePoolNodesResponse& setBody(const RemoveNodePoolNodesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RemoveNodePoolNodesResponse& setBody(RemoveNodePoolNodesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<RemoveNodePoolNodesResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
