// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKINSTANCESREQUESTDEPLOYMENTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKINSTANCESREQUESTDEPLOYMENTTARGETS_HPP_
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
  class UpdateStackInstancesRequestDeploymentTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackInstancesRequestDeploymentTargets& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(RdFolderIds, rdFolderIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackInstancesRequestDeploymentTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(RdFolderIds, rdFolderIds_);
    };
    UpdateStackInstancesRequestDeploymentTargets() = default ;
    UpdateStackInstancesRequestDeploymentTargets(const UpdateStackInstancesRequestDeploymentTargets &) = default ;
    UpdateStackInstancesRequestDeploymentTargets(UpdateStackInstancesRequestDeploymentTargets &&) = default ;
    UpdateStackInstancesRequestDeploymentTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackInstancesRequestDeploymentTargets() = default ;
    UpdateStackInstancesRequestDeploymentTargets& operator=(const UpdateStackInstancesRequestDeploymentTargets &) = default ;
    UpdateStackInstancesRequestDeploymentTargets& operator=(UpdateStackInstancesRequestDeploymentTargets &&) = default ;
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
    inline UpdateStackInstancesRequestDeploymentTargets& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline UpdateStackInstancesRequestDeploymentTargets& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // rdFolderIds Field Functions 
    bool hasRdFolderIds() const { return this->rdFolderIds_ != nullptr;};
    void deleteRdFolderIds() { this->rdFolderIds_ = nullptr;};
    inline const vector<string> & rdFolderIds() const { DARABONBA_PTR_GET_CONST(rdFolderIds_, vector<string>) };
    inline vector<string> rdFolderIds() { DARABONBA_PTR_GET(rdFolderIds_, vector<string>) };
    inline UpdateStackInstancesRequestDeploymentTargets& setRdFolderIds(const vector<string> & rdFolderIds) { DARABONBA_PTR_SET_VALUE(rdFolderIds_, rdFolderIds) };
    inline UpdateStackInstancesRequestDeploymentTargets& setRdFolderIds(vector<string> && rdFolderIds) { DARABONBA_PTR_SET_RVALUE(rdFolderIds_, rdFolderIds) };


  protected:
    // The IDs of the member accounts in the resource directory. You can specify up to 20 member account IDs.
    // 
    // > To view the member account IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the details of a member](https://help.aliyun.com/document_detail/111624.html).
    std::shared_ptr<vector<string>> accountIds_ = nullptr;
    // The folder IDs of the resource directory.
    std::shared_ptr<vector<string>> rdFolderIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
