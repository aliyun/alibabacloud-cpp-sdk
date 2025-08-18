// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZUNITINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBIZUNITINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBizUnitInfoResponseBodyBizUnitInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBizUnitInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizUnitInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitInfo, bizUnitInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizUnitInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitInfo, bizUnitInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBizUnitInfoResponseBody() = default ;
    GetBizUnitInfoResponseBody(const GetBizUnitInfoResponseBody &) = default ;
    GetBizUnitInfoResponseBody(GetBizUnitInfoResponseBody &&) = default ;
    GetBizUnitInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizUnitInfoResponseBody() = default ;
    GetBizUnitInfoResponseBody& operator=(const GetBizUnitInfoResponseBody &) = default ;
    GetBizUnitInfoResponseBody& operator=(GetBizUnitInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizUnitInfo_ != nullptr
        && this->code_ != nullptr && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // bizUnitInfo Field Functions 
    bool hasBizUnitInfo() const { return this->bizUnitInfo_ != nullptr;};
    void deleteBizUnitInfo() { this->bizUnitInfo_ = nullptr;};
    inline const GetBizUnitInfoResponseBodyBizUnitInfo & bizUnitInfo() const { DARABONBA_PTR_GET_CONST(bizUnitInfo_, GetBizUnitInfoResponseBodyBizUnitInfo) };
    inline GetBizUnitInfoResponseBodyBizUnitInfo bizUnitInfo() { DARABONBA_PTR_GET(bizUnitInfo_, GetBizUnitInfoResponseBodyBizUnitInfo) };
    inline GetBizUnitInfoResponseBody& setBizUnitInfo(const GetBizUnitInfoResponseBodyBizUnitInfo & bizUnitInfo) { DARABONBA_PTR_SET_VALUE(bizUnitInfo_, bizUnitInfo) };
    inline GetBizUnitInfoResponseBody& setBizUnitInfo(GetBizUnitInfoResponseBodyBizUnitInfo && bizUnitInfo) { DARABONBA_PTR_SET_RVALUE(bizUnitInfo_, bizUnitInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBizUnitInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBizUnitInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBizUnitInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBizUnitInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBizUnitInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<GetBizUnitInfoResponseBodyBizUnitInfo> bizUnitInfo_ = nullptr;
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
