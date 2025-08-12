// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPSRESPONSEBODYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPSRESPONSEBODYGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeGroupsResponseBodyGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupsResponseBodyGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AuthedResources, authedResources_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(TransferFileNeedApproval, transferFileNeedApproval_);
      DARABONBA_PTR_TO_JSON(UserCount, userCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupsResponseBodyGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthedResources, authedResources_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(TransferFileNeedApproval, transferFileNeedApproval_);
      DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
    };
    DescribeGroupsResponseBodyGroups() = default ;
    DescribeGroupsResponseBodyGroups(const DescribeGroupsResponseBodyGroups &) = default ;
    DescribeGroupsResponseBodyGroups(DescribeGroupsResponseBodyGroups &&) = default ;
    DescribeGroupsResponseBodyGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupsResponseBodyGroups() = default ;
    DescribeGroupsResponseBodyGroups& operator=(const DescribeGroupsResponseBodyGroups &) = default ;
    DescribeGroupsResponseBodyGroups& operator=(DescribeGroupsResponseBodyGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authedResources_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->transferFileNeedApproval_ != nullptr
        && this->userCount_ != nullptr; };
    // authedResources Field Functions 
    bool hasAuthedResources() const { return this->authedResources_ != nullptr;};
    void deleteAuthedResources() { this->authedResources_ = nullptr;};
    inline const map<string, string> & authedResources() const { DARABONBA_PTR_GET_CONST(authedResources_, map<string, string>) };
    inline map<string, string> authedResources() { DARABONBA_PTR_GET(authedResources_, map<string, string>) };
    inline DescribeGroupsResponseBodyGroups& setAuthedResources(const map<string, string> & authedResources) { DARABONBA_PTR_SET_VALUE(authedResources_, authedResources) };
    inline DescribeGroupsResponseBodyGroups& setAuthedResources(map<string, string> && authedResources) { DARABONBA_PTR_SET_RVALUE(authedResources_, authedResources) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGroupsResponseBodyGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeGroupsResponseBodyGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeGroupsResponseBodyGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeGroupsResponseBodyGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // transferFileNeedApproval Field Functions 
    bool hasTransferFileNeedApproval() const { return this->transferFileNeedApproval_ != nullptr;};
    void deleteTransferFileNeedApproval() { this->transferFileNeedApproval_ = nullptr;};
    inline bool transferFileNeedApproval() const { DARABONBA_PTR_GET_DEFAULT(transferFileNeedApproval_, false) };
    inline DescribeGroupsResponseBodyGroups& setTransferFileNeedApproval(bool transferFileNeedApproval) { DARABONBA_PTR_SET_VALUE(transferFileNeedApproval_, transferFileNeedApproval) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t userCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline DescribeGroupsResponseBodyGroups& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


  protected:
    std::shared_ptr<map<string, string>> authedResources_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<bool> transferFileNeedApproval_ = nullptr;
    std::shared_ptr<int32_t> userCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
