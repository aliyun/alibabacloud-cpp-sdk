// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTAPISRESPONSEBODYAPIINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTAPISRESPONSEBODYAPIINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiProductApisResponseBodyApiInfoListApiInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiProductApisResponseBodyApiInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiProductApisResponseBodyApiInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiInfo, apiInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiProductApisResponseBodyApiInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiInfo, apiInfo_);
    };
    DescribeApiProductApisResponseBodyApiInfoList() = default ;
    DescribeApiProductApisResponseBodyApiInfoList(const DescribeApiProductApisResponseBodyApiInfoList &) = default ;
    DescribeApiProductApisResponseBodyApiInfoList(DescribeApiProductApisResponseBodyApiInfoList &&) = default ;
    DescribeApiProductApisResponseBodyApiInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiProductApisResponseBodyApiInfoList() = default ;
    DescribeApiProductApisResponseBodyApiInfoList& operator=(const DescribeApiProductApisResponseBodyApiInfoList &) = default ;
    DescribeApiProductApisResponseBodyApiInfoList& operator=(DescribeApiProductApisResponseBodyApiInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiInfo_ == nullptr; };
    // apiInfo Field Functions 
    bool hasApiInfo() const { return this->apiInfo_ != nullptr;};
    void deleteApiInfo() { this->apiInfo_ = nullptr;};
    inline const vector<Models::DescribeApiProductApisResponseBodyApiInfoListApiInfo> & apiInfo() const { DARABONBA_PTR_GET_CONST(apiInfo_, vector<Models::DescribeApiProductApisResponseBodyApiInfoListApiInfo>) };
    inline vector<Models::DescribeApiProductApisResponseBodyApiInfoListApiInfo> apiInfo() { DARABONBA_PTR_GET(apiInfo_, vector<Models::DescribeApiProductApisResponseBodyApiInfoListApiInfo>) };
    inline DescribeApiProductApisResponseBodyApiInfoList& setApiInfo(const vector<Models::DescribeApiProductApisResponseBodyApiInfoListApiInfo> & apiInfo) { DARABONBA_PTR_SET_VALUE(apiInfo_, apiInfo) };
    inline DescribeApiProductApisResponseBodyApiInfoList& setApiInfo(vector<Models::DescribeApiProductApisResponseBodyApiInfoListApiInfo> && apiInfo) { DARABONBA_PTR_SET_RVALUE(apiInfo_, apiInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiProductApisResponseBodyApiInfoListApiInfo>> apiInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
