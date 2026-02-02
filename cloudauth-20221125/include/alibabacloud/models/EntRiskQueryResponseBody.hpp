// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTRISKQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTRISKQUERYRESPONSEBODY_HPP_
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
  class EntRiskQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntRiskQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, EntRiskQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    EntRiskQueryResponseBody() = default ;
    EntRiskQueryResponseBody(const EntRiskQueryResponseBody &) = default ;
    EntRiskQueryResponseBody(EntRiskQueryResponseBody &&) = default ;
    EntRiskQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntRiskQueryResponseBody() = default ;
    EntRiskQueryResponseBody& operator=(const EntRiskQueryResponseBody &) = default ;
    EntRiskQueryResponseBody& operator=(EntRiskQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(RiskList, riskList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(RiskList, riskList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class RiskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskList& obj) { 
          DARABONBA_PTR_TO_JSON(CreditCode, creditCode_);
          DARABONBA_PTR_TO_JSON(EntName, entName_);
          DARABONBA_PTR_TO_JSON(ListedDate, listedDate_);
          DARABONBA_PTR_TO_JSON(ListedReason, listedReason_);
          DARABONBA_PTR_TO_JSON(OperationOrg, operationOrg_);
          DARABONBA_PTR_TO_JSON(RegNo, regNo_);
          DARABONBA_PTR_TO_JSON(RemovedDate, removedDate_);
          DARABONBA_PTR_TO_JSON(RemovedOrg, removedOrg_);
          DARABONBA_PTR_TO_JSON(RemovedReason, removedReason_);
        };
        friend void from_json(const Darabonba::Json& j, RiskList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreditCode, creditCode_);
          DARABONBA_PTR_FROM_JSON(EntName, entName_);
          DARABONBA_PTR_FROM_JSON(ListedDate, listedDate_);
          DARABONBA_PTR_FROM_JSON(ListedReason, listedReason_);
          DARABONBA_PTR_FROM_JSON(OperationOrg, operationOrg_);
          DARABONBA_PTR_FROM_JSON(RegNo, regNo_);
          DARABONBA_PTR_FROM_JSON(RemovedDate, removedDate_);
          DARABONBA_PTR_FROM_JSON(RemovedOrg, removedOrg_);
          DARABONBA_PTR_FROM_JSON(RemovedReason, removedReason_);
        };
        RiskList() = default ;
        RiskList(const RiskList &) = default ;
        RiskList(RiskList &&) = default ;
        RiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskList() = default ;
        RiskList& operator=(const RiskList &) = default ;
        RiskList& operator=(RiskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creditCode_ == nullptr
        && this->entName_ == nullptr && this->listedDate_ == nullptr && this->listedReason_ == nullptr && this->operationOrg_ == nullptr && this->regNo_ == nullptr
        && this->removedDate_ == nullptr && this->removedOrg_ == nullptr && this->removedReason_ == nullptr; };
        // creditCode Field Functions 
        bool hasCreditCode() const { return this->creditCode_ != nullptr;};
        void deleteCreditCode() { this->creditCode_ = nullptr;};
        inline string getCreditCode() const { DARABONBA_PTR_GET_DEFAULT(creditCode_, "") };
        inline RiskList& setCreditCode(string creditCode) { DARABONBA_PTR_SET_VALUE(creditCode_, creditCode) };


        // entName Field Functions 
        bool hasEntName() const { return this->entName_ != nullptr;};
        void deleteEntName() { this->entName_ = nullptr;};
        inline string getEntName() const { DARABONBA_PTR_GET_DEFAULT(entName_, "") };
        inline RiskList& setEntName(string entName) { DARABONBA_PTR_SET_VALUE(entName_, entName) };


        // listedDate Field Functions 
        bool hasListedDate() const { return this->listedDate_ != nullptr;};
        void deleteListedDate() { this->listedDate_ = nullptr;};
        inline string getListedDate() const { DARABONBA_PTR_GET_DEFAULT(listedDate_, "") };
        inline RiskList& setListedDate(string listedDate) { DARABONBA_PTR_SET_VALUE(listedDate_, listedDate) };


        // listedReason Field Functions 
        bool hasListedReason() const { return this->listedReason_ != nullptr;};
        void deleteListedReason() { this->listedReason_ = nullptr;};
        inline string getListedReason() const { DARABONBA_PTR_GET_DEFAULT(listedReason_, "") };
        inline RiskList& setListedReason(string listedReason) { DARABONBA_PTR_SET_VALUE(listedReason_, listedReason) };


        // operationOrg Field Functions 
        bool hasOperationOrg() const { return this->operationOrg_ != nullptr;};
        void deleteOperationOrg() { this->operationOrg_ = nullptr;};
        inline string getOperationOrg() const { DARABONBA_PTR_GET_DEFAULT(operationOrg_, "") };
        inline RiskList& setOperationOrg(string operationOrg) { DARABONBA_PTR_SET_VALUE(operationOrg_, operationOrg) };


        // regNo Field Functions 
        bool hasRegNo() const { return this->regNo_ != nullptr;};
        void deleteRegNo() { this->regNo_ = nullptr;};
        inline string getRegNo() const { DARABONBA_PTR_GET_DEFAULT(regNo_, "") };
        inline RiskList& setRegNo(string regNo) { DARABONBA_PTR_SET_VALUE(regNo_, regNo) };


        // removedDate Field Functions 
        bool hasRemovedDate() const { return this->removedDate_ != nullptr;};
        void deleteRemovedDate() { this->removedDate_ = nullptr;};
        inline string getRemovedDate() const { DARABONBA_PTR_GET_DEFAULT(removedDate_, "") };
        inline RiskList& setRemovedDate(string removedDate) { DARABONBA_PTR_SET_VALUE(removedDate_, removedDate) };


        // removedOrg Field Functions 
        bool hasRemovedOrg() const { return this->removedOrg_ != nullptr;};
        void deleteRemovedOrg() { this->removedOrg_ = nullptr;};
        inline string getRemovedOrg() const { DARABONBA_PTR_GET_DEFAULT(removedOrg_, "") };
        inline RiskList& setRemovedOrg(string removedOrg) { DARABONBA_PTR_SET_VALUE(removedOrg_, removedOrg) };


        // removedReason Field Functions 
        bool hasRemovedReason() const { return this->removedReason_ != nullptr;};
        void deleteRemovedReason() { this->removedReason_ = nullptr;};
        inline string getRemovedReason() const { DARABONBA_PTR_GET_DEFAULT(removedReason_, "") };
        inline RiskList& setRemovedReason(string removedReason) { DARABONBA_PTR_SET_VALUE(removedReason_, removedReason) };


      protected:
        // Unified Social Credit Code
        shared_ptr<string> creditCode_ {};
        // Company name.
        shared_ptr<string> entName_ {};
        // Date listed as abnormal
        // Example: 2023-02-03
        shared_ptr<string> listedDate_ {};
        // Reason for being listed as abnormal
        shared_ptr<string> listedReason_ {};
        // Authority that handled the inclusion
        shared_ptr<string> operationOrg_ {};
        // Business registration number
        shared_ptr<string> regNo_ {};
        // Date removed from the abnormal list
        // Example: 2023-02-03
        shared_ptr<string> removedDate_ {};
        // Authority that handled the removal
        shared_ptr<string> removedOrg_ {};
        // Reason for being removed from the abnormal list
        shared_ptr<string> removedReason_ {};
      };

      virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->riskList_ == nullptr && this->status_ == nullptr; };
      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline Result& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // riskList Field Functions 
      bool hasRiskList() const { return this->riskList_ != nullptr;};
      void deleteRiskList() { this->riskList_ = nullptr;};
      inline const vector<Result::RiskList> & getRiskList() const { DARABONBA_PTR_GET_CONST(riskList_, vector<Result::RiskList>) };
      inline vector<Result::RiskList> getRiskList() { DARABONBA_PTR_GET(riskList_, vector<Result::RiskList>) };
      inline Result& setRiskList(const vector<Result::RiskList> & riskList) { DARABONBA_PTR_SET_VALUE(riskList_, riskList) };
      inline Result& setRiskList(vector<Result::RiskList> && riskList) { DARABONBA_PTR_SET_RVALUE(riskList_, riskList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Query result
      // 0: Normal business operation
      // 1: Abnormal business operation
      // 2: Not found
      shared_ptr<string> bizCode_ {};
      // List of abnormal information
      shared_ptr<vector<Result::RiskList>> riskList_ {};
      // Business operation status.
      // - 1: In operation (open)
      // - 2: Relocated
      // - 3: Deregistered
      // - 4: Revoked
      // - 5: Canceled
      // - 6: Suspended
      // - 0: Other
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EntRiskQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EntRiskQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EntRiskQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const EntRiskQueryResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, EntRiskQueryResponseBody::Result) };
    inline EntRiskQueryResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, EntRiskQueryResponseBody::Result) };
    inline EntRiskQueryResponseBody& setResult(const EntRiskQueryResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline EntRiskQueryResponseBody& setResult(EntRiskQueryResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Error code. For details about error codes, see **[Error Codes](https://help.aliyun.com/document_detail/215420.html)**.
    shared_ptr<string> code_ {};
    // Response message for the request information.
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Result
    shared_ptr<EntRiskQueryResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20221125
#endif
