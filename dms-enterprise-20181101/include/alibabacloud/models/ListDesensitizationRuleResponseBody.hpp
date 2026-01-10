// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDESENSITIZATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDESENSITIZATIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDesensitizationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDesensitizationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesensitizationRuleList, desensitizationRuleList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDesensitizationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesensitizationRuleList, desensitizationRuleList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDesensitizationRuleResponseBody() = default ;
    ListDesensitizationRuleResponseBody(const ListDesensitizationRuleResponseBody &) = default ;
    ListDesensitizationRuleResponseBody(ListDesensitizationRuleResponseBody &&) = default ;
    ListDesensitizationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDesensitizationRuleResponseBody() = default ;
    ListDesensitizationRuleResponseBody& operator=(const ListDesensitizationRuleResponseBody &) = default ;
    ListDesensitizationRuleResponseBody& operator=(ListDesensitizationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DesensitizationRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DesensitizationRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(FuncParams, funcParams_);
        DARABONBA_PTR_TO_JSON(FuncSample, funcSample_);
        DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
        DARABONBA_PTR_TO_JSON(LastModifierId, lastModifierId_);
        DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
        DARABONBA_PTR_TO_JSON(ReferenceCount, referenceCount_);
        DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      };
      friend void from_json(const Darabonba::Json& j, DesensitizationRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(FuncParams, funcParams_);
        DARABONBA_PTR_FROM_JSON(FuncSample, funcSample_);
        DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
        DARABONBA_PTR_FROM_JSON(LastModifierId, lastModifierId_);
        DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
        DARABONBA_PTR_FROM_JSON(ReferenceCount, referenceCount_);
        DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      };
      DesensitizationRuleList() = default ;
      DesensitizationRuleList(const DesensitizationRuleList &) = default ;
      DesensitizationRuleList(DesensitizationRuleList &&) = default ;
      DesensitizationRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DesensitizationRuleList() = default ;
      DesensitizationRuleList& operator=(const DesensitizationRuleList &) = default ;
      DesensitizationRuleList& operator=(DesensitizationRuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->funcParams_ == nullptr
        && this->funcSample_ == nullptr && this->functionType_ == nullptr && this->lastModifierId_ == nullptr && this->lastModifierName_ == nullptr && this->referenceCount_ == nullptr
        && this->ruleDesc_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr; };
      // funcParams Field Functions 
      bool hasFuncParams() const { return this->funcParams_ != nullptr;};
      void deleteFuncParams() { this->funcParams_ = nullptr;};
      inline string getFuncParams() const { DARABONBA_PTR_GET_DEFAULT(funcParams_, "") };
      inline DesensitizationRuleList& setFuncParams(string funcParams) { DARABONBA_PTR_SET_VALUE(funcParams_, funcParams) };


      // funcSample Field Functions 
      bool hasFuncSample() const { return this->funcSample_ != nullptr;};
      void deleteFuncSample() { this->funcSample_ = nullptr;};
      inline string getFuncSample() const { DARABONBA_PTR_GET_DEFAULT(funcSample_, "") };
      inline DesensitizationRuleList& setFuncSample(string funcSample) { DARABONBA_PTR_SET_VALUE(funcSample_, funcSample) };


      // functionType Field Functions 
      bool hasFunctionType() const { return this->functionType_ != nullptr;};
      void deleteFunctionType() { this->functionType_ = nullptr;};
      inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
      inline DesensitizationRuleList& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


      // lastModifierId Field Functions 
      bool hasLastModifierId() const { return this->lastModifierId_ != nullptr;};
      void deleteLastModifierId() { this->lastModifierId_ = nullptr;};
      inline string getLastModifierId() const { DARABONBA_PTR_GET_DEFAULT(lastModifierId_, "") };
      inline DesensitizationRuleList& setLastModifierId(string lastModifierId) { DARABONBA_PTR_SET_VALUE(lastModifierId_, lastModifierId) };


      // lastModifierName Field Functions 
      bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
      void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
      inline string getLastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
      inline DesensitizationRuleList& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


      // referenceCount Field Functions 
      bool hasReferenceCount() const { return this->referenceCount_ != nullptr;};
      void deleteReferenceCount() { this->referenceCount_ = nullptr;};
      inline int32_t getReferenceCount() const { DARABONBA_PTR_GET_DEFAULT(referenceCount_, 0) };
      inline DesensitizationRuleList& setReferenceCount(int32_t referenceCount) { DARABONBA_PTR_SET_VALUE(referenceCount_, referenceCount) };


      // ruleDesc Field Functions 
      bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
      void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
      inline string getRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
      inline DesensitizationRuleList& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int32_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
      inline DesensitizationRuleList& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline DesensitizationRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline DesensitizationRuleList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    protected:
      // The parameter.
      shared_ptr<string> funcParams_ {};
      // The example.
      shared_ptr<string> funcSample_ {};
      // The algorithm type.
      shared_ptr<string> functionType_ {};
      // The ID of the user who last modified the masking rule.
      shared_ptr<string> lastModifierId_ {};
      // The name of the user who last modified the masking rule.
      shared_ptr<string> lastModifierName_ {};
      // The number of times that the masking was used.
      shared_ptr<int32_t> referenceCount_ {};
      // The description of the rule.
      shared_ptr<string> ruleDesc_ {};
      // The ID of the masking rule.
      shared_ptr<int32_t> ruleId_ {};
      // The name of the masking rule.
      shared_ptr<string> ruleName_ {};
      // The algorithm used for masking.
      shared_ptr<string> ruleType_ {};
    };

    virtual bool empty() const override { return this->desensitizationRuleList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // desensitizationRuleList Field Functions 
    bool hasDesensitizationRuleList() const { return this->desensitizationRuleList_ != nullptr;};
    void deleteDesensitizationRuleList() { this->desensitizationRuleList_ = nullptr;};
    inline const vector<ListDesensitizationRuleResponseBody::DesensitizationRuleList> & getDesensitizationRuleList() const { DARABONBA_PTR_GET_CONST(desensitizationRuleList_, vector<ListDesensitizationRuleResponseBody::DesensitizationRuleList>) };
    inline vector<ListDesensitizationRuleResponseBody::DesensitizationRuleList> getDesensitizationRuleList() { DARABONBA_PTR_GET(desensitizationRuleList_, vector<ListDesensitizationRuleResponseBody::DesensitizationRuleList>) };
    inline ListDesensitizationRuleResponseBody& setDesensitizationRuleList(const vector<ListDesensitizationRuleResponseBody::DesensitizationRuleList> & desensitizationRuleList) { DARABONBA_PTR_SET_VALUE(desensitizationRuleList_, desensitizationRuleList) };
    inline ListDesensitizationRuleResponseBody& setDesensitizationRuleList(vector<ListDesensitizationRuleResponseBody::DesensitizationRuleList> && desensitizationRuleList) { DARABONBA_PTR_SET_RVALUE(desensitizationRuleList_, desensitizationRuleList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDesensitizationRuleResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDesensitizationRuleResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDesensitizationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDesensitizationRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDesensitizationRuleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of masking rules.
    shared_ptr<vector<ListDesensitizationRuleResponseBody::DesensitizationRuleList>> desensitizationRuleList_ {};
    // The error code returned if the request failed.
    // 
    // This parameter is required.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries returned. By default, this parameter is not returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
