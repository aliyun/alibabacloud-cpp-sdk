// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYIPCONTROLRESPONSEBODYAPIINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYIPCONTROLRESPONSEBODYAPIINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisByIpControlResponseBodyApiInfosApiInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisByIpControlResponseBodyApiInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByIpControlResponseBodyApiInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ApiInfo, apiInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByIpControlResponseBodyApiInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiInfo, apiInfo_);
    };
    DescribeApisByIpControlResponseBodyApiInfos() = default ;
    DescribeApisByIpControlResponseBodyApiInfos(const DescribeApisByIpControlResponseBodyApiInfos &) = default ;
    DescribeApisByIpControlResponseBodyApiInfos(DescribeApisByIpControlResponseBodyApiInfos &&) = default ;
    DescribeApisByIpControlResponseBodyApiInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByIpControlResponseBodyApiInfos() = default ;
    DescribeApisByIpControlResponseBodyApiInfos& operator=(const DescribeApisByIpControlResponseBodyApiInfos &) = default ;
    DescribeApisByIpControlResponseBodyApiInfos& operator=(DescribeApisByIpControlResponseBodyApiInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiInfo_ == nullptr; };
    // apiInfo Field Functions 
    bool hasApiInfo() const { return this->apiInfo_ != nullptr;};
    void deleteApiInfo() { this->apiInfo_ = nullptr;};
    inline const vector<Models::DescribeApisByIpControlResponseBodyApiInfosApiInfo> & apiInfo() const { DARABONBA_PTR_GET_CONST(apiInfo_, vector<Models::DescribeApisByIpControlResponseBodyApiInfosApiInfo>) };
    inline vector<Models::DescribeApisByIpControlResponseBodyApiInfosApiInfo> apiInfo() { DARABONBA_PTR_GET(apiInfo_, vector<Models::DescribeApisByIpControlResponseBodyApiInfosApiInfo>) };
    inline DescribeApisByIpControlResponseBodyApiInfos& setApiInfo(const vector<Models::DescribeApisByIpControlResponseBodyApiInfosApiInfo> & apiInfo) { DARABONBA_PTR_SET_VALUE(apiInfo_, apiInfo) };
    inline DescribeApisByIpControlResponseBodyApiInfos& setApiInfo(vector<Models::DescribeApisByIpControlResponseBodyApiInfosApiInfo> && apiInfo) { DARABONBA_PTR_SET_RVALUE(apiInfo_, apiInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeApisByIpControlResponseBodyApiInfosApiInfo>> apiInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
