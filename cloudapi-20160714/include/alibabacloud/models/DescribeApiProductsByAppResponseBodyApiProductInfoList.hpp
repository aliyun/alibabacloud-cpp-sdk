// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTSBYAPPRESPONSEBODYAPIPRODUCTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTSBYAPPRESPONSEBODYAPIPRODUCTINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiProductsByAppResponseBodyApiProductInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiProductsByAppResponseBodyApiProductInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiProductInfo, apiProductInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiProductsByAppResponseBodyApiProductInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiProductInfo, apiProductInfo_);
    };
    DescribeApiProductsByAppResponseBodyApiProductInfoList() = default ;
    DescribeApiProductsByAppResponseBodyApiProductInfoList(const DescribeApiProductsByAppResponseBodyApiProductInfoList &) = default ;
    DescribeApiProductsByAppResponseBodyApiProductInfoList(DescribeApiProductsByAppResponseBodyApiProductInfoList &&) = default ;
    DescribeApiProductsByAppResponseBodyApiProductInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiProductsByAppResponseBodyApiProductInfoList() = default ;
    DescribeApiProductsByAppResponseBodyApiProductInfoList& operator=(const DescribeApiProductsByAppResponseBodyApiProductInfoList &) = default ;
    DescribeApiProductsByAppResponseBodyApiProductInfoList& operator=(DescribeApiProductsByAppResponseBodyApiProductInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiProductInfo_ == nullptr; };
    // apiProductInfo Field Functions 
    bool hasApiProductInfo() const { return this->apiProductInfo_ != nullptr;};
    void deleteApiProductInfo() { this->apiProductInfo_ = nullptr;};
    inline const vector<Models::DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo> & apiProductInfo() const { DARABONBA_PTR_GET_CONST(apiProductInfo_, vector<Models::DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo>) };
    inline vector<Models::DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo> apiProductInfo() { DARABONBA_PTR_GET(apiProductInfo_, vector<Models::DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo>) };
    inline DescribeApiProductsByAppResponseBodyApiProductInfoList& setApiProductInfo(const vector<Models::DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo> & apiProductInfo) { DARABONBA_PTR_SET_VALUE(apiProductInfo_, apiProductInfo) };
    inline DescribeApiProductsByAppResponseBodyApiProductInfoList& setApiProductInfo(vector<Models::DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo> && apiProductInfo) { DARABONBA_PTR_SET_RVALUE(apiProductInfo_, apiProductInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiProductsByAppResponseBodyApiProductInfoListApiProductInfo>> apiProductInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
