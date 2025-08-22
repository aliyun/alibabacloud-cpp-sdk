// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATAADDONSENVIRONMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATAADDONSENVIRONMENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsDependencies.hpp>
#include <alibabacloud/models/ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentAddonsResponseBodyDataAddonsEnvironments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentAddonsResponseBodyDataAddonsEnvironments& obj) { 
      DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentAddonsResponseBodyDataAddonsEnvironments& obj) { 
      DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
    };
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironments() = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironments(const ListEnvironmentAddonsResponseBodyDataAddonsEnvironments &) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironments(ListEnvironmentAddonsResponseBodyDataAddonsEnvironments &&) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentAddonsResponseBodyDataAddonsEnvironments() = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironments& operator=(const ListEnvironmentAddonsResponseBodyDataAddonsEnvironments &) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironments& operator=(ListEnvironmentAddonsResponseBodyDataAddonsEnvironments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dependencies_ != nullptr
        && this->description_ != nullptr && this->enable_ != nullptr && this->label_ != nullptr && this->name_ != nullptr && this->policies_ != nullptr; };
    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsDependencies & dependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsDependencies) };
    inline Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsDependencies dependencies() { DARABONBA_PTR_GET(dependencies_, Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsDependencies) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironments& setDependencies(const Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsDependencies & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironments& setDependencies(Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsDependencies && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironments& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironments& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies & policies() const { DARABONBA_PTR_GET_CONST(policies_, Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies) };
    inline Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies policies() { DARABONBA_PTR_GET(policies_, Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironments& setPolicies(const Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironments& setPolicies(Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


  protected:
    // The dependencies of the environment.
    std::shared_ptr<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsDependencies> dependencies_ = nullptr;
    // The description of the environment.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the feature is enabled.
    std::shared_ptr<bool> enable_ = nullptr;
    // The tag of the environment.
    std::shared_ptr<string> label_ = nullptr;
    // The name of the environment.
    std::shared_ptr<string> name_ = nullptr;
    // The control policies in the environment.
    std::shared_ptr<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies> policies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
