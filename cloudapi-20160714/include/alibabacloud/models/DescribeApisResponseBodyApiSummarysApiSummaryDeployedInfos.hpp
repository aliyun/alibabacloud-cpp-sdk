// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODYAPISUMMARYSAPISUMMARYDEPLOYEDINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODYAPISUMMARYSAPISUMMARYDEPLOYEDINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DeployedInfo, deployedInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployedInfo, deployedInfo_);
    };
    DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos() = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos(const DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos &) = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos(DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos &&) = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos() = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos& operator=(const DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos &) = default ;
    DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos& operator=(DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployedInfo_ == nullptr; };
    // deployedInfo Field Functions 
    bool hasDeployedInfo() const { return this->deployedInfo_ != nullptr;};
    void deleteDeployedInfo() { this->deployedInfo_ = nullptr;};
    inline const vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo> & deployedInfo() const { DARABONBA_PTR_GET_CONST(deployedInfo_, vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo>) };
    inline vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo> deployedInfo() { DARABONBA_PTR_GET(deployedInfo_, vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo>) };
    inline DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos& setDeployedInfo(const vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo> & deployedInfo) { DARABONBA_PTR_SET_VALUE(deployedInfo_, deployedInfo) };
    inline DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos& setDeployedInfo(vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo> && deployedInfo) { DARABONBA_PTR_SET_RVALUE(deployedInfo_, deployedInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfosDeployedInfo>> deployedInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
