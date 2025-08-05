// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMEMBERSRESPONSEBODYMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMEMBERSRESPONSEBODYMEMBERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceMembersResponseBodyMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMembersResponseBodyMembers& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(MemberDesc, memberDesc_);
      DARABONBA_PTR_TO_JSON(MemberDisplayName, memberDisplayName_);
      DARABONBA_PTR_TO_JSON(MemberStatus, memberStatus_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMembersResponseBodyMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(MemberDesc, memberDesc_);
      DARABONBA_PTR_FROM_JSON(MemberDisplayName, memberDisplayName_);
      DARABONBA_PTR_FROM_JSON(MemberStatus, memberStatus_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
    };
    DescribeInstanceMembersResponseBodyMembers() = default ;
    DescribeInstanceMembersResponseBodyMembers(const DescribeInstanceMembersResponseBodyMembers &) = default ;
    DescribeInstanceMembersResponseBodyMembers(DescribeInstanceMembersResponseBodyMembers &&) = default ;
    DescribeInstanceMembersResponseBodyMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMembersResponseBodyMembers() = default ;
    DescribeInstanceMembersResponseBodyMembers& operator=(const DescribeInstanceMembersResponseBodyMembers &) = default ;
    DescribeInstanceMembersResponseBodyMembers& operator=(DescribeInstanceMembersResponseBodyMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->memberDesc_ != nullptr && this->memberDisplayName_ != nullptr && this->memberStatus_ != nullptr && this->memberUid_ != nullptr && this->modifyTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int32_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
    inline DescribeInstanceMembersResponseBodyMembers& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // memberDesc Field Functions 
    bool hasMemberDesc() const { return this->memberDesc_ != nullptr;};
    void deleteMemberDesc() { this->memberDesc_ = nullptr;};
    inline string memberDesc() const { DARABONBA_PTR_GET_DEFAULT(memberDesc_, "") };
    inline DescribeInstanceMembersResponseBodyMembers& setMemberDesc(string memberDesc) { DARABONBA_PTR_SET_VALUE(memberDesc_, memberDesc) };


    // memberDisplayName Field Functions 
    bool hasMemberDisplayName() const { return this->memberDisplayName_ != nullptr;};
    void deleteMemberDisplayName() { this->memberDisplayName_ = nullptr;};
    inline string memberDisplayName() const { DARABONBA_PTR_GET_DEFAULT(memberDisplayName_, "") };
    inline DescribeInstanceMembersResponseBodyMembers& setMemberDisplayName(string memberDisplayName) { DARABONBA_PTR_SET_VALUE(memberDisplayName_, memberDisplayName) };


    // memberStatus Field Functions 
    bool hasMemberStatus() const { return this->memberStatus_ != nullptr;};
    void deleteMemberStatus() { this->memberStatus_ = nullptr;};
    inline string memberStatus() const { DARABONBA_PTR_GET_DEFAULT(memberStatus_, "") };
    inline DescribeInstanceMembersResponseBodyMembers& setMemberStatus(string memberStatus) { DARABONBA_PTR_SET_VALUE(memberStatus_, memberStatus) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribeInstanceMembersResponseBodyMembers& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int32_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0) };
    inline DescribeInstanceMembersResponseBodyMembers& setModifyTime(int32_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


  protected:
    // The time when the member was added to Cloud Firewall. The value is a timestamp. Unit: seconds.
    std::shared_ptr<int32_t> createTime_ = nullptr;
    // The remarks of the member.
    std::shared_ptr<string> memberDesc_ = nullptr;
    // The name of the member.
    std::shared_ptr<string> memberDisplayName_ = nullptr;
    // The status of the member. Valid values:
    // 
    // *   **normal**
    // *   **deleting**
    std::shared_ptr<string> memberStatus_ = nullptr;
    // The UID of the member.
    std::shared_ptr<int64_t> memberUid_ = nullptr;
    // The time when the member was last modified. The value is a timestamp. Unit: seconds.
    std::shared_ptr<int32_t> modifyTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
