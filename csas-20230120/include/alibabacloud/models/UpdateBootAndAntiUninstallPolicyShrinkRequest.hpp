// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateBootAndAntiUninstallPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBootAndAntiUninstallPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowReport, allowReport_);
      DARABONBA_PTR_TO_JSON(BlockContent, blockContentShrink_);
      DARABONBA_PTR_TO_JSON(IsAntiUninstall, isAntiUninstall_);
      DARABONBA_PTR_TO_JSON(IsBoot, isBoot_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(WhitelistUsers, whitelistUsers_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBootAndAntiUninstallPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowReport, allowReport_);
      DARABONBA_PTR_FROM_JSON(BlockContent, blockContentShrink_);
      DARABONBA_PTR_FROM_JSON(IsAntiUninstall, isAntiUninstall_);
      DARABONBA_PTR_FROM_JSON(IsBoot, isBoot_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(WhitelistUsers, whitelistUsers_);
    };
    UpdateBootAndAntiUninstallPolicyShrinkRequest() = default ;
    UpdateBootAndAntiUninstallPolicyShrinkRequest(const UpdateBootAndAntiUninstallPolicyShrinkRequest &) = default ;
    UpdateBootAndAntiUninstallPolicyShrinkRequest(UpdateBootAndAntiUninstallPolicyShrinkRequest &&) = default ;
    UpdateBootAndAntiUninstallPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBootAndAntiUninstallPolicyShrinkRequest() = default ;
    UpdateBootAndAntiUninstallPolicyShrinkRequest& operator=(const UpdateBootAndAntiUninstallPolicyShrinkRequest &) = default ;
    UpdateBootAndAntiUninstallPolicyShrinkRequest& operator=(UpdateBootAndAntiUninstallPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowReport_ == nullptr
        && return this->blockContentShrink_ == nullptr && return this->isAntiUninstall_ == nullptr && return this->isBoot_ == nullptr && return this->userGroupIds_ == nullptr && return this->whitelistUsers_ == nullptr; };
    // allowReport Field Functions 
    bool hasAllowReport() const { return this->allowReport_ != nullptr;};
    void deleteAllowReport() { this->allowReport_ = nullptr;};
    inline bool allowReport() const { DARABONBA_PTR_GET_DEFAULT(allowReport_, false) };
    inline UpdateBootAndAntiUninstallPolicyShrinkRequest& setAllowReport(bool allowReport) { DARABONBA_PTR_SET_VALUE(allowReport_, allowReport) };


    // blockContentShrink Field Functions 
    bool hasBlockContentShrink() const { return this->blockContentShrink_ != nullptr;};
    void deleteBlockContentShrink() { this->blockContentShrink_ = nullptr;};
    inline string blockContentShrink() const { DARABONBA_PTR_GET_DEFAULT(blockContentShrink_, "") };
    inline UpdateBootAndAntiUninstallPolicyShrinkRequest& setBlockContentShrink(string blockContentShrink) { DARABONBA_PTR_SET_VALUE(blockContentShrink_, blockContentShrink) };


    // isAntiUninstall Field Functions 
    bool hasIsAntiUninstall() const { return this->isAntiUninstall_ != nullptr;};
    void deleteIsAntiUninstall() { this->isAntiUninstall_ = nullptr;};
    inline bool isAntiUninstall() const { DARABONBA_PTR_GET_DEFAULT(isAntiUninstall_, false) };
    inline UpdateBootAndAntiUninstallPolicyShrinkRequest& setIsAntiUninstall(bool isAntiUninstall) { DARABONBA_PTR_SET_VALUE(isAntiUninstall_, isAntiUninstall) };


    // isBoot Field Functions 
    bool hasIsBoot() const { return this->isBoot_ != nullptr;};
    void deleteIsBoot() { this->isBoot_ = nullptr;};
    inline bool isBoot() const { DARABONBA_PTR_GET_DEFAULT(isBoot_, false) };
    inline UpdateBootAndAntiUninstallPolicyShrinkRequest& setIsBoot(bool isBoot) { DARABONBA_PTR_SET_VALUE(isBoot_, isBoot) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline UpdateBootAndAntiUninstallPolicyShrinkRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline UpdateBootAndAntiUninstallPolicyShrinkRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelistUsers Field Functions 
    bool hasWhitelistUsers() const { return this->whitelistUsers_ != nullptr;};
    void deleteWhitelistUsers() { this->whitelistUsers_ = nullptr;};
    inline const vector<string> & whitelistUsers() const { DARABONBA_PTR_GET_CONST(whitelistUsers_, vector<string>) };
    inline vector<string> whitelistUsers() { DARABONBA_PTR_GET(whitelistUsers_, vector<string>) };
    inline UpdateBootAndAntiUninstallPolicyShrinkRequest& setWhitelistUsers(const vector<string> & whitelistUsers) { DARABONBA_PTR_SET_VALUE(whitelistUsers_, whitelistUsers) };
    inline UpdateBootAndAntiUninstallPolicyShrinkRequest& setWhitelistUsers(vector<string> && whitelistUsers) { DARABONBA_PTR_SET_RVALUE(whitelistUsers_, whitelistUsers) };


  protected:
    std::shared_ptr<bool> allowReport_ = nullptr;
    std::shared_ptr<string> blockContentShrink_ = nullptr;
    std::shared_ptr<bool> isAntiUninstall_ = nullptr;
    std::shared_ptr<bool> isBoot_ = nullptr;
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    std::shared_ptr<vector<string>> whitelistUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
