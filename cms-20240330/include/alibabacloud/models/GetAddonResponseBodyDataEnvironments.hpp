// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYDATAENVIRONMENTS_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRESPONSEBODYDATAENVIRONMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAddonResponseBodyDataEnvironmentsCommonSchemaRefs.hpp>
#include <alibabacloud/models/GetAddonResponseBodyDataEnvironmentsDependencies.hpp>
#include <alibabacloud/models/GetAddonResponseBodyDataEnvironmentsPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonResponseBodyDataEnvironments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonResponseBodyDataEnvironments& obj) { 
      DARABONBA_PTR_TO_JSON(commonSchemaRefs, commonSchemaRefs_);
      DARABONBA_PTR_TO_JSON(dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(policies, policies_);
      DARABONBA_PTR_TO_JSON(policyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonResponseBodyDataEnvironments& obj) { 
      DARABONBA_PTR_FROM_JSON(commonSchemaRefs, commonSchemaRefs_);
      DARABONBA_PTR_FROM_JSON(dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(policies, policies_);
      DARABONBA_PTR_FROM_JSON(policyType, policyType_);
    };
    GetAddonResponseBodyDataEnvironments() = default ;
    GetAddonResponseBodyDataEnvironments(const GetAddonResponseBodyDataEnvironments &) = default ;
    GetAddonResponseBodyDataEnvironments(GetAddonResponseBodyDataEnvironments &&) = default ;
    GetAddonResponseBodyDataEnvironments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonResponseBodyDataEnvironments() = default ;
    GetAddonResponseBodyDataEnvironments& operator=(const GetAddonResponseBodyDataEnvironments &) = default ;
    GetAddonResponseBodyDataEnvironments& operator=(GetAddonResponseBodyDataEnvironments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonSchemaRefs_ == nullptr
        && return this->dependencies_ == nullptr && return this->description_ == nullptr && return this->enable_ == nullptr && return this->label_ == nullptr && return this->name_ == nullptr
        && return this->policies_ == nullptr && return this->policyType_ == nullptr; };
    // commonSchemaRefs Field Functions 
    bool hasCommonSchemaRefs() const { return this->commonSchemaRefs_ != nullptr;};
    void deleteCommonSchemaRefs() { this->commonSchemaRefs_ = nullptr;};
    inline const vector<Models::GetAddonResponseBodyDataEnvironmentsCommonSchemaRefs> & commonSchemaRefs() const { DARABONBA_PTR_GET_CONST(commonSchemaRefs_, vector<Models::GetAddonResponseBodyDataEnvironmentsCommonSchemaRefs>) };
    inline vector<Models::GetAddonResponseBodyDataEnvironmentsCommonSchemaRefs> commonSchemaRefs() { DARABONBA_PTR_GET(commonSchemaRefs_, vector<Models::GetAddonResponseBodyDataEnvironmentsCommonSchemaRefs>) };
    inline GetAddonResponseBodyDataEnvironments& setCommonSchemaRefs(const vector<Models::GetAddonResponseBodyDataEnvironmentsCommonSchemaRefs> & commonSchemaRefs) { DARABONBA_PTR_SET_VALUE(commonSchemaRefs_, commonSchemaRefs) };
    inline GetAddonResponseBodyDataEnvironments& setCommonSchemaRefs(vector<Models::GetAddonResponseBodyDataEnvironmentsCommonSchemaRefs> && commonSchemaRefs) { DARABONBA_PTR_SET_RVALUE(commonSchemaRefs_, commonSchemaRefs) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const Models::GetAddonResponseBodyDataEnvironmentsDependencies & dependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, Models::GetAddonResponseBodyDataEnvironmentsDependencies) };
    inline Models::GetAddonResponseBodyDataEnvironmentsDependencies dependencies() { DARABONBA_PTR_GET(dependencies_, Models::GetAddonResponseBodyDataEnvironmentsDependencies) };
    inline GetAddonResponseBodyDataEnvironments& setDependencies(const Models::GetAddonResponseBodyDataEnvironmentsDependencies & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline GetAddonResponseBodyDataEnvironments& setDependencies(Models::GetAddonResponseBodyDataEnvironmentsDependencies && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAddonResponseBodyDataEnvironments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetAddonResponseBodyDataEnvironments& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAddonResponseBodyDataEnvironments& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAddonResponseBodyDataEnvironments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const Models::GetAddonResponseBodyDataEnvironmentsPolicies & policies() const { DARABONBA_PTR_GET_CONST(policies_, Models::GetAddonResponseBodyDataEnvironmentsPolicies) };
    inline Models::GetAddonResponseBodyDataEnvironmentsPolicies policies() { DARABONBA_PTR_GET(policies_, Models::GetAddonResponseBodyDataEnvironmentsPolicies) };
    inline GetAddonResponseBodyDataEnvironments& setPolicies(const Models::GetAddonResponseBodyDataEnvironmentsPolicies & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline GetAddonResponseBodyDataEnvironments& setPolicies(Models::GetAddonResponseBodyDataEnvironmentsPolicies && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline GetAddonResponseBodyDataEnvironments& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    std::shared_ptr<vector<Models::GetAddonResponseBodyDataEnvironmentsCommonSchemaRefs>> commonSchemaRefs_ = nullptr;
    std::shared_ptr<Models::GetAddonResponseBodyDataEnvironmentsDependencies> dependencies_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::GetAddonResponseBodyDataEnvironmentsPolicies> policies_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
