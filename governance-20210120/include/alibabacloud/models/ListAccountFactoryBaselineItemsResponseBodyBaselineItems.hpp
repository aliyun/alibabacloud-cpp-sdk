// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINEITEMSRESPONSEBODYBASELINEITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINEITEMSRESPONSEBODYBASELINEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListAccountFactoryBaselineItemsResponseBodyBaselineItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountFactoryBaselineItemsResponseBodyBaselineItems& obj) { 
      DARABONBA_PTR_TO_JSON(DependsOn, dependsOn_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountFactoryBaselineItemsResponseBodyBaselineItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DependsOn, dependsOn_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListAccountFactoryBaselineItemsResponseBodyBaselineItems() = default ;
    ListAccountFactoryBaselineItemsResponseBodyBaselineItems(const ListAccountFactoryBaselineItemsResponseBodyBaselineItems &) = default ;
    ListAccountFactoryBaselineItemsResponseBodyBaselineItems(ListAccountFactoryBaselineItemsResponseBodyBaselineItems &&) = default ;
    ListAccountFactoryBaselineItemsResponseBodyBaselineItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountFactoryBaselineItemsResponseBodyBaselineItems() = default ;
    ListAccountFactoryBaselineItemsResponseBodyBaselineItems& operator=(const ListAccountFactoryBaselineItemsResponseBodyBaselineItems &) = default ;
    ListAccountFactoryBaselineItemsResponseBodyBaselineItems& operator=(ListAccountFactoryBaselineItemsResponseBodyBaselineItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dependsOn_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr && return this->version_ == nullptr; };
    // dependsOn Field Functions 
    bool hasDependsOn() const { return this->dependsOn_ != nullptr;};
    void deleteDependsOn() { this->dependsOn_ = nullptr;};
    inline const vector<Models::ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn> & dependsOn() const { DARABONBA_PTR_GET_CONST(dependsOn_, vector<Models::ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn>) };
    inline vector<Models::ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn> dependsOn() { DARABONBA_PTR_GET(dependsOn_, vector<Models::ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn>) };
    inline ListAccountFactoryBaselineItemsResponseBodyBaselineItems& setDependsOn(const vector<Models::ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn> & dependsOn) { DARABONBA_PTR_SET_VALUE(dependsOn_, dependsOn) };
    inline ListAccountFactoryBaselineItemsResponseBodyBaselineItems& setDependsOn(vector<Models::ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn> && dependsOn) { DARABONBA_PTR_SET_RVALUE(dependsOn_, dependsOn) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAccountFactoryBaselineItemsResponseBodyBaselineItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAccountFactoryBaselineItemsResponseBodyBaselineItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAccountFactoryBaselineItemsResponseBodyBaselineItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListAccountFactoryBaselineItemsResponseBodyBaselineItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The dependency of the baseline item.
    std::shared_ptr<vector<Models::ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn>> dependsOn_ = nullptr;
    // The description of the baseline item.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the baseline item.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the baseline item.
    std::shared_ptr<string> type_ = nullptr;
    // The version of the baseline item.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
