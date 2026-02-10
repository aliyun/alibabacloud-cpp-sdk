// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULCONFIGRESPONSEBODY_HPP_
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
  class DescribeVulConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetConfigs, targetConfigs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetConfigs, targetConfigs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVulConfigResponseBody() = default ;
    DescribeVulConfigResponseBody(const DescribeVulConfigResponseBody &) = default ;
    DescribeVulConfigResponseBody(DescribeVulConfigResponseBody &&) = default ;
    DescribeVulConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulConfigResponseBody() = default ;
    DescribeVulConfigResponseBody& operator=(const DescribeVulConfigResponseBody &) = default ;
    DescribeVulConfigResponseBody& operator=(DescribeVulConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TargetConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(OverAllConfig, overAllConfig_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, TargetConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(OverAllConfig, overAllConfig_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      TargetConfigs() = default ;
      TargetConfigs(const TargetConfigs &) = default ;
      TargetConfigs(TargetConfigs &&) = default ;
      TargetConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetConfigs() = default ;
      TargetConfigs& operator=(const TargetConfigs &) = default ;
      TargetConfigs& operator=(TargetConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->overAllConfig_ == nullptr && this->type_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline TargetConfigs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // overAllConfig Field Functions 
      bool hasOverAllConfig() const { return this->overAllConfig_ != nullptr;};
      void deleteOverAllConfig() { this->overAllConfig_ = nullptr;};
      inline string getOverAllConfig() const { DARABONBA_PTR_GET_DEFAULT(overAllConfig_, "") };
      inline TargetConfigs& setOverAllConfig(string overAllConfig) { DARABONBA_PTR_SET_VALUE(overAllConfig_, overAllConfig) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TargetConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The configuration of vulnerability scan.
      // 
      // > Valid values when you set the Type parameter to **cve**, **sys**, **cms**, **app**, **emg**, or **yum**:
      // 
      // *   **on**: enabled
      // 
      // *   **off**: disabled
      // 
      // Valid values when you set the Type parameter to **scanMode**:
      // 
      // *   **real**: displays easily exploitable vulnerability.
      // 
      // *   **all**: displays all vulnerabilities.
      // 
      // When you set the Type parameter to **imageVulClean**, the value of this parameter indicates the vulnerability retention period in days.
      shared_ptr<string> config_ {};
      // Indicates whether the vulnerability management feature is enabled for all servers. Valid values:
      // 
      // *   **off**: disabled
      // *   **on**: enabled
      shared_ptr<string> overAllConfig_ {};
      // The type of configuration. Valid values:
      // 
      // *   **cve**: Linux software vulnerability.
      // *   **sys**: Windows system vulnerability.
      // *   **cms**: Web-CMS vulnerability.
      // *   **app**: application vulnerability that is detected by using web scanner.
      // *   **emg**: urgent vulnerability.
      // *   **scanMode**: displays easily exploitable vulnerability.
      // *   **imageVulClean**: vulnerability retention duration.
      // *   **yum**: preferentially uses YUM or APT sources of Alibaba Cloud to fix vulnerabilities.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->targetConfigs_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetConfigs Field Functions 
    bool hasTargetConfigs() const { return this->targetConfigs_ != nullptr;};
    void deleteTargetConfigs() { this->targetConfigs_ = nullptr;};
    inline const vector<DescribeVulConfigResponseBody::TargetConfigs> & getTargetConfigs() const { DARABONBA_PTR_GET_CONST(targetConfigs_, vector<DescribeVulConfigResponseBody::TargetConfigs>) };
    inline vector<DescribeVulConfigResponseBody::TargetConfigs> getTargetConfigs() { DARABONBA_PTR_GET(targetConfigs_, vector<DescribeVulConfigResponseBody::TargetConfigs>) };
    inline DescribeVulConfigResponseBody& setTargetConfigs(const vector<DescribeVulConfigResponseBody::TargetConfigs> & targetConfigs) { DARABONBA_PTR_SET_VALUE(targetConfigs_, targetConfigs) };
    inline DescribeVulConfigResponseBody& setTargetConfigs(vector<DescribeVulConfigResponseBody::TargetConfigs> && targetConfigs) { DARABONBA_PTR_SET_RVALUE(targetConfigs_, targetConfigs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulConfigResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the configurations of vulnerability management.
    shared_ptr<vector<DescribeVulConfigResponseBody::TargetConfigs>> targetConfigs_ {};
    // The total number of configurations.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
