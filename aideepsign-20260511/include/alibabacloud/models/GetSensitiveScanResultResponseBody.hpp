// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENSITIVESCANRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSENSITIVESCANRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class GetSensitiveScanResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSensitiveScanResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSensitiveScanResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSensitiveScanResultResponseBody() = default ;
    GetSensitiveScanResultResponseBody(const GetSensitiveScanResultResponseBody &) = default ;
    GetSensitiveScanResultResponseBody(GetSensitiveScanResultResponseBody &&) = default ;
    GetSensitiveScanResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSensitiveScanResultResponseBody() = default ;
    GetSensitiveScanResultResponseBody& operator=(const GetSensitiveScanResultResponseBody &) = default ;
    GetSensitiveScanResultResponseBody& operator=(GetSensitiveScanResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(OssObjectDetail, ossObjectDetail_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(OssObjectDetail, ossObjectDetail_);
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
      class OssObjectDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssObjectDetail& obj) { 
          DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
          DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
        };
        friend void from_json(const Darabonba::Json& j, OssObjectDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
          DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
        };
        OssObjectDetail() = default ;
        OssObjectDetail(const OssObjectDetail &) = default ;
        OssObjectDetail(OssObjectDetail &&) = default ;
        OssObjectDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssObjectDetail() = default ;
        OssObjectDetail& operator=(const OssObjectDetail &) = default ;
        OssObjectDetail& operator=(OssObjectDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
            DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
            DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          };
          friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
            DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          };
          RuleList() = default ;
          RuleList(const RuleList &) = default ;
          RuleList(RuleList &&) = default ;
          RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleList() = default ;
          RuleList& operator=(const RuleList &) = default ;
          RuleList& operator=(RuleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->count_ == nullptr && this->riskLevelName_ == nullptr && this->ruleName_ == nullptr; };
          // categoryName Field Functions 
          bool hasCategoryName() const { return this->categoryName_ != nullptr;};
          void deleteCategoryName() { this->categoryName_ = nullptr;};
          inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
          inline RuleList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
          inline RuleList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // riskLevelName Field Functions 
          bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
          void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
          inline string getRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
          inline RuleList& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline RuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        protected:
          // The category name of the rule.
          shared_ptr<string> categoryName_ {};
          // The number of hits.
          shared_ptr<int32_t> count_ {};
          // The risk level name of the rule.
          shared_ptr<string> riskLevelName_ {};
          // The rule name.
          shared_ptr<string> ruleName_ {};
        };

        virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->categoryName_ == nullptr && this->name_ == nullptr && this->riskLevelName_ == nullptr && this->ruleList_ == nullptr; };
        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline OssObjectDetail& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // categoryName Field Functions 
        bool hasCategoryName() const { return this->categoryName_ != nullptr;};
        void deleteCategoryName() { this->categoryName_ = nullptr;};
        inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
        inline OssObjectDetail& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline OssObjectDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // riskLevelName Field Functions 
        bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
        void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
        inline string getRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
        inline OssObjectDetail& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


        // ruleList Field Functions 
        bool hasRuleList() const { return this->ruleList_ != nullptr;};
        void deleteRuleList() { this->ruleList_ = nullptr;};
        inline const vector<OssObjectDetail::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<OssObjectDetail::RuleList>) };
        inline vector<OssObjectDetail::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<OssObjectDetail::RuleList>) };
        inline OssObjectDetail& setRuleList(const vector<OssObjectDetail::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
        inline OssObjectDetail& setRuleList(vector<OssObjectDetail::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


      protected:
        // The name of the bucket to which the object belongs.
        shared_ptr<string> bucketName_ {};
        // The sensitive data category name.
        shared_ptr<string> categoryName_ {};
        // The name of the scanned object.
        shared_ptr<string> name_ {};
        // The overall risk level name.
        shared_ptr<string> riskLevelName_ {};
        // The list of sensitive data rules that are hit.
        shared_ptr<vector<OssObjectDetail::RuleList>> ruleList_ {};
      };

      virtual bool empty() const override { return this->ossObjectDetail_ == nullptr; };
      // ossObjectDetail Field Functions 
      bool hasOssObjectDetail() const { return this->ossObjectDetail_ != nullptr;};
      void deleteOssObjectDetail() { this->ossObjectDetail_ = nullptr;};
      inline const Result::OssObjectDetail & getOssObjectDetail() const { DARABONBA_PTR_GET_CONST(ossObjectDetail_, Result::OssObjectDetail) };
      inline Result::OssObjectDetail getOssObjectDetail() { DARABONBA_PTR_GET(ossObjectDetail_, Result::OssObjectDetail) };
      inline Result& setOssObjectDetail(const Result::OssObjectDetail & ossObjectDetail) { DARABONBA_PTR_SET_VALUE(ossObjectDetail_, ossObjectDetail) };
      inline Result& setOssObjectDetail(Result::OssObjectDetail && ossObjectDetail) { DARABONBA_PTR_SET_RVALUE(ossObjectDetail_, ossObjectDetail) };


    protected:
      // The name of the scanned object.
      shared_ptr<Result::OssObjectDetail> ossObjectDetail_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->status_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSensitiveScanResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSensitiveScanResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSensitiveScanResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSensitiveScanResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetSensitiveScanResultResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetSensitiveScanResultResponseBody::Result) };
    inline GetSensitiveScanResultResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetSensitiveScanResultResponseBody::Result) };
    inline GetSensitiveScanResultResponseBody& setResult(const GetSensitiveScanResultResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetSensitiveScanResultResponseBody& setResult(GetSensitiveScanResultResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSensitiveScanResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSensitiveScanResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code. The value "OK" is returned when the request succeeds.
    shared_ptr<string> code_ {};
    // The HTTP status code. The value 200 is returned when the request succeeds.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The additional information. The value "success" is returned when the request succeeds.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The scan result. This parameter is returned only when the status is completed.
    shared_ptr<GetSensitiveScanResultResponseBody::Result> result_ {};
    // The task status. Valid values:
    // - running: The task is running.
    // - completed: The task is completed.
    // - terminated: The task is terminated or failed.
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
