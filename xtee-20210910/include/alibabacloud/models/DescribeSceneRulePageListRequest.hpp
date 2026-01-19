// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENERULEPAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENERULEPAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSceneRulePageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneRulePageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(ruleAuthType, ruleAuthType_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSceneRulePageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(ruleAuthType, ruleAuthType_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
    };
    DescribeSceneRulePageListRequest() = default ;
    DescribeSceneRulePageListRequest(const DescribeSceneRulePageListRequest &) = default ;
    DescribeSceneRulePageListRequest(DescribeSceneRulePageListRequest &&) = default ;
    DescribeSceneRulePageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneRulePageListRequest() = default ;
    DescribeSceneRulePageListRequest& operator=(const DescribeSceneRulePageListRequest &) = default ;
    DescribeSceneRulePageListRequest& operator=(DescribeSceneRulePageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->createType_ == nullptr && this->currentPage_ == nullptr && this->eventCode_ == nullptr && this->pageSize_ == nullptr && this->regId_ == nullptr
        && this->ruleAuthType_ == nullptr && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSceneRulePageListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline DescribeSceneRulePageListRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeSceneRulePageListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeSceneRulePageListRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeSceneRulePageListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeSceneRulePageListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // ruleAuthType Field Functions 
    bool hasRuleAuthType() const { return this->ruleAuthType_ != nullptr;};
    void deleteRuleAuthType() { this->ruleAuthType_ = nullptr;};
    inline string getRuleAuthType() const { DARABONBA_PTR_GET_DEFAULT(ruleAuthType_, "") };
    inline DescribeSceneRulePageListRequest& setRuleAuthType(string ruleAuthType) { DARABONBA_PTR_SET_VALUE(ruleAuthType_, ruleAuthType) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeSceneRulePageListRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline DescribeSceneRulePageListRequest& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


  protected:
    // Set the language type for requests and received messages. Default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Creation type
    shared_ptr<string> createType_ {};
    // Current page number.
    shared_ptr<string> currentPage_ {};
    // Event code
    shared_ptr<string> eventCode_ {};
    // Number of items per page in the returned results. Default value: 20, minimum value: 1, maximum value: 50.
    shared_ptr<string> pageSize_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Strategy type
    shared_ptr<string> ruleAuthType_ {};
    // Strategy name
    shared_ptr<string> ruleName_ {};
    // Strategy status
    shared_ptr<string> ruleStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
