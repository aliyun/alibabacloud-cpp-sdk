// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTACKINSTANCESREQUESTDEPLOYMENTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_CREATESTACKINSTANCESREQUESTDEPLOYMENTTARGETS_HPP_
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
  class CreateStackInstancesRequestDeploymentTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStackInstancesRequestDeploymentTargets& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(RdFolderIds, rdFolderIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStackInstancesRequestDeploymentTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(RdFolderIds, rdFolderIds_);
    };
    CreateStackInstancesRequestDeploymentTargets() = default ;
    CreateStackInstancesRequestDeploymentTargets(const CreateStackInstancesRequestDeploymentTargets &) = default ;
    CreateStackInstancesRequestDeploymentTargets(CreateStackInstancesRequestDeploymentTargets &&) = default ;
    CreateStackInstancesRequestDeploymentTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStackInstancesRequestDeploymentTargets() = default ;
    CreateStackInstancesRequestDeploymentTargets& operator=(const CreateStackInstancesRequestDeploymentTargets &) = default ;
    CreateStackInstancesRequestDeploymentTargets& operator=(CreateStackInstancesRequestDeploymentTargets &&) = default ;
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
    inline CreateStackInstancesRequestDeploymentTargets& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline CreateStackInstancesRequestDeploymentTargets& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // rdFolderIds Field Functions 
    bool hasRdFolderIds() const { return this->rdFolderIds_ != nullptr;};
    void deleteRdFolderIds() { this->rdFolderIds_ = nullptr;};
    inline const vector<string> & rdFolderIds() const { DARABONBA_PTR_GET_CONST(rdFolderIds_, vector<string>) };
    inline vector<string> rdFolderIds() { DARABONBA_PTR_GET(rdFolderIds_, vector<string>) };
    inline CreateStackInstancesRequestDeploymentTargets& setRdFolderIds(const vector<string> & rdFolderIds) { DARABONBA_PTR_SET_VALUE(rdFolderIds_, rdFolderIds) };
    inline CreateStackInstancesRequestDeploymentTargets& setRdFolderIds(vector<string> && rdFolderIds) { DARABONBA_PTR_SET_RVALUE(rdFolderIds_, rdFolderIds) };


  protected:
    std::shared_ptr<vector<string>> accountIds_ = nullptr;
    // The folder IDs of the resource directory. You can add up to five folder IDs.
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
