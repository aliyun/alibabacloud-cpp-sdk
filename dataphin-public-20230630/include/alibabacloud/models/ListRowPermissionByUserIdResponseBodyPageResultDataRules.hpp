// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDRESPONSEBODYPAGERESULTDATARULES_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDRESPONSEBODYPAGERESULTDATARULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRowPermissionByUserIdResponseBodyPageResultDataRulesExpressions.hpp>
#include <alibabacloud/models/ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionByUserIdResponseBodyPageResultDataRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionByUserIdResponseBodyPageResultDataRules& obj) { 
      DARABONBA_PTR_TO_JSON(Expressions, expressions_);
      DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserMappingList, userMappingList_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionByUserIdResponseBodyPageResultDataRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Expressions, expressions_);
      DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserMappingList, userMappingList_);
    };
    ListRowPermissionByUserIdResponseBodyPageResultDataRules() = default ;
    ListRowPermissionByUserIdResponseBodyPageResultDataRules(const ListRowPermissionByUserIdResponseBodyPageResultDataRules &) = default ;
    ListRowPermissionByUserIdResponseBodyPageResultDataRules(ListRowPermissionByUserIdResponseBodyPageResultDataRules &&) = default ;
    ListRowPermissionByUserIdResponseBodyPageResultDataRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionByUserIdResponseBodyPageResultDataRules() = default ;
    ListRowPermissionByUserIdResponseBodyPageResultDataRules& operator=(const ListRowPermissionByUserIdResponseBodyPageResultDataRules &) = default ;
    ListRowPermissionByUserIdResponseBodyPageResultDataRules& operator=(ListRowPermissionByUserIdResponseBodyPageResultDataRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expressions_ != nullptr
        && this->isDelete_ != nullptr && this->ruleName_ != nullptr && this->scopeType_ != nullptr && this->status_ != nullptr && this->userMappingList_ != nullptr; };
    // expressions Field Functions 
    bool hasExpressions() const { return this->expressions_ != nullptr;};
    void deleteExpressions() { this->expressions_ = nullptr;};
    inline const vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesExpressions> & expressions() const { DARABONBA_PTR_GET_CONST(expressions_, vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesExpressions>) };
    inline vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesExpressions> expressions() { DARABONBA_PTR_GET(expressions_, vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesExpressions>) };
    inline ListRowPermissionByUserIdResponseBodyPageResultDataRules& setExpressions(const vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesExpressions> & expressions) { DARABONBA_PTR_SET_VALUE(expressions_, expressions) };
    inline ListRowPermissionByUserIdResponseBodyPageResultDataRules& setExpressions(vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesExpressions> && expressions) { DARABONBA_PTR_SET_RVALUE(expressions_, expressions) };


    // isDelete Field Functions 
    bool hasIsDelete() const { return this->isDelete_ != nullptr;};
    void deleteIsDelete() { this->isDelete_ = nullptr;};
    inline bool isDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, false) };
    inline ListRowPermissionByUserIdResponseBodyPageResultDataRules& setIsDelete(bool isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListRowPermissionByUserIdResponseBodyPageResultDataRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline ListRowPermissionByUserIdResponseBodyPageResultDataRules& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListRowPermissionByUserIdResponseBodyPageResultDataRules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userMappingList Field Functions 
    bool hasUserMappingList() const { return this->userMappingList_ != nullptr;};
    void deleteUserMappingList() { this->userMappingList_ = nullptr;};
    inline const vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList> & userMappingList() const { DARABONBA_PTR_GET_CONST(userMappingList_, vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList>) };
    inline vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList> userMappingList() { DARABONBA_PTR_GET(userMappingList_, vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList>) };
    inline ListRowPermissionByUserIdResponseBodyPageResultDataRules& setUserMappingList(const vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList> & userMappingList) { DARABONBA_PTR_SET_VALUE(userMappingList_, userMappingList) };
    inline ListRowPermissionByUserIdResponseBodyPageResultDataRules& setUserMappingList(vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList> && userMappingList) { DARABONBA_PTR_SET_RVALUE(userMappingList_, userMappingList) };


  protected:
    std::shared_ptr<vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesExpressions>> expressions_ = nullptr;
    std::shared_ptr<bool> isDelete_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> scopeType_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList>> userMappingList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
