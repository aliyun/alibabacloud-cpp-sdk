// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROTECTEDBRANCHESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROTECTEDBRANCHESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateProtectedBranchesResponseBodyResultMergeRequestSetting.hpp>
#include <alibabacloud/models/UpdateProtectedBranchesResponseBodyResultTestSettingDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProtectedBranchesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProtectedBranchesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(allowMergeRoles, allowMergeRoles_);
      DARABONBA_PTR_TO_JSON(allowMergeUserIds, allowMergeUserIds_);
      DARABONBA_PTR_TO_JSON(allowPushRoles, allowPushRoles_);
      DARABONBA_PTR_TO_JSON(allowPushUserIds, allowPushUserIds_);
      DARABONBA_PTR_TO_JSON(branch, branch_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(mergeRequestSetting, mergeRequestSetting_);
      DARABONBA_PTR_TO_JSON(testSettingDTO, testSettingDTO_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProtectedBranchesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(allowMergeRoles, allowMergeRoles_);
      DARABONBA_PTR_FROM_JSON(allowMergeUserIds, allowMergeUserIds_);
      DARABONBA_PTR_FROM_JSON(allowPushRoles, allowPushRoles_);
      DARABONBA_PTR_FROM_JSON(allowPushUserIds, allowPushUserIds_);
      DARABONBA_PTR_FROM_JSON(branch, branch_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(mergeRequestSetting, mergeRequestSetting_);
      DARABONBA_PTR_FROM_JSON(testSettingDTO, testSettingDTO_);
    };
    UpdateProtectedBranchesResponseBodyResult() = default ;
    UpdateProtectedBranchesResponseBodyResult(const UpdateProtectedBranchesResponseBodyResult &) = default ;
    UpdateProtectedBranchesResponseBodyResult(UpdateProtectedBranchesResponseBodyResult &&) = default ;
    UpdateProtectedBranchesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProtectedBranchesResponseBodyResult() = default ;
    UpdateProtectedBranchesResponseBodyResult& operator=(const UpdateProtectedBranchesResponseBodyResult &) = default ;
    UpdateProtectedBranchesResponseBodyResult& operator=(UpdateProtectedBranchesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowMergeRoles_ == nullptr
        && return this->allowMergeUserIds_ == nullptr && return this->allowPushRoles_ == nullptr && return this->allowPushUserIds_ == nullptr && return this->branch_ == nullptr && return this->id_ == nullptr
        && return this->mergeRequestSetting_ == nullptr && return this->testSettingDTO_ == nullptr; };
    // allowMergeRoles Field Functions 
    bool hasAllowMergeRoles() const { return this->allowMergeRoles_ != nullptr;};
    void deleteAllowMergeRoles() { this->allowMergeRoles_ = nullptr;};
    inline const vector<int32_t> & allowMergeRoles() const { DARABONBA_PTR_GET_CONST(allowMergeRoles_, vector<int32_t>) };
    inline vector<int32_t> allowMergeRoles() { DARABONBA_PTR_GET(allowMergeRoles_, vector<int32_t>) };
    inline UpdateProtectedBranchesResponseBodyResult& setAllowMergeRoles(const vector<int32_t> & allowMergeRoles) { DARABONBA_PTR_SET_VALUE(allowMergeRoles_, allowMergeRoles) };
    inline UpdateProtectedBranchesResponseBodyResult& setAllowMergeRoles(vector<int32_t> && allowMergeRoles) { DARABONBA_PTR_SET_RVALUE(allowMergeRoles_, allowMergeRoles) };


    // allowMergeUserIds Field Functions 
    bool hasAllowMergeUserIds() const { return this->allowMergeUserIds_ != nullptr;};
    void deleteAllowMergeUserIds() { this->allowMergeUserIds_ = nullptr;};
    inline const vector<int64_t> & allowMergeUserIds() const { DARABONBA_PTR_GET_CONST(allowMergeUserIds_, vector<int64_t>) };
    inline vector<int64_t> allowMergeUserIds() { DARABONBA_PTR_GET(allowMergeUserIds_, vector<int64_t>) };
    inline UpdateProtectedBranchesResponseBodyResult& setAllowMergeUserIds(const vector<int64_t> & allowMergeUserIds) { DARABONBA_PTR_SET_VALUE(allowMergeUserIds_, allowMergeUserIds) };
    inline UpdateProtectedBranchesResponseBodyResult& setAllowMergeUserIds(vector<int64_t> && allowMergeUserIds) { DARABONBA_PTR_SET_RVALUE(allowMergeUserIds_, allowMergeUserIds) };


    // allowPushRoles Field Functions 
    bool hasAllowPushRoles() const { return this->allowPushRoles_ != nullptr;};
    void deleteAllowPushRoles() { this->allowPushRoles_ = nullptr;};
    inline const vector<int32_t> & allowPushRoles() const { DARABONBA_PTR_GET_CONST(allowPushRoles_, vector<int32_t>) };
    inline vector<int32_t> allowPushRoles() { DARABONBA_PTR_GET(allowPushRoles_, vector<int32_t>) };
    inline UpdateProtectedBranchesResponseBodyResult& setAllowPushRoles(const vector<int32_t> & allowPushRoles) { DARABONBA_PTR_SET_VALUE(allowPushRoles_, allowPushRoles) };
    inline UpdateProtectedBranchesResponseBodyResult& setAllowPushRoles(vector<int32_t> && allowPushRoles) { DARABONBA_PTR_SET_RVALUE(allowPushRoles_, allowPushRoles) };


    // allowPushUserIds Field Functions 
    bool hasAllowPushUserIds() const { return this->allowPushUserIds_ != nullptr;};
    void deleteAllowPushUserIds() { this->allowPushUserIds_ = nullptr;};
    inline const vector<int64_t> & allowPushUserIds() const { DARABONBA_PTR_GET_CONST(allowPushUserIds_, vector<int64_t>) };
    inline vector<int64_t> allowPushUserIds() { DARABONBA_PTR_GET(allowPushUserIds_, vector<int64_t>) };
    inline UpdateProtectedBranchesResponseBodyResult& setAllowPushUserIds(const vector<int64_t> & allowPushUserIds) { DARABONBA_PTR_SET_VALUE(allowPushUserIds_, allowPushUserIds) };
    inline UpdateProtectedBranchesResponseBodyResult& setAllowPushUserIds(vector<int64_t> && allowPushUserIds) { DARABONBA_PTR_SET_RVALUE(allowPushUserIds_, allowPushUserIds) };


    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline UpdateProtectedBranchesResponseBodyResult& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateProtectedBranchesResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mergeRequestSetting Field Functions 
    bool hasMergeRequestSetting() const { return this->mergeRequestSetting_ != nullptr;};
    void deleteMergeRequestSetting() { this->mergeRequestSetting_ = nullptr;};
    inline const Models::UpdateProtectedBranchesResponseBodyResultMergeRequestSetting & mergeRequestSetting() const { DARABONBA_PTR_GET_CONST(mergeRequestSetting_, Models::UpdateProtectedBranchesResponseBodyResultMergeRequestSetting) };
    inline Models::UpdateProtectedBranchesResponseBodyResultMergeRequestSetting mergeRequestSetting() { DARABONBA_PTR_GET(mergeRequestSetting_, Models::UpdateProtectedBranchesResponseBodyResultMergeRequestSetting) };
    inline UpdateProtectedBranchesResponseBodyResult& setMergeRequestSetting(const Models::UpdateProtectedBranchesResponseBodyResultMergeRequestSetting & mergeRequestSetting) { DARABONBA_PTR_SET_VALUE(mergeRequestSetting_, mergeRequestSetting) };
    inline UpdateProtectedBranchesResponseBodyResult& setMergeRequestSetting(Models::UpdateProtectedBranchesResponseBodyResultMergeRequestSetting && mergeRequestSetting) { DARABONBA_PTR_SET_RVALUE(mergeRequestSetting_, mergeRequestSetting) };


    // testSettingDTO Field Functions 
    bool hasTestSettingDTO() const { return this->testSettingDTO_ != nullptr;};
    void deleteTestSettingDTO() { this->testSettingDTO_ = nullptr;};
    inline const Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTO & testSettingDTO() const { DARABONBA_PTR_GET_CONST(testSettingDTO_, Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTO) };
    inline Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTO testSettingDTO() { DARABONBA_PTR_GET(testSettingDTO_, Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTO) };
    inline UpdateProtectedBranchesResponseBodyResult& setTestSettingDTO(const Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTO & testSettingDTO) { DARABONBA_PTR_SET_VALUE(testSettingDTO_, testSettingDTO) };
    inline UpdateProtectedBranchesResponseBodyResult& setTestSettingDTO(Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTO && testSettingDTO) { DARABONBA_PTR_SET_RVALUE(testSettingDTO_, testSettingDTO) };


  protected:
    std::shared_ptr<vector<int32_t>> allowMergeRoles_ = nullptr;
    std::shared_ptr<vector<int64_t>> allowMergeUserIds_ = nullptr;
    std::shared_ptr<vector<int32_t>> allowPushRoles_ = nullptr;
    std::shared_ptr<vector<int64_t>> allowPushUserIds_ = nullptr;
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<Models::UpdateProtectedBranchesResponseBodyResultMergeRequestSetting> mergeRequestSetting_ = nullptr;
    std::shared_ptr<Models::UpdateProtectedBranchesResponseBodyResultTestSettingDTO> testSettingDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
