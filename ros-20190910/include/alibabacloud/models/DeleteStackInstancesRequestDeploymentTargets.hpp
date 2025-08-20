// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTACKINSTANCESREQUESTDEPLOYMENTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_DELETESTACKINSTANCESREQUESTDEPLOYMENTTARGETS_HPP_
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
  class DeleteStackInstancesRequestDeploymentTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStackInstancesRequestDeploymentTargets& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(RdFolderIds, rdFolderIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStackInstancesRequestDeploymentTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(RdFolderIds, rdFolderIds_);
    };
    DeleteStackInstancesRequestDeploymentTargets() = default ;
    DeleteStackInstancesRequestDeploymentTargets(const DeleteStackInstancesRequestDeploymentTargets &) = default ;
    DeleteStackInstancesRequestDeploymentTargets(DeleteStackInstancesRequestDeploymentTargets &&) = default ;
    DeleteStackInstancesRequestDeploymentTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStackInstancesRequestDeploymentTargets() = default ;
    DeleteStackInstancesRequestDeploymentTargets& operator=(const DeleteStackInstancesRequestDeploymentTargets &) = default ;
    DeleteStackInstancesRequestDeploymentTargets& operator=(DeleteStackInstancesRequestDeploymentTargets &&) = default ;
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
    inline DeleteStackInstancesRequestDeploymentTargets& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline DeleteStackInstancesRequestDeploymentTargets& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // rdFolderIds Field Functions 
    bool hasRdFolderIds() const { return this->rdFolderIds_ != nullptr;};
    void deleteRdFolderIds() { this->rdFolderIds_ = nullptr;};
    inline const vector<string> & rdFolderIds() const { DARABONBA_PTR_GET_CONST(rdFolderIds_, vector<string>) };
    inline vector<string> rdFolderIds() { DARABONBA_PTR_GET(rdFolderIds_, vector<string>) };
    inline DeleteStackInstancesRequestDeploymentTargets& setRdFolderIds(const vector<string> & rdFolderIds) { DARABONBA_PTR_SET_VALUE(rdFolderIds_, rdFolderIds) };
    inline DeleteStackInstancesRequestDeploymentTargets& setRdFolderIds(vector<string> && rdFolderIds) { DARABONBA_PTR_SET_RVALUE(rdFolderIds_, rdFolderIds) };


  protected:
    // The IDs of the execution accounts within which you want to deploy stacks in self-managed mode. You can specify up to 20 execution account IDs.
    // 
    // > To view the folder IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the basic information about a folder](https://help.aliyun.com/document_detail/111223.html).
    std::shared_ptr<vector<string>> accountIds_ = nullptr;
    // The IDs of the folders in the resource directory. You can add up to five folder IDs.
    // 
    // You can create stacks within all the member accounts in the specified folders. If you create stacks in the Root folder, the stacks are created within all member accounts in the resource directory.
    // 
    // > To view the folder IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the basic information about a folder](https://help.aliyun.com/document_detail/111223.html).
    std::shared_ptr<vector<string>> rdFolderIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
