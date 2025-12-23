// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMMEMBERSRESPONSEBODYMEMBERINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMMEMBERSRESPONSEBODYMEMBERINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamMembersResponseBodyMemberInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamMembersResponseBodyMemberInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberType, memberType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamMembersResponseBodyMemberInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListIpamMembersResponseBodyMemberInfos() = default ;
    ListIpamMembersResponseBodyMemberInfos(const ListIpamMembersResponseBodyMemberInfos &) = default ;
    ListIpamMembersResponseBodyMemberInfos(ListIpamMembersResponseBodyMemberInfos &&) = default ;
    ListIpamMembersResponseBodyMemberInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamMembersResponseBodyMemberInfos() = default ;
    ListIpamMembersResponseBodyMemberInfos& operator=(const ListIpamMembersResponseBodyMemberInfos &) = default ;
    ListIpamMembersResponseBodyMemberInfos& operator=(ListIpamMembersResponseBodyMemberInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->memberId_ == nullptr && return this->memberType_ == nullptr && return this->status_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListIpamMembersResponseBodyMemberInfos& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline ListIpamMembersResponseBodyMemberInfos& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberType Field Functions 
    bool hasMemberType() const { return this->memberType_ != nullptr;};
    void deleteMemberType() { this->memberType_ = nullptr;};
    inline string memberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
    inline ListIpamMembersResponseBodyMemberInfos& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIpamMembersResponseBodyMemberInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> memberId_ = nullptr;
    std::shared_ptr<string> memberType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
