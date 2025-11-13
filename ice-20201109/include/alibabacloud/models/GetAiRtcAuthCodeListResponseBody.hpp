// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIRTCAUTHCODELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIRTCAUTHCODELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AiRtcAuthCodeDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAiRtcAuthCodeListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiRtcAuthCodeListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCodeList, authCodeList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiRtcAuthCodeListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCodeList, authCodeList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetAiRtcAuthCodeListResponseBody() = default ;
    GetAiRtcAuthCodeListResponseBody(const GetAiRtcAuthCodeListResponseBody &) = default ;
    GetAiRtcAuthCodeListResponseBody(GetAiRtcAuthCodeListResponseBody &&) = default ;
    GetAiRtcAuthCodeListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiRtcAuthCodeListResponseBody() = default ;
    GetAiRtcAuthCodeListResponseBody& operator=(const GetAiRtcAuthCodeListResponseBody &) = default ;
    GetAiRtcAuthCodeListResponseBody& operator=(GetAiRtcAuthCodeListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCodeList_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->totalCount_ == nullptr; };
    // authCodeList Field Functions 
    bool hasAuthCodeList() const { return this->authCodeList_ != nullptr;};
    void deleteAuthCodeList() { this->authCodeList_ = nullptr;};
    inline const vector<AiRtcAuthCodeDTO> & authCodeList() const { DARABONBA_PTR_GET_CONST(authCodeList_, vector<AiRtcAuthCodeDTO>) };
    inline vector<AiRtcAuthCodeDTO> authCodeList() { DARABONBA_PTR_GET(authCodeList_, vector<AiRtcAuthCodeDTO>) };
    inline GetAiRtcAuthCodeListResponseBody& setAuthCodeList(const vector<AiRtcAuthCodeDTO> & authCodeList) { DARABONBA_PTR_SET_VALUE(authCodeList_, authCodeList) };
    inline GetAiRtcAuthCodeListResponseBody& setAuthCodeList(vector<AiRtcAuthCodeDTO> && authCodeList) { DARABONBA_PTR_SET_RVALUE(authCodeList_, authCodeList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAiRtcAuthCodeListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAiRtcAuthCodeListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAiRtcAuthCodeListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiRtcAuthCodeListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAiRtcAuthCodeListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetAiRtcAuthCodeListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<AiRtcAuthCodeDTO>> authCodeList_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
