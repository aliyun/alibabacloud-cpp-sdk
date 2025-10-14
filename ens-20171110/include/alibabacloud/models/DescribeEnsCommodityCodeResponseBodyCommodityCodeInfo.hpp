// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYCODERESPONSEBODYCOMMODITYCODEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYCODERESPONSEBODYCOMMODITYCODEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
    };
    DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo() = default ;
    DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo(const DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo &) = default ;
    DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo(DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo &&) = default ;
    DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo() = default ;
    DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo& operator=(const DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo &) = default ;
    DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo& operator=(DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && return this->commodityName_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string commodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline DescribeEnsCommodityCodeResponseBodyCommodityCodeInfo& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


  protected:
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> commodityName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
