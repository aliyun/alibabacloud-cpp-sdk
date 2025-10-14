// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYMODULECODERESPONSEBODYCOMMODITYCODESINFOMODULECODESINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYMODULECODERESPONSEBODYCOMMODITYCODESINFOMODULECODESINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo() = default ;
    DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo(const DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo &) = default ;
    DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo(DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo &&) = default ;
    DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo() = default ;
    DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo& operator=(const DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo &) = default ;
    DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo& operator=(DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->moduleCode_ == nullptr
        && return this->moduleName_ == nullptr; };
    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline DescribeEnsCommodityModuleCodeResponseBodyCommodityCodesInfoModuleCodesInfo& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    std::shared_ptr<string> moduleCode_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
