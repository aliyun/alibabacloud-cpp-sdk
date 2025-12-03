// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLRELEASEWORKFLOWSRESPONSEBODYRELEASESTAGESVARIABLEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTALLRELEASEWORKFLOWSRESPONSEBODYRELEASESTAGESVARIABLEGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups() = default ;
    ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups(const ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups &) = default ;
    ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups(ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups &&) = default ;
    ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups() = default ;
    ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups& operator=(const ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups &) = default ;
    ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups& operator=(ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->displayName_ == nullptr && return this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
