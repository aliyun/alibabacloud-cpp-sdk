// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURESUGGESTIONRESPONSEBODYSUGGESTIONSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURESUGGESTIONRESPONSEBODYSUGGESTIONSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecureSuggestionResponseBodySuggestionsDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecureSuggestionResponseBodySuggestionsDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecureSuggestionResponseBodySuggestionsDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeSecureSuggestionResponseBodySuggestionsDetail() = default ;
    DescribeSecureSuggestionResponseBodySuggestionsDetail(const DescribeSecureSuggestionResponseBodySuggestionsDetail &) = default ;
    DescribeSecureSuggestionResponseBodySuggestionsDetail(DescribeSecureSuggestionResponseBodySuggestionsDetail &&) = default ;
    DescribeSecureSuggestionResponseBodySuggestionsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecureSuggestionResponseBodySuggestionsDetail() = default ;
    DescribeSecureSuggestionResponseBodySuggestionsDetail& operator=(const DescribeSecureSuggestionResponseBodySuggestionsDetail &) = default ;
    DescribeSecureSuggestionResponseBodySuggestionsDetail& operator=(DescribeSecureSuggestionResponseBodySuggestionsDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->subType_ == nullptr && return this->title_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecureSuggestionResponseBodySuggestionsDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline DescribeSecureSuggestionResponseBodySuggestionsDetail& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeSecureSuggestionResponseBodySuggestionsDetail& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The description of the suggestion.
    std::shared_ptr<string> description_ = nullptr;
    // The sub-type of the unhandled risk. Valid values:
    // 
    // *   **ALARM_HIGH**: Unhandled Urgency Alerts
    // *   **ALARM_MEDIUM**: Unhandled Warning Alerts
    // *   **ALARM_LOW**: Unhandled Reminder Alerts
    // *   **VUL_EMR_UNCHECK**: Unchecked Urgent Vulnerabilities
    // *   **VUL_EMR_UNFIX**: Unfixed Urgent Vulnerabilities
    // *   **VUL_WIN**: Unfixed Windows Server Vulnerabilities
    // *   **VUL_LINUX**: Unfixed Linux Server Vulnerabilities
    // *   **VUL_CMS**: Unfixed CMS Vulnerabilities
    // *   **ACCESSKEY_LEAK**: AccessKey Leakage Risks
    // *   **HC_WARN**: Baseline Risks
    // *   **HC_WEAK_EXPLOIT_WARN**: There is a risk of weak passwords exposed by the public network.
    // *   **HC_WEAK_PASSWORD_WARN**: Risk of weak password
    // *   **HC_HIGH_EXPLOIT_WARN**: There is a high risk of invasion
    // *   **HC_OTHER_WARN**: Security Configuration risk
    // *   **HC_DATABASE_WARN**: Database has security risks
    // *   **CLOUD_HC_SAS_OPEN**: Security protection has not been installed on the server
    // *   **CLOUD_HC_AEGIS_OFFLINE**: Server protection status is offline
    // *   **CLOUD_HC_ACCOUNT_DOUBLE_CHECK**: Two-Factor Authentication not Enabled for Primary Account
    // *   **CLOUD_HC_RDS**: RDS-database security policy failed, security risks
    // *   **CLOUD_HC_DDOS**: Risks in Anti-DDoS Pro Back-to-Origin Settings
    // *   **CLOUD_HC_HIGH_LEVEL**: Cloud product configuration has high risk
    // *   **CLOUD_HC_OTHER_LEVEL**: Cloud product configuration has medium and low risk risks
    // *   **OTHER_ATTACH**: Attacks
    // *   **OTHER_DATABASE_ATTACH**: Database has security risks
    // *   **REINFORCE_BASELINE**: Config Assessment
    // *   **REINFORCE_SUSPICIOUS**: Antivirus
    // *   **REINFORCE_ANALYSIS**: Log Analysis
    // *   **REINFORCE_AK_LEAK**: AccessKey Leaked Intelligence Detection
    // *   **REINFORCE_WEB_LOCK**: Website tamper-proofing capability not configured
    // *   **REINFORCE_BRUTE_FORCE**: Anti brute force cracking
    // *   **REINFORCE_XPRESS_INSTALL**: One-click client installation
    // *   **REINFORCE_RANSOMWARE**: Enable anti-extortion strategy
    // *   **REINFORCE_UNI_RANSOMWARE**: Anti-ransomware for Databases
    // *   **REINFORCE_VIRUS_SCHEDULE_SCAN**: Periodic virus scan policies not configured
    // *   **REINFORCE_IMAGE_REPO_SCAN**: No container image scan range configured
    // *   **REINFORCE_IMAGE_SCAN_TASK**: Image security scan
    // *   **REINFORCE_K8S_LOG_ANALYSIS**: Container K8s threat detection is disabled
    // *   **REINFORCE_CONTAINER_NETWORK**: Container Visualization
    std::shared_ptr<string> subType_ = nullptr;
    // The name of the unhandled risk.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
