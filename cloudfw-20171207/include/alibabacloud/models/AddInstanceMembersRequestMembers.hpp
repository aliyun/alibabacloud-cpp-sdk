// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINSTANCEMEMBERSREQUESTMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_ADDINSTANCEMEMBERSREQUESTMEMBERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class AddInstanceMembersRequestMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInstanceMembersRequestMembers& obj) { 
      DARABONBA_PTR_TO_JSON(MemberDesc, memberDesc_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
    };
    friend void from_json(const Darabonba::Json& j, AddInstanceMembersRequestMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberDesc, memberDesc_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
    };
    AddInstanceMembersRequestMembers() = default ;
    AddInstanceMembersRequestMembers(const AddInstanceMembersRequestMembers &) = default ;
    AddInstanceMembersRequestMembers(AddInstanceMembersRequestMembers &&) = default ;
    AddInstanceMembersRequestMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInstanceMembersRequestMembers() = default ;
    AddInstanceMembersRequestMembers& operator=(const AddInstanceMembersRequestMembers &) = default ;
    AddInstanceMembersRequestMembers& operator=(AddInstanceMembersRequestMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberDesc_ == nullptr
        && return this->memberUid_ == nullptr; };
    // memberDesc Field Functions 
    bool hasMemberDesc() const { return this->memberDesc_ != nullptr;};
    void deleteMemberDesc() { this->memberDesc_ = nullptr;};
    inline string memberDesc() const { DARABONBA_PTR_GET_DEFAULT(memberDesc_, "") };
    inline AddInstanceMembersRequestMembers& setMemberDesc(string memberDesc) { DARABONBA_PTR_SET_VALUE(memberDesc_, memberDesc) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline AddInstanceMembersRequestMembers& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


  protected:
    // The remarks of the member. The value must be 1 to 256 characters in length.
    std::shared_ptr<string> memberDesc_ = nullptr;
    // The UID of the member. You can add up to 20 members to Cloud Firewall at a time.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> memberUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
