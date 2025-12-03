// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISWITHSTAGENAMEINTEGRATEDBYAPPRESPONSEBODYAPPAPIRELATIONINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISWITHSTAGENAMEINTEGRATEDBYAPPRESPONSEBODYAPPAPIRELATIONINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfosAppApiRelationInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AppApiRelationInfo, appApiRelationInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AppApiRelationInfo, appApiRelationInfo_);
    };
    DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos() = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos(const DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos &) = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos(DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos &&) = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos() = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos& operator=(const DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos &) = default ;
    DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos& operator=(DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appApiRelationInfo_ == nullptr; };
    // appApiRelationInfo Field Functions 
    bool hasAppApiRelationInfo() const { return this->appApiRelationInfo_ != nullptr;};
    void deleteAppApiRelationInfo() { this->appApiRelationInfo_ = nullptr;};
    inline const vector<Models::DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfosAppApiRelationInfo> & appApiRelationInfo() const { DARABONBA_PTR_GET_CONST(appApiRelationInfo_, vector<Models::DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfosAppApiRelationInfo>) };
    inline vector<Models::DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfosAppApiRelationInfo> appApiRelationInfo() { DARABONBA_PTR_GET(appApiRelationInfo_, vector<Models::DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfosAppApiRelationInfo>) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos& setAppApiRelationInfo(const vector<Models::DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfosAppApiRelationInfo> & appApiRelationInfo) { DARABONBA_PTR_SET_VALUE(appApiRelationInfo_, appApiRelationInfo) };
    inline DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfos& setAppApiRelationInfo(vector<Models::DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfosAppApiRelationInfo> && appApiRelationInfo) { DARABONBA_PTR_SET_RVALUE(appApiRelationInfo_, appApiRelationInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeApisWithStageNameIntegratedByAppResponseBodyAppApiRelationInfosAppApiRelationInfo>> appApiRelationInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
