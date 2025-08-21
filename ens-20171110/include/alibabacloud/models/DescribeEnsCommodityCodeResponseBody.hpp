// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsCommodityCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsCommodityCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCodeInfo, commodityCodeInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsCommodityCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCodeInfo, commodityCodeInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnsCommodityCodeResponseBody() = default ;
    DescribeEnsCommodityCodeResponseBody(const DescribeEnsCommodityCodeResponseBody &) = default ;
    DescribeEnsCommodityCodeResponseBody(DescribeEnsCommodityCodeResponseBody &&) = default ;
    DescribeEnsCommodityCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsCommodityCodeResponseBody() = default ;
    DescribeEnsCommodityCodeResponseBody& operator=(const DescribeEnsCommodityCodeResponseBody &) = default ;
    DescribeEnsCommodityCodeResponseBody& operator=(DescribeEnsCommodityCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCodeInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // commodityCodeInfo Field Functions 
    bool hasCommodityCodeInfo() const { return this->commodityCodeInfo_ != nullptr;};
    void deleteCommodityCodeInfo() { this->commodityCodeInfo_ = nullptr;};
    inline const vector<DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo> & commodityCodeInfo() const { DARABONBA_PTR_GET_CONST(commodityCodeInfo_, vector<DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo>) };
    inline vector<DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo> commodityCodeInfo() { DARABONBA_PTR_GET(commodityCodeInfo_, vector<DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo>) };
    inline DescribeEnsCommodityCodeResponseBody& setCommodityCodeInfo(const vector<DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo> & commodityCodeInfo) { DARABONBA_PTR_SET_VALUE(commodityCodeInfo_, commodityCodeInfo) };
    inline DescribeEnsCommodityCodeResponseBody& setCommodityCodeInfo(vector<DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo> && commodityCodeInfo) { DARABONBA_PTR_SET_RVALUE(commodityCodeInfo_, commodityCodeInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsCommodityCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo>> commodityCodeInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
