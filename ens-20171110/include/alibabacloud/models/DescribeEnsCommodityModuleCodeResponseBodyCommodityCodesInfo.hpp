// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYMODULECODERESPONSEBODYCOMMODITYCODESINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYMODULECODERESPONSEBODYCOMMODITYCODESINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ModuleCodesInfo, moduleCodesInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ModuleCodesInfo, moduleCodesInfo_);
    };
    DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo() = default ;
    DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo(const DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo &) = default ;
    DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo(DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo &&) = default ;
    DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo() = default ;
    DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo& operator=(const DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo &) = default ;
    DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo& operator=(DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->moduleCodesInfo_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // moduleCodesInfo Field Functions 
    bool hasModuleCodesInfo() const { return this->moduleCodesInfo_ != nullptr;};
    void deleteModuleCodesInfo() { this->moduleCodesInfo_ = nullptr;};
    inline const vector<Models::DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo> & moduleCodesInfo() const { DARABONBA_PTR_GET_CONST(moduleCodesInfo_, vector<Models::DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo>) };
    inline vector<Models::DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo> moduleCodesInfo() { DARABONBA_PTR_GET(moduleCodesInfo_, vector<Models::DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo>) };
    inline DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo& setModuleCodesInfo(const vector<Models::DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo> & moduleCodesInfo) { DARABONBA_PTR_SET_VALUE(moduleCodesInfo_, moduleCodesInfo) };
    inline DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfo& setModuleCodesInfo(vector<Models::DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo> && moduleCodesInfo) { DARABONBA_PTR_SET_RVALUE(moduleCodesInfo_, moduleCodesInfo) };


  protected:
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<vector<Models::DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo>> moduleCodesInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
