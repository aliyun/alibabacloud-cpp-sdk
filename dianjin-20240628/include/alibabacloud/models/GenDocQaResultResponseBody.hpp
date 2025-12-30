// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENDOCQARESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENDOCQARESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GenDocQaResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenDocQaResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GenDocQaResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GenDocQaResultResponseBody() = default ;
    GenDocQaResultResponseBody(const GenDocQaResultResponseBody &) = default ;
    GenDocQaResultResponseBody(GenDocQaResultResponseBody &&) = default ;
    GenDocQaResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenDocQaResultResponseBody() = default ;
    GenDocQaResultResponseBody& operator=(const GenDocQaResultResponseBody &) = default ;
    GenDocQaResultResponseBody& operator=(GenDocQaResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(currentStatus, currentStatus_);
        DARABONBA_PTR_TO_JSON(docId, docId_);
        DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
        DARABONBA_PTR_TO_JSON(parseQaResults, parseQaResults_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(currentStatus, currentStatus_);
        DARABONBA_PTR_FROM_JSON(docId, docId_);
        DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
        DARABONBA_PTR_FROM_JSON(parseQaResults, parseQaResults_);
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
      class ParseQaResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParseQaResults& obj) { 
          DARABONBA_PTR_TO_JSON(answer, answer_);
          DARABONBA_PTR_TO_JSON(question, question_);
        };
        friend void from_json(const Darabonba::Json& j, ParseQaResults& obj) { 
          DARABONBA_PTR_FROM_JSON(answer, answer_);
          DARABONBA_PTR_FROM_JSON(question, question_);
        };
        ParseQaResults() = default ;
        ParseQaResults(const ParseQaResults &) = default ;
        ParseQaResults(ParseQaResults &&) = default ;
        ParseQaResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParseQaResults() = default ;
        ParseQaResults& operator=(const ParseQaResults &) = default ;
        ParseQaResults& operator=(ParseQaResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answer_ == nullptr
        && this->question_ == nullptr; };
        // answer Field Functions 
        bool hasAnswer() const { return this->answer_ != nullptr;};
        void deleteAnswer() { this->answer_ = nullptr;};
        inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
        inline ParseQaResults& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


        // question Field Functions 
        bool hasQuestion() const { return this->question_ != nullptr;};
        void deleteQuestion() { this->question_ = nullptr;};
        inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
        inline ParseQaResults& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


      protected:
        shared_ptr<string> answer_ {};
        shared_ptr<string> question_ {};
      };

      virtual bool empty() const override { return this->currentStatus_ == nullptr
        && this->docId_ == nullptr && this->libraryId_ == nullptr && this->parseQaResults_ == nullptr; };
      // currentStatus Field Functions 
      bool hasCurrentStatus() const { return this->currentStatus_ != nullptr;};
      void deleteCurrentStatus() { this->currentStatus_ = nullptr;};
      inline string getCurrentStatus() const { DARABONBA_PTR_GET_DEFAULT(currentStatus_, "") };
      inline Data& setCurrentStatus(string currentStatus) { DARABONBA_PTR_SET_VALUE(currentStatus_, currentStatus) };


      // docId Field Functions 
      bool hasDocId() const { return this->docId_ != nullptr;};
      void deleteDocId() { this->docId_ = nullptr;};
      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
      inline Data& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


      // libraryId Field Functions 
      bool hasLibraryId() const { return this->libraryId_ != nullptr;};
      void deleteLibraryId() { this->libraryId_ = nullptr;};
      inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
      inline Data& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


      // parseQaResults Field Functions 
      bool hasParseQaResults() const { return this->parseQaResults_ != nullptr;};
      void deleteParseQaResults() { this->parseQaResults_ = nullptr;};
      inline const vector<Data::ParseQaResults> & getParseQaResults() const { DARABONBA_PTR_GET_CONST(parseQaResults_, vector<Data::ParseQaResults>) };
      inline vector<Data::ParseQaResults> getParseQaResults() { DARABONBA_PTR_GET(parseQaResults_, vector<Data::ParseQaResults>) };
      inline Data& setParseQaResults(const vector<Data::ParseQaResults> & parseQaResults) { DARABONBA_PTR_SET_VALUE(parseQaResults_, parseQaResults) };
      inline Data& setParseQaResults(vector<Data::ParseQaResults> && parseQaResults) { DARABONBA_PTR_SET_RVALUE(parseQaResults_, parseQaResults) };


    protected:
      shared_ptr<string> currentStatus_ {};
      shared_ptr<string> docId_ {};
      shared_ptr<string> libraryId_ {};
      shared_ptr<vector<Data::ParseQaResults>> parseQaResults_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline GenDocQaResultResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenDocQaResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GenDocQaResultResponseBody::Data) };
    inline GenDocQaResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GenDocQaResultResponseBody::Data) };
    inline GenDocQaResultResponseBody& setData(const GenDocQaResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenDocQaResultResponseBody& setData(GenDocQaResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GenDocQaResultResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GenDocQaResultResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GenDocQaResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenDocQaResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GenDocQaResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GenDocQaResultResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GenDocQaResultResponseBody::Data> data_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
