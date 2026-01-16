// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEENGINEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEENGINEVERSIONRESPONSEBODY_HPP_
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
  class UpgradeEngineVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeEngineVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeEngineVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpgradeEngineVersionResponseBody() = default ;
    UpgradeEngineVersionResponseBody(const UpgradeEngineVersionResponseBody &) = default ;
    UpgradeEngineVersionResponseBody(UpgradeEngineVersionResponseBody &&) = default ;
    UpgradeEngineVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeEngineVersionResponseBody() = default ;
    UpgradeEngineVersionResponseBody& operator=(const UpgradeEngineVersionResponseBody &) = default ;
    UpgradeEngineVersionResponseBody& operator=(UpgradeEngineVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(validateResult, validateResult_);
        DARABONBA_PTR_TO_JSON(validateType, validateType_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(validateResult, validateResult_);
        DARABONBA_PTR_FROM_JSON(validateType, validateType_);
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
      class ValidateResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ValidateResult& obj) { 
          DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(errorType, errorType_);
        };
        friend void from_json(const Darabonba::Json& j, ValidateResult& obj) { 
          DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(errorType, errorType_);
        };
        ValidateResult() = default ;
        ValidateResult(const ValidateResult &) = default ;
        ValidateResult(ValidateResult &&) = default ;
        ValidateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ValidateResult() = default ;
        ValidateResult& operator=(const ValidateResult &) = default ;
        ValidateResult& operator=(ValidateResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->errorType_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline ValidateResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline ValidateResult& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // errorType Field Functions 
        bool hasErrorType() const { return this->errorType_ != nullptr;};
        void deleteErrorType() { this->errorType_ = nullptr;};
        inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
        inline ValidateResult& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


      protected:
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> errorMsg_ {};
        // The verification is passed. Valid values:
        // 
        // *   success: through
        // *   failed: failed
        shared_ptr<string> errorType_ {};
      };

      virtual bool empty() const override { return this->status_ == nullptr
        && this->validateResult_ == nullptr && this->validateType_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // validateResult Field Functions 
      bool hasValidateResult() const { return this->validateResult_ != nullptr;};
      void deleteValidateResult() { this->validateResult_ = nullptr;};
      inline const vector<Result::ValidateResult> & getValidateResult() const { DARABONBA_PTR_GET_CONST(validateResult_, vector<Result::ValidateResult>) };
      inline vector<Result::ValidateResult> getValidateResult() { DARABONBA_PTR_GET(validateResult_, vector<Result::ValidateResult>) };
      inline Result& setValidateResult(const vector<Result::ValidateResult> & validateResult) { DARABONBA_PTR_SET_VALUE(validateResult_, validateResult) };
      inline Result& setValidateResult(vector<Result::ValidateResult> && validateResult) { DARABONBA_PTR_SET_RVALUE(validateResult_, validateResult) };


      // validateType Field Functions 
      bool hasValidateType() const { return this->validateType_ != nullptr;};
      void deleteValidateType() { this->validateType_ = nullptr;};
      inline string getValidateType() const { DARABONBA_PTR_GET_DEFAULT(validateType_, "") };
      inline Result& setValidateType(string validateType) { DARABONBA_PTR_SET_VALUE(validateType_, validateType) };


    protected:
      shared_ptr<string> status_ {};
      // The error message returned.
      shared_ptr<vector<Result::ValidateResult>> validateResult_ {};
      // The error code returned if the request failed.
      shared_ptr<string> validateType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpgradeEngineVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<UpgradeEngineVersionResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<UpgradeEngineVersionResponseBody::Result>) };
    inline vector<UpgradeEngineVersionResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<UpgradeEngineVersionResponseBody::Result>) };
    inline UpgradeEngineVersionResponseBody& setResult(const vector<UpgradeEngineVersionResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpgradeEngineVersionResponseBody& setResult(vector<UpgradeEngineVersionResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The verification information.
    shared_ptr<string> requestId_ {};
    // The type of the error. Valid values:
    // 
    // *   clusterStatus: the health status of the cluster.
    // *   clusterConfigYml: Cluster YML File
    // *   clusterConfigPlugins: Cluster Configuration File
    // *   clusterResource: cluster resources
    // *   clusterSnapshot: cluster snapshot
    shared_ptr<vector<UpgradeEngineVersionResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
