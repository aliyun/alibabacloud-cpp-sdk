// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYAPPRESPONSEBODYAPPAPIRELATIONINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYAPPRESPONSEBODYAPPAPIRELATIONINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisByAppResponseBodyAppApiRelationInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByAppResponseBodyAppApiRelationInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AppApiRelationInfo, appApiRelationInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByAppResponseBodyAppApiRelationInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AppApiRelationInfo, appApiRelationInfo_);
    };
    DescribeApisByAppResponseBodyAppApiRelationInfos() = default ;
    DescribeApisByAppResponseBodyAppApiRelationInfos(const DescribeApisByAppResponseBodyAppApiRelationInfos &) = default ;
    DescribeApisByAppResponseBodyAppApiRelationInfos(DescribeApisByAppResponseBodyAppApiRelationInfos &&) = default ;
    DescribeApisByAppResponseBodyAppApiRelationInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByAppResponseBodyAppApiRelationInfos() = default ;
    DescribeApisByAppResponseBodyAppApiRelationInfos& operator=(const DescribeApisByAppResponseBodyAppApiRelationInfos &) = default ;
    DescribeApisByAppResponseBodyAppApiRelationInfos& operator=(DescribeApisByAppResponseBodyAppApiRelationInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appApiRelationInfo_ == nullptr; };
    // appApiRelationInfo Field Functions 
    bool hasAppApiRelationInfo() const { return this->appApiRelationInfo_ != nullptr;};
    void deleteAppApiRelationInfo() { this->appApiRelationInfo_ = nullptr;};
    inline const vector<Models::DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo> & appApiRelationInfo() const { DARABONBA_PTR_GET_CONST(appApiRelationInfo_, vector<Models::DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo>) };
    inline vector<Models::DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo> appApiRelationInfo() { DARABONBA_PTR_GET(appApiRelationInfo_, vector<Models::DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo>) };
    inline DescribeApisByAppResponseBodyAppApiRelationInfos& setAppApiRelationInfo(const vector<Models::DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo> & appApiRelationInfo) { DARABONBA_PTR_SET_VALUE(appApiRelationInfo_, appApiRelationInfo) };
    inline DescribeApisByAppResponseBodyAppApiRelationInfos& setAppApiRelationInfo(vector<Models::DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo> && appApiRelationInfo) { DARABONBA_PTR_SET_RVALUE(appApiRelationInfo_, appApiRelationInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo>> appApiRelationInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
