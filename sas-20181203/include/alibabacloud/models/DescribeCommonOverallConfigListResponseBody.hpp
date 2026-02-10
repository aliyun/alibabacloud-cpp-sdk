// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONOVERALLCONFIGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONOVERALLCONFIGLISTRESPONSEBODY_HPP_
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
  class DescribeCommonOverallConfigListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonOverallConfigListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OverallList, overallList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonOverallConfigListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OverallList, overallList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCommonOverallConfigListResponseBody() = default ;
    DescribeCommonOverallConfigListResponseBody(const DescribeCommonOverallConfigListResponseBody &) = default ;
    DescribeCommonOverallConfigListResponseBody(DescribeCommonOverallConfigListResponseBody &&) = default ;
    DescribeCommonOverallConfigListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonOverallConfigListResponseBody() = default ;
    DescribeCommonOverallConfigListResponseBody& operator=(const DescribeCommonOverallConfigListResponseBody &) = default ;
    DescribeCommonOverallConfigListResponseBody& operator=(DescribeCommonOverallConfigListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OverallList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OverallList& obj) { 
        DARABONBA_PTR_TO_JSON(AuthVersionList, authVersionList_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, OverallList& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthVersionList, authVersionList_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      OverallList() = default ;
      OverallList(const OverallList &) = default ;
      OverallList(OverallList &&) = default ;
      OverallList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OverallList() = default ;
      OverallList& operator=(const OverallList &) = default ;
      OverallList& operator=(OverallList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authVersionList_ == nullptr
        && this->config_ == nullptr && this->totalCount_ == nullptr && this->type_ == nullptr; };
      // authVersionList Field Functions 
      bool hasAuthVersionList() const { return this->authVersionList_ != nullptr;};
      void deleteAuthVersionList() { this->authVersionList_ = nullptr;};
      inline const vector<string> & getAuthVersionList() const { DARABONBA_PTR_GET_CONST(authVersionList_, vector<string>) };
      inline vector<string> getAuthVersionList() { DARABONBA_PTR_GET(authVersionList_, vector<string>) };
      inline OverallList& setAuthVersionList(const vector<string> & authVersionList) { DARABONBA_PTR_SET_VALUE(authVersionList_, authVersionList) };
      inline OverallList& setAuthVersionList(vector<string> && authVersionList) { DARABONBA_PTR_SET_RVALUE(authVersionList_, authVersionList) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline OverallList& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline OverallList& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OverallList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The editions of Security Center.
      shared_ptr<vector<string>> authVersionList_ {};
      // Indicates the status of the switch. Valid values:
      // 
      // *   **off**
      // *   **on**
      shared_ptr<string> config_ {};
      // The total number of entries that are returned.
      shared_ptr<int32_t> totalCount_ {};
      // The type of the configuration. Valid values:
      // 
      // *   **kdump_switch**: Active defense experience optimization.
      // *   **threat_detect**: Adaptive threat detection.
      // *   **suspicious_aggregation**: Alert association.
      // *   **alidetect**: File detection.
      // *   **USER-ENABLE-SWITCH-TYPE_38857**: Entrance service performs high-risk operations (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_50858**: Web service performs high-risk operations (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_50859**: Entrance service performs suspicious operations (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_50862**: Cloud Assistant advanced protection (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_50867**: Injects malicious files (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_50868**: Injects suspicious files (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_64025**: Entrance service executes commands in an enhanced mode (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_51229**: Browser service performs high-risk operations (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_51230**: Entrance service performs suspicious operations (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_51232**: System processes perform high-risk operations (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_51233**: Java service performs high-risk operations (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_51234**: Office components perform high-risk operations (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_51235**: Web service performs high-risk operations (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_52820**: Injects malicious files (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_52826**: Entrance service performs high-risk operations (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_55251**: Database services perform high-risk operations (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_63725**: Entrance service injects suspicious scripts or binary files (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_3277**: Suspicious process startup (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_50983**: Obfuscated commands (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_51200**: Uses command line to download and run malicious files (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_71131**: Entrance service executes sequence of suspicious behavior (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_51225**: Powershell executes high-risk commands (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_51226**: Powershell executes suspicious commands (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_52821**: Suspicious process startup (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_57242**: Malicious command execution (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_57340**: Uses command line to download and run malicious files (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_39659**: Sensitive registry key protection (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_52816**: High-risk account manipulation behavior (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_54365**: Creates service auto-startup items (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_54366**: Creates high-risk auto-startup items (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_54367**: Creates scheduled task auto-startup items (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_54368**: Creates registry auto-startup items (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_54369**: Creates WMI auto-startup items (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_50869**: Unauthorized execution of high-risk commands (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_53272**: Exploits kernel vulnerabilities to elevate privileges (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_54395**: Unauthorized reading and writing of sensitive files (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_57897**: Suspected privilege escalation (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_52825**: Unauthorized execution of high-risk commands (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_5507**: Malicious drivers (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_50876**: Uninstalls security software (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_53168**: Process debugging (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_54699**: Hijacks dynamic link library (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_62981**: Bypasses security monitoring (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_52815**: Loads high-risk drivers (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_52823**: Runs high-risk anti-rootkit (ARK) tools (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_54373**: Uninstalls security software (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_54374**: Intrusion trace cleanup (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_54265**: Hijacks the pluggable authentication module (PAM) (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_54953**: Hashdump attack (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_54383**: MimiKatz credential stealing (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_54384**: Hashdump attack (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_50861**: Information detection (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_52818**: Information detection (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_54034**: Intranet scan (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_51228**: High-risk lateral penetration tools (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_50870**: Rebound shell (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_50873**: WebShell executes commands.
      // *   **USER-ENABLE-SWITCH-TYPE_51236**: Rebound shell (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_50877**: Malicious program communication (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_50884**: Suspicious worm script behavior (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_50885**: Malicious script behavior (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_51201**: Ransomware (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_51202**: Suspected extortion (Linux).
      // *   **USER-ENABLE-SWITCH-TYPE_52827**: Ransomware (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_52828**: Suspected extortion (Windows).
      // *   **USER-ENABLE-SWITCH-TYPE_52829**: Deletes system backup behavior (Windows).
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->overallList_ == nullptr
        && this->requestId_ == nullptr; };
    // overallList Field Functions 
    bool hasOverallList() const { return this->overallList_ != nullptr;};
    void deleteOverallList() { this->overallList_ = nullptr;};
    inline const vector<DescribeCommonOverallConfigListResponseBody::OverallList> & getOverallList() const { DARABONBA_PTR_GET_CONST(overallList_, vector<DescribeCommonOverallConfigListResponseBody::OverallList>) };
    inline vector<DescribeCommonOverallConfigListResponseBody::OverallList> getOverallList() { DARABONBA_PTR_GET(overallList_, vector<DescribeCommonOverallConfigListResponseBody::OverallList>) };
    inline DescribeCommonOverallConfigListResponseBody& setOverallList(const vector<DescribeCommonOverallConfigListResponseBody::OverallList> & overallList) { DARABONBA_PTR_SET_VALUE(overallList_, overallList) };
    inline DescribeCommonOverallConfigListResponseBody& setOverallList(vector<DescribeCommonOverallConfigListResponseBody::OverallList> && overallList) { DARABONBA_PTR_SET_RVALUE(overallList_, overallList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommonOverallConfigListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the configuration items.
    shared_ptr<vector<DescribeCommonOverallConfigListResponseBody::OverallList>> overallList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
