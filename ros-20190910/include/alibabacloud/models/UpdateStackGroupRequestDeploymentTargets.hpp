// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKGROUPREQUESTDEPLOYMENTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKGROUPREQUESTDEPLOYMENTTARGETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateStackGroupRequestDeploymentTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackGroupRequestDeploymentTargets& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(RdFolderIds, rdFolderIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackGroupRequestDeploymentTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(RdFolderIds, rdFolderIds_);
    };
    UpdateStackGroupRequestDeploymentTargets() = default ;
    UpdateStackGroupRequestDeploymentTargets(const UpdateStackGroupRequestDeploymentTargets &) = default ;
    UpdateStackGroupRequestDeploymentTargets(UpdateStackGroupRequestDeploymentTargets &&) = default ;
    UpdateStackGroupRequestDeploymentTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackGroupRequestDeploymentTargets() = default ;
    UpdateStackGroupRequestDeploymentTargets& operator=(const UpdateStackGroupRequestDeploymentTargets &) = default ;
    UpdateStackGroupRequestDeploymentTargets& operator=(UpdateStackGroupRequestDeploymentTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountIds_ != nullptr
        && this->rdFolderIds_ != nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & accountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> accountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline UpdateStackGroupRequestDeploymentTargets& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline UpdateStackGroupRequestDeploymentTargets& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // rdFolderIds Field Functions 
    bool hasRdFolderIds() const { return this->rdFolderIds_ != nullptr;};
    void deleteRdFolderIds() { this->rdFolderIds_ = nullptr;};
    inline const vector<string> & rdFolderIds() const { DARABONBA_PTR_GET_CONST(rdFolderIds_, vector<string>) };
    inline vector<string> rdFolderIds() { DARABONBA_PTR_GET(rdFolderIds_, vector<string>) };
    inline UpdateStackGroupRequestDeploymentTargets& setRdFolderIds(const vector<string> & rdFolderIds) { DARABONBA_PTR_SET_VALUE(rdFolderIds_, rdFolderIds) };
    inline UpdateStackGroupRequestDeploymentTargets& setRdFolderIds(vector<string> && rdFolderIds) { DARABONBA_PTR_SET_RVALUE(rdFolderIds_, rdFolderIds) };


  protected:
    // The list of one or more Alibaba Cloud accounts with which you want to share or unshare the template.
    std::shared_ptr<vector<string>> accountIds_ = nullptr;
    // The ID of the operation.
    std::shared_ptr<vector<string>> rdFolderIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
