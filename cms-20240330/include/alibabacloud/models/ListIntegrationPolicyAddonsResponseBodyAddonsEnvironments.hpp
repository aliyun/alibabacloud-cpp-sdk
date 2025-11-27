// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYADDONSRESPONSEBODYADDONSENVIRONMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYADDONSRESPONSEBODYADDONSENVIRONMENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsDependencies.hpp>
#include <alibabacloud/models/ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments& obj) { 
      DARABONBA_PTR_TO_JSON(dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(policies, policies_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments& obj) { 
      DARABONBA_PTR_FROM_JSON(dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(policies, policies_);
    };
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments() = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments(const ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments &) = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments(ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments &&) = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments() = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments& operator=(const ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments &) = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments& operator=(ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dependencies_ == nullptr
        && return this->description_ == nullptr && return this->enable_ == nullptr && return this->label_ == nullptr && return this->name_ == nullptr && return this->policies_ == nullptr; };
    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsDependencies & dependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsDependencies) };
    inline Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsDependencies dependencies() { DARABONBA_PTR_GET(dependencies_, Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsDependencies) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments& setDependencies(const Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsDependencies & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments& setDependencies(Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsDependencies && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies & policies() const { DARABONBA_PTR_GET_CONST(policies_, Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies) };
    inline Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies policies() { DARABONBA_PTR_GET(policies_, Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments& setPolicies(const Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironments& setPolicies(Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


  protected:
    std::shared_ptr<Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsDependencies> dependencies_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies> policies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
