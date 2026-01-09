// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRULEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRULEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityRuleDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityRuleDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityRuleDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityRuleDetailResponseBody() = default ;
    GetQualityRuleDetailResponseBody(const GetQualityRuleDetailResponseBody &) = default ;
    GetQualityRuleDetailResponseBody(GetQualityRuleDetailResponseBody &&) = default ;
    GetQualityRuleDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityRuleDetailResponseBody() = default ;
    GetQualityRuleDetailResponseBody& operator=(const GetQualityRuleDetailResponseBody &) = default ;
    GetQualityRuleDetailResponseBody& operator=(GetQualityRuleDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
        DARABONBA_PTR_TO_JSON(MatchType, matchType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RuleCreateTime, ruleCreateTime_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleTag, ruleTag_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
        DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RuleCreateTime, ruleCreateTime_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleTag, ruleTag_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keyWords_ == nullptr
        && this->matchType_ == nullptr && this->name_ == nullptr && this->ruleCreateTime_ == nullptr && this->ruleId_ == nullptr && this->ruleTag_ == nullptr; };
      // keyWords Field Functions 
      bool hasKeyWords() const { return this->keyWords_ != nullptr;};
      void deleteKeyWords() { this->keyWords_ = nullptr;};
      inline const vector<string> & getKeyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, vector<string>) };
      inline vector<string> getKeyWords() { DARABONBA_PTR_GET(keyWords_, vector<string>) };
      inline Data& setKeyWords(const vector<string> & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
      inline Data& setKeyWords(vector<string> && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline int32_t getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, 0) };
      inline Data& setMatchType(int32_t matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ruleCreateTime Field Functions 
      bool hasRuleCreateTime() const { return this->ruleCreateTime_ != nullptr;};
      void deleteRuleCreateTime() { this->ruleCreateTime_ = nullptr;};
      inline string getRuleCreateTime() const { DARABONBA_PTR_GET_DEFAULT(ruleCreateTime_, "") };
      inline Data& setRuleCreateTime(string ruleCreateTime) { DARABONBA_PTR_SET_VALUE(ruleCreateTime_, ruleCreateTime) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline Data& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleTag Field Functions 
      bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
      void deleteRuleTag() { this->ruleTag_ = nullptr;};
      inline int32_t getRuleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, 0) };
      inline Data& setRuleTag(int32_t ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


    protected:
      shared_ptr<vector<string>> keyWords_ {};
      shared_ptr<int32_t> matchType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> ruleCreateTime_ {};
      shared_ptr<int64_t> ruleId_ {};
      shared_ptr<int32_t> ruleTag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityRuleDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQualityRuleDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQualityRuleDetailResponseBody::Data) };
    inline GetQualityRuleDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQualityRuleDetailResponseBody::Data) };
    inline GetQualityRuleDetailResponseBody& setData(const GetQualityRuleDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQualityRuleDetailResponseBody& setData(GetQualityRuleDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityRuleDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityRuleDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityRuleDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetQualityRuleDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
