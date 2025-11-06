// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYMCDPGROUPRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_COPYMCDPGROUPRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CopyMcdpGroupResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CopyMcdpGroupResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyMcdpGroupResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CopyMcdpGroupResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CopyMcdpGroupResponse() = default ;
    CopyMcdpGroupResponse(const CopyMcdpGroupResponse &) = default ;
    CopyMcdpGroupResponse(CopyMcdpGroupResponse &&) = default ;
    CopyMcdpGroupResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyMcdpGroupResponse() = default ;
    CopyMcdpGroupResponse& operator=(const CopyMcdpGroupResponse &) = default ;
    CopyMcdpGroupResponse& operator=(CopyMcdpGroupResponse &&) = default ;
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
    inline CopyMcdpGroupResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CopyMcdpGroupResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CopyMcdpGroupResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CopyMcdpGroupResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CopyMcdpGroupResponseBody) };
    inline CopyMcdpGroupResponseBody body() { DARABONBA_PTR_GET(body_, CopyMcdpGroupResponseBody) };
    inline CopyMcdpGroupResponse& setBody(const CopyMcdpGroupResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CopyMcdpGroupResponse& setBody(CopyMcdpGroupResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CopyMcdpGroupResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
