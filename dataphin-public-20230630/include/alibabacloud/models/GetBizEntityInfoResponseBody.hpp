// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZENTITYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBIZENTITYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBizEntityInfoResponseBodyBizEntityInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBizEntityInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizEntityInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizEntityInfo, bizEntityInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizEntityInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizEntityInfo, bizEntityInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBizEntityInfoResponseBody() = default ;
    GetBizEntityInfoResponseBody(const GetBizEntityInfoResponseBody &) = default ;
    GetBizEntityInfoResponseBody(GetBizEntityInfoResponseBody &&) = default ;
    GetBizEntityInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizEntityInfoResponseBody() = default ;
    GetBizEntityInfoResponseBody& operator=(const GetBizEntityInfoResponseBody &) = default ;
    GetBizEntityInfoResponseBody& operator=(GetBizEntityInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizEntityInfo_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // bizEntityInfo Field Functions 
    bool hasBizEntityInfo() const { return this->bizEntityInfo_ != nullptr;};
    void deleteBizEntityInfo() { this->bizEntityInfo_ = nullptr;};
    inline const GetBizEntityInfoResponseBodyBizEntityInfo & bizEntityInfo() const { DARABONBA_PTR_GET_CONST(bizEntityInfo_, GetBizEntityInfoResponseBodyBizEntityInfo) };
    inline GetBizEntityInfoResponseBodyBizEntityInfo bizEntityInfo() { DARABONBA_PTR_GET(bizEntityInfo_, GetBizEntityInfoResponseBodyBizEntityInfo) };
    inline GetBizEntityInfoResponseBody& setBizEntityInfo(const GetBizEntityInfoResponseBodyBizEntityInfo & bizEntityInfo) { DARABONBA_PTR_SET_VALUE(bizEntityInfo_, bizEntityInfo) };
    inline GetBizEntityInfoResponseBody& setBizEntityInfo(GetBizEntityInfoResponseBodyBizEntityInfo && bizEntityInfo) { DARABONBA_PTR_SET_RVALUE(bizEntityInfo_, bizEntityInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBizEntityInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBizEntityInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBizEntityInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBizEntityInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBizEntityInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<GetBizEntityInfoResponseBodyBizEntityInfo> bizEntityInfo_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
