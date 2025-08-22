// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODULESRESPONSEBODYMODULESGROUPINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTMODULESRESPONSEBODYMODULESGROUPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListModulesResponseBodyModulesGroupInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModulesResponseBodyModulesGroupInfo& obj) { 
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, ListModulesResponseBodyModulesGroupInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
    };
    ListModulesResponseBodyModulesGroupInfo() = default ;
    ListModulesResponseBodyModulesGroupInfo(const ListModulesResponseBodyModulesGroupInfo &) = default ;
    ListModulesResponseBodyModulesGroupInfo(ListModulesResponseBodyModulesGroupInfo &&) = default ;
    ListModulesResponseBodyModulesGroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModulesResponseBodyModulesGroupInfo() = default ;
    ListModulesResponseBodyModulesGroupInfo& operator=(const ListModulesResponseBodyModulesGroupInfo &) = default ;
    ListModulesResponseBodyModulesGroupInfo& operator=(ListModulesResponseBodyModulesGroupInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->groupName_ != nullptr && this->projectId_ != nullptr && this->projectName_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListModulesResponseBodyModulesGroupInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListModulesResponseBodyModulesGroupInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListModulesResponseBodyModulesGroupInfo& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListModulesResponseBodyModulesGroupInfo& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
