// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODYAPISUMMARYSAPISUMMARYDEPLOYEDINFOSDEPLOYEDINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODYAPISUMMARYSAPISUMMARYDEPLOYEDINFOSDEPLOYEDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DeployedStatus, deployedStatus_);
      DARABONBA_PTR_TO_JSON(EffectiveVersion, effectiveVersion_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployedStatus, deployedStatus_);
      DARABONBA_PTR_FROM_JSON(EffectiveVersion, effectiveVersion_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo() = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo(const DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo &) = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo(DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo &&) = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo() = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo& operator=(const DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo &) = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo& operator=(DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployedStatus_ == nullptr
        && return this->effectiveVersion_ == nullptr && return this->stageName_ == nullptr; };
    // deployedStatus Field Functions 
    bool hasDeployedStatus() const { return this->deployedStatus_ != nullptr;};
    void deleteDeployedStatus() { this->deployedStatus_ = nullptr;};
    inline string deployedStatus() const { DARABONBA_PTR_GET_DEFAULT(deployedStatus_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo& setDeployedStatus(string deployedStatus) { DARABONBA_PTR_SET_VALUE(deployedStatus_, deployedStatus) };


    // effectiveVersion Field Functions 
    bool hasEffectiveVersion() const { return this->effectiveVersion_ != nullptr;};
    void deleteEffectiveVersion() { this->effectiveVersion_ = nullptr;};
    inline string effectiveVersion() const { DARABONBA_PTR_GET_DEFAULT(effectiveVersion_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo& setEffectiveVersion(string effectiveVersion) { DARABONBA_PTR_SET_VALUE(effectiveVersion_, effectiveVersion) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The deployment status. Valid values: DEPLOYED and NONDEPLOYED.
    std::shared_ptr<string> deployedStatus_ = nullptr;
    // The deployed version.
    std::shared_ptr<string> effectiveVersion_ = nullptr;
    // Stage Name:
    // 
    // *   **RELEASE**: production environment
    // *   **PRE**: staging environment
    // *   **TEST**: test environment
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
