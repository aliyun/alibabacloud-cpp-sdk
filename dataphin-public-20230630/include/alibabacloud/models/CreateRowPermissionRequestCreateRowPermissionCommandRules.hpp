// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROWPERMISSIONREQUESTCREATEROWPERMISSIONCOMMANDRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEROWPERMISSIONREQUESTCREATEROWPERMISSIONCOMMANDRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRowPermissionRequestCreateRowPermissionCommandRulesExpressions.hpp>
#include <alibabacloud/models/CreateRowPermissionRequestCreateRowPermissionCommandRulesUserMappingList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateRowPermissionRequestCreateRowPermissionCommandRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRowPermissionRequestCreateRowPermissionCommandRules& obj) { 
      DARABONBA_PTR_TO_JSON(Expressions, expressions_);
      DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserMappingList, userMappingList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRowPermissionRequestCreateRowPermissionCommandRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Expressions, expressions_);
      DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserMappingList, userMappingList_);
    };
    CreateRowPermissionRequestCreateRowPermissionCommandRules() = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandRules(const CreateRowPermissionRequestCreateRowPermissionCommandRules &) = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandRules(CreateRowPermissionRequestCreateRowPermissionCommandRules &&) = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRowPermissionRequestCreateRowPermissionCommandRules() = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandRules& operator=(const CreateRowPermissionRequestCreateRowPermissionCommandRules &) = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandRules& operator=(CreateRowPermissionRequestCreateRowPermissionCommandRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expressions_ != nullptr
        && this->isDelete_ != nullptr && this->ruleName_ != nullptr && this->scopeType_ != nullptr && this->status_ != nullptr && this->userMappingList_ != nullptr; };
    // expressions Field Functions 
    bool hasExpressions() const { return this->expressions_ != nullptr;};
    void deleteExpressions() { this->expressions_ = nullptr;};
    inline const vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesExpressions> & expressions() const { DARABONBA_PTR_GET_CONST(expressions_, vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesExpressions>) };
    inline vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesExpressions> expressions() { DARABONBA_PTR_GET(expressions_, vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesExpressions>) };
    inline CreateRowPermissionRequestCreateRowPermissionCommandRules& setExpressions(const vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesExpressions> & expressions) { DARABONBA_PTR_SET_VALUE(expressions_, expressions) };
    inline CreateRowPermissionRequestCreateRowPermissionCommandRules& setExpressions(vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesExpressions> && expressions) { DARABONBA_PTR_SET_RVALUE(expressions_, expressions) };


    // isDelete Field Functions 
    bool hasIsDelete() const { return this->isDelete_ != nullptr;};
    void deleteIsDelete() { this->isDelete_ = nullptr;};
    inline bool isDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, false) };
    inline CreateRowPermissionRequestCreateRowPermissionCommandRules& setIsDelete(bool isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateRowPermissionRequestCreateRowPermissionCommandRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline CreateRowPermissionRequestCreateRowPermissionCommandRules& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateRowPermissionRequestCreateRowPermissionCommandRules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userMappingList Field Functions 
    bool hasUserMappingList() const { return this->userMappingList_ != nullptr;};
    void deleteUserMappingList() { this->userMappingList_ = nullptr;};
    inline const vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesUserMappingList> & userMappingList() const { DARABONBA_PTR_GET_CONST(userMappingList_, vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesUserMappingList>) };
    inline vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesUserMappingList> userMappingList() { DARABONBA_PTR_GET(userMappingList_, vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesUserMappingList>) };
    inline CreateRowPermissionRequestCreateRowPermissionCommandRules& setUserMappingList(const vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesUserMappingList> & userMappingList) { DARABONBA_PTR_SET_VALUE(userMappingList_, userMappingList) };
    inline CreateRowPermissionRequestCreateRowPermissionCommandRules& setUserMappingList(vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesUserMappingList> && userMappingList) { DARABONBA_PTR_SET_RVALUE(userMappingList_, userMappingList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesExpressions>> expressions_ = nullptr;
    std::shared_ptr<bool> isDelete_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scopeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<vector<Models::CreateRowPermissionRequestCreateRowPermissionCommandRulesUserMappingList>> userMappingList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
