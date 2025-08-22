// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTAGTOFLINKCLUSTERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ADDTAGTOFLINKCLUSTERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AddTagToFlinkClusterResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AddTagToFlinkClusterResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTagToFlinkClusterResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AddTagToFlinkClusterResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AddTagToFlinkClusterResponse() = default ;
    AddTagToFlinkClusterResponse(const AddTagToFlinkClusterResponse &) = default ;
    AddTagToFlinkClusterResponse(AddTagToFlinkClusterResponse &&) = default ;
    AddTagToFlinkClusterResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTagToFlinkClusterResponse() = default ;
    AddTagToFlinkClusterResponse& operator=(const AddTagToFlinkClusterResponse &) = default ;
    AddTagToFlinkClusterResponse& operator=(AddTagToFlinkClusterResponse &&) = default ;
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
    inline AddTagToFlinkClusterResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline AddTagToFlinkClusterResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline AddTagToFlinkClusterResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AddTagToFlinkClusterResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, AddTagToFlinkClusterResponseBody) };
    inline AddTagToFlinkClusterResponseBody body() { DARABONBA_PTR_GET(body_, AddTagToFlinkClusterResponseBody) };
    inline AddTagToFlinkClusterResponse& setBody(const AddTagToFlinkClusterResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AddTagToFlinkClusterResponse& setBody(AddTagToFlinkClusterResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<AddTagToFlinkClusterResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
