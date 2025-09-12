// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDSTSAK2RESPONSE_HPP_
#define ALIBABACLOUD_MODELS_BUILDSTSAK2RESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/BuildStsAK2ResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class BuildStsAK2Response : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildStsAK2Response& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, BuildStsAK2Response& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    BuildStsAK2Response() = default ;
    BuildStsAK2Response(const BuildStsAK2Response &) = default ;
    BuildStsAK2Response(BuildStsAK2Response &&) = default ;
    BuildStsAK2Response(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildStsAK2Response() = default ;
    BuildStsAK2Response& operator=(const BuildStsAK2Response &) = default ;
    BuildStsAK2Response& operator=(BuildStsAK2Response &&) = default ;
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
    inline BuildStsAK2Response& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline BuildStsAK2Response& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline BuildStsAK2Response& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const BuildStsAK2ResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, BuildStsAK2ResponseBody) };
    inline BuildStsAK2ResponseBody body() { DARABONBA_PTR_GET(body_, BuildStsAK2ResponseBody) };
    inline BuildStsAK2Response& setBody(const BuildStsAK2ResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline BuildStsAK2Response& setBody(BuildStsAK2ResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<BuildStsAK2ResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
