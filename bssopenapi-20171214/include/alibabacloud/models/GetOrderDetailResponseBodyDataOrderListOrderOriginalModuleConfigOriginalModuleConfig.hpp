// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLISTORDERORIGINALMODULECONFIGORIGINALMODULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLISTORDERORIGINALMODULECONFIGORIGINALMODULECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ModuleProperties, moduleProperties_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ModuleProperties, moduleProperties_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig() = default ;
    GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig(const GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig &) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig(GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig &&) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig() = default ;
    GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig& operator=(const GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig &) = default ;
    GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig& operator=(GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->moduleProperties_ != nullptr && this->name_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // moduleProperties Field Functions 
    bool hasModuleProperties() const { return this->moduleProperties_ != nullptr;};
    void deleteModuleProperties() { this->moduleProperties_ = nullptr;};
    inline const Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties & moduleProperties() const { DARABONBA_PTR_GET_CONST(moduleProperties_, Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties) };
    inline Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties moduleProperties() { DARABONBA_PTR_GET(moduleProperties_, Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties) };
    inline GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig& setModuleProperties(const Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties & moduleProperties) { DARABONBA_PTR_SET_VALUE(moduleProperties_, moduleProperties) };
    inline GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig& setModuleProperties(Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties && moduleProperties) { DARABONBA_PTR_SET_RVALUE(moduleProperties_, moduleProperties) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The code of the configuration item.
    std::shared_ptr<string> code_ = nullptr;
    // The attributes of the configured item.
    std::shared_ptr<Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties> moduleProperties_ = nullptr;
    // The name of the configuration item.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
