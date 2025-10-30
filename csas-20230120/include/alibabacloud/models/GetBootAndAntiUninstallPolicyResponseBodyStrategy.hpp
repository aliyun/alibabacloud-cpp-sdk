// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBOOTANDANTIUNINSTALLPOLICYRESPONSEBODYSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_GETBOOTANDANTIUNINSTALLPOLICYRESPONSEBODYSTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetBootAndAntiUninstallPolicyResponseBodyStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBootAndAntiUninstallPolicyResponseBodyStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(AllowReport, allowReport_);
      DARABONBA_PTR_TO_JSON(BlockContent, blockContent_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IsAntiUninstall, isAntiUninstall_);
      DARABONBA_PTR_TO_JSON(IsBoot, isBoot_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(ReportProcessId, reportProcessId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(WhitelistUsers, whitelistUsers_);
    };
    friend void from_json(const Darabonba::Json& j, GetBootAndAntiUninstallPolicyResponseBodyStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowReport, allowReport_);
      DARABONBA_PTR_FROM_JSON(BlockContent, blockContent_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IsAntiUninstall, isAntiUninstall_);
      DARABONBA_PTR_FROM_JSON(IsBoot, isBoot_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(ReportProcessId, reportProcessId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(WhitelistUsers, whitelistUsers_);
    };
    GetBootAndAntiUninstallPolicyResponseBodyStrategy() = default ;
    GetBootAndAntiUninstallPolicyResponseBodyStrategy(const GetBootAndAntiUninstallPolicyResponseBodyStrategy &) = default ;
    GetBootAndAntiUninstallPolicyResponseBodyStrategy(GetBootAndAntiUninstallPolicyResponseBodyStrategy &&) = default ;
    GetBootAndAntiUninstallPolicyResponseBodyStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBootAndAntiUninstallPolicyResponseBodyStrategy() = default ;
    GetBootAndAntiUninstallPolicyResponseBodyStrategy& operator=(const GetBootAndAntiUninstallPolicyResponseBodyStrategy &) = default ;
    GetBootAndAntiUninstallPolicyResponseBodyStrategy& operator=(GetBootAndAntiUninstallPolicyResponseBodyStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowReport_ == nullptr
        && return this->blockContent_ == nullptr && return this->createTime_ == nullptr && return this->isAntiUninstall_ == nullptr && return this->isBoot_ == nullptr && return this->policyId_ == nullptr
        && return this->reportProcessId_ == nullptr && return this->updateTime_ == nullptr && return this->userGroupIds_ == nullptr && return this->whitelistUsers_ == nullptr; };
    // allowReport Field Functions 
    bool hasAllowReport() const { return this->allowReport_ != nullptr;};
    void deleteAllowReport() { this->allowReport_ = nullptr;};
    inline bool allowReport() const { DARABONBA_PTR_GET_DEFAULT(allowReport_, false) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setAllowReport(bool allowReport) { DARABONBA_PTR_SET_VALUE(allowReport_, allowReport) };


    // blockContent Field Functions 
    bool hasBlockContent() const { return this->blockContent_ != nullptr;};
    void deleteBlockContent() { this->blockContent_ = nullptr;};
    inline const Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent & blockContent() const { DARABONBA_PTR_GET_CONST(blockContent_, Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent) };
    inline Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent blockContent() { DARABONBA_PTR_GET(blockContent_, Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setBlockContent(const Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent & blockContent) { DARABONBA_PTR_SET_VALUE(blockContent_, blockContent) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setBlockContent(Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent && blockContent) { DARABONBA_PTR_SET_RVALUE(blockContent_, blockContent) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // isAntiUninstall Field Functions 
    bool hasIsAntiUninstall() const { return this->isAntiUninstall_ != nullptr;};
    void deleteIsAntiUninstall() { this->isAntiUninstall_ = nullptr;};
    inline bool isAntiUninstall() const { DARABONBA_PTR_GET_DEFAULT(isAntiUninstall_, false) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setIsAntiUninstall(bool isAntiUninstall) { DARABONBA_PTR_SET_VALUE(isAntiUninstall_, isAntiUninstall) };


    // isBoot Field Functions 
    bool hasIsBoot() const { return this->isBoot_ != nullptr;};
    void deleteIsBoot() { this->isBoot_ = nullptr;};
    inline bool isBoot() const { DARABONBA_PTR_GET_DEFAULT(isBoot_, false) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setIsBoot(bool isBoot) { DARABONBA_PTR_SET_VALUE(isBoot_, isBoot) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // reportProcessId Field Functions 
    bool hasReportProcessId() const { return this->reportProcessId_ != nullptr;};
    void deleteReportProcessId() { this->reportProcessId_ = nullptr;};
    inline string reportProcessId() const { DARABONBA_PTR_GET_DEFAULT(reportProcessId_, "") };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setReportProcessId(string reportProcessId) { DARABONBA_PTR_SET_VALUE(reportProcessId_, reportProcessId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelistUsers Field Functions 
    bool hasWhitelistUsers() const { return this->whitelistUsers_ != nullptr;};
    void deleteWhitelistUsers() { this->whitelistUsers_ = nullptr;};
    inline const vector<string> & whitelistUsers() const { DARABONBA_PTR_GET_CONST(whitelistUsers_, vector<string>) };
    inline vector<string> whitelistUsers() { DARABONBA_PTR_GET(whitelistUsers_, vector<string>) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setWhitelistUsers(const vector<string> & whitelistUsers) { DARABONBA_PTR_SET_VALUE(whitelistUsers_, whitelistUsers) };
    inline GetBootAndAntiUninstallPolicyResponseBodyStrategy& setWhitelistUsers(vector<string> && whitelistUsers) { DARABONBA_PTR_SET_RVALUE(whitelistUsers_, whitelistUsers) };


  protected:
    std::shared_ptr<bool> allowReport_ = nullptr;
    std::shared_ptr<Models::GetBootAndAntiUninstallPolicyResponseBodyStrategyBlockContent> blockContent_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<bool> isAntiUninstall_ = nullptr;
    std::shared_ptr<bool> isBoot_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> reportProcessId_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    std::shared_ptr<vector<string>> whitelistUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
