// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(ExcludeAttachedLoginPolicyGroups, excludeAttachedLoginPolicyGroups_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IdpId, idpId_);
      DARABONBA_PTR_TO_JSON(LoginPolicyId, loginPolicyId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
      DARABONBA_PTR_TO_JSON(TransferFileNeedApproval, transferFileNeedApproval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(ExcludeAttachedLoginPolicyGroups, excludeAttachedLoginPolicyGroups_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
      DARABONBA_PTR_FROM_JSON(LoginPolicyId, loginPolicyId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
      DARABONBA_PTR_FROM_JSON(TransferFileNeedApproval, transferFileNeedApproval_);
    };
    DescribeGroupsRequest() = default ;
    DescribeGroupsRequest(const DescribeGroupsRequest &) = default ;
    DescribeGroupsRequest(DescribeGroupsRequest &&) = default ;
    DescribeGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupsRequest() = default ;
    DescribeGroupsRequest& operator=(const DescribeGroupsRequest &) = default ;
    DescribeGroupsRequest& operator=(DescribeGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->businessChannel_ == nullptr && this->excludeAttachedLoginPolicyGroups_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->idpId_ == nullptr
        && this->loginPolicyId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->solutionId_ == nullptr && this->transferFileNeedApproval_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeGroupsRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline DescribeGroupsRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // excludeAttachedLoginPolicyGroups Field Functions 
    bool hasExcludeAttachedLoginPolicyGroups() const { return this->excludeAttachedLoginPolicyGroups_ != nullptr;};
    void deleteExcludeAttachedLoginPolicyGroups() { this->excludeAttachedLoginPolicyGroups_ = nullptr;};
    inline bool getExcludeAttachedLoginPolicyGroups() const { DARABONBA_PTR_GET_DEFAULT(excludeAttachedLoginPolicyGroups_, false) };
    inline DescribeGroupsRequest& setExcludeAttachedLoginPolicyGroups(bool excludeAttachedLoginPolicyGroups) { DARABONBA_PTR_SET_VALUE(excludeAttachedLoginPolicyGroups_, excludeAttachedLoginPolicyGroups) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeGroupsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeGroupsRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // idpId Field Functions 
    bool hasIdpId() const { return this->idpId_ != nullptr;};
    void deleteIdpId() { this->idpId_ = nullptr;};
    inline string getIdpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, "") };
    inline DescribeGroupsRequest& setIdpId(string idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


    // loginPolicyId Field Functions 
    bool hasLoginPolicyId() const { return this->loginPolicyId_ != nullptr;};
    void deleteLoginPolicyId() { this->loginPolicyId_ = nullptr;};
    inline string getLoginPolicyId() const { DARABONBA_PTR_GET_DEFAULT(loginPolicyId_, "") };
    inline DescribeGroupsRequest& setLoginPolicyId(string loginPolicyId) { DARABONBA_PTR_SET_VALUE(loginPolicyId_, loginPolicyId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline DescribeGroupsRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


    // transferFileNeedApproval Field Functions 
    bool hasTransferFileNeedApproval() const { return this->transferFileNeedApproval_ != nullptr;};
    void deleteTransferFileNeedApproval() { this->transferFileNeedApproval_ = nullptr;};
    inline bool getTransferFileNeedApproval() const { DARABONBA_PTR_GET_DEFAULT(transferFileNeedApproval_, false) };
    inline DescribeGroupsRequest& setTransferFileNeedApproval(bool transferFileNeedApproval) { DARABONBA_PTR_SET_VALUE(transferFileNeedApproval_, transferFileNeedApproval) };


  protected:
    // > This parameter is not publicly available.
    shared_ptr<string> bizType_ {};
    shared_ptr<string> businessChannel_ {};
    // 是否排除已关联登录策略的用户组。
    shared_ptr<bool> excludeAttachedLoginPolicyGroups_ {};
    // The ID of the user group.
    shared_ptr<string> groupId_ {};
    // The name of the user group.
    shared_ptr<string> groupName_ {};
    shared_ptr<string> idpId_ {};
    // 指定关联的登录策略筛选。
    shared_ptr<string> loginPolicyId_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // > This parameter is not publicly available.
    shared_ptr<string> solutionId_ {};
    // Indicates whether the file approval feature is enabled.
    shared_ptr<bool> transferFileNeedApproval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
