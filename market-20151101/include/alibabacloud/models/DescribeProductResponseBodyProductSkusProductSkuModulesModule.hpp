// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUMODULESMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUMODULESMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyProductSkusProductSkuModulesModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyProductSkusProductSkuModulesModule& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyProductSkusProductSkuModulesModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
    };
    DescribeProductResponseBodyProductSkusProductSkuModulesModule() = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModule(const DescribeProductResponseBodyProductSkusProductSkuModulesModule &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModule(DescribeProductResponseBodyProductSkusProductSkuModulesModule &&) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyProductSkusProductSkuModulesModule() = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModule& operator=(const DescribeProductResponseBodyProductSkusProductSkuModulesModule &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuModulesModule& operator=(DescribeProductResponseBodyProductSkusProductSkuModulesModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->properties_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModule& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModule& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties) };
    inline Models::DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties properties() { DARABONBA_PTR_GET(properties_, Models::DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties) };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModule& setProperties(const Models::DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline DescribeProductResponseBodyProductSkusProductSkuModulesModule& setProperties(Models::DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::DescribeProductResponseBodyProductSkusProductSkuModulesModuleProperties> properties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
