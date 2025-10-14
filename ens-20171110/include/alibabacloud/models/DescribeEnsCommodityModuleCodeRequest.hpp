// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYMODULECODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYMODULECODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsCommodityModuleCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsCommodityModuleCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsCommodityModuleCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
    };
    DescribeEnsCommodityModuleCodeRequest() = default ;
    DescribeEnsCommodityModuleCodeRequest(const DescribeEnsCommodityModuleCodeRequest &) = default ;
    DescribeEnsCommodityModuleCodeRequest(DescribeEnsCommodityModuleCodeRequest &&) = default ;
    DescribeEnsCommodityModuleCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsCommodityModuleCodeRequest() = default ;
    DescribeEnsCommodityModuleCodeRequest& operator=(const DescribeEnsCommodityModuleCodeRequest &) = default ;
    DescribeEnsCommodityModuleCodeRequest& operator=(DescribeEnsCommodityModuleCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && return this->moduleCode_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeEnsCommodityModuleCodeRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline DescribeEnsCommodityModuleCodeRequest& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


  protected:
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> moduleCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
