// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYSCORERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYSCORERULERESPONSEBODY_HPP_
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
  class GetSecurityScoreRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityScoreRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityScoreCategoryList, securityScoreCategoryList_);
      DARABONBA_PTR_TO_JSON(SecurityScoreRuleList, securityScoreRuleList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityScoreRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityScoreCategoryList, securityScoreCategoryList_);
      DARABONBA_PTR_FROM_JSON(SecurityScoreRuleList, securityScoreRuleList_);
    };
    GetSecurityScoreRuleResponseBody() = default ;
    GetSecurityScoreRuleResponseBody(const GetSecurityScoreRuleResponseBody &) = default ;
    GetSecurityScoreRuleResponseBody(GetSecurityScoreRuleResponseBody &&) = default ;
    GetSecurityScoreRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityScoreRuleResponseBody() = default ;
    GetSecurityScoreRuleResponseBody& operator=(const GetSecurityScoreRuleResponseBody &) = default ;
    GetSecurityScoreRuleResponseBody& operator=(GetSecurityScoreRuleResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityScoreRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(SecurityScoreItemList, securityScoreItemList_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityScoreItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
          DARABONBA_PTR_FROM_JSON(SubRuleType, subRuleType_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
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
        && this->scoreThreshold_ == nullptr && this->subRuleType_ == nullptr && this->title_ == nullptr; };
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


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline SecurityScoreItemList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The penalty point of the deduction item.
        shared_ptr<int32_t> score_ {};
        // The threshold for the deduction item.
        // 
        // >  Valid values: 0 to the deduction threshold of the deduction module.
        shared_ptr<int32_t> scoreThreshold_ {};
        // The deduction item of the deduction module. The following list describes the deduction modules and their deduction items:
        // 
        // *   SS_REINFORCE: issue in key feature configuration
        // 
        //     *   XPRESS_INSTALL: Security Center is not authorized.
        //     *   REINFORCE_SUSPICIOUS: The antivirus feature is disabled.
        //     *   RANSOMWARE: The anti-ransomware policy is disabled.
        //     *   WEB_LOCK: The web tamper proofing feature is disabled.
        //     *   VIRUS_SCHEDULE_SCAN: The periodic virus scan policy is disabled.
        //     *   IMAGE_REPO_SCAN: The range of container image scan is not configured.
        //     *   IMAGE_SCAN_TASK: The feature of one-click scan of container images for security risks is not performed.
        // 
        // *   SS_ALARM: unhandled alert.
        // 
        //     *   ALARM_SERIOUS: An unhandled high-risk alert event is detected.
        //     *   ALARM_SUSPICIOUS: An unhandled medium-risk alarm event is detected.
        //     *   ALARM_REMIND: An unhandled low-risk alarm event is detected.
        // 
        // *   SS_VUL: unfixed vulnerability
        // 
        //     *   CMS_UNFIX: An unfixed Web-CMS vulnerability is detected.
        //     *   WIN_UNFIX: An unfixed Windows host vulnerability is detected.
        //     *   CVE_UNFIX: An unfixed Linux host vulnerability is detected.
        //     *   ERM_UNFIX: An unfixed urgent vulnerability is detected.
        //     *   ERM_UNCHECK: An undetected urgent vulnerability exists.
        // 
        // *   SS_HC: baseline risks
        // 
        //     *   WEAK_EXPLOIT: Weak passwords are exposed to the Internet.
        //     *   WEAK_PASSWORD: Weak passwords exist.
        //     *   HC_EXPLOIT: The data source may be hacked.
        //     *   HC_OTHER_WARNING: Security configuration risks exist.
        // 
        // *   SS_CLOUD_HC: Cloud platform configuration check item problem.
        // 
        //     *   CSPM_CIEM_NOT_PASS: A CIEM check item failed the check.
        //     *   CSPM_RISK_NOT_PASS: A security risk check item failed the check.
        //     *   CSPM_COMPLIANCE_NOT_PASS: A compliance check item failed the check.
        // 
        // *   SS_AK: risk of AccessKey pair leaks
        shared_ptr<string> subRuleType_ {};
        // The description of the deduction item in a deduction module.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->ruleType_ == nullptr
        && this->score_ == nullptr && this->securityScoreItemList_ == nullptr && this->title_ == nullptr; };
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


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline SecurityScoreRuleList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The deduction module that is supported by the security score feature. Valid values:
      // 
      // *   SS_REINFORCE: issue in key feature configuration
      // *   SS_ALARM: unhandled alert
      // *   SS_VUL: unfixed vulnerability
      // *   SS_HC: baseline risk
      // *   SS_CLOUD_HC: risk item of configuration assessment
      // *   SS_AK: risk of AccessKey pair leaks
      shared_ptr<string> ruleType_ {};
      // The deduction threshold of the deduction module.
      // 
      // >  Valid values: 0 to 100. The sum of the deduction thresholds for all deduction modules must be equal to 100.
      shared_ptr<int32_t> score_ {};
      // The deduction items of the deduction module.
      shared_ptr<vector<SecurityScoreRuleList::SecurityScoreItemList>> securityScoreItemList_ {};
      // The description of the deduction module.
      shared_ptr<string> title_ {};
    };

    class SecurityScoreCategoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityScoreCategoryList& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(SecurityRuleList, securityRuleList_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityScoreCategoryList& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(SecurityRuleList, securityRuleList_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityRuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(SecurityScoreItemList, securityScoreItemList_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
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
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityScoreItemList& obj) { 
            DARABONBA_PTR_FROM_JSON(Score, score_);
            DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
            DARABONBA_PTR_FROM_JSON(SubRuleType, subRuleType_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
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
        && this->scoreThreshold_ == nullptr && this->subRuleType_ == nullptr && this->title_ == nullptr; };
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


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline SecurityScoreItemList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          // The deduction score for the item.
          shared_ptr<int32_t> score_ {};
          // The threshold of the deduction score for the item.
          shared_ptr<int32_t> scoreThreshold_ {};
          // The type of the sub-deduction item. Valid values:
          // 
          // *   **SS_SAS_WEAK_PW**: unhandled weak password risk.
          // *   **SS_SAS_ALARM**: unhandled alert in Security Center.
          // *   **SS_SAS_EMG_VUL**: unfixed urgent vulnerability.
          // *   **SS_SAS_APP_VUL**: unfixed application vulnerability.
          // *   **SS_SAS_SYS_VUL**: unfixed system vulnerability.
          // *   **SS_SAS_CLOUD_HC**: unhandled cloud security posture management (CSPM) risk.
          // *   **SS_SDDP_DATA_RISK**: unhandled data security risk.
          // *   **SS_WAF_API_RISK**: unhandled API security risk.
          // *   **SS_DDOS_BH_ASSET**: asset on which blackhole filtering is triggered.
          // *   **SS_SAS_AK_LEAK**: unhandled AK/SK leak event.
          // *   **SS_PRODUCT_CONNECT**: security service not integrated.
          // *   **SS_KEY_CONFIG**: key feature configuration.
          // *   **SS_PRODUCT_EXPIRE**: service that is about to expire.
          // *   **SS_AI_RISK**: AI application risk.
          shared_ptr<string> subRuleType_ {};
          // The name of the sub-deduction item of the security score rule.
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->ruleType_ == nullptr
        && this->score_ == nullptr && this->securityScoreItemList_ == nullptr && this->title_ == nullptr; };
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


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline SecurityRuleList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The type of the security score rule.
        shared_ptr<string> ruleType_ {};
        // The threshold of deduction for the security score rule type.
        shared_ptr<int32_t> score_ {};
        // The sub-deduction items of the security score rule.
        shared_ptr<vector<SecurityRuleList::SecurityScoreItemList>> securityScoreItemList_ {};
        // The name of the security score rule type.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->score_ == nullptr && this->securityRuleList_ == nullptr && this->title_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline SecurityScoreCategoryList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
      inline SecurityScoreCategoryList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // securityRuleList Field Functions 
      bool hasSecurityRuleList() const { return this->securityRuleList_ != nullptr;};
      void deleteSecurityRuleList() { this->securityRuleList_ = nullptr;};
      inline const vector<SecurityScoreCategoryList::SecurityRuleList> & getSecurityRuleList() const { DARABONBA_PTR_GET_CONST(securityRuleList_, vector<SecurityScoreCategoryList::SecurityRuleList>) };
      inline vector<SecurityScoreCategoryList::SecurityRuleList> getSecurityRuleList() { DARABONBA_PTR_GET(securityRuleList_, vector<SecurityScoreCategoryList::SecurityRuleList>) };
      inline SecurityScoreCategoryList& setSecurityRuleList(const vector<SecurityScoreCategoryList::SecurityRuleList> & securityRuleList) { DARABONBA_PTR_SET_VALUE(securityRuleList_, securityRuleList) };
      inline SecurityScoreCategoryList& setSecurityRuleList(vector<SecurityScoreCategoryList::SecurityRuleList> && securityRuleList) { DARABONBA_PTR_SET_RVALUE(securityRuleList_, securityRuleList) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline SecurityScoreCategoryList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The category of the security score rule. Valid values:
      // 
      // *   **SS_SAS_HANDLE**: security governance.
      // *   **SS_SAS_RESPOND**: security response.
      shared_ptr<string> category_ {};
      // The threshold of deduction for the security score rule type.
      shared_ptr<int32_t> score_ {};
      // The deduction items of the security score rule.
      shared_ptr<vector<SecurityScoreCategoryList::SecurityRuleList>> securityRuleList_ {};
      // The category of the security score rule.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->enableStatus_ == nullptr
        && this->requestId_ == nullptr && this->securityScoreCategoryList_ == nullptr && this->securityScoreRuleList_ == nullptr; };
    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline bool getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, false) };
    inline GetSecurityScoreRuleResponseBody& setEnableStatus(bool enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecurityScoreRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityScoreCategoryList Field Functions 
    bool hasSecurityScoreCategoryList() const { return this->securityScoreCategoryList_ != nullptr;};
    void deleteSecurityScoreCategoryList() { this->securityScoreCategoryList_ = nullptr;};
    inline const vector<GetSecurityScoreRuleResponseBody::SecurityScoreCategoryList> & getSecurityScoreCategoryList() const { DARABONBA_PTR_GET_CONST(securityScoreCategoryList_, vector<GetSecurityScoreRuleResponseBody::SecurityScoreCategoryList>) };
    inline vector<GetSecurityScoreRuleResponseBody::SecurityScoreCategoryList> getSecurityScoreCategoryList() { DARABONBA_PTR_GET(securityScoreCategoryList_, vector<GetSecurityScoreRuleResponseBody::SecurityScoreCategoryList>) };
    inline GetSecurityScoreRuleResponseBody& setSecurityScoreCategoryList(const vector<GetSecurityScoreRuleResponseBody::SecurityScoreCategoryList> & securityScoreCategoryList) { DARABONBA_PTR_SET_VALUE(securityScoreCategoryList_, securityScoreCategoryList) };
    inline GetSecurityScoreRuleResponseBody& setSecurityScoreCategoryList(vector<GetSecurityScoreRuleResponseBody::SecurityScoreCategoryList> && securityScoreCategoryList) { DARABONBA_PTR_SET_RVALUE(securityScoreCategoryList_, securityScoreCategoryList) };


    // securityScoreRuleList Field Functions 
    bool hasSecurityScoreRuleList() const { return this->securityScoreRuleList_ != nullptr;};
    void deleteSecurityScoreRuleList() { this->securityScoreRuleList_ = nullptr;};
    inline const vector<GetSecurityScoreRuleResponseBody::SecurityScoreRuleList> & getSecurityScoreRuleList() const { DARABONBA_PTR_GET_CONST(securityScoreRuleList_, vector<GetSecurityScoreRuleResponseBody::SecurityScoreRuleList>) };
    inline vector<GetSecurityScoreRuleResponseBody::SecurityScoreRuleList> getSecurityScoreRuleList() { DARABONBA_PTR_GET(securityScoreRuleList_, vector<GetSecurityScoreRuleResponseBody::SecurityScoreRuleList>) };
    inline GetSecurityScoreRuleResponseBody& setSecurityScoreRuleList(const vector<GetSecurityScoreRuleResponseBody::SecurityScoreRuleList> & securityScoreRuleList) { DARABONBA_PTR_SET_VALUE(securityScoreRuleList_, securityScoreRuleList) };
    inline GetSecurityScoreRuleResponseBody& setSecurityScoreRuleList(vector<GetSecurityScoreRuleResponseBody::SecurityScoreRuleList> && securityScoreRuleList) { DARABONBA_PTR_SET_RVALUE(securityScoreRuleList_, securityScoreRuleList) };


  protected:
    // The status of the custom settings of the security score feature.
    // 
    // *   true: enabled
    // *   false: disabled
    shared_ptr<bool> enableStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the new version of the security score rule.
    shared_ptr<vector<GetSecurityScoreRuleResponseBody::SecurityScoreCategoryList>> securityScoreCategoryList_ {};
    // The information about the old version of the security score rule.
    shared_ptr<vector<GetSecurityScoreRuleResponseBody::SecurityScoreRuleList>> securityScoreRuleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
