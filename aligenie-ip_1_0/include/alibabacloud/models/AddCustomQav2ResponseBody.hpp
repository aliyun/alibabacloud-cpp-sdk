// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMQAV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMQAV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class AddCustomQAV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomQAV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, AddCustomQAV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    AddCustomQAV2ResponseBody() = default ;
    AddCustomQAV2ResponseBody(const AddCustomQAV2ResponseBody &) = default ;
    AddCustomQAV2ResponseBody(AddCustomQAV2ResponseBody &&) = default ;
    AddCustomQAV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomQAV2ResponseBody() = default ;
    AddCustomQAV2ResponseBody& operator=(const AddCustomQAV2ResponseBody &) = default ;
    AddCustomQAV2ResponseBody& operator=(AddCustomQAV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Answers, answers_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
        DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
        DARABONBA_PTR_TO_JSON(LastOperator, lastOperator_);
        DARABONBA_PTR_TO_JSON(MajorQuestion, majorQuestion_);
        DARABONBA_PTR_TO_JSON(QaId, qaId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupplementaryQuestion, supplementaryQuestion_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Answers, answers_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
        DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
        DARABONBA_PTR_FROM_JSON(LastOperator, lastOperator_);
        DARABONBA_PTR_FROM_JSON(MajorQuestion, majorQuestion_);
        DARABONBA_PTR_FROM_JSON(QaId, qaId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupplementaryQuestion, supplementaryQuestion_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->answers_ == nullptr
        && this->createTime_ == nullptr && this->hotelId_ == nullptr && this->keyWords_ == nullptr && this->lastOperator_ == nullptr && this->majorQuestion_ == nullptr
        && this->qaId_ == nullptr && this->status_ == nullptr && this->supplementaryQuestion_ == nullptr && this->updateTime_ == nullptr; };
      // answers Field Functions 
      bool hasAnswers() const { return this->answers_ != nullptr;};
      void deleteAnswers() { this->answers_ = nullptr;};
      inline string getAnswers() const { DARABONBA_PTR_GET_DEFAULT(answers_, "") };
      inline Result& setAnswers(string answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
      inline Result& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


      // keyWords Field Functions 
      bool hasKeyWords() const { return this->keyWords_ != nullptr;};
      void deleteKeyWords() { this->keyWords_ = nullptr;};
      inline string getKeyWords() const { DARABONBA_PTR_GET_DEFAULT(keyWords_, "") };
      inline Result& setKeyWords(string keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };


      // lastOperator Field Functions 
      bool hasLastOperator() const { return this->lastOperator_ != nullptr;};
      void deleteLastOperator() { this->lastOperator_ = nullptr;};
      inline string getLastOperator() const { DARABONBA_PTR_GET_DEFAULT(lastOperator_, "") };
      inline Result& setLastOperator(string lastOperator) { DARABONBA_PTR_SET_VALUE(lastOperator_, lastOperator) };


      // majorQuestion Field Functions 
      bool hasMajorQuestion() const { return this->majorQuestion_ != nullptr;};
      void deleteMajorQuestion() { this->majorQuestion_ = nullptr;};
      inline string getMajorQuestion() const { DARABONBA_PTR_GET_DEFAULT(majorQuestion_, "") };
      inline Result& setMajorQuestion(string majorQuestion) { DARABONBA_PTR_SET_VALUE(majorQuestion_, majorQuestion) };


      // qaId Field Functions 
      bool hasQaId() const { return this->qaId_ != nullptr;};
      void deleteQaId() { this->qaId_ = nullptr;};
      inline string getQaId() const { DARABONBA_PTR_GET_DEFAULT(qaId_, "") };
      inline Result& setQaId(string qaId) { DARABONBA_PTR_SET_VALUE(qaId_, qaId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supplementaryQuestion Field Functions 
      bool hasSupplementaryQuestion() const { return this->supplementaryQuestion_ != nullptr;};
      void deleteSupplementaryQuestion() { this->supplementaryQuestion_ = nullptr;};
      inline string getSupplementaryQuestion() const { DARABONBA_PTR_GET_DEFAULT(supplementaryQuestion_, "") };
      inline Result& setSupplementaryQuestion(string supplementaryQuestion) { DARABONBA_PTR_SET_VALUE(supplementaryQuestion_, supplementaryQuestion) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Result& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> answers_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> hotelId_ {};
      shared_ptr<string> keyWords_ {};
      shared_ptr<string> lastOperator_ {};
      shared_ptr<string> majorQuestion_ {};
      // qaID
      shared_ptr<string> qaId_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> supplementaryQuestion_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddCustomQAV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCustomQAV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const AddCustomQAV2ResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, AddCustomQAV2ResponseBody::Result) };
    inline AddCustomQAV2ResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, AddCustomQAV2ResponseBody::Result) };
    inline AddCustomQAV2ResponseBody& setResult(const AddCustomQAV2ResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline AddCustomQAV2ResponseBody& setResult(AddCustomQAV2ResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline AddCustomQAV2ResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<AddCustomQAV2ResponseBody::Result> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
