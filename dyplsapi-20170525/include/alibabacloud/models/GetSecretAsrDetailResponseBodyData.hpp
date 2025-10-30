// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETASRDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETASRDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSecretAsrDetailResponseBodyDataSentences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class GetSecretAsrDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretAsrDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizDuration, bizDuration_);
      DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
      DARABONBA_PTR_TO_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sentences, sentences_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretAsrDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDuration, bizDuration_);
      DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
      DARABONBA_PTR_FROM_JSON(BusinessKey, businessKey_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sentences, sentences_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetSecretAsrDetailResponseBodyData() = default ;
    GetSecretAsrDetailResponseBodyData(const GetSecretAsrDetailResponseBodyData &) = default ;
    GetSecretAsrDetailResponseBodyData(GetSecretAsrDetailResponseBodyData &&) = default ;
    GetSecretAsrDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretAsrDetailResponseBodyData() = default ;
    GetSecretAsrDetailResponseBodyData& operator=(const GetSecretAsrDetailResponseBodyData &) = default ;
    GetSecretAsrDetailResponseBodyData& operator=(GetSecretAsrDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizDuration_ == nullptr
        && return this->businessId_ == nullptr && return this->businessKey_ == nullptr && return this->code_ == nullptr && return this->msg_ == nullptr && return this->requestId_ == nullptr
        && return this->sentences_ == nullptr && return this->type_ == nullptr; };
    // bizDuration Field Functions 
    bool hasBizDuration() const { return this->bizDuration_ != nullptr;};
    void deleteBizDuration() { this->bizDuration_ = nullptr;};
    inline int64_t bizDuration() const { DARABONBA_PTR_GET_DEFAULT(bizDuration_, 0L) };
    inline GetSecretAsrDetailResponseBodyData& setBizDuration(int64_t bizDuration) { DARABONBA_PTR_SET_VALUE(bizDuration_, bizDuration) };


    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline string businessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
    inline GetSecretAsrDetailResponseBodyData& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // businessKey Field Functions 
    bool hasBusinessKey() const { return this->businessKey_ != nullptr;};
    void deleteBusinessKey() { this->businessKey_ = nullptr;};
    inline string businessKey() const { DARABONBA_PTR_GET_DEFAULT(businessKey_, "") };
    inline GetSecretAsrDetailResponseBodyData& setBusinessKey(string businessKey) { DARABONBA_PTR_SET_VALUE(businessKey_, businessKey) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSecretAsrDetailResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetSecretAsrDetailResponseBodyData& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecretAsrDetailResponseBodyData& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sentences Field Functions 
    bool hasSentences() const { return this->sentences_ != nullptr;};
    void deleteSentences() { this->sentences_ = nullptr;};
    inline const vector<Models::GetSecretAsrDetailResponseBodyDataSentences> & sentences() const { DARABONBA_PTR_GET_CONST(sentences_, vector<Models::GetSecretAsrDetailResponseBodyDataSentences>) };
    inline vector<Models::GetSecretAsrDetailResponseBodyDataSentences> sentences() { DARABONBA_PTR_GET(sentences_, vector<Models::GetSecretAsrDetailResponseBodyDataSentences>) };
    inline GetSecretAsrDetailResponseBodyData& setSentences(const vector<Models::GetSecretAsrDetailResponseBodyDataSentences> & sentences) { DARABONBA_PTR_SET_VALUE(sentences_, sentences) };
    inline GetSecretAsrDetailResponseBodyData& setSentences(vector<Models::GetSecretAsrDetailResponseBodyDataSentences> && sentences) { DARABONBA_PTR_SET_RVALUE(sentences_, sentences) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetSecretAsrDetailResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The total duration of the audio file that was recognized. Unit: milliseconds.
    std::shared_ptr<int64_t> bizDuration_ = nullptr;
    // The ID of the business process.
    std::shared_ptr<string> businessId_ = nullptr;
    // The business keyword.
    std::shared_ptr<string> businessKey_ = nullptr;
    // The status code. The status code 21050000 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The description.
    std::shared_ptr<string> msg_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ASR result.
    std::shared_ptr<vector<Models::GetSecretAsrDetailResponseBodyDataSentences>> sentences_ = nullptr;
    // The type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
