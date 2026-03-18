// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKYIKEAIAPPJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKYIKEAIAPPJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class PrecheckYikeAIAppJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckYikeAIAppJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckYikeAIAppJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    PrecheckYikeAIAppJobResponseBody() = default ;
    PrecheckYikeAIAppJobResponseBody(const PrecheckYikeAIAppJobResponseBody &) = default ;
    PrecheckYikeAIAppJobResponseBody(PrecheckYikeAIAppJobResponseBody &&) = default ;
    PrecheckYikeAIAppJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckYikeAIAppJobResponseBody() = default ;
    PrecheckYikeAIAppJobResponseBody& operator=(const PrecheckYikeAIAppJobResponseBody &) = default ;
    PrecheckYikeAIAppJobResponseBody& operator=(PrecheckYikeAIAppJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(Key, key_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
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
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->key_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Result& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Result& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> key_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->status_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PrecheckYikeAIAppJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<PrecheckYikeAIAppJobResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<PrecheckYikeAIAppJobResponseBody::Result>) };
    inline vector<PrecheckYikeAIAppJobResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<PrecheckYikeAIAppJobResponseBody::Result>) };
    inline PrecheckYikeAIAppJobResponseBody& setResult(const vector<PrecheckYikeAIAppJobResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline PrecheckYikeAIAppJobResponseBody& setResult(vector<PrecheckYikeAIAppJobResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PrecheckYikeAIAppJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<PrecheckYikeAIAppJobResponseBody::Result>> result_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
