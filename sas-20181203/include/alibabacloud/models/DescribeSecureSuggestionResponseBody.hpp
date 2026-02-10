// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURESUGGESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURESUGGESTIONRESPONSEBODY_HPP_
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
  class DescribeSecureSuggestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecureSuggestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CalTime, calTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Suggestions, suggestions_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecureSuggestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CalTime, calTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Suggestions, suggestions_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSecureSuggestionResponseBody() = default ;
    DescribeSecureSuggestionResponseBody(const DescribeSecureSuggestionResponseBody &) = default ;
    DescribeSecureSuggestionResponseBody(DescribeSecureSuggestionResponseBody &&) = default ;
    DescribeSecureSuggestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecureSuggestionResponseBody() = default ;
    DescribeSecureSuggestionResponseBody& operator=(const DescribeSecureSuggestionResponseBody &) = default ;
    DescribeSecureSuggestionResponseBody& operator=(DescribeSecureSuggestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Suggestions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Suggestions& obj) { 
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(Points, points_);
        DARABONBA_PTR_TO_JSON(SuggestType, suggestType_);
      };
      friend void from_json(const Darabonba::Json& j, Suggestions& obj) { 
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(Points, points_);
        DARABONBA_PTR_FROM_JSON(SuggestType, suggestType_);
      };
      Suggestions() = default ;
      Suggestions(const Suggestions &) = default ;
      Suggestions(Suggestions &&) = default ;
      Suggestions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Suggestions() = default ;
      Suggestions& operator=(const Suggestions &) = default ;
      Suggestions& operator=(Suggestions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Detail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Detail& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(SubType, subType_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(SubType, subType_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        Detail() = default ;
        Detail(const Detail &) = default ;
        Detail(Detail &&) = default ;
        Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Detail() = default ;
        Detail& operator=(const Detail &) = default ;
        Detail& operator=(Detail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->subType_ == nullptr && this->title_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Detail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // subType Field Functions 
        bool hasSubType() const { return this->subType_ != nullptr;};
        void deleteSubType() { this->subType_ = nullptr;};
        inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
        inline Detail& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Detail& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Description of the security risk handling suggestion.
        shared_ptr<string> description_ {};
        // Types of pending security risks. The values include:
        // - **ALARM_HIGH**: Unhandled high-risk alert events
        // - **ALARM_MEDIUM**: Unhandled medium-risk alert events
        // - **ALARM_LOW**: Unhandled low-risk alert events
        // - **VUL_EMR_UNCHECK**: Unchecked urgent vulnerabilities
        // - **VUL_EMR_UNFIX**: Unfixed urgent vulnerabilities
        // - **VUL_WIN**: Unfixed Windows server vulnerabilities
        // - **VUL_LINUX**: Unfixed Linux server vulnerabilities
        // - **VUL_CMS**: Unfixed CMS vulnerabilities
        // - **ACCESSKEY_LEAK**: AccessKey leakage risks
        // - **HC_WARN**: Baseline risks
        // - **HC_WEAK_EXPLOIT_WARN**: Risks of weak passwords exposed by the public network
        // - **HC_WEAK_PASSWORD_WARN**: Risk of weak password
        // - **HC_HIGH_EXPLOIT_WARN**: High risk of being invaded
        // - **HC_OTHER_WARN**: Security configuration risks
        // - **HC_DATABASE_WARN**: Database has security risks
        // - **CLOUD_HC_SAS_OPEN**: Security protection not installed on the server
        // - **CLOUD_HC_AEGIS_OFFLINE**: Server protection status is offline
        // - **CLOUD_HC_ACCOUNT_DOUBLE_CHECK**: Two-Factor Authentication not enabled for primary account
        // - **CLOUD_HC_RDS**: RDS database security policy check failed, posing security risks
        // - **CLOUD_HC_DDOS**: Risks in Anti-DDoS Pro back-to-origin settings
        // - **CLOUD_HC_HIGH_LEVEL**: Cloud product configuration with high risk
        // - **CLOUD_HC_OTHER_LEVEL**: Cloud product configuration with medium and low risks
        // - **OTHER_ATTACH**: Attack incidents
        // - **OTHER_DATABASE_ATTACH**: Database has security risks
        // - **REINFORCE_BASELINE**: Config assessment
        // - **REINFORCE_SUSPICIOUS**: Antivirus
        // - **REINFORCE_ANALYSIS**: Log analysis
        // - **REINFORCE_AK_LEAK**: AccessKey leaked intelligence detection
        // - **REINFORCE_WEB_LOCK**: Website tamper-proofing capability not configured
        // - **REINFORCE_BRUTE_FORCE**: Anti-brute force cracking
        // - **REINFORCE_XPRESS_INSTALL**: One-click client installation
        // - **REINFORCE_RANSOMWARE**: Enable anti-ransomware strategy
        // - **REINFORCE_UNI_RANSOMWARE**: Anti-ransomware for databases
        // - **REINFORCE_VIRUS_SCHEDULE_SCAN**: Periodic virus scan policies not configured
        // - **REINFORCE_IMAGE_REPO_SCAN**: No container image scan range configured
        // - **REINFORCE_IMAGE_SCAN_TASK**: Image security scan
        // - **REINFORCE_K8S_LOG_ANALYSIS**: Container K8s threat detection is disabled
        // - **REINFORCE_CONTAINER_NETWORK**: Container visualization
        shared_ptr<string> subType_ {};
        // Name of the pending security risk item.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->detail_ == nullptr
        && this->points_ == nullptr && this->suggestType_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline const vector<Suggestions::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Suggestions::Detail>) };
      inline vector<Suggestions::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<Suggestions::Detail>) };
      inline Suggestions& setDetail(const vector<Suggestions::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
      inline Suggestions& setDetail(vector<Suggestions::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


      // points Field Functions 
      bool hasPoints() const { return this->points_ != nullptr;};
      void deletePoints() { this->points_ = nullptr;};
      inline int32_t getPoints() const { DARABONBA_PTR_GET_DEFAULT(points_, 0) };
      inline Suggestions& setPoints(int32_t points) { DARABONBA_PTR_SET_VALUE(points_, points) };


      // suggestType Field Functions 
      bool hasSuggestType() const { return this->suggestType_ != nullptr;};
      void deleteSuggestType() { this->suggestType_ = nullptr;};
      inline string getSuggestType() const { DARABONBA_PTR_GET_DEFAULT(suggestType_, "") };
      inline Suggestions& setSuggestType(string suggestType) { DARABONBA_PTR_SET_VALUE(suggestType_, suggestType) };


    protected:
      // Details of the security risk handling suggestions.
      shared_ptr<vector<Suggestions::Detail>> detail_ {};
      // Deduction value for a single deduction item.
      shared_ptr<int32_t> points_ {};
      // Type of the pending security risk. Values:
      // - **SS_REINFORCE**: Key features not configured (e.g., malicious host behavior defense)
      // - **SS_ALARM**: Pending alerts
      // - **SS_VUL**: Vulnerabilities to be fixed
      // - **SS_HC**: Baseline issues
      // - **SS_AK**: AK leakage issues 
      // - **SS_CLOUD_HC**: Cloud platform configuration risks
      // - **OTHER**: Other
      shared_ptr<string> suggestType_ {};
    };

    virtual bool empty() const override { return this->calTime_ == nullptr
        && this->requestId_ == nullptr && this->score_ == nullptr && this->suggestions_ == nullptr && this->totalCount_ == nullptr; };
    // calTime Field Functions 
    bool hasCalTime() const { return this->calTime_ != nullptr;};
    void deleteCalTime() { this->calTime_ = nullptr;};
    inline int64_t getCalTime() const { DARABONBA_PTR_GET_DEFAULT(calTime_, 0L) };
    inline DescribeSecureSuggestionResponseBody& setCalTime(int64_t calTime) { DARABONBA_PTR_SET_VALUE(calTime_, calTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecureSuggestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline DescribeSecureSuggestionResponseBody& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // suggestions Field Functions 
    bool hasSuggestions() const { return this->suggestions_ != nullptr;};
    void deleteSuggestions() { this->suggestions_ = nullptr;};
    inline const vector<DescribeSecureSuggestionResponseBody::Suggestions> & getSuggestions() const { DARABONBA_PTR_GET_CONST(suggestions_, vector<DescribeSecureSuggestionResponseBody::Suggestions>) };
    inline vector<DescribeSecureSuggestionResponseBody::Suggestions> getSuggestions() { DARABONBA_PTR_GET(suggestions_, vector<DescribeSecureSuggestionResponseBody::Suggestions>) };
    inline DescribeSecureSuggestionResponseBody& setSuggestions(const vector<DescribeSecureSuggestionResponseBody::Suggestions> & suggestions) { DARABONBA_PTR_SET_VALUE(suggestions_, suggestions) };
    inline DescribeSecureSuggestionResponseBody& setSuggestions(vector<DescribeSecureSuggestionResponseBody::Suggestions> && suggestions) { DARABONBA_PTR_SET_RVALUE(suggestions_, suggestions) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSecureSuggestionResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Timestamp of the security score calculation.
    shared_ptr<int64_t> calTime_ {};
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for this request, and can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // Security score.
    shared_ptr<string> score_ {};
    // List of security risk handling suggestions.
    shared_ptr<vector<DescribeSecureSuggestionResponseBody::Suggestions>> suggestions_ {};
    // The total number of security risks that need to be reinforced.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
