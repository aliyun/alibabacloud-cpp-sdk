// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHREQUESTMERGEREQUESTSETTING_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHREQUESTMERGEREQUESTSETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateProtectdBranchRequestMergeRequestSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtectdBranchRequestMergeRequestSetting& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateProtectdBranchRequestMergeRequestSetting& obj) { 
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
    CreateProtectdBranchRequestMergeRequestSetting() = default ;
    CreateProtectdBranchRequestMergeRequestSetting(const CreateProtectdBranchRequestMergeRequestSetting &) = default ;
    CreateProtectdBranchRequestMergeRequestSetting(CreateProtectdBranchRequestMergeRequestSetting &&) = default ;
    CreateProtectdBranchRequestMergeRequestSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtectdBranchRequestMergeRequestSetting() = default ;
    CreateProtectdBranchRequestMergeRequestSetting& operator=(const CreateProtectdBranchRequestMergeRequestSetting &) = default ;
    CreateProtectdBranchRequestMergeRequestSetting& operator=(CreateProtectdBranchRequestMergeRequestSetting &&) = default ;
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
    inline CreateProtectdBranchRequestMergeRequestSetting& setAllowMergeRequestRoles(const vector<int32_t> & allowMergeRequestRoles) { DARABONBA_PTR_SET_VALUE(allowMergeRequestRoles_, allowMergeRequestRoles) };
    inline CreateProtectdBranchRequestMergeRequestSetting& setAllowMergeRequestRoles(vector<int32_t> && allowMergeRequestRoles) { DARABONBA_PTR_SET_RVALUE(allowMergeRequestRoles_, allowMergeRequestRoles) };


    // defaultAssignees Field Functions 
    bool hasDefaultAssignees() const { return this->defaultAssignees_ != nullptr;};
    void deleteDefaultAssignees() { this->defaultAssignees_ = nullptr;};
    inline const vector<string> & defaultAssignees() const { DARABONBA_PTR_GET_CONST(defaultAssignees_, vector<string>) };
    inline vector<string> defaultAssignees() { DARABONBA_PTR_GET(defaultAssignees_, vector<string>) };
    inline CreateProtectdBranchRequestMergeRequestSetting& setDefaultAssignees(const vector<string> & defaultAssignees) { DARABONBA_PTR_SET_VALUE(defaultAssignees_, defaultAssignees) };
    inline CreateProtectdBranchRequestMergeRequestSetting& setDefaultAssignees(vector<string> && defaultAssignees) { DARABONBA_PTR_SET_RVALUE(defaultAssignees_, defaultAssignees) };


    // isAllowSelfApproval Field Functions 
    bool hasIsAllowSelfApproval() const { return this->isAllowSelfApproval_ != nullptr;};
    void deleteIsAllowSelfApproval() { this->isAllowSelfApproval_ = nullptr;};
    inline bool isAllowSelfApproval() const { DARABONBA_PTR_GET_DEFAULT(isAllowSelfApproval_, false) };
    inline CreateProtectdBranchRequestMergeRequestSetting& setIsAllowSelfApproval(bool isAllowSelfApproval) { DARABONBA_PTR_SET_VALUE(isAllowSelfApproval_, isAllowSelfApproval) };


    // isRequireDiscussionProcessed Field Functions 
    bool hasIsRequireDiscussionProcessed() const { return this->isRequireDiscussionProcessed_ != nullptr;};
    void deleteIsRequireDiscussionProcessed() { this->isRequireDiscussionProcessed_ = nullptr;};
    inline bool isRequireDiscussionProcessed() const { DARABONBA_PTR_GET_DEFAULT(isRequireDiscussionProcessed_, false) };
    inline CreateProtectdBranchRequestMergeRequestSetting& setIsRequireDiscussionProcessed(bool isRequireDiscussionProcessed) { DARABONBA_PTR_SET_VALUE(isRequireDiscussionProcessed_, isRequireDiscussionProcessed) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline CreateProtectdBranchRequestMergeRequestSetting& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // isResetApprovalWhenNewPush Field Functions 
    bool hasIsResetApprovalWhenNewPush() const { return this->isResetApprovalWhenNewPush_ != nullptr;};
    void deleteIsResetApprovalWhenNewPush() { this->isResetApprovalWhenNewPush_ = nullptr;};
    inline bool isResetApprovalWhenNewPush() const { DARABONBA_PTR_GET_DEFAULT(isResetApprovalWhenNewPush_, false) };
    inline CreateProtectdBranchRequestMergeRequestSetting& setIsResetApprovalWhenNewPush(bool isResetApprovalWhenNewPush) { DARABONBA_PTR_SET_VALUE(isResetApprovalWhenNewPush_, isResetApprovalWhenNewPush) };


    // minimumApproval Field Functions 
    bool hasMinimumApproval() const { return this->minimumApproval_ != nullptr;};
    void deleteMinimumApproval() { this->minimumApproval_ = nullptr;};
    inline int32_t minimumApproval() const { DARABONBA_PTR_GET_DEFAULT(minimumApproval_, 0) };
    inline CreateProtectdBranchRequestMergeRequestSetting& setMinimumApproval(int32_t minimumApproval) { DARABONBA_PTR_SET_VALUE(minimumApproval_, minimumApproval) };


    // mrMode Field Functions 
    bool hasMrMode() const { return this->mrMode_ != nullptr;};
    void deleteMrMode() { this->mrMode_ = nullptr;};
    inline string mrMode() const { DARABONBA_PTR_GET_DEFAULT(mrMode_, "") };
    inline CreateProtectdBranchRequestMergeRequestSetting& setMrMode(string mrMode) { DARABONBA_PTR_SET_VALUE(mrMode_, mrMode) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline string whiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
    inline CreateProtectdBranchRequestMergeRequestSetting& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    std::shared_ptr<vector<int32_t>> allowMergeRequestRoles_ = nullptr;
    std::shared_ptr<vector<string>> defaultAssignees_ = nullptr;
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
