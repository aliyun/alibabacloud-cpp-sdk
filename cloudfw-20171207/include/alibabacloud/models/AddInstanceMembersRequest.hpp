// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINSTANCEMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDINSTANCEMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class AddInstanceMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInstanceMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
    };
    friend void from_json(const Darabonba::Json& j, AddInstanceMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
    };
    AddInstanceMembersRequest() = default ;
    AddInstanceMembersRequest(const AddInstanceMembersRequest &) = default ;
    AddInstanceMembersRequest(AddInstanceMembersRequest &&) = default ;
    AddInstanceMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInstanceMembersRequest() = default ;
    AddInstanceMembersRequest& operator=(const AddInstanceMembersRequest &) = default ;
    AddInstanceMembersRequest& operator=(AddInstanceMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Members : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Members& obj) { 
        DARABONBA_PTR_TO_JSON(MemberDesc, memberDesc_);
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(MemberDesc, memberDesc_);
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      };
      Members() = default ;
      Members(const Members &) = default ;
      Members(Members &&) = default ;
      Members(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Members() = default ;
      Members& operator=(const Members &) = default ;
      Members& operator=(Members &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->memberDesc_ == nullptr
        && this->memberUid_ == nullptr; };
      // memberDesc Field Functions 
      bool hasMemberDesc() const { return this->memberDesc_ != nullptr;};
      void deleteMemberDesc() { this->memberDesc_ = nullptr;};
      inline string getMemberDesc() const { DARABONBA_PTR_GET_DEFAULT(memberDesc_, "") };
      inline Members& setMemberDesc(string memberDesc) { DARABONBA_PTR_SET_VALUE(memberDesc_, memberDesc) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
      inline Members& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    protected:
      // The remarks of the member. The value must be 1 to 256 characters in length.
      shared_ptr<string> memberDesc_ {};
      // The UID of the member. You can add up to 20 members to Cloud Firewall at a time.
      // 
      // This parameter is required.
      shared_ptr<int64_t> memberUid_ {};
    };

    virtual bool empty() const override { return this->members_ == nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<AddInstanceMembersRequest::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<AddInstanceMembersRequest::Members>) };
    inline vector<AddInstanceMembersRequest::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<AddInstanceMembersRequest::Members>) };
    inline AddInstanceMembersRequest& setMembers(const vector<AddInstanceMembersRequest::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline AddInstanceMembersRequest& setMembers(vector<AddInstanceMembersRequest::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


  protected:
    // The members.
    // 
    // This parameter is required.
    shared_ptr<vector<AddInstanceMembersRequest::Members>> members_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
