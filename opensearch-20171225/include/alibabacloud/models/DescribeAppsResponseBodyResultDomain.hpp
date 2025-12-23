// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYRESULTDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYRESULTDOMAIN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAppsResponseBodyResultDomainFunctions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeAppsResponseBodyResultDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBodyResultDomain& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(functions, functions_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBodyResultDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(functions, functions_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DescribeAppsResponseBodyResultDomain() = default ;
    DescribeAppsResponseBodyResultDomain(const DescribeAppsResponseBodyResultDomain &) = default ;
    DescribeAppsResponseBodyResultDomain(DescribeAppsResponseBodyResultDomain &&) = default ;
    DescribeAppsResponseBodyResultDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBodyResultDomain() = default ;
    DescribeAppsResponseBodyResultDomain& operator=(const DescribeAppsResponseBodyResultDomain &) = default ;
    DescribeAppsResponseBodyResultDomain& operator=(DescribeAppsResponseBodyResultDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->functions_ == nullptr && return this->name_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeAppsResponseBodyResultDomain& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline const Models::DescribeAppsResponseBodyResultDomainFunctions & functions() const { DARABONBA_PTR_GET_CONST(functions_, Models::DescribeAppsResponseBodyResultDomainFunctions) };
    inline Models::DescribeAppsResponseBodyResultDomainFunctions functions() { DARABONBA_PTR_GET(functions_, Models::DescribeAppsResponseBodyResultDomainFunctions) };
    inline DescribeAppsResponseBodyResultDomain& setFunctions(const Models::DescribeAppsResponseBodyResultDomainFunctions & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
    inline DescribeAppsResponseBodyResultDomain& setFunctions(Models::DescribeAppsResponseBodyResultDomainFunctions && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAppsResponseBodyResultDomain& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The type of the edition. Valid values: standard, advance, and enhanced. A value of standard indicates a standard edition. A value of advance indicates an advanced edition which is of an old version. New version is not supported for this edition. A value of enhanced indicates an advanced edition which is of a new version.
    std::shared_ptr<string> category_ = nullptr;
    // The search results.
    std::shared_ptr<Models::DescribeAppsResponseBodyResultDomainFunctions> functions_ = nullptr;
    // The name (in English).
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
