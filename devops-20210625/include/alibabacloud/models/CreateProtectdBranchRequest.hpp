// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateProtectdBranchRequestMergeRequestSetting.hpp>
#include <alibabacloud/models/CreateProtectdBranchRequestTestSettingDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateProtectdBranchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtectdBranchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(allowMergeRoles, allowMergeRoles_);
      DARABONBA_PTR_TO_JSON(allowMergeUserIds, allowMergeUserIds_);
      DARABONBA_PTR_TO_JSON(allowPushRoles, allowPushRoles_);
      DARABONBA_PTR_TO_JSON(allowPushUserIds, allowPushUserIds_);
      DARABONBA_PTR_TO_JSON(branch, branch_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(mergeRequestSetting, mergeRequestSetting_);
      DARABONBA_PTR_TO_JSON(testSettingDTO, testSettingDTO_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtectdBranchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(allowMergeRoles, allowMergeRoles_);
      DARABONBA_PTR_FROM_JSON(allowMergeUserIds, allowMergeUserIds_);
      DARABONBA_PTR_FROM_JSON(allowPushRoles, allowPushRoles_);
      DARABONBA_PTR_FROM_JSON(allowPushUserIds, allowPushUserIds_);
      DARABONBA_PTR_FROM_JSON(branch, branch_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(mergeRequestSetting, mergeRequestSetting_);
      DARABONBA_PTR_FROM_JSON(testSettingDTO, testSettingDTO_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    CreateProtectdBranchRequest() = default ;
    CreateProtectdBranchRequest(const CreateProtectdBranchRequest &) = default ;
    CreateProtectdBranchRequest(CreateProtectdBranchRequest &&) = default ;
    CreateProtectdBranchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtectdBranchRequest() = default ;
    CreateProtectdBranchRequest& operator=(const CreateProtectdBranchRequest &) = default ;
    CreateProtectdBranchRequest& operator=(CreateProtectdBranchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->allowMergeRoles_ == nullptr && return this->allowMergeUserIds_ == nullptr && return this->allowPushRoles_ == nullptr && return this->allowPushUserIds_ == nullptr && return this->branch_ == nullptr
        && return this->id_ == nullptr && return this->mergeRequestSetting_ == nullptr && return this->testSettingDTO_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateProtectdBranchRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // allowMergeRoles Field Functions 
    bool hasAllowMergeRoles() const { return this->allowMergeRoles_ != nullptr;};
    void deleteAllowMergeRoles() { this->allowMergeRoles_ = nullptr;};
    inline const vector<int32_t> & allowMergeRoles() const { DARABONBA_PTR_GET_CONST(allowMergeRoles_, vector<int32_t>) };
    inline vector<int32_t> allowMergeRoles() { DARABONBA_PTR_GET(allowMergeRoles_, vector<int32_t>) };
    inline CreateProtectdBranchRequest& setAllowMergeRoles(const vector<int32_t> & allowMergeRoles) { DARABONBA_PTR_SET_VALUE(allowMergeRoles_, allowMergeRoles) };
    inline CreateProtectdBranchRequest& setAllowMergeRoles(vector<int32_t> && allowMergeRoles) { DARABONBA_PTR_SET_RVALUE(allowMergeRoles_, allowMergeRoles) };


    // allowMergeUserIds Field Functions 
    bool hasAllowMergeUserIds() const { return this->allowMergeUserIds_ != nullptr;};
    void deleteAllowMergeUserIds() { this->allowMergeUserIds_ = nullptr;};
    inline const vector<string> & allowMergeUserIds() const { DARABONBA_PTR_GET_CONST(allowMergeUserIds_, vector<string>) };
    inline vector<string> allowMergeUserIds() { DARABONBA_PTR_GET(allowMergeUserIds_, vector<string>) };
    inline CreateProtectdBranchRequest& setAllowMergeUserIds(const vector<string> & allowMergeUserIds) { DARABONBA_PTR_SET_VALUE(allowMergeUserIds_, allowMergeUserIds) };
    inline CreateProtectdBranchRequest& setAllowMergeUserIds(vector<string> && allowMergeUserIds) { DARABONBA_PTR_SET_RVALUE(allowMergeUserIds_, allowMergeUserIds) };


    // allowPushRoles Field Functions 
    bool hasAllowPushRoles() const { return this->allowPushRoles_ != nullptr;};
    void deleteAllowPushRoles() { this->allowPushRoles_ = nullptr;};
    inline const vector<int32_t> & allowPushRoles() const { DARABONBA_PTR_GET_CONST(allowPushRoles_, vector<int32_t>) };
    inline vector<int32_t> allowPushRoles() { DARABONBA_PTR_GET(allowPushRoles_, vector<int32_t>) };
    inline CreateProtectdBranchRequest& setAllowPushRoles(const vector<int32_t> & allowPushRoles) { DARABONBA_PTR_SET_VALUE(allowPushRoles_, allowPushRoles) };
    inline CreateProtectdBranchRequest& setAllowPushRoles(vector<int32_t> && allowPushRoles) { DARABONBA_PTR_SET_RVALUE(allowPushRoles_, allowPushRoles) };


    // allowPushUserIds Field Functions 
    bool hasAllowPushUserIds() const { return this->allowPushUserIds_ != nullptr;};
    void deleteAllowPushUserIds() { this->allowPushUserIds_ = nullptr;};
    inline const vector<string> & allowPushUserIds() const { DARABONBA_PTR_GET_CONST(allowPushUserIds_, vector<string>) };
    inline vector<string> allowPushUserIds() { DARABONBA_PTR_GET(allowPushUserIds_, vector<string>) };
    inline CreateProtectdBranchRequest& setAllowPushUserIds(const vector<string> & allowPushUserIds) { DARABONBA_PTR_SET_VALUE(allowPushUserIds_, allowPushUserIds) };
    inline CreateProtectdBranchRequest& setAllowPushUserIds(vector<string> && allowPushUserIds) { DARABONBA_PTR_SET_RVALUE(allowPushUserIds_, allowPushUserIds) };


    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline CreateProtectdBranchRequest& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateProtectdBranchRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mergeRequestSetting Field Functions 
    bool hasMergeRequestSetting() const { return this->mergeRequestSetting_ != nullptr;};
    void deleteMergeRequestSetting() { this->mergeRequestSetting_ = nullptr;};
    inline const CreateProtectdBranchRequestMergeRequestSetting & mergeRequestSetting() const { DARABONBA_PTR_GET_CONST(mergeRequestSetting_, CreateProtectdBranchRequestMergeRequestSetting) };
    inline CreateProtectdBranchRequestMergeRequestSetting mergeRequestSetting() { DARABONBA_PTR_GET(mergeRequestSetting_, CreateProtectdBranchRequestMergeRequestSetting) };
    inline CreateProtectdBranchRequest& setMergeRequestSetting(const CreateProtectdBranchRequestMergeRequestSetting & mergeRequestSetting) { DARABONBA_PTR_SET_VALUE(mergeRequestSetting_, mergeRequestSetting) };
    inline CreateProtectdBranchRequest& setMergeRequestSetting(CreateProtectdBranchRequestMergeRequestSetting && mergeRequestSetting) { DARABONBA_PTR_SET_RVALUE(mergeRequestSetting_, mergeRequestSetting) };


    // testSettingDTO Field Functions 
    bool hasTestSettingDTO() const { return this->testSettingDTO_ != nullptr;};
    void deleteTestSettingDTO() { this->testSettingDTO_ = nullptr;};
    inline const CreateProtectdBranchRequestTestSettingDTO & testSettingDTO() const { DARABONBA_PTR_GET_CONST(testSettingDTO_, CreateProtectdBranchRequestTestSettingDTO) };
    inline CreateProtectdBranchRequestTestSettingDTO testSettingDTO() { DARABONBA_PTR_GET(testSettingDTO_, CreateProtectdBranchRequestTestSettingDTO) };
    inline CreateProtectdBranchRequest& setTestSettingDTO(const CreateProtectdBranchRequestTestSettingDTO & testSettingDTO) { DARABONBA_PTR_SET_VALUE(testSettingDTO_, testSettingDTO) };
    inline CreateProtectdBranchRequest& setTestSettingDTO(CreateProtectdBranchRequestTestSettingDTO && testSettingDTO) { DARABONBA_PTR_SET_RVALUE(testSettingDTO_, testSettingDTO) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateProtectdBranchRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> allowMergeRoles_ = nullptr;
    std::shared_ptr<vector<string>> allowMergeUserIds_ = nullptr;
    std::shared_ptr<vector<int32_t>> allowPushRoles_ = nullptr;
    std::shared_ptr<vector<string>> allowPushUserIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<CreateProtectdBranchRequestMergeRequestSetting> mergeRequestSetting_ = nullptr;
    std::shared_ptr<CreateProtectdBranchRequestTestSettingDTO> testSettingDTO_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
