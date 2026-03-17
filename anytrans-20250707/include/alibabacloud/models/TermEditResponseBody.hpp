// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMEDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TERMEDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class TermEditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TermEditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TermEditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    TermEditResponseBody() = default ;
    TermEditResponseBody(const TermEditResponseBody &) = default ;
    TermEditResponseBody(TermEditResponseBody &&) = default ;
    TermEditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TermEditResponseBody() = default ;
    TermEditResponseBody& operator=(const TermEditResponseBody &) = default ;
    TermEditResponseBody& operator=(TermEditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(failCount, failCount_);
        DARABONBA_PTR_TO_JSON(terms, terms_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(failCount, failCount_);
        DARABONBA_PTR_FROM_JSON(terms, terms_);
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
      class Terms : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Terms& obj) { 
          DARABONBA_PTR_TO_JSON(src, src_);
          DARABONBA_PTR_TO_JSON(termId, termId_);
          DARABONBA_PTR_TO_JSON(tgt, tgt_);
        };
        friend void from_json(const Darabonba::Json& j, Terms& obj) { 
          DARABONBA_PTR_FROM_JSON(src, src_);
          DARABONBA_PTR_FROM_JSON(termId, termId_);
          DARABONBA_PTR_FROM_JSON(tgt, tgt_);
        };
        Terms() = default ;
        Terms(const Terms &) = default ;
        Terms(Terms &&) = default ;
        Terms(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Terms() = default ;
        Terms& operator=(const Terms &) = default ;
        Terms& operator=(Terms &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->src_ == nullptr
        && this->termId_ == nullptr && this->tgt_ == nullptr; };
        // src Field Functions 
        bool hasSrc() const { return this->src_ != nullptr;};
        void deleteSrc() { this->src_ = nullptr;};
        inline string getSrc() const { DARABONBA_PTR_GET_DEFAULT(src_, "") };
        inline Terms& setSrc(string src) { DARABONBA_PTR_SET_VALUE(src_, src) };


        // termId Field Functions 
        bool hasTermId() const { return this->termId_ != nullptr;};
        void deleteTermId() { this->termId_ = nullptr;};
        inline string getTermId() const { DARABONBA_PTR_GET_DEFAULT(termId_, "") };
        inline Terms& setTermId(string termId) { DARABONBA_PTR_SET_VALUE(termId_, termId) };


        // tgt Field Functions 
        bool hasTgt() const { return this->tgt_ != nullptr;};
        void deleteTgt() { this->tgt_ = nullptr;};
        inline string getTgt() const { DARABONBA_PTR_GET_DEFAULT(tgt_, "") };
        inline Terms& setTgt(string tgt) { DARABONBA_PTR_SET_VALUE(tgt_, tgt) };


      protected:
        shared_ptr<string> src_ {};
        shared_ptr<string> termId_ {};
        shared_ptr<string> tgt_ {};
      };

      virtual bool empty() const override { return this->failCount_ == nullptr
        && this->terms_ == nullptr; };
      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int64_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0L) };
      inline Data& setFailCount(int64_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // terms Field Functions 
      bool hasTerms() const { return this->terms_ != nullptr;};
      void deleteTerms() { this->terms_ = nullptr;};
      inline const vector<Data::Terms> & getTerms() const { DARABONBA_PTR_GET_CONST(terms_, vector<Data::Terms>) };
      inline vector<Data::Terms> getTerms() { DARABONBA_PTR_GET(terms_, vector<Data::Terms>) };
      inline Data& setTerms(const vector<Data::Terms> & terms) { DARABONBA_PTR_SET_VALUE(terms_, terms) };
      inline Data& setTerms(vector<Data::Terms> && terms) { DARABONBA_PTR_SET_RVALUE(terms_, terms) };


    protected:
      shared_ptr<int64_t> failCount_ {};
      shared_ptr<vector<Data::Terms>> terms_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TermEditResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TermEditResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TermEditResponseBody::Data) };
    inline TermEditResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TermEditResponseBody::Data) };
    inline TermEditResponseBody& setData(const TermEditResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TermEditResponseBody& setData(TermEditResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline TermEditResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TermEditResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TermEditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TermEditResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<TermEditResponseBody::Data> data_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
