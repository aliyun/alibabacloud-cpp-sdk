// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYMODULESMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYMODULESMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyModulesModuleProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInstanceResponseBodyModulesModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBodyModulesModule& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBodyModulesModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
    };
    DescribeInstanceResponseBodyModulesModule() = default ;
    DescribeInstanceResponseBodyModulesModule(const DescribeInstanceResponseBodyModulesModule &) = default ;
    DescribeInstanceResponseBodyModulesModule(DescribeInstanceResponseBodyModulesModule &&) = default ;
    DescribeInstanceResponseBodyModulesModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBodyModulesModule() = default ;
    DescribeInstanceResponseBodyModulesModule& operator=(const DescribeInstanceResponseBodyModulesModule &) = default ;
    DescribeInstanceResponseBodyModulesModule& operator=(DescribeInstanceResponseBodyModulesModule &&) = default ;
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
    inline DescribeInstanceResponseBodyModulesModule& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeInstanceResponseBodyModulesModule& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInstanceResponseBodyModulesModule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::DescribeInstanceResponseBodyModulesModuleProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::DescribeInstanceResponseBodyModulesModuleProperties) };
    inline Models::DescribeInstanceResponseBodyModulesModuleProperties properties() { DARABONBA_PTR_GET(properties_, Models::DescribeInstanceResponseBodyModulesModuleProperties) };
    inline DescribeInstanceResponseBodyModulesModule& setProperties(const Models::DescribeInstanceResponseBodyModulesModuleProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline DescribeInstanceResponseBodyModulesModule& setProperties(Models::DescribeInstanceResponseBodyModulesModuleProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::DescribeInstanceResponseBodyModulesModuleProperties> properties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
