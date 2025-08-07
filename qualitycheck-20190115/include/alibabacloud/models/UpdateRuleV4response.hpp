// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEV4RESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEV4RESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UpdateRuleV4Response : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleV4Response& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleV4Response& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateRuleV4Response() = default ;
    UpdateRuleV4Response(const UpdateRuleV4Response &) = default ;
    UpdateRuleV4Response(UpdateRuleV4Response &&) = default ;
    UpdateRuleV4Response(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleV4Response() = default ;
    UpdateRuleV4Response& operator=(const UpdateRuleV4Response &) = default ;
    UpdateRuleV4Response& operator=(UpdateRuleV4Response &&) = default ;
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
    inline UpdateRuleV4Response& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateRuleV4Response& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateRuleV4Response& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateRuleV4ResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateRuleV4ResponseBody) };
    inline UpdateRuleV4ResponseBody body() { DARABONBA_PTR_GET(body_, UpdateRuleV4ResponseBody) };
    inline UpdateRuleV4Response& setBody(const UpdateRuleV4ResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateRuleV4Response& setBody(UpdateRuleV4ResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UpdateRuleV4ResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
