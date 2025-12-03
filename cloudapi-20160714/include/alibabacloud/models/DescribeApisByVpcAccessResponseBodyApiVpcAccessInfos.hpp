// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYVPCACCESSRESPONSEBODYAPIVPCACCESSINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYVPCACCESSRESPONSEBODYAPIVPCACCESSINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ApiVpcAccessInfo, apiVpcAccessInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiVpcAccessInfo, apiVpcAccessInfo_);
    };
    DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos() = default ;
    DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos(const DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos &) = default ;
    DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos(DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos &&) = default ;
    DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos() = default ;
    DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos& operator=(const DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos &) = default ;
    DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos& operator=(DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiVpcAccessInfo_ == nullptr; };
    // apiVpcAccessInfo Field Functions 
    bool hasApiVpcAccessInfo() const { return this->apiVpcAccessInfo_ != nullptr;};
    void deleteApiVpcAccessInfo() { this->apiVpcAccessInfo_ = nullptr;};
    inline const vector<Models::DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo> & apiVpcAccessInfo() const { DARABONBA_PTR_GET_CONST(apiVpcAccessInfo_, vector<Models::DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo>) };
    inline vector<Models::DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo> apiVpcAccessInfo() { DARABONBA_PTR_GET(apiVpcAccessInfo_, vector<Models::DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo>) };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos& setApiVpcAccessInfo(const vector<Models::DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo> & apiVpcAccessInfo) { DARABONBA_PTR_SET_VALUE(apiVpcAccessInfo_, apiVpcAccessInfo) };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos& setApiVpcAccessInfo(vector<Models::DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo> && apiVpcAccessInfo) { DARABONBA_PTR_SET_RVALUE(apiVpcAccessInfo_, apiVpcAccessInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeApisByVpcAccessResponseBodyApiVpcAccessInfosApiVpcAccessInfo>> apiVpcAccessInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
