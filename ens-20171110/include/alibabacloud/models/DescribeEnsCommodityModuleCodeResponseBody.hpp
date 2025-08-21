// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYMODULECODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYMODULECODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsCommodityModuleCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsCommodityModuleCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCodesInfo, commodityCodesInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsCommodityModuleCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCodesInfo, commodityCodesInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnsCommodityModuleCodeResponseBody() = default ;
    DescribeEnsCommodityModuleCodeResponseBody(const DescribeEnsCommodityModuleCodeResponseBody &) = default ;
    DescribeEnsCommodityModuleCodeResponseBody(DescribeEnsCommodityModuleCodeResponseBody &&) = default ;
    DescribeEnsCommodityModuleCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsCommodityModuleCodeResponseBody() = default ;
    DescribeEnsCommodityModuleCodeResponseBody& operator=(const DescribeEnsCommodityModuleCodeResponseBody &) = default ;
    DescribeEnsCommodityModuleCodeResponseBody& operator=(DescribeEnsCommodityModuleCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCodesInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // commodityCodesInfo Field Functions 
    bool hasCommodityCodesInfo() const { return this->commodityCodesInfo_ != nullptr;};
    void deleteCommodityCodesInfo() { this->commodityCodesInfo_ = nullptr;};
    inline const vector<DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo> & commodityCodesInfo() const { DARABONBA_PTR_GET_CONST(commodityCodesInfo_, vector<DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo>) };
    inline vector<DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo> commodityCodesInfo() { DARABONBA_PTR_GET(commodityCodesInfo_, vector<DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo>) };
    inline DescribeEnsCommodityModuleCodeResponseBody& setCommodityCodesInfo(const vector<DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo> & commodityCodesInfo) { DARABONBA_PTR_SET_VALUE(commodityCodesInfo_, commodityCodesInfo) };
    inline DescribeEnsCommodityModuleCodeResponseBody& setCommodityCodesInfo(vector<DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo> && commodityCodesInfo) { DARABONBA_PTR_SET_RVALUE(commodityCodesInfo_, commodityCodesInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsCommodityModuleCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo>> commodityCodesInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
