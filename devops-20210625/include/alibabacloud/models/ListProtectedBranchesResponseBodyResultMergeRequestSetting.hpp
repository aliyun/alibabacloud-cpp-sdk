// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROTECTEDBRANCHESRESPONSEBODYRESULTMERGEREQUESTSETTING_HPP_
#define ALIBABACLOUD_MODELS_LISTPROTECTEDBRANCHESRESPONSEBODYRESULTMERGEREQUESTSETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProtectedBranchesResponseBodyResultMergeRequestSettingDefaultAssignees.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListProtectedBranchesResponseBodyResultMergeRequestSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProtectedBranchesResponseBodyResultMergeRequestSetting& obj) { 
      DARABONBA_PTR_TO_JSON(allowMergeRequestRoles, allowMergeRequestRoles_);
      DARABONBA_PTR_TO_JSON(defaultAssignees, defaultAssignees_);
      DARABONBA_PTR_TO_JSON(isAllowSelfApproval, isAllowSelfApproval_);
      DARABONBA_PTR_TO_JSON(isRequireDiscussionProcessed, isRequireDiscussionProcessed_);
      DARABONBA_PTR_TO_JSON(isRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(isResetApprovalWhenNewPush, isResetApprovalWhenNewPush_);
      DARABONBA_PTR_TO_JSON(minimumApproval, minimumApproval_);
      DARABONBA_PTR_TO_JSON(mrMode, mrMode_);
      DARABONBA_PTR_TO_JSON(whiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, ListProtectedBranchesResponseBodyResultMergeRequestSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(allowMergeRequestRoles, allowMergeRequestRoles_);
      DARABONBA_PTR_FROM_JSON(defaultAssignees, defaultAssignees_);
      DARABONBA_PTR_FROM_JSON(isAllowSelfApproval, isAllowSelfApproval_);
      DARABONBA_PTR_FROM_JSON(isRequireDiscussionProcessed, isRequireDiscussionProcessed_);
      DARABONBA_PTR_FROM_JSON(isRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(isResetApprovalWhenNewPush, isResetApprovalWhenNewPush_);
      DARABONBA_PTR_FROM_JSON(minimumApproval, minimumApproval_);
      DARABONBA_PTR_FROM_JSON(mrMode, mrMode_);
      DARABONBA_PTR_FROM_JSON(whiteList, whiteList_);
    };
    ListProtectedBranchesResponseBodyResultMergeRequestSetting() = default ;
    ListProtectedBranchesResponseBodyResultMergeRequestSetting(const ListProtectedBranchesResponseBodyResultMergeRequestSetting &) = default ;
    ListProtectedBranchesResponseBodyResultMergeRequestSetting(ListProtectedBranchesResponseBodyResultMergeRequestSetting &&) = default ;
    ListProtectedBranchesResponseBodyResultMergeRequestSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProtectedBranchesResponseBodyResultMergeRequestSetting() = default ;
    ListProtectedBranchesResponseBodyResultMergeRequestSetting& operator=(const ListProtectedBranchesResponseBodyResultMergeRequestSetting &) = default ;
    ListProtectedBranchesResponseBodyResultMergeRequestSetting& operator=(ListProtectedBranchesResponseBodyResultMergeRequestSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowMergeRequestRoles_ == nullptr
        && return this->defaultAssignees_ == nullptr && return this->isAllowSelfApproval_ == nullptr && return this->isRequireDiscussionProcessed_ == nullptr && return this->isRequired_ == nullptr && return this->isResetApprovalWhenNewPush_ == nullptr
        && return this->minimumApproval_ == nullptr && return this->mrMode_ == nullptr && return this->whiteList_ == nullptr; };
    // allowMergeRequestRoles Field Functions 
    bool hasAllowMergeRequestRoles() const { return this->allowMergeRequestRoles_ != nullptr;};
    void deleteAllowMergeRequestRoles() { this->allowMergeRequestRoles_ = nullptr;};
    inline const vector<int32_t> & allowMergeRequestRoles() const { DARABONBA_PTR_GET_CONST(allowMergeRequestRoles_, vector<int32_t>) };
    inline vector<int32_t> allowMergeRequestRoles() { DARABONBA_PTR_GET(allowMergeRequestRoles_, vector<int32_t>) };
    inline ListProtectedBranchesResponseBodyResultMergeRequestSetting& setAllowMergeRequestRoles(const vector<int32_t> & allowMergeRequestRoles) { DARABONBA_PTR_SET_VALUE(allowMergeRequestRoles_, allowMergeRequestRoles) };
    inline ListProtectedBranchesResponseBodyResultMergeRequestSetting& setAllowMergeRequestRoles(vector<int32_t> && allowMergeRequestRoles) { DARABONBA_PTR_SET_RVALUE(allowMergeRequestRoles_, allowMergeRequestRoles) };


    // defaultAssignees Field Functions 
    bool hasDefaultAssignees() const { return this->defaultAssignees_ != nullptr;};
    void deleteDefaultAssignees() { this->defaultAssignees_ = nullptr;};
    inline const vector<Models::ListProtectedBranchesResponseBodyResultMergeRequestSettingDefaultAssignees> & defaultAssignees() const { DARABONBA_PTR_GET_CONST(defaultAssignees_, vector<Models::ListProtectedBranchesResponseBodyResultMergeRequestSettingDefaultAssignees>) };
    inline vector<Models::ListProtectedBranchesResponseBodyResultMergeRequestSettingDefaultAssignees> defaultAssignees() { DARABONBA_PTR_GET(defaultAssignees_, vector<Models::ListProtectedBranchesResponseBodyResultMergeRequestSettingDefaultAssignees>) };
    inline ListProtectedBranchesResponseBodyResultMergeRequestSetting& setDefaultAssignees(const vector<Models::ListProtectedBranchesResponseBodyResultMergeRequestSettingDefaultAssignees> & defaultAssignees) { DARABONBA_PTR_SET_VALUE(defaultAssignees_, defaultAssignees) };
    inline ListProtectedBranchesResponseBodyResultMergeRequestSetting& setDefaultAssignees(vector<Models::ListProtectedBranchesResponseBodyResultMergeRequestSettingDefaultAssignees> && defaultAssignees) { DARABONBA_PTR_SET_RVALUE(defaultAssignees_, defaultAssignees) };


    // isAllowSelfApproval Field Functions 
    bool hasIsAllowSelfApproval() const { return this->isAllowSelfApproval_ != nullptr;};
    void deleteIsAllowSelfApproval() { this->isAllowSelfApproval_ = nullptr;};
    inline bool isAllowSelfApproval() const { DARABONBA_PTR_GET_DEFAULT(isAllowSelfApproval_, false) };
    inline ListProtectedBranchesResponseBodyResultMergeRequestSetting& setIsAllowSelfApproval(bool isAllowSelfApproval) { DARABONBA_PTR_SET_VALUE(isAllowSelfApproval_, isAllowSelfApproval) };


    // isRequireDiscussionProcessed Field Functions 
    bool hasIsRequireDiscussionProcessed() const { return this->isRequireDiscussionProcessed_ != nullptr;};
    void deleteIsRequireDiscussionProcessed() { this->isRequireDiscussionProcessed_ = nullptr;};
    inline bool isRequireDiscussionProcessed() const { DARABONBA_PTR_GET_DEFAULT(isRequireDiscussionProcessed_, false) };
    inline ListProtectedBranchesResponseBodyResultMergeRequestSetting& setIsRequireDiscussionProcessed(bool isRequireDiscussionProcessed) { DARABONBA_PTR_SET_VALUE(isRequireDiscussionProcessed_, isRequireDiscussionProcessed) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline ListProtectedBranchesResponseBodyResultMergeRequestSetting& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // isResetApprovalWhenNewPush Field Functions 
    bool hasIsResetApprovalWhenNewPush() const { return this->isResetApprovalWhenNewPush_ != nullptr;};
    void deleteIsResetApprovalWhenNewPush() { this->isResetApprovalWhenNewPush_ = nullptr;};
    inline bool isResetApprovalWhenNewPush() const { DARABONBA_PTR_GET_DEFAULT(isResetApprovalWhenNewPush_, false) };
    inline ListProtectedBranchesResponseBodyResultMergeRequestSetting& setIsResetApprovalWhenNewPush(bool isResetApprovalWhenNewPush) { DARABONBA_PTR_SET_VALUE(isResetApprovalWhenNewPush_, isResetApprovalWhenNewPush) };


    // minimumApproval Field Functions 
    bool hasMinimumApproval() const { return this->minimumApproval_ != nullptr;};
    void deleteMinimumApproval() { this->minimumApproval_ = nullptr;};
    inline int32_t minimumApproval() const { DARABONBA_PTR_GET_DEFAULT(minimumApproval_, 0) };
    inline ListProtectedBranchesResponseBodyResultMergeRequestSetting& setMinimumApproval(int32_t minimumApproval) { DARABONBA_PTR_SET_VALUE(minimumApproval_, minimumApproval) };


    // mrMode Field Functions 
    bool hasMrMode() const { return this->mrMode_ != nullptr;};
    void deleteMrMode() { this->mrMode_ = nullptr;};
    inline string mrMode() const { DARABONBA_PTR_GET_DEFAULT(mrMode_, "") };
    inline ListProtectedBranchesResponseBodyResultMergeRequestSetting& setMrMode(string mrMode) { DARABONBA_PTR_SET_VALUE(mrMode_, mrMode) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline string whiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
    inline ListProtectedBranchesResponseBodyResultMergeRequestSetting& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    std::shared_ptr<vector<int32_t>> allowMergeRequestRoles_ = nullptr;
    std::shared_ptr<vector<Models::ListProtectedBranchesResponseBodyResultMergeRequestSettingDefaultAssignees>> defaultAssignees_ = nullptr;
    std::shared_ptr<bool> isAllowSelfApproval_ = nullptr;
    std::shared_ptr<bool> isRequireDiscussionProcessed_ = nullptr;
    std::shared_ptr<bool> isRequired_ = nullptr;
    std::shared_ptr<bool> isResetApprovalWhenNewPush_ = nullptr;
    std::shared_ptr<int32_t> minimumApproval_ = nullptr;
    std::shared_ptr<string> mrMode_ = nullptr;
    std::shared_ptr<string> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
