// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20221125
{
namespace Models
{
  class EntVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, EntVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    EntVerifyResponseBody() = default ;
    EntVerifyResponseBody(const EntVerifyResponseBody &) = default ;
    EntVerifyResponseBody(EntVerifyResponseBody &&) = default ;
    EntVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntVerifyResponseBody() = default ;
    EntVerifyResponseBody& operator=(const EntVerifyResponseBody &) = default ;
    EntVerifyResponseBody& operator=(EntVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(RiskVerifyResult, riskVerifyResult_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(RiskVerifyResult, riskVerifyResult_);
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
      class RiskVerifyResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskVerifyResult& obj) { 
          DARABONBA_PTR_TO_JSON(Found, found_);
          DARABONBA_PTR_TO_JSON(ModelResults, modelResults_);
        };
        friend void from_json(const Darabonba::Json& j, RiskVerifyResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Found, found_);
          DARABONBA_PTR_FROM_JSON(ModelResults, modelResults_);
        };
        RiskVerifyResult() = default ;
        RiskVerifyResult(const RiskVerifyResult &) = default ;
        RiskVerifyResult(RiskVerifyResult &&) = default ;
        RiskVerifyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskVerifyResult() = default ;
        RiskVerifyResult& operator=(const RiskVerifyResult &) = default ;
        RiskVerifyResult& operator=(RiskVerifyResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ModelResults : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModelResults& obj) { 
            DARABONBA_PTR_TO_JSON(ModelName, modelName_);
            DARABONBA_PTR_TO_JSON(Result, result_);
          };
          friend void from_json(const Darabonba::Json& j, ModelResults& obj) { 
            DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
            DARABONBA_PTR_FROM_JSON(Result, result_);
          };
          ModelResults() = default ;
          ModelResults(const ModelResults &) = default ;
          ModelResults(ModelResults &&) = default ;
          ModelResults(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModelResults() = default ;
          ModelResults& operator=(const ModelResults &) = default ;
          ModelResults& operator=(ModelResults &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->modelName_ == nullptr
        && this->result_ == nullptr; };
          // modelName Field Functions 
          bool hasModelName() const { return this->modelName_ != nullptr;};
          void deleteModelName() { this->modelName_ = nullptr;};
          inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
          inline ModelResults& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


          // result Field Functions 
          bool hasResult() const { return this->result_ != nullptr;};
          void deleteResult() { this->result_ = nullptr;};
          inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
          inline ModelResults& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        protected:
          // Model name
          shared_ptr<string> modelName_ {};
          // Model result
          shared_ptr<string> result_ {};
        };

        virtual bool empty() const override { return this->found_ == nullptr
        && this->modelResults_ == nullptr; };
        // found Field Functions 
        bool hasFound() const { return this->found_ != nullptr;};
        void deleteFound() { this->found_ = nullptr;};
        inline bool getFound() const { DARABONBA_PTR_GET_DEFAULT(found_, false) };
        inline RiskVerifyResult& setFound(bool found) { DARABONBA_PTR_SET_VALUE(found_, found) };


        // modelResults Field Functions 
        bool hasModelResults() const { return this->modelResults_ != nullptr;};
        void deleteModelResults() { this->modelResults_ = nullptr;};
        inline const vector<RiskVerifyResult::ModelResults> & getModelResults() const { DARABONBA_PTR_GET_CONST(modelResults_, vector<RiskVerifyResult::ModelResults>) };
        inline vector<RiskVerifyResult::ModelResults> getModelResults() { DARABONBA_PTR_GET(modelResults_, vector<RiskVerifyResult::ModelResults>) };
        inline RiskVerifyResult& setModelResults(const vector<RiskVerifyResult::ModelResults> & modelResults) { DARABONBA_PTR_SET_VALUE(modelResults_, modelResults) };
        inline RiskVerifyResult& setModelResults(vector<RiskVerifyResult::ModelResults> && modelResults) { DARABONBA_PTR_SET_RVALUE(modelResults_, modelResults) };


      protected:
        // Whether found
        shared_ptr<bool> found_ {};
        // List of enterprise risk verification model results
        shared_ptr<vector<RiskVerifyResult::ModelResults>> modelResults_ {};
      };

      virtual bool empty() const override { return this->riskVerifyResult_ == nullptr; };
      // riskVerifyResult Field Functions 
      bool hasRiskVerifyResult() const { return this->riskVerifyResult_ != nullptr;};
      void deleteRiskVerifyResult() { this->riskVerifyResult_ = nullptr;};
      inline const Result::RiskVerifyResult & getRiskVerifyResult() const { DARABONBA_PTR_GET_CONST(riskVerifyResult_, Result::RiskVerifyResult) };
      inline Result::RiskVerifyResult getRiskVerifyResult() { DARABONBA_PTR_GET(riskVerifyResult_, Result::RiskVerifyResult) };
      inline Result& setRiskVerifyResult(const Result::RiskVerifyResult & riskVerifyResult) { DARABONBA_PTR_SET_VALUE(riskVerifyResult_, riskVerifyResult) };
      inline Result& setRiskVerifyResult(Result::RiskVerifyResult && riskVerifyResult) { DARABONBA_PTR_SET_RVALUE(riskVerifyResult_, riskVerifyResult) };


    protected:
      // Enterprise risk verification result
      shared_ptr<Result::RiskVerifyResult> riskVerifyResult_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EntVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EntVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EntVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const EntVerifyResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, EntVerifyResponseBody::Result) };
    inline EntVerifyResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, EntVerifyResponseBody::Result) };
    inline EntVerifyResponseBody& setResult(const EntVerifyResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline EntVerifyResponseBody& setResult(EntVerifyResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Return code
    shared_ptr<string> code_ {};
    // Error message
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Result
    shared_ptr<EntVerifyResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20221125
#endif
