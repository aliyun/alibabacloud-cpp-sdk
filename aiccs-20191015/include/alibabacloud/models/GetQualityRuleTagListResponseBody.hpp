// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRULETAGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRULETAGLISTRESPONSEBODY_HPP_
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
  class GetQualityRuleTagListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityRuleTagListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityRuleTagListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityRuleTagListResponseBody() = default ;
    GetQualityRuleTagListResponseBody(const GetQualityRuleTagListResponseBody &) = default ;
    GetQualityRuleTagListResponseBody(GetQualityRuleTagListResponseBody &&) = default ;
    GetQualityRuleTagListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityRuleTagListResponseBody() = default ;
    GetQualityRuleTagListResponseBody& operator=(const GetQualityRuleTagListResponseBody &) = default ;
    GetQualityRuleTagListResponseBody& operator=(GetQualityRuleTagListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RuleTagId, ruleTagId_);
        DARABONBA_PTR_TO_JSON(RuleTagName, ruleTagName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleTagId, ruleTagId_);
        DARABONBA_PTR_FROM_JSON(RuleTagName, ruleTagName_);
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
      virtual bool empty() const override { return this->ruleTagId_ == nullptr
        && this->ruleTagName_ == nullptr; };
      // ruleTagId Field Functions 
      bool hasRuleTagId() const { return this->ruleTagId_ != nullptr;};
      void deleteRuleTagId() { this->ruleTagId_ = nullptr;};
      inline int64_t getRuleTagId() const { DARABONBA_PTR_GET_DEFAULT(ruleTagId_, 0L) };
      inline Data& setRuleTagId(int64_t ruleTagId) { DARABONBA_PTR_SET_VALUE(ruleTagId_, ruleTagId) };


      // ruleTagName Field Functions 
      bool hasRuleTagName() const { return this->ruleTagName_ != nullptr;};
      void deleteRuleTagName() { this->ruleTagName_ = nullptr;};
      inline string getRuleTagName() const { DARABONBA_PTR_GET_DEFAULT(ruleTagName_, "") };
      inline Data& setRuleTagName(string ruleTagName) { DARABONBA_PTR_SET_VALUE(ruleTagName_, ruleTagName) };


    protected:
      shared_ptr<int64_t> ruleTagId_ {};
      shared_ptr<string> ruleTagName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityRuleTagListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetQualityRuleTagListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetQualityRuleTagListResponseBody::Data>) };
    inline vector<GetQualityRuleTagListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetQualityRuleTagListResponseBody::Data>) };
    inline GetQualityRuleTagListResponseBody& setData(const vector<GetQualityRuleTagListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQualityRuleTagListResponseBody& setData(vector<GetQualityRuleTagListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityRuleTagListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityRuleTagListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityRuleTagListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetQualityRuleTagListResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
