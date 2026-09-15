// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGESECURITYSCORERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeSecurityScoreRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeSecurityScoreRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalType, calType_);
      DARABONBA_PTR_TO_JSON(ResetSecurityScoreRule, resetSecurityScoreRule_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(SecurityScoreCategoryList, securityScoreCategoryList_);
      DARABONBA_PTR_TO_JSON(SecurityScoreRuleList, securityScoreRuleList_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeSecurityScoreRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalType, calType_);
      DARABONBA_PTR_FROM_JSON(ResetSecurityScoreRule, resetSecurityScoreRule_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(SecurityScoreCategoryList, securityScoreCategoryList_);
      DARABONBA_PTR_FROM_JSON(SecurityScoreRuleList, securityScoreRuleList_);
    };
    ChangeSecurityScoreRuleRequest() = default ;
    ChangeSecurityScoreRuleRequest(const ChangeSecurityScoreRuleRequest &) = default ;
    ChangeSecurityScoreRuleRequest(ChangeSecurityScoreRuleRequest &&) = default ;
    ChangeSecurityScoreRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeSecurityScoreRuleRequest() = default ;
    ChangeSecurityScoreRuleRequest& operator=(const ChangeSecurityScoreRuleRequest &) = default ;
    ChangeSecurityScoreRuleRequest& operator=(ChangeSecurityScoreRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityScoreRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityScoreRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(SecurityScoreItemList, securityScoreItemList_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityScoreRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(SecurityScoreItemList, securityScoreItemList_);
      };
      SecurityScoreRuleList() = default ;
      SecurityScoreRuleList(const SecurityScoreRuleList &) = default ;
      SecurityScoreRuleList(SecurityScoreRuleList &&) = default ;
      SecurityScoreRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityScoreRuleList() = default ;
      SecurityScoreRuleList& operator=(const SecurityScoreRuleList &) = default ;
      SecurityScoreRuleList& operator=(SecurityScoreRuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SecurityScoreItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityScoreItemList& obj) { 
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
          DARABONBA_PTR_TO_JSON(SubRuleType, subRuleType_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityScoreItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
          DARABONBA_PTR_FROM_JSON(SubRuleType, subRuleType_);
        };
        SecurityScoreItemList() = default ;
        SecurityScoreItemList(const SecurityScoreItemList &) = default ;
        SecurityScoreItemList(SecurityScoreItemList &&) = default ;
        SecurityScoreItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityScoreItemList() = default ;
        SecurityScoreItemList& operator=(const SecurityScoreItemList &) = default ;
        SecurityScoreItemList& operator=(SecurityScoreItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->score_ == nullptr
        && this->scoreThreshold_ == nullptr && this->subRuleType_ == nullptr; };
        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
        inline SecurityScoreItemList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // scoreThreshold Field Functions 
        bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
        void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
        inline int32_t getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0) };
        inline SecurityScoreItemList& setScoreThreshold(int32_t scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


        // subRuleType Field Functions 
        bool hasSubRuleType() const { return this->subRuleType_ != nullptr;};
        void deleteSubRuleType() { this->subRuleType_ = nullptr;};
        inline string getSubRuleType() const { DARABONBA_PTR_GET_DEFAULT(subRuleType_, "") };
        inline SecurityScoreItemList& setSubRuleType(string subRuleType) { DARABONBA_PTR_SET_VALUE(subRuleType_, subRuleType) };


      protected:
        // The deduction value for the individual item.
        shared_ptr<int32_t> score_ {};
        // The deduction threshold for the individual item.
        // 
        // > The valid range is 0 to the deduction threshold of the security score rule.
        shared_ptr<int32_t> scoreThreshold_ {};
        // The sub-rule type of the individual deduction item. The mapping between security score types and sub-rule types is as follows:
        // - SS_REINFORCE: Key feature configuration.
        //   - XPRESS_INSTALL: Security Center service authorization is not enabled.
        //   - REINFORCE_SUSPICIOUS: The anti-virus feature is not enabled.
        //   - RANSOMWARE: The anti-ransomware policy is not enabled.
        //   - WEB_LOCK: The web tamper-proofing feature is not enabled.
        //   - VIRUS_SCHEDULE_SCAN: The periodic virus scan policy is not enabled.
        //   - IMAGE_REPO_SCAN: The container image scan scope is not configured.
        //   - IMAGE_SCAN_TASK: The one-click container image security risk scan has not been executed.
        // 
        // - SS_ALARM: Pending alerts.
        //   - ALARM_SERIOUS: One unhandled high-risk alert event exists.
        //   - ALARM_SUSPICIOUS: One unhandled medium-risk alert event exists.
        //   - ALARM_REMIND: One unhandled low-risk alert event exists.
        // 
        // - SS_VUL: Pending vulnerabilities.
        //   - CMS_UNFIX: One unfixed CMS vulnerability exists.
        //   - WIN_UNFIX: One unfixed Windows host vulnerability exists.
        //   - CVE_UNFIX: One unfixed Linux host vulnerability exists.
        //   - ERM_UNFIX: One unfixed emergency vulnerability exists.
        //   - ERM_UNCHECK: One unscanned emergency vulnerability exists.
        // 
        // - SS_HC: Baseline issues.
        //   - WEAK_EXPLOIT: A weak password risk exposed to the Internet exists.
        //   - WEAK_PASSWORD: A weak password risk exists.
        //   - HC_EXPLOIT: A high-risk intrusion vulnerability exists.
        //   - HC_OTHER_WARNING: A security configuration risk exists.
        // 
        // - SS_CLOUD_HC: Cloud platform configuration check item issues.
        //   - CSPM_CIEM_NOT_PASS: One failed CIEM check item exists.
        //   - CSPM_RISK_NOT_PASS: One failed security risk check item exists.
        //   - CSPM_COMPLIANCE_NOT_PASS: One failed compliance check item exists.
        // 
        // - SS_AK: AccessKey pair leak risk. Categorization not applicable.
        shared_ptr<string> subRuleType_ {};
      };

      virtual bool empty() const override { return this->ruleType_ == nullptr
        && this->score_ == nullptr && this->securityScoreItemList_ == nullptr; };
      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline SecurityScoreRuleList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
      inline SecurityScoreRuleList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // securityScoreItemList Field Functions 
      bool hasSecurityScoreItemList() const { return this->securityScoreItemList_ != nullptr;};
      void deleteSecurityScoreItemList() { this->securityScoreItemList_ = nullptr;};
      inline const vector<SecurityScoreRuleList::SecurityScoreItemList> & getSecurityScoreItemList() const { DARABONBA_PTR_GET_CONST(securityScoreItemList_, vector<SecurityScoreRuleList::SecurityScoreItemList>) };
      inline vector<SecurityScoreRuleList::SecurityScoreItemList> getSecurityScoreItemList() { DARABONBA_PTR_GET(securityScoreItemList_, vector<SecurityScoreRuleList::SecurityScoreItemList>) };
      inline SecurityScoreRuleList& setSecurityScoreItemList(const vector<SecurityScoreRuleList::SecurityScoreItemList> & securityScoreItemList) { DARABONBA_PTR_SET_VALUE(securityScoreItemList_, securityScoreItemList) };
      inline SecurityScoreRuleList& setSecurityScoreItemList(vector<SecurityScoreRuleList::SecurityScoreItemList> && securityScoreItemList) { DARABONBA_PTR_SET_RVALUE(securityScoreItemList_, securityScoreItemList) };


    protected:
      // The type of the security score rule. Valid values:
      // - SS_REINFORCE: Key feature configuration.
      // - SS_ALARM: Pending alerts.
      // - SS_VUL: Pending vulnerabilities.
      // - SS_HC: Baseline issues.
      // - SS_CLOUD_HC: Cloud platform configuration check item issues.
      // - SS_AK: AccessKey pair leak risk.
      shared_ptr<string> ruleType_ {};
      // The deduction value of the security score rule.
      // 
      // > The valid range is 0 to 100. The sum of all security score rule deduction thresholds must equal 100.
      shared_ptr<int32_t> score_ {};
      // The list of individual deduction items for the security score rule.
      shared_ptr<vector<SecurityScoreRuleList::SecurityScoreItemList>> securityScoreItemList_ {};
    };

    class SecurityScoreCategoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityScoreCategoryList& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
        DARABONBA_PTR_TO_JSON(SecurityRuleList, securityRuleList_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityScoreCategoryList& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
        DARABONBA_PTR_FROM_JSON(SecurityRuleList, securityRuleList_);
      };
      SecurityScoreCategoryList() = default ;
      SecurityScoreCategoryList(const SecurityScoreCategoryList &) = default ;
      SecurityScoreCategoryList(SecurityScoreCategoryList &&) = default ;
      SecurityScoreCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityScoreCategoryList() = default ;
      SecurityScoreCategoryList& operator=(const SecurityScoreCategoryList &) = default ;
      SecurityScoreCategoryList& operator=(SecurityScoreCategoryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SecurityRuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityRuleList& obj) { 
          DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(SecurityScoreItemList, securityScoreItemList_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityRuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(SecurityScoreItemList, securityScoreItemList_);
        };
        SecurityRuleList() = default ;
        SecurityRuleList(const SecurityRuleList &) = default ;
        SecurityRuleList(SecurityRuleList &&) = default ;
        SecurityRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityRuleList() = default ;
        SecurityRuleList& operator=(const SecurityRuleList &) = default ;
        SecurityRuleList& operator=(SecurityRuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SecurityScoreItemList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecurityScoreItemList& obj) { 
            DARABONBA_PTR_TO_JSON(Score, score_);
            DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
            DARABONBA_PTR_TO_JSON(SubRuleType, subRuleType_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityScoreItemList& obj) { 
            DARABONBA_PTR_FROM_JSON(Score, score_);
            DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
            DARABONBA_PTR_FROM_JSON(SubRuleType, subRuleType_);
          };
          SecurityScoreItemList() = default ;
          SecurityScoreItemList(const SecurityScoreItemList &) = default ;
          SecurityScoreItemList(SecurityScoreItemList &&) = default ;
          SecurityScoreItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecurityScoreItemList() = default ;
          SecurityScoreItemList& operator=(const SecurityScoreItemList &) = default ;
          SecurityScoreItemList& operator=(SecurityScoreItemList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->score_ == nullptr
        && this->scoreThreshold_ == nullptr && this->subRuleType_ == nullptr; };
          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
          inline SecurityScoreItemList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


          // scoreThreshold Field Functions 
          bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
          void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
          inline int32_t getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0) };
          inline SecurityScoreItemList& setScoreThreshold(int32_t scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


          // subRuleType Field Functions 
          bool hasSubRuleType() const { return this->subRuleType_ != nullptr;};
          void deleteSubRuleType() { this->subRuleType_ = nullptr;};
          inline string getSubRuleType() const { DARABONBA_PTR_GET_DEFAULT(subRuleType_, "") };
          inline SecurityScoreItemList& setSubRuleType(string subRuleType) { DARABONBA_PTR_SET_VALUE(subRuleType_, subRuleType) };


        protected:
          // The deduction value for the individual item.
          shared_ptr<int32_t> score_ {};
          // The deduction threshold for the individual item.
          // 
          // > The valid range is 0 to the deduction threshold of the security score rule type.
          shared_ptr<int32_t> scoreThreshold_ {};
          // The security score rule sub-item.
          shared_ptr<string> subRuleType_ {};
        };

        virtual bool empty() const override { return this->ruleType_ == nullptr
        && this->score_ == nullptr && this->securityScoreItemList_ == nullptr; };
        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
        inline SecurityRuleList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
        inline SecurityRuleList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // securityScoreItemList Field Functions 
        bool hasSecurityScoreItemList() const { return this->securityScoreItemList_ != nullptr;};
        void deleteSecurityScoreItemList() { this->securityScoreItemList_ = nullptr;};
        inline const vector<SecurityRuleList::SecurityScoreItemList> & getSecurityScoreItemList() const { DARABONBA_PTR_GET_CONST(securityScoreItemList_, vector<SecurityRuleList::SecurityScoreItemList>) };
        inline vector<SecurityRuleList::SecurityScoreItemList> getSecurityScoreItemList() { DARABONBA_PTR_GET(securityScoreItemList_, vector<SecurityRuleList::SecurityScoreItemList>) };
        inline SecurityRuleList& setSecurityScoreItemList(const vector<SecurityRuleList::SecurityScoreItemList> & securityScoreItemList) { DARABONBA_PTR_SET_VALUE(securityScoreItemList_, securityScoreItemList) };
        inline SecurityRuleList& setSecurityScoreItemList(vector<SecurityRuleList::SecurityScoreItemList> && securityScoreItemList) { DARABONBA_PTR_SET_RVALUE(securityScoreItemList_, securityScoreItemList) };


      protected:
        // The type of the security score rule sub-item. Valid values:
        // 
        // - **SS_SAS_WEAK_PW**: Pending weak passwords to fix.
        // - **SS_SAS_ALARM**: Pending Security Center alerts.
        // - **SS_SAS_EMG_VUL**: Pending emergency vulnerabilities to fix.
        // - **SS_SAS_APP_VUL**: Pending application vulnerabilities to fix.
        // - **SS_SAS_SYS_VUL**: Pending system vulnerabilities to fix.
        // - **SS_SAS_CLOUD_HC**: Pending Cloud Security Posture Management (CSPM) risks.
        // - **SS_SDDP_DATA_RISK**: Pending data security risks to address.
        // - **SS_WAF_API_RISK**: Pending API security risks.
        // - **SS_DDOS_BH_ASSET**: Assets in DDoS blackhole filtering status.
        // - **SS_SAS_AK_LEAK**: Unhandled AccessKey/SecretKey leak events.
        // - **SS_PRODUCT_CONNECT**: Security products not properly connected.
        // - **SS_KEY_CONFIG**: Key feature configuration.
        // - **SS_PRODUCT_EXPIRE**: Products about to expire.
        // - **SS_AI_RISK**: AI application risks.
        shared_ptr<string> ruleType_ {};
        // The deduction threshold for the security score rule type.
        // 
        // > The valid range is 0 to the deduction threshold of the security score rule category.
        shared_ptr<int32_t> score_ {};
        // The list of deductions for security score rule sub-items.
        shared_ptr<vector<SecurityRuleList::SecurityScoreItemList>> securityScoreItemList_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->scoreThreshold_ == nullptr && this->securityRuleList_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline SecurityScoreCategoryList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // scoreThreshold Field Functions 
      bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
      void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
      inline int32_t getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0) };
      inline SecurityScoreCategoryList& setScoreThreshold(int32_t scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


      // securityRuleList Field Functions 
      bool hasSecurityRuleList() const { return this->securityRuleList_ != nullptr;};
      void deleteSecurityRuleList() { this->securityRuleList_ = nullptr;};
      inline const vector<SecurityScoreCategoryList::SecurityRuleList> & getSecurityRuleList() const { DARABONBA_PTR_GET_CONST(securityRuleList_, vector<SecurityScoreCategoryList::SecurityRuleList>) };
      inline vector<SecurityScoreCategoryList::SecurityRuleList> getSecurityRuleList() { DARABONBA_PTR_GET(securityRuleList_, vector<SecurityScoreCategoryList::SecurityRuleList>) };
      inline SecurityScoreCategoryList& setSecurityRuleList(const vector<SecurityScoreCategoryList::SecurityRuleList> & securityRuleList) { DARABONBA_PTR_SET_VALUE(securityRuleList_, securityRuleList) };
      inline SecurityScoreCategoryList& setSecurityRuleList(vector<SecurityScoreCategoryList::SecurityRuleList> && securityRuleList) { DARABONBA_PTR_SET_RVALUE(securityRuleList_, securityRuleList) };


    protected:
      // The category of the security score rule. Valid values:
      // - **SS_SAS_HANDLE**: Security governance.
      // - **SS_SAS_RESPOND**: Security response.
      shared_ptr<string> category_ {};
      // The deduction threshold for the security score rule category.
      // 
      // > The valid range is 0 to 100. The sum of all security score rule category deduction thresholds must equal 100.
      shared_ptr<int32_t> scoreThreshold_ {};
      // The list of deductions by security score rule type.
      shared_ptr<vector<SecurityScoreCategoryList::SecurityRuleList>> securityRuleList_ {};
    };

    virtual bool empty() const override { return this->calType_ == nullptr
        && this->resetSecurityScoreRule_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->securityScoreCategoryList_ == nullptr && this->securityScoreRuleList_ == nullptr; };
    // calType Field Functions 
    bool hasCalType() const { return this->calType_ != nullptr;};
    void deleteCalType() { this->calType_ = nullptr;};
    inline string getCalType() const { DARABONBA_PTR_GET_DEFAULT(calType_, "") };
    inline ChangeSecurityScoreRuleRequest& setCalType(string calType) { DARABONBA_PTR_SET_VALUE(calType_, calType) };


    // resetSecurityScoreRule Field Functions 
    bool hasResetSecurityScoreRule() const { return this->resetSecurityScoreRule_ != nullptr;};
    void deleteResetSecurityScoreRule() { this->resetSecurityScoreRule_ = nullptr;};
    inline bool getResetSecurityScoreRule() const { DARABONBA_PTR_GET_DEFAULT(resetSecurityScoreRule_, false) };
    inline ChangeSecurityScoreRuleRequest& setResetSecurityScoreRule(bool resetSecurityScoreRule) { DARABONBA_PTR_SET_VALUE(resetSecurityScoreRule_, resetSecurityScoreRule) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline ChangeSecurityScoreRuleRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // securityScoreCategoryList Field Functions 
    bool hasSecurityScoreCategoryList() const { return this->securityScoreCategoryList_ != nullptr;};
    void deleteSecurityScoreCategoryList() { this->securityScoreCategoryList_ = nullptr;};
    inline const vector<ChangeSecurityScoreRuleRequest::SecurityScoreCategoryList> & getSecurityScoreCategoryList() const { DARABONBA_PTR_GET_CONST(securityScoreCategoryList_, vector<ChangeSecurityScoreRuleRequest::SecurityScoreCategoryList>) };
    inline vector<ChangeSecurityScoreRuleRequest::SecurityScoreCategoryList> getSecurityScoreCategoryList() { DARABONBA_PTR_GET(securityScoreCategoryList_, vector<ChangeSecurityScoreRuleRequest::SecurityScoreCategoryList>) };
    inline ChangeSecurityScoreRuleRequest& setSecurityScoreCategoryList(const vector<ChangeSecurityScoreRuleRequest::SecurityScoreCategoryList> & securityScoreCategoryList) { DARABONBA_PTR_SET_VALUE(securityScoreCategoryList_, securityScoreCategoryList) };
    inline ChangeSecurityScoreRuleRequest& setSecurityScoreCategoryList(vector<ChangeSecurityScoreRuleRequest::SecurityScoreCategoryList> && securityScoreCategoryList) { DARABONBA_PTR_SET_RVALUE(securityScoreCategoryList_, securityScoreCategoryList) };


    // securityScoreRuleList Field Functions 
    bool hasSecurityScoreRuleList() const { return this->securityScoreRuleList_ != nullptr;};
    void deleteSecurityScoreRuleList() { this->securityScoreRuleList_ = nullptr;};
    inline const vector<ChangeSecurityScoreRuleRequest::SecurityScoreRuleList> & getSecurityScoreRuleList() const { DARABONBA_PTR_GET_CONST(securityScoreRuleList_, vector<ChangeSecurityScoreRuleRequest::SecurityScoreRuleList>) };
    inline vector<ChangeSecurityScoreRuleRequest::SecurityScoreRuleList> getSecurityScoreRuleList() { DARABONBA_PTR_GET(securityScoreRuleList_, vector<ChangeSecurityScoreRuleRequest::SecurityScoreRuleList>) };
    inline ChangeSecurityScoreRuleRequest& setSecurityScoreRuleList(const vector<ChangeSecurityScoreRuleRequest::SecurityScoreRuleList> & securityScoreRuleList) { DARABONBA_PTR_SET_VALUE(securityScoreRuleList_, securityScoreRuleList) };
    inline ChangeSecurityScoreRuleRequest& setSecurityScoreRuleList(vector<ChangeSecurityScoreRuleRequest::SecurityScoreRuleList> && securityScoreRuleList) { DARABONBA_PTR_SET_RVALUE(securityScoreRuleList_, securityScoreRuleList) };


  protected:
    // Specifies whether to modify the new version or legacy security score rules. If the value is **home_security_score**, the new version security score rules are modified. Otherwise, the legacy security score rules are modified by default.
    shared_ptr<string> calType_ {};
    // Specifies whether to reset to the system default rules. Valid values:
    // - true: Yes.
    // - false: No.
    shared_ptr<bool> resetSecurityScoreRule_ {};
    // The ID of the member account in the resource directory.
    // > Call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The list of new version security score rule deductions.
    shared_ptr<vector<ChangeSecurityScoreRuleRequest::SecurityScoreCategoryList>> securityScoreCategoryList_ {};
    // The list of legacy security score rules.
    shared_ptr<vector<ChangeSecurityScoreRuleRequest::SecurityScoreRuleList>> securityScoreRuleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
