// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRECALLPUSHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHRECALLPUSHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchRecallPushResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRecallPushResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRecallPushResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchRecallPushResponseBody() = default ;
    BatchRecallPushResponseBody(const BatchRecallPushResponseBody &) = default ;
    BatchRecallPushResponseBody(BatchRecallPushResponseBody &&) = default ;
    BatchRecallPushResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRecallPushResponseBody() = default ;
    BatchRecallPushResponseBody& operator=(const BatchRecallPushResponseBody &) = default ;
    BatchRecallPushResponseBody& operator=(BatchRecallPushResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(RecallResults, recallResults_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(RecallResults, recallResults_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecallResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecallResults& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, RecallResults& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        RecallResults() = default ;
        RecallResults(const RecallResults &) = default ;
        RecallResults(RecallResults &&) = default ;
        RecallResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecallResults() = default ;
        RecallResults& operator=(const RecallResults &) = default ;
        RecallResults& operator=(RecallResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->outBizId_ == nullptr && this->success_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline RecallResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline RecallResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // outBizId Field Functions 
        bool hasOutBizId() const { return this->outBizId_ != nullptr;};
        void deleteOutBizId() { this->outBizId_ = nullptr;};
        inline string getOutBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
        inline RecallResults& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline RecallResults& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> outBizId_ {};
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->recallResults_ == nullptr; };
      // recallResults Field Functions 
      bool hasRecallResults() const { return this->recallResults_ != nullptr;};
      void deleteRecallResults() { this->recallResults_ = nullptr;};
      inline const vector<Module::RecallResults> & getRecallResults() const { DARABONBA_PTR_GET_CONST(recallResults_, vector<Module::RecallResults>) };
      inline vector<Module::RecallResults> getRecallResults() { DARABONBA_PTR_GET(recallResults_, vector<Module::RecallResults>) };
      inline Module& setRecallResults(const vector<Module::RecallResults> & recallResults) { DARABONBA_PTR_SET_VALUE(recallResults_, recallResults) };
      inline Module& setRecallResults(vector<Module::RecallResults> && recallResults) { DARABONBA_PTR_SET_RVALUE(recallResults_, recallResults) };


    protected:
      shared_ptr<vector<Module::RecallResults>> recallResults_ {};
    };

    virtual bool empty() const override { return this->allowRetry_ == nullptr
        && this->httpStatusCode_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline BatchRecallPushResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline BatchRecallPushResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const BatchRecallPushResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, BatchRecallPushResponseBody::Module) };
    inline BatchRecallPushResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, BatchRecallPushResponseBody::Module) };
    inline BatchRecallPushResponseBody& setModule(const BatchRecallPushResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline BatchRecallPushResponseBody& setModule(BatchRecallPushResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchRecallPushResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchRecallPushResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<BatchRecallPushResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
