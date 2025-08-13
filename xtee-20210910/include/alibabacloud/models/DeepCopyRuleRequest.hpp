// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEEPCOPYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEEPCOPYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DeepCopyRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeepCopyRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateType, createType_);
      DARABONBA_PTR_TO_JSON(CustInsertInfo, custInsertInfo_);
      DARABONBA_PTR_TO_JSON(CustWriteInfo, custWriteInfo_);
      DARABONBA_PTR_TO_JSON(ExpressionVariableInfo, expressionVariableInfo_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(QueryExpressionVariableInfo, queryExpressionVariableInfo_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(SourceRuleId, sourceRuleId_);
      DARABONBA_PTR_TO_JSON(SourceRuleIds, sourceRuleIds_);
      DARABONBA_PTR_TO_JSON(TargetEventCode, targetEventCode_);
      DARABONBA_PTR_TO_JSON(TargetEventName, targetEventName_);
    };
    friend void from_json(const Darabonba::Json& j, DeepCopyRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateType, createType_);
      DARABONBA_PTR_FROM_JSON(CustInsertInfo, custInsertInfo_);
      DARABONBA_PTR_FROM_JSON(CustWriteInfo, custWriteInfo_);
      DARABONBA_PTR_FROM_JSON(ExpressionVariableInfo, expressionVariableInfo_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(QueryExpressionVariableInfo, queryExpressionVariableInfo_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(SourceRuleId, sourceRuleId_);
      DARABONBA_PTR_FROM_JSON(SourceRuleIds, sourceRuleIds_);
      DARABONBA_PTR_FROM_JSON(TargetEventCode, targetEventCode_);
      DARABONBA_PTR_FROM_JSON(TargetEventName, targetEventName_);
    };
    DeepCopyRuleRequest() = default ;
    DeepCopyRuleRequest(const DeepCopyRuleRequest &) = default ;
    DeepCopyRuleRequest(DeepCopyRuleRequest &&) = default ;
    DeepCopyRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeepCopyRuleRequest() = default ;
    DeepCopyRuleRequest& operator=(const DeepCopyRuleRequest &) = default ;
    DeepCopyRuleRequest& operator=(DeepCopyRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createType_ != nullptr
        && this->custInsertInfo_ != nullptr && this->custWriteInfo_ != nullptr && this->expressionVariableInfo_ != nullptr && this->lang_ != nullptr && this->queryExpressionVariableInfo_ != nullptr
        && this->regId_ != nullptr && this->sourceRuleId_ != nullptr && this->sourceRuleIds_ != nullptr && this->targetEventCode_ != nullptr && this->targetEventName_ != nullptr; };
    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline DeepCopyRuleRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // custInsertInfo Field Functions 
    bool hasCustInsertInfo() const { return this->custInsertInfo_ != nullptr;};
    void deleteCustInsertInfo() { this->custInsertInfo_ = nullptr;};
    inline string custInsertInfo() const { DARABONBA_PTR_GET_DEFAULT(custInsertInfo_, "") };
    inline DeepCopyRuleRequest& setCustInsertInfo(string custInsertInfo) { DARABONBA_PTR_SET_VALUE(custInsertInfo_, custInsertInfo) };


    // custWriteInfo Field Functions 
    bool hasCustWriteInfo() const { return this->custWriteInfo_ != nullptr;};
    void deleteCustWriteInfo() { this->custWriteInfo_ = nullptr;};
    inline string custWriteInfo() const { DARABONBA_PTR_GET_DEFAULT(custWriteInfo_, "") };
    inline DeepCopyRuleRequest& setCustWriteInfo(string custWriteInfo) { DARABONBA_PTR_SET_VALUE(custWriteInfo_, custWriteInfo) };


    // expressionVariableInfo Field Functions 
    bool hasExpressionVariableInfo() const { return this->expressionVariableInfo_ != nullptr;};
    void deleteExpressionVariableInfo() { this->expressionVariableInfo_ = nullptr;};
    inline string expressionVariableInfo() const { DARABONBA_PTR_GET_DEFAULT(expressionVariableInfo_, "") };
    inline DeepCopyRuleRequest& setExpressionVariableInfo(string expressionVariableInfo) { DARABONBA_PTR_SET_VALUE(expressionVariableInfo_, expressionVariableInfo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeepCopyRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // queryExpressionVariableInfo Field Functions 
    bool hasQueryExpressionVariableInfo() const { return this->queryExpressionVariableInfo_ != nullptr;};
    void deleteQueryExpressionVariableInfo() { this->queryExpressionVariableInfo_ = nullptr;};
    inline string queryExpressionVariableInfo() const { DARABONBA_PTR_GET_DEFAULT(queryExpressionVariableInfo_, "") };
    inline DeepCopyRuleRequest& setQueryExpressionVariableInfo(string queryExpressionVariableInfo) { DARABONBA_PTR_SET_VALUE(queryExpressionVariableInfo_, queryExpressionVariableInfo) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DeepCopyRuleRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sourceRuleId Field Functions 
    bool hasSourceRuleId() const { return this->sourceRuleId_ != nullptr;};
    void deleteSourceRuleId() { this->sourceRuleId_ = nullptr;};
    inline string sourceRuleId() const { DARABONBA_PTR_GET_DEFAULT(sourceRuleId_, "") };
    inline DeepCopyRuleRequest& setSourceRuleId(string sourceRuleId) { DARABONBA_PTR_SET_VALUE(sourceRuleId_, sourceRuleId) };


    // sourceRuleIds Field Functions 
    bool hasSourceRuleIds() const { return this->sourceRuleIds_ != nullptr;};
    void deleteSourceRuleIds() { this->sourceRuleIds_ = nullptr;};
    inline string sourceRuleIds() const { DARABONBA_PTR_GET_DEFAULT(sourceRuleIds_, "") };
    inline DeepCopyRuleRequest& setSourceRuleIds(string sourceRuleIds) { DARABONBA_PTR_SET_VALUE(sourceRuleIds_, sourceRuleIds) };


    // targetEventCode Field Functions 
    bool hasTargetEventCode() const { return this->targetEventCode_ != nullptr;};
    void deleteTargetEventCode() { this->targetEventCode_ = nullptr;};
    inline string targetEventCode() const { DARABONBA_PTR_GET_DEFAULT(targetEventCode_, "") };
    inline DeepCopyRuleRequest& setTargetEventCode(string targetEventCode) { DARABONBA_PTR_SET_VALUE(targetEventCode_, targetEventCode) };


    // targetEventName Field Functions 
    bool hasTargetEventName() const { return this->targetEventName_ != nullptr;};
    void deleteTargetEventName() { this->targetEventName_ = nullptr;};
    inline string targetEventName() const { DARABONBA_PTR_GET_DEFAULT(targetEventName_, "") };
    inline DeepCopyRuleRequest& setTargetEventName(string targetEventName) { DARABONBA_PTR_SET_VALUE(targetEventName_, targetEventName) };


  protected:
    // Creation type
    std::shared_ptr<string> createType_ = nullptr;
    // Newly added cumulative variable
    std::shared_ptr<string> custInsertInfo_ = nullptr;
    // Read cumulative variable
    std::shared_ptr<string> custWriteInfo_ = nullptr;
    // Custom variables to be added
    std::shared_ptr<string> expressionVariableInfo_ = nullptr;
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Custom query variables to be added
    std::shared_ptr<string> queryExpressionVariableInfo_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Source policy ID
    std::shared_ptr<string> sourceRuleId_ = nullptr;
    // Target policy ID
    std::shared_ptr<string> sourceRuleIds_ = nullptr;
    // Target event
    std::shared_ptr<string> targetEventCode_ = nullptr;
    // Target event name
    std::shared_ptr<string> targetEventName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
