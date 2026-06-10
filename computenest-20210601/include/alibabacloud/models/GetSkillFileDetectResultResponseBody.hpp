// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLFILEDETECTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLFILEDETECTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetSkillFileDetectResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillFileDetectResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillFileDetectResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    GetSkillFileDetectResultResponseBody() = default ;
    GetSkillFileDetectResultResponseBody(const GetSkillFileDetectResultResponseBody &) = default ;
    GetSkillFileDetectResultResponseBody(GetSkillFileDetectResultResponseBody &&) = default ;
    GetSkillFileDetectResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillFileDetectResultResponseBody() = default ;
    GetSkillFileDetectResultResponseBody& operator=(const GetSkillFileDetectResultResponseBody &) = default ;
    GetSkillFileDetectResultResponseBody& operator=(GetSkillFileDetectResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->hashKey_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->score_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSkillFileDetectResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string getHashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline GetSkillFileDetectResultResponseBody& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSkillFileDetectResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSkillFileDetectResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int32_t getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
    inline GetSkillFileDetectResultResponseBody& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetSkillFileDetectResultResponseBody& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> hashKey_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> result_ {};
    shared_ptr<int32_t> score_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
