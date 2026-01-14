// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDFEISHUUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDFEISHUUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class BatchAddFeishuUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddFeishuUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddFeishuUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchAddFeishuUsersResponseBody() = default ;
    BatchAddFeishuUsersResponseBody(const BatchAddFeishuUsersResponseBody &) = default ;
    BatchAddFeishuUsersResponseBody(BatchAddFeishuUsersResponseBody &&) = default ;
    BatchAddFeishuUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddFeishuUsersResponseBody() = default ;
    BatchAddFeishuUsersResponseBody& operator=(const BatchAddFeishuUsersResponseBody &) = default ;
    BatchAddFeishuUsersResponseBody& operator=(BatchAddFeishuUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(FailCount, failCount_);
        DARABONBA_PTR_TO_JSON(FailResults, failResults_);
        DARABONBA_PTR_TO_JSON(OkCount, okCount_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
        DARABONBA_PTR_FROM_JSON(FailResults, failResults_);
        DARABONBA_PTR_FROM_JSON(OkCount, okCount_);
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
      class FailResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailResults& obj) { 
          DARABONBA_PTR_TO_JSON(FailInfos, failInfos_);
        };
        friend void from_json(const Darabonba::Json& j, FailResults& obj) { 
          DARABONBA_PTR_FROM_JSON(FailInfos, failInfos_);
        };
        FailResults() = default ;
        FailResults(const FailResults &) = default ;
        FailResults(FailResults &&) = default ;
        FailResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailResults() = default ;
        FailResults& operator=(const FailResults &) = default ;
        FailResults& operator=(FailResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FailInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FailInfos& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(CodeDesc, codeDesc_);
            DARABONBA_PTR_TO_JSON(Input, input_);
          };
          friend void from_json(const Darabonba::Json& j, FailInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(CodeDesc, codeDesc_);
            DARABONBA_PTR_FROM_JSON(Input, input_);
          };
          FailInfos() = default ;
          FailInfos(const FailInfos &) = default ;
          FailInfos(FailInfos &&) = default ;
          FailInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FailInfos() = default ;
          FailInfos& operator=(const FailInfos &) = default ;
          FailInfos& operator=(FailInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->codeDesc_ == nullptr && this->input_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline FailInfos& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // codeDesc Field Functions 
          bool hasCodeDesc() const { return this->codeDesc_ != nullptr;};
          void deleteCodeDesc() { this->codeDesc_ = nullptr;};
          inline string getCodeDesc() const { DARABONBA_PTR_GET_DEFAULT(codeDesc_, "") };
          inline FailInfos& setCodeDesc(string codeDesc) { DARABONBA_PTR_SET_VALUE(codeDesc_, codeDesc) };


          // input Field Functions 
          bool hasInput() const { return this->input_ != nullptr;};
          void deleteInput() { this->input_ = nullptr;};
          inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
          inline FailInfos& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


        protected:
          // Error code.
          shared_ptr<string> code_ {};
          // Description of the error code.
          shared_ptr<string> codeDesc_ {};
          // Incorrect input value.
          shared_ptr<string> input_ {};
        };

        virtual bool empty() const override { return this->failInfos_ == nullptr; };
        // failInfos Field Functions 
        bool hasFailInfos() const { return this->failInfos_ != nullptr;};
        void deleteFailInfos() { this->failInfos_ = nullptr;};
        inline const vector<FailResults::FailInfos> & getFailInfos() const { DARABONBA_PTR_GET_CONST(failInfos_, vector<FailResults::FailInfos>) };
        inline vector<FailResults::FailInfos> getFailInfos() { DARABONBA_PTR_GET(failInfos_, vector<FailResults::FailInfos>) };
        inline FailResults& setFailInfos(const vector<FailResults::FailInfos> & failInfos) { DARABONBA_PTR_SET_VALUE(failInfos_, failInfos) };
        inline FailResults& setFailInfos(vector<FailResults::FailInfos> && failInfos) { DARABONBA_PTR_SET_RVALUE(failInfos_, failInfos) };


      protected:
        // Reasons for errors.
        shared_ptr<vector<FailResults::FailInfos>> failInfos_ {};
      };

      virtual bool empty() const override { return this->failCount_ == nullptr
        && this->failResults_ == nullptr && this->okCount_ == nullptr; };
      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
      inline Result& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // failResults Field Functions 
      bool hasFailResults() const { return this->failResults_ != nullptr;};
      void deleteFailResults() { this->failResults_ = nullptr;};
      inline const vector<Result::FailResults> & getFailResults() const { DARABONBA_PTR_GET_CONST(failResults_, vector<Result::FailResults>) };
      inline vector<Result::FailResults> getFailResults() { DARABONBA_PTR_GET(failResults_, vector<Result::FailResults>) };
      inline Result& setFailResults(const vector<Result::FailResults> & failResults) { DARABONBA_PTR_SET_VALUE(failResults_, failResults) };
      inline Result& setFailResults(vector<Result::FailResults> && failResults) { DARABONBA_PTR_SET_RVALUE(failResults_, failResults) };


      // okCount Field Functions 
      bool hasOkCount() const { return this->okCount_ != nullptr;};
      void deleteOkCount() { this->okCount_ = nullptr;};
      inline int32_t getOkCount() const { DARABONBA_PTR_GET_DEFAULT(okCount_, 0) };
      inline Result& setOkCount(int32_t okCount) { DARABONBA_PTR_SET_VALUE(okCount_, okCount) };


    protected:
      // Number of failed validations.
      shared_ptr<int32_t> failCount_ {};
      // Details of the failures.
      shared_ptr<vector<Result::FailResults>> failResults_ {};
      // Count of successes.
      shared_ptr<int32_t> okCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchAddFeishuUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const BatchAddFeishuUsersResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, BatchAddFeishuUsersResponseBody::Result) };
    inline BatchAddFeishuUsersResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, BatchAddFeishuUsersResponseBody::Result) };
    inline BatchAddFeishuUsersResponseBody& setResult(const BatchAddFeishuUsersResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline BatchAddFeishuUsersResponseBody& setResult(BatchAddFeishuUsersResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchAddFeishuUsersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Result of adding members to the user group. Possible values:
    // 
    // - true: Addition successful
    // - false: Addition failed
    shared_ptr<BatchAddFeishuUsersResponseBody::Result> result_ {};
    // Whether the request was successful. Possible values:
    // 
    // - true: Request successful
    // - false: Request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
