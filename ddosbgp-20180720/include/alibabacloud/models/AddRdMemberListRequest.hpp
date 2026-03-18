// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRDMEMBERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRDMEMBERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class AddRdMemberListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRdMemberListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberList, memberList_);
    };
    friend void from_json(const Darabonba::Json& j, AddRdMemberListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
    };
    AddRdMemberListRequest() = default ;
    AddRdMemberListRequest(const AddRdMemberListRequest &) = default ;
    AddRdMemberListRequest(AddRdMemberListRequest &&) = default ;
    AddRdMemberListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRdMemberListRequest() = default ;
    AddRdMemberListRequest& operator=(const AddRdMemberListRequest &) = default ;
    AddRdMemberListRequest& operator=(AddRdMemberListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MemberList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MemberList& obj) { 
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, MemberList& obj) { 
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
      };
      MemberList() = default ;
      MemberList(const MemberList &) = default ;
      MemberList(MemberList &&) = default ;
      MemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MemberList() = default ;
      MemberList& operator=(const MemberList &) = default ;
      MemberList& operator=(MemberList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->uid_ == nullptr; };
      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline MemberList& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // The Alibaba Cloud account ID of the member.
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->memberList_ == nullptr; };
    // memberList Field Functions 
    bool hasMemberList() const { return this->memberList_ != nullptr;};
    void deleteMemberList() { this->memberList_ = nullptr;};
    inline const vector<AddRdMemberListRequest::MemberList> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<AddRdMemberListRequest::MemberList>) };
    inline vector<AddRdMemberListRequest::MemberList> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<AddRdMemberListRequest::MemberList>) };
    inline AddRdMemberListRequest& setMemberList(const vector<AddRdMemberListRequest::MemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
    inline AddRdMemberListRequest& setMemberList(vector<AddRdMemberListRequest::MemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


  protected:
    // The list of the members.
    // 
    // This parameter is required.
    shared_ptr<vector<AddRdMemberListRequest::MemberList>> memberList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
