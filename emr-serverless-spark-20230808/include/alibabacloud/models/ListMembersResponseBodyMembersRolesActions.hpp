// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMBERSRESPONSEBODYMEMBERSROLESACTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMBERSRESPONSEBODYMEMBERSROLESACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListMembersResponseBodyMembersRolesActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMembersResponseBodyMembersRolesActions& obj) { 
      DARABONBA_PTR_TO_JSON(actionArn, actionArn_);
      DARABONBA_PTR_TO_JSON(actionName, actionName_);
      DARABONBA_PTR_TO_JSON(dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
    };
    friend void from_json(const Darabonba::Json& j, ListMembersResponseBodyMembersRolesActions& obj) { 
      DARABONBA_PTR_FROM_JSON(actionArn, actionArn_);
      DARABONBA_PTR_FROM_JSON(actionName, actionName_);
      DARABONBA_PTR_FROM_JSON(dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
    };
    ListMembersResponseBodyMembersRolesActions() = default ;
    ListMembersResponseBodyMembersRolesActions(const ListMembersResponseBodyMembersRolesActions &) = default ;
    ListMembersResponseBodyMembersRolesActions(ListMembersResponseBodyMembersRolesActions &&) = default ;
    ListMembersResponseBodyMembersRolesActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMembersResponseBodyMembersRolesActions() = default ;
    ListMembersResponseBodyMembersRolesActions& operator=(const ListMembersResponseBodyMembersRolesActions &) = default ;
    ListMembersResponseBodyMembersRolesActions& operator=(ListMembersResponseBodyMembersRolesActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionArn_ != nullptr
        && this->actionName_ != nullptr && this->dependencies_ != nullptr && this->description_ != nullptr && this->displayName_ != nullptr; };
    // actionArn Field Functions 
    bool hasActionArn() const { return this->actionArn_ != nullptr;};
    void deleteActionArn() { this->actionArn_ = nullptr;};
    inline string actionArn() const { DARABONBA_PTR_GET_DEFAULT(actionArn_, "") };
    inline ListMembersResponseBodyMembersRolesActions& setActionArn(string actionArn) { DARABONBA_PTR_SET_VALUE(actionArn_, actionArn) };


    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline string actionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
    inline ListMembersResponseBodyMembersRolesActions& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const vector<string> & dependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<string>) };
    inline vector<string> dependencies() { DARABONBA_PTR_GET(dependencies_, vector<string>) };
    inline ListMembersResponseBodyMembersRolesActions& setDependencies(const vector<string> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline ListMembersResponseBodyMembersRolesActions& setDependencies(vector<string> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListMembersResponseBodyMembersRolesActions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListMembersResponseBodyMembersRolesActions& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


  protected:
    // 行为 arn。
    std::shared_ptr<string> actionArn_ = nullptr;
    // 权限名称。
    std::shared_ptr<string> actionName_ = nullptr;
    // action 依赖列表。
    std::shared_ptr<vector<string>> dependencies_ = nullptr;
    // action 描述。
    std::shared_ptr<string> description_ = nullptr;
    // 权限展示名称。
    std::shared_ptr<string> displayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
