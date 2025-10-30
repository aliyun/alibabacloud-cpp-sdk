// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateBootAndAntiUninstallPolicyRequestBlockContent.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateBootAndAntiUninstallPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBootAndAntiUninstallPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowReport, allowReport_);
      DARABONBA_PTR_TO_JSON(BlockContent, blockContent_);
      DARABONBA_PTR_TO_JSON(IsAntiUninstall, isAntiUninstall_);
      DARABONBA_PTR_TO_JSON(IsBoot, isBoot_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(WhitelistUsers, whitelistUsers_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBootAndAntiUninstallPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowReport, allowReport_);
      DARABONBA_PTR_FROM_JSON(BlockContent, blockContent_);
      DARABONBA_PTR_FROM_JSON(IsAntiUninstall, isAntiUninstall_);
      DARABONBA_PTR_FROM_JSON(IsBoot, isBoot_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(WhitelistUsers, whitelistUsers_);
    };
    UpdateBootAndAntiUninstallPolicyRequest() = default ;
    UpdateBootAndAntiUninstallPolicyRequest(const UpdateBootAndAntiUninstallPolicyRequest &) = default ;
    UpdateBootAndAntiUninstallPolicyRequest(UpdateBootAndAntiUninstallPolicyRequest &&) = default ;
    UpdateBootAndAntiUninstallPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBootAndAntiUninstallPolicyRequest() = default ;
    UpdateBootAndAntiUninstallPolicyRequest& operator=(const UpdateBootAndAntiUninstallPolicyRequest &) = default ;
    UpdateBootAndAntiUninstallPolicyRequest& operator=(UpdateBootAndAntiUninstallPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowReport_ == nullptr
        && return this->blockContent_ == nullptr && return this->isAntiUninstall_ == nullptr && return this->isBoot_ == nullptr && return this->userGroupIds_ == nullptr && return this->whitelistUsers_ == nullptr; };
    // allowReport Field Functions 
    bool hasAllowReport() const { return this->allowReport_ != nullptr;};
    void deleteAllowReport() { this->allowReport_ = nullptr;};
    inline bool allowReport() const { DARABONBA_PTR_GET_DEFAULT(allowReport_, false) };
    inline UpdateBootAndAntiUninstallPolicyRequest& setAllowReport(bool allowReport) { DARABONBA_PTR_SET_VALUE(allowReport_, allowReport) };


    // blockContent Field Functions 
    bool hasBlockContent() const { return this->blockContent_ != nullptr;};
    void deleteBlockContent() { this->blockContent_ = nullptr;};
    inline const UpdateBootAndAntiUninstallPolicyRequestBlockContent & blockContent() const { DARABONBA_PTR_GET_CONST(blockContent_, UpdateBootAndAntiUninstallPolicyRequestBlockContent) };
    inline UpdateBootAndAntiUninstallPolicyRequestBlockContent blockContent() { DARABONBA_PTR_GET(blockContent_, UpdateBootAndAntiUninstallPolicyRequestBlockContent) };
    inline UpdateBootAndAntiUninstallPolicyRequest& setBlockContent(const UpdateBootAndAntiUninstallPolicyRequestBlockContent & blockContent) { DARABONBA_PTR_SET_VALUE(blockContent_, blockContent) };
    inline UpdateBootAndAntiUninstallPolicyRequest& setBlockContent(UpdateBootAndAntiUninstallPolicyRequestBlockContent && blockContent) { DARABONBA_PTR_SET_RVALUE(blockContent_, blockContent) };


    // isAntiUninstall Field Functions 
    bool hasIsAntiUninstall() const { return this->isAntiUninstall_ != nullptr;};
    void deleteIsAntiUninstall() { this->isAntiUninstall_ = nullptr;};
    inline bool isAntiUninstall() const { DARABONBA_PTR_GET_DEFAULT(isAntiUninstall_, false) };
    inline UpdateBootAndAntiUninstallPolicyRequest& setIsAntiUninstall(bool isAntiUninstall) { DARABONBA_PTR_SET_VALUE(isAntiUninstall_, isAntiUninstall) };


    // isBoot Field Functions 
    bool hasIsBoot() const { return this->isBoot_ != nullptr;};
    void deleteIsBoot() { this->isBoot_ = nullptr;};
    inline bool isBoot() const { DARABONBA_PTR_GET_DEFAULT(isBoot_, false) };
    inline UpdateBootAndAntiUninstallPolicyRequest& setIsBoot(bool isBoot) { DARABONBA_PTR_SET_VALUE(isBoot_, isBoot) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline UpdateBootAndAntiUninstallPolicyRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline UpdateBootAndAntiUninstallPolicyRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelistUsers Field Functions 
    bool hasWhitelistUsers() const { return this->whitelistUsers_ != nullptr;};
    void deleteWhitelistUsers() { this->whitelistUsers_ = nullptr;};
    inline const vector<string> & whitelistUsers() const { DARABONBA_PTR_GET_CONST(whitelistUsers_, vector<string>) };
    inline vector<string> whitelistUsers() { DARABONBA_PTR_GET(whitelistUsers_, vector<string>) };
    inline UpdateBootAndAntiUninstallPolicyRequest& setWhitelistUsers(const vector<string> & whitelistUsers) { DARABONBA_PTR_SET_VALUE(whitelistUsers_, whitelistUsers) };
    inline UpdateBootAndAntiUninstallPolicyRequest& setWhitelistUsers(vector<string> && whitelistUsers) { DARABONBA_PTR_SET_RVALUE(whitelistUsers_, whitelistUsers) };


  protected:
    std::shared_ptr<bool> allowReport_ = nullptr;
    std::shared_ptr<UpdateBootAndAntiUninstallPolicyRequestBlockContent> blockContent_ = nullptr;
    std::shared_ptr<bool> isAntiUninstall_ = nullptr;
    std::shared_ptr<bool> isBoot_ = nullptr;
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    std::shared_ptr<vector<string>> whitelistUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
