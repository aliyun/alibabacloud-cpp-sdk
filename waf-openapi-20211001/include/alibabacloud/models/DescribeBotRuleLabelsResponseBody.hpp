// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBOTRULELABELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBOTRULELABELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeBotRuleLabelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBotRuleLabelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleLabels, ruleLabels_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBotRuleLabelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleLabels, ruleLabels_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBotRuleLabelsResponseBody() = default ;
    DescribeBotRuleLabelsResponseBody(const DescribeBotRuleLabelsResponseBody &) = default ;
    DescribeBotRuleLabelsResponseBody(DescribeBotRuleLabelsResponseBody &&) = default ;
    DescribeBotRuleLabelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBotRuleLabelsResponseBody() = default ;
    DescribeBotRuleLabelsResponseBody& operator=(const DescribeBotRuleLabelsResponseBody &) = default ;
    DescribeBotRuleLabelsResponseBody& operator=(DescribeBotRuleLabelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleLabels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleLabels& obj) { 
        DARABONBA_PTR_TO_JSON(BotBehavior, botBehavior_);
        DARABONBA_PTR_TO_JSON(LabelKey, labelKey_);
        DARABONBA_PTR_TO_JSON(LabelType, labelType_);
        DARABONBA_PTR_TO_JSON(SubScene, subScene_);
      };
      friend void from_json(const Darabonba::Json& j, RuleLabels& obj) { 
        DARABONBA_PTR_FROM_JSON(BotBehavior, botBehavior_);
        DARABONBA_PTR_FROM_JSON(LabelKey, labelKey_);
        DARABONBA_PTR_FROM_JSON(LabelType, labelType_);
        DARABONBA_PTR_FROM_JSON(SubScene, subScene_);
      };
      RuleLabels() = default ;
      RuleLabels(const RuleLabels &) = default ;
      RuleLabels(RuleLabels &&) = default ;
      RuleLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleLabels() = default ;
      RuleLabels& operator=(const RuleLabels &) = default ;
      RuleLabels& operator=(RuleLabels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->botBehavior_ == nullptr
        && this->labelKey_ == nullptr && this->labelType_ == nullptr && this->subScene_ == nullptr; };
      // botBehavior Field Functions 
      bool hasBotBehavior() const { return this->botBehavior_ != nullptr;};
      void deleteBotBehavior() { this->botBehavior_ = nullptr;};
      inline string getBotBehavior() const { DARABONBA_PTR_GET_DEFAULT(botBehavior_, "") };
      inline RuleLabels& setBotBehavior(string botBehavior) { DARABONBA_PTR_SET_VALUE(botBehavior_, botBehavior) };


      // labelKey Field Functions 
      bool hasLabelKey() const { return this->labelKey_ != nullptr;};
      void deleteLabelKey() { this->labelKey_ = nullptr;};
      inline string getLabelKey() const { DARABONBA_PTR_GET_DEFAULT(labelKey_, "") };
      inline RuleLabels& setLabelKey(string labelKey) { DARABONBA_PTR_SET_VALUE(labelKey_, labelKey) };


      // labelType Field Functions 
      bool hasLabelType() const { return this->labelType_ != nullptr;};
      void deleteLabelType() { this->labelType_ = nullptr;};
      inline string getLabelType() const { DARABONBA_PTR_GET_DEFAULT(labelType_, "") };
      inline RuleLabels& setLabelType(string labelType) { DARABONBA_PTR_SET_VALUE(labelType_, labelType) };


      // subScene Field Functions 
      bool hasSubScene() const { return this->subScene_ != nullptr;};
      void deleteSubScene() { this->subScene_ = nullptr;};
      inline string getSubScene() const { DARABONBA_PTR_GET_DEFAULT(subScene_, "") };
      inline RuleLabels& setSubScene(string subScene) { DARABONBA_PTR_SET_VALUE(subScene_, subScene) };


    protected:
      shared_ptr<string> botBehavior_ {};
      shared_ptr<string> labelKey_ {};
      shared_ptr<string> labelType_ {};
      shared_ptr<string> subScene_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->ruleLabels_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeBotRuleLabelsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeBotRuleLabelsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBotRuleLabelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleLabels Field Functions 
    bool hasRuleLabels() const { return this->ruleLabels_ != nullptr;};
    void deleteRuleLabels() { this->ruleLabels_ = nullptr;};
    inline const vector<DescribeBotRuleLabelsResponseBody::RuleLabels> & getRuleLabels() const { DARABONBA_PTR_GET_CONST(ruleLabels_, vector<DescribeBotRuleLabelsResponseBody::RuleLabels>) };
    inline vector<DescribeBotRuleLabelsResponseBody::RuleLabels> getRuleLabels() { DARABONBA_PTR_GET(ruleLabels_, vector<DescribeBotRuleLabelsResponseBody::RuleLabels>) };
    inline DescribeBotRuleLabelsResponseBody& setRuleLabels(const vector<DescribeBotRuleLabelsResponseBody::RuleLabels> & ruleLabels) { DARABONBA_PTR_SET_VALUE(ruleLabels_, ruleLabels) };
    inline DescribeBotRuleLabelsResponseBody& setRuleLabels(vector<DescribeBotRuleLabelsResponseBody::RuleLabels> && ruleLabels) { DARABONBA_PTR_SET_RVALUE(ruleLabels_, ruleLabels) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBotRuleLabelsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeBotRuleLabelsResponseBody::RuleLabels>> ruleLabels_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
