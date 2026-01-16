// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINEIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINEIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListPipelineIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListPipelineIdsResponseBody() = default ;
    ListPipelineIdsResponseBody(const ListPipelineIdsResponseBody &) = default ;
    ListPipelineIdsResponseBody(ListPipelineIdsResponseBody &&) = default ;
    ListPipelineIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineIdsResponseBody() = default ;
    ListPipelineIdsResponseBody& operator=(const ListPipelineIdsResponseBody &) = default ;
    ListPipelineIdsResponseBody& operator=(ListPipelineIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(available, available_);
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(available, available_);
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
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
      virtual bool empty() const override { return this->available_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->pipelineId_ == nullptr; };
      // available Field Functions 
      bool hasAvailable() const { return this->available_ != nullptr;};
      void deleteAvailable() { this->available_ = nullptr;};
      inline bool getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
      inline Result& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Result& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Result& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline Result& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    protected:
      shared_ptr<bool> available_ {};
      shared_ptr<string> code_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> pipelineId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPipelineIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListPipelineIdsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListPipelineIdsResponseBody::Result>) };
    inline vector<ListPipelineIdsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListPipelineIdsResponseBody::Result>) };
    inline ListPipelineIdsResponseBody& setResult(const vector<ListPipelineIdsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListPipelineIdsResponseBody& setResult(vector<ListPipelineIdsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListPipelineIdsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
