// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKGROUPOPERATIONRESPONSEBODYSTACKGROUPOPERATIONDEPLOYMENTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKGROUPOPERATIONRESPONSEBODYSTACKGROUPOPERATIONDEPLOYMENTTARGETS_HPP_
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
  class GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(RdFolderIds, rdFolderIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(RdFolderIds, rdFolderIds_);
    };
    GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets() = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets(const GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets &) = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets(GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets &&) = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets() = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets& operator=(const GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets &) = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets& operator=(GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets &&) = default ;
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
    inline GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // rdFolderIds Field Functions 
    bool hasRdFolderIds() const { return this->rdFolderIds_ != nullptr;};
    void deleteRdFolderIds() { this->rdFolderIds_ = nullptr;};
    inline const vector<string> & rdFolderIds() const { DARABONBA_PTR_GET_CONST(rdFolderIds_, vector<string>) };
    inline vector<string> rdFolderIds() { DARABONBA_PTR_GET(rdFolderIds_, vector<string>) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets& setRdFolderIds(const vector<string> & rdFolderIds) { DARABONBA_PTR_SET_VALUE(rdFolderIds_, rdFolderIds) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationDeploymentTargets& setRdFolderIds(vector<string> && rdFolderIds) { DARABONBA_PTR_SET_RVALUE(rdFolderIds_, rdFolderIds) };


  protected:
    // The IDs of the members in the resource directory.
    // 
    // > This parameter is returned only if AccountIds is specified when the [UpdateStackInstances](https://help.aliyun.com/document_detail/151716.html) operation is called to update stack instances.
    std::shared_ptr<vector<string>> accountIds_ = nullptr;
    // The IDs of the folders in the resource directory.
    std::shared_ptr<vector<string>> rdFolderIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
