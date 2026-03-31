// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATECONFIGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATECONFIGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregateConfigRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregateConfigRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperateRuleResult, operateRuleResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregateConfigRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateRuleResult, operateRuleResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAggregateConfigRulesResponseBody() = default ;
    DeleteAggregateConfigRulesResponseBody(const DeleteAggregateConfigRulesResponseBody &) = default ;
    DeleteAggregateConfigRulesResponseBody(DeleteAggregateConfigRulesResponseBody &&) = default ;
    DeleteAggregateConfigRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregateConfigRulesResponseBody() = default ;
    DeleteAggregateConfigRulesResponseBody& operator=(const DeleteAggregateConfigRulesResponseBody &) = default ;
    DeleteAggregateConfigRulesResponseBody& operator=(DeleteAggregateConfigRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperateRuleResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperateRuleResult& obj) { 
        DARABONBA_PTR_TO_JSON(OperateRuleItemList, operateRuleItemList_);
      };
      friend void from_json(const Darabonba::Json& j, OperateRuleResult& obj) { 
        DARABONBA_PTR_FROM_JSON(OperateRuleItemList, operateRuleItemList_);
      };
      OperateRuleResult() = default ;
      OperateRuleResult(const OperateRuleResult &) = default ;
      OperateRuleResult(OperateRuleResult &&) = default ;
      OperateRuleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperateRuleResult() = default ;
      OperateRuleResult& operator=(const OperateRuleResult &) = default ;
      OperateRuleResult& operator=(OperateRuleResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OperateRuleItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OperateRuleItemList& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, OperateRuleItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        OperateRuleItemList() = default ;
        OperateRuleItemList(const OperateRuleItemList &) = default ;
        OperateRuleItemList(OperateRuleItemList &&) = default ;
        OperateRuleItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OperateRuleItemList() = default ;
        OperateRuleItemList& operator=(const OperateRuleItemList &) = default ;
        OperateRuleItemList& operator=(OperateRuleItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configRuleId_ == nullptr
        && this->errorCode_ == nullptr && this->success_ == nullptr; };
        // configRuleId Field Functions 
        bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
        void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
        inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
        inline OperateRuleItemList& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline OperateRuleItemList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline OperateRuleItemList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // The rule ID.
        shared_ptr<string> configRuleId_ {};
        // The error code returned.
        // 
        // *   If the rule is deleted, no error code is returned.
        // *   If the rule fails to be deleted, an error code is returned. For more information about error codes, see [Error codes](https://error-center.alibabacloud.com/status/product/Config).
        shared_ptr<string> errorCode_ {};
        // Indicates whether the request was successful. Valid values:
        // 
        // *   true: The request was successful.
        // *   false: The request failed.
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->operateRuleItemList_ == nullptr; };
      // operateRuleItemList Field Functions 
      bool hasOperateRuleItemList() const { return this->operateRuleItemList_ != nullptr;};
      void deleteOperateRuleItemList() { this->operateRuleItemList_ = nullptr;};
      inline const vector<OperateRuleResult::OperateRuleItemList> & getOperateRuleItemList() const { DARABONBA_PTR_GET_CONST(operateRuleItemList_, vector<OperateRuleResult::OperateRuleItemList>) };
      inline vector<OperateRuleResult::OperateRuleItemList> getOperateRuleItemList() { DARABONBA_PTR_GET(operateRuleItemList_, vector<OperateRuleResult::OperateRuleItemList>) };
      inline OperateRuleResult& setOperateRuleItemList(const vector<OperateRuleResult::OperateRuleItemList> & operateRuleItemList) { DARABONBA_PTR_SET_VALUE(operateRuleItemList_, operateRuleItemList) };
      inline OperateRuleResult& setOperateRuleItemList(vector<OperateRuleResult::OperateRuleItemList> && operateRuleItemList) { DARABONBA_PTR_SET_RVALUE(operateRuleItemList_, operateRuleItemList) };


    protected:
      // The details of the result.
      shared_ptr<vector<OperateRuleResult::OperateRuleItemList>> operateRuleItemList_ {};
    };

    virtual bool empty() const override { return this->operateRuleResult_ == nullptr
        && this->requestId_ == nullptr; };
    // operateRuleResult Field Functions 
    bool hasOperateRuleResult() const { return this->operateRuleResult_ != nullptr;};
    void deleteOperateRuleResult() { this->operateRuleResult_ = nullptr;};
    inline const DeleteAggregateConfigRulesResponseBody::OperateRuleResult & getOperateRuleResult() const { DARABONBA_PTR_GET_CONST(operateRuleResult_, DeleteAggregateConfigRulesResponseBody::OperateRuleResult) };
    inline DeleteAggregateConfigRulesResponseBody::OperateRuleResult getOperateRuleResult() { DARABONBA_PTR_GET(operateRuleResult_, DeleteAggregateConfigRulesResponseBody::OperateRuleResult) };
    inline DeleteAggregateConfigRulesResponseBody& setOperateRuleResult(const DeleteAggregateConfigRulesResponseBody::OperateRuleResult & operateRuleResult) { DARABONBA_PTR_SET_VALUE(operateRuleResult_, operateRuleResult) };
    inline DeleteAggregateConfigRulesResponseBody& setOperateRuleResult(DeleteAggregateConfigRulesResponseBody::OperateRuleResult && operateRuleResult) { DARABONBA_PTR_SET_RVALUE(operateRuleResult_, operateRuleResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAggregateConfigRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results of the delete operations.
    shared_ptr<DeleteAggregateConfigRulesResponseBody::OperateRuleResult> operateRuleResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
