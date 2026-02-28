// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBLACKLISTCALLTAGGINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBLACKLISTCALLTAGGINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListBlacklistCallTaggingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBlacklistCallTaggingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBlacklistCallTaggingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBlacklistCallTaggingsResponseBody() = default ;
    ListBlacklistCallTaggingsResponseBody(const ListBlacklistCallTaggingsResponseBody &) = default ;
    ListBlacklistCallTaggingsResponseBody(ListBlacklistCallTaggingsResponseBody &&) = default ;
    ListBlacklistCallTaggingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBlacklistCallTaggingsResponseBody() = default ;
    ListBlacklistCallTaggingsResponseBody& operator=(const ListBlacklistCallTaggingsResponseBody &) = default ;
    ListBlacklistCallTaggingsResponseBody& operator=(ListBlacklistCallTaggingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Blacklisted, blacklisted_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Number, number_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Blacklisted, blacklisted_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Number, number_);
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
      virtual bool empty() const override { return this->blacklisted_ == nullptr
        && this->jobId_ == nullptr && this->number_ == nullptr; };
      // blacklisted Field Functions 
      bool hasBlacklisted() const { return this->blacklisted_ != nullptr;};
      void deleteBlacklisted() { this->blacklisted_ = nullptr;};
      inline bool getBlacklisted() const { DARABONBA_PTR_GET_DEFAULT(blacklisted_, false) };
      inline Data& setBlacklisted(bool blacklisted) { DARABONBA_PTR_SET_VALUE(blacklisted_, blacklisted) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline Data& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    protected:
      shared_ptr<bool> blacklisted_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<string> number_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListBlacklistCallTaggingsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListBlacklistCallTaggingsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListBlacklistCallTaggingsResponseBody::Data>) };
    inline vector<ListBlacklistCallTaggingsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListBlacklistCallTaggingsResponseBody::Data>) };
    inline ListBlacklistCallTaggingsResponseBody& setData(const vector<ListBlacklistCallTaggingsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBlacklistCallTaggingsResponseBody& setData(vector<ListBlacklistCallTaggingsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListBlacklistCallTaggingsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBlacklistCallTaggingsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBlacklistCallTaggingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListBlacklistCallTaggingsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
