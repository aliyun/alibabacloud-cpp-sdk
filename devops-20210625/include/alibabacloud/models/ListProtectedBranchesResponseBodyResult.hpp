// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROTECTEDBRANCHESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTPROTECTEDBRANCHESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProtectedBranchesResponseBodyResultAllowMergeUsers.hpp>
#include <alibabacloud/models/ListProtectedBranchesResponseBodyResultAllowPushUsers.hpp>
#include <alibabacloud/models/ListProtectedBranchesResponseBodyResultMergeRequestSetting.hpp>
#include <alibabacloud/models/ListProtectedBranchesResponseBodyResultTestSettingDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListProtectedBranchesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProtectedBranchesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(allowMergeRoles, allowMergeRoles_);
      DARABONBA_PTR_TO_JSON(allowMergeUserIds, allowMergeUserIds_);
      DARABONBA_PTR_TO_JSON(allowMergeUsers, allowMergeUsers_);
      DARABONBA_PTR_TO_JSON(allowPushRoles, allowPushRoles_);
      DARABONBA_PTR_TO_JSON(allowPushUserIds, allowPushUserIds_);
      DARABONBA_PTR_TO_JSON(allowPushUsers, allowPushUsers_);
      DARABONBA_PTR_TO_JSON(branch, branch_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(matches, matches_);
      DARABONBA_PTR_TO_JSON(mergeRequestSetting, mergeRequestSetting_);
      DARABONBA_PTR_TO_JSON(testSettingDTO, testSettingDTO_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, ListProtectedBranchesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(allowMergeRoles, allowMergeRoles_);
      DARABONBA_PTR_FROM_JSON(allowMergeUserIds, allowMergeUserIds_);
      DARABONBA_PTR_FROM_JSON(allowMergeUsers, allowMergeUsers_);
      DARABONBA_PTR_FROM_JSON(allowPushRoles, allowPushRoles_);
      DARABONBA_PTR_FROM_JSON(allowPushUserIds, allowPushUserIds_);
      DARABONBA_PTR_FROM_JSON(allowPushUsers, allowPushUsers_);
      DARABONBA_PTR_FROM_JSON(branch, branch_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(matches, matches_);
      DARABONBA_PTR_FROM_JSON(mergeRequestSetting, mergeRequestSetting_);
      DARABONBA_PTR_FROM_JSON(testSettingDTO, testSettingDTO_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    ListProtectedBranchesResponseBodyResult() = default ;
    ListProtectedBranchesResponseBodyResult(const ListProtectedBranchesResponseBodyResult &) = default ;
    ListProtectedBranchesResponseBodyResult(ListProtectedBranchesResponseBodyResult &&) = default ;
    ListProtectedBranchesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProtectedBranchesResponseBodyResult() = default ;
    ListProtectedBranchesResponseBodyResult& operator=(const ListProtectedBranchesResponseBodyResult &) = default ;
    ListProtectedBranchesResponseBodyResult& operator=(ListProtectedBranchesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowMergeRoles_ == nullptr
        && return this->allowMergeUserIds_ == nullptr && return this->allowMergeUsers_ == nullptr && return this->allowPushRoles_ == nullptr && return this->allowPushUserIds_ == nullptr && return this->allowPushUsers_ == nullptr
        && return this->branch_ == nullptr && return this->createdAt_ == nullptr && return this->id_ == nullptr && return this->matches_ == nullptr && return this->mergeRequestSetting_ == nullptr
        && return this->testSettingDTO_ == nullptr && return this->updatedAt_ == nullptr; };
    // allowMergeRoles Field Functions 
    bool hasAllowMergeRoles() const { return this->allowMergeRoles_ != nullptr;};
    void deleteAllowMergeRoles() { this->allowMergeRoles_ = nullptr;};
    inline const vector<int32_t> & allowMergeRoles() const { DARABONBA_PTR_GET_CONST(allowMergeRoles_, vector<int32_t>) };
    inline vector<int32_t> allowMergeRoles() { DARABONBA_PTR_GET(allowMergeRoles_, vector<int32_t>) };
    inline ListProtectedBranchesResponseBodyResult& setAllowMergeRoles(const vector<int32_t> & allowMergeRoles) { DARABONBA_PTR_SET_VALUE(allowMergeRoles_, allowMergeRoles) };
    inline ListProtectedBranchesResponseBodyResult& setAllowMergeRoles(vector<int32_t> && allowMergeRoles) { DARABONBA_PTR_SET_RVALUE(allowMergeRoles_, allowMergeRoles) };


    // allowMergeUserIds Field Functions 
    bool hasAllowMergeUserIds() const { return this->allowMergeUserIds_ != nullptr;};
    void deleteAllowMergeUserIds() { this->allowMergeUserIds_ = nullptr;};
    inline const vector<int64_t> & allowMergeUserIds() const { DARABONBA_PTR_GET_CONST(allowMergeUserIds_, vector<int64_t>) };
    inline vector<int64_t> allowMergeUserIds() { DARABONBA_PTR_GET(allowMergeUserIds_, vector<int64_t>) };
    inline ListProtectedBranchesResponseBodyResult& setAllowMergeUserIds(const vector<int64_t> & allowMergeUserIds) { DARABONBA_PTR_SET_VALUE(allowMergeUserIds_, allowMergeUserIds) };
    inline ListProtectedBranchesResponseBodyResult& setAllowMergeUserIds(vector<int64_t> && allowMergeUserIds) { DARABONBA_PTR_SET_RVALUE(allowMergeUserIds_, allowMergeUserIds) };


    // allowMergeUsers Field Functions 
    bool hasAllowMergeUsers() const { return this->allowMergeUsers_ != nullptr;};
    void deleteAllowMergeUsers() { this->allowMergeUsers_ = nullptr;};
    inline const vector<Models::ListProtectedBranchesResponseBodyResultAllowMergeUsers> & allowMergeUsers() const { DARABONBA_PTR_GET_CONST(allowMergeUsers_, vector<Models::ListProtectedBranchesResponseBodyResultAllowMergeUsers>) };
    inline vector<Models::ListProtectedBranchesResponseBodyResultAllowMergeUsers> allowMergeUsers() { DARABONBA_PTR_GET(allowMergeUsers_, vector<Models::ListProtectedBranchesResponseBodyResultAllowMergeUsers>) };
    inline ListProtectedBranchesResponseBodyResult& setAllowMergeUsers(const vector<Models::ListProtectedBranchesResponseBodyResultAllowMergeUsers> & allowMergeUsers) { DARABONBA_PTR_SET_VALUE(allowMergeUsers_, allowMergeUsers) };
    inline ListProtectedBranchesResponseBodyResult& setAllowMergeUsers(vector<Models::ListProtectedBranchesResponseBodyResultAllowMergeUsers> && allowMergeUsers) { DARABONBA_PTR_SET_RVALUE(allowMergeUsers_, allowMergeUsers) };


    // allowPushRoles Field Functions 
    bool hasAllowPushRoles() const { return this->allowPushRoles_ != nullptr;};
    void deleteAllowPushRoles() { this->allowPushRoles_ = nullptr;};
    inline const vector<int32_t> & allowPushRoles() const { DARABONBA_PTR_GET_CONST(allowPushRoles_, vector<int32_t>) };
    inline vector<int32_t> allowPushRoles() { DARABONBA_PTR_GET(allowPushRoles_, vector<int32_t>) };
    inline ListProtectedBranchesResponseBodyResult& setAllowPushRoles(const vector<int32_t> & allowPushRoles) { DARABONBA_PTR_SET_VALUE(allowPushRoles_, allowPushRoles) };
    inline ListProtectedBranchesResponseBodyResult& setAllowPushRoles(vector<int32_t> && allowPushRoles) { DARABONBA_PTR_SET_RVALUE(allowPushRoles_, allowPushRoles) };


    // allowPushUserIds Field Functions 
    bool hasAllowPushUserIds() const { return this->allowPushUserIds_ != nullptr;};
    void deleteAllowPushUserIds() { this->allowPushUserIds_ = nullptr;};
    inline const vector<int64_t> & allowPushUserIds() const { DARABONBA_PTR_GET_CONST(allowPushUserIds_, vector<int64_t>) };
    inline vector<int64_t> allowPushUserIds() { DARABONBA_PTR_GET(allowPushUserIds_, vector<int64_t>) };
    inline ListProtectedBranchesResponseBodyResult& setAllowPushUserIds(const vector<int64_t> & allowPushUserIds) { DARABONBA_PTR_SET_VALUE(allowPushUserIds_, allowPushUserIds) };
    inline ListProtectedBranchesResponseBodyResult& setAllowPushUserIds(vector<int64_t> && allowPushUserIds) { DARABONBA_PTR_SET_RVALUE(allowPushUserIds_, allowPushUserIds) };


    // allowPushUsers Field Functions 
    bool hasAllowPushUsers() const { return this->allowPushUsers_ != nullptr;};
    void deleteAllowPushUsers() { this->allowPushUsers_ = nullptr;};
    inline const vector<Models::ListProtectedBranchesResponseBodyResultAllowPushUsers> & allowPushUsers() const { DARABONBA_PTR_GET_CONST(allowPushUsers_, vector<Models::ListProtectedBranchesResponseBodyResultAllowPushUsers>) };
    inline vector<Models::ListProtectedBranchesResponseBodyResultAllowPushUsers> allowPushUsers() { DARABONBA_PTR_GET(allowPushUsers_, vector<Models::ListProtectedBranchesResponseBodyResultAllowPushUsers>) };
    inline ListProtectedBranchesResponseBodyResult& setAllowPushUsers(const vector<Models::ListProtectedBranchesResponseBodyResultAllowPushUsers> & allowPushUsers) { DARABONBA_PTR_SET_VALUE(allowPushUsers_, allowPushUsers) };
    inline ListProtectedBranchesResponseBodyResult& setAllowPushUsers(vector<Models::ListProtectedBranchesResponseBodyResultAllowPushUsers> && allowPushUsers) { DARABONBA_PTR_SET_RVALUE(allowPushUsers_, allowPushUsers) };


    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline ListProtectedBranchesResponseBodyResult& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListProtectedBranchesResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListProtectedBranchesResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matches Field Functions 
    bool hasMatches() const { return this->matches_ != nullptr;};
    void deleteMatches() { this->matches_ = nullptr;};
    inline const vector<string> & matches() const { DARABONBA_PTR_GET_CONST(matches_, vector<string>) };
    inline vector<string> matches() { DARABONBA_PTR_GET(matches_, vector<string>) };
    inline ListProtectedBranchesResponseBodyResult& setMatches(const vector<string> & matches) { DARABONBA_PTR_SET_VALUE(matches_, matches) };
    inline ListProtectedBranchesResponseBodyResult& setMatches(vector<string> && matches) { DARABONBA_PTR_SET_RVALUE(matches_, matches) };


    // mergeRequestSetting Field Functions 
    bool hasMergeRequestSetting() const { return this->mergeRequestSetting_ != nullptr;};
    void deleteMergeRequestSetting() { this->mergeRequestSetting_ = nullptr;};
    inline const Models::ListProtectedBranchesResponseBodyResultMergeRequestSetting & mergeRequestSetting() const { DARABONBA_PTR_GET_CONST(mergeRequestSetting_, Models::ListProtectedBranchesResponseBodyResultMergeRequestSetting) };
    inline Models::ListProtectedBranchesResponseBodyResultMergeRequestSetting mergeRequestSetting() { DARABONBA_PTR_GET(mergeRequestSetting_, Models::ListProtectedBranchesResponseBodyResultMergeRequestSetting) };
    inline ListProtectedBranchesResponseBodyResult& setMergeRequestSetting(const Models::ListProtectedBranchesResponseBodyResultMergeRequestSetting & mergeRequestSetting) { DARABONBA_PTR_SET_VALUE(mergeRequestSetting_, mergeRequestSetting) };
    inline ListProtectedBranchesResponseBodyResult& setMergeRequestSetting(Models::ListProtectedBranchesResponseBodyResultMergeRequestSetting && mergeRequestSetting) { DARABONBA_PTR_SET_RVALUE(mergeRequestSetting_, mergeRequestSetting) };


    // testSettingDTO Field Functions 
    bool hasTestSettingDTO() const { return this->testSettingDTO_ != nullptr;};
    void deleteTestSettingDTO() { this->testSettingDTO_ = nullptr;};
    inline const Models::ListProtectedBranchesResponseBodyResultTestSettingDTO & testSettingDTO() const { DARABONBA_PTR_GET_CONST(testSettingDTO_, Models::ListProtectedBranchesResponseBodyResultTestSettingDTO) };
    inline Models::ListProtectedBranchesResponseBodyResultTestSettingDTO testSettingDTO() { DARABONBA_PTR_GET(testSettingDTO_, Models::ListProtectedBranchesResponseBodyResultTestSettingDTO) };
    inline ListProtectedBranchesResponseBodyResult& setTestSettingDTO(const Models::ListProtectedBranchesResponseBodyResultTestSettingDTO & testSettingDTO) { DARABONBA_PTR_SET_VALUE(testSettingDTO_, testSettingDTO) };
    inline ListProtectedBranchesResponseBodyResult& setTestSettingDTO(Models::ListProtectedBranchesResponseBodyResultTestSettingDTO && testSettingDTO) { DARABONBA_PTR_SET_RVALUE(testSettingDTO_, testSettingDTO) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline ListProtectedBranchesResponseBodyResult& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    std::shared_ptr<vector<int32_t>> allowMergeRoles_ = nullptr;
    std::shared_ptr<vector<int64_t>> allowMergeUserIds_ = nullptr;
    std::shared_ptr<vector<Models::ListProtectedBranchesResponseBodyResultAllowMergeUsers>> allowMergeUsers_ = nullptr;
    std::shared_ptr<vector<int32_t>> allowPushRoles_ = nullptr;
    std::shared_ptr<vector<int64_t>> allowPushUserIds_ = nullptr;
    std::shared_ptr<vector<Models::ListProtectedBranchesResponseBodyResultAllowPushUsers>> allowPushUsers_ = nullptr;
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<string>> matches_ = nullptr;
    std::shared_ptr<Models::ListProtectedBranchesResponseBodyResultMergeRequestSetting> mergeRequestSetting_ = nullptr;
    std::shared_ptr<Models::ListProtectedBranchesResponseBodyResultTestSettingDTO> testSettingDTO_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
