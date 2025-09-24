// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGEPRODUCTRESPONSEBODYDATARESOURCEPACKAGESRESOURCEPACKAGEPACKAGETYPESPACKAGETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGEPRODUCTRESPONSEBODYDATARESOURCEPACKAGESRESOURCEPACKAGEPACKAGETYPESPACKAGETYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties.hpp>
#include <alibabacloud/models/DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Specifications, specifications_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Specifications, specifications_);
    };
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType() = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType(const DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType &) = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType(DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType &&) = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType() = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType& operator=(const DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType &) = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType& operator=(DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->name_ != nullptr && this->properties_ != nullptr && this->specifications_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties) };
    inline Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties properties() { DARABONBA_PTR_GET(properties_, Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties) };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType& setProperties(const Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType& setProperties(Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // specifications Field Functions 
    bool hasSpecifications() const { return this->specifications_ != nullptr;};
    void deleteSpecifications() { this->specifications_ = nullptr;};
    inline const Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications & specifications() const { DARABONBA_PTR_GET_CONST(specifications_, Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications) };
    inline Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications specifications() { DARABONBA_PTR_GET(specifications_, Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications) };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType& setSpecifications(const Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications & specifications) { DARABONBA_PTR_SET_VALUE(specifications_, specifications) };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType& setSpecifications(Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications && specifications) { DARABONBA_PTR_SET_RVALUE(specifications_, specifications) };


  protected:
    // The code of the resource plan.
    std::shared_ptr<string> code_ = nullptr;
    // The name of the resource plan type.
    std::shared_ptr<string> name_ = nullptr;
    // The properties of the resource plan.
    std::shared_ptr<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeProperties> properties_ = nullptr;
    // The specifications of the resource plan.
    std::shared_ptr<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageTypeSpecifications> specifications_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
