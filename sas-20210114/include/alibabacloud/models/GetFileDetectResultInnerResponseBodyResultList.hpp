// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTRESULTINNERRESPONSEBODYRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTRESULTINNERRESPONSEBODYRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class GetFileDetectResultInnerResponseBodyResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectResultInnerResponseBodyResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(VirusType, virusType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectResultInnerResponseBodyResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(VirusType, virusType_);
    };
    GetFileDetectResultInnerResponseBodyResultList() = default ;
    GetFileDetectResultInnerResponseBodyResultList(const GetFileDetectResultInnerResponseBodyResultList &) = default ;
    GetFileDetectResultInnerResponseBodyResultList(GetFileDetectResultInnerResponseBodyResultList &&) = default ;
    GetFileDetectResultInnerResponseBodyResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectResultInnerResponseBodyResultList() = default ;
    GetFileDetectResultInnerResponseBodyResultList& operator=(const GetFileDetectResultInnerResponseBodyResultList &) = default ;
    GetFileDetectResultInnerResponseBodyResultList& operator=(GetFileDetectResultInnerResponseBodyResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->expireTime_ == nullptr && return this->ext_ == nullptr && return this->hashKey_ == nullptr && return this->message_ == nullptr && return this->result_ == nullptr
        && return this->score_ == nullptr && return this->virusType_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFileDetectResultInnerResponseBodyResultList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetFileDetectResultInnerResponseBodyResultList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline string ext() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
    inline GetFileDetectResultInnerResponseBodyResultList& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string hashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline GetFileDetectResultInnerResponseBodyResultList& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFileDetectResultInnerResponseBodyResultList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int32_t result() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
    inline GetFileDetectResultInnerResponseBodyResultList& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetFileDetectResultInnerResponseBodyResultList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // virusType Field Functions 
    bool hasVirusType() const { return this->virusType_ != nullptr;};
    void deleteVirusType() { this->virusType_ = nullptr;};
    inline string virusType() const { DARABONBA_PTR_GET_DEFAULT(virusType_, "") };
    inline GetFileDetectResultInnerResponseBodyResultList& setVirusType(string virusType) { DARABONBA_PTR_SET_VALUE(virusType_, virusType) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> ext_ = nullptr;
    std::shared_ptr<string> hashKey_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> result_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
    std::shared_ptr<string> virusType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
