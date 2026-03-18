// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDMEMBERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDMEMBERLISTRESPONSEBODY_HPP_
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
  class DescribeRdMemberListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdMemberListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdMemberListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeRdMemberListResponseBody() = default ;
    DescribeRdMemberListResponseBody(const DescribeRdMemberListResponseBody &) = default ;
    DescribeRdMemberListResponseBody(DescribeRdMemberListResponseBody &&) = default ;
    DescribeRdMemberListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdMemberListResponseBody() = default ;
    DescribeRdMemberListResponseBody& operator=(const DescribeRdMemberListResponseBody &) = default ;
    DescribeRdMemberListResponseBody& operator=(DescribeRdMemberListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MemberList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MemberList& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, MemberList& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->name_ == nullptr && this->uid_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline MemberList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MemberList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline MemberList& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // The creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // The name of the member.
      shared_ptr<string> name_ {};
      // The Alibaba Cloud account ID of the member.
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->memberList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // memberList Field Functions 
    bool hasMemberList() const { return this->memberList_ != nullptr;};
    void deleteMemberList() { this->memberList_ = nullptr;};
    inline const vector<DescribeRdMemberListResponseBody::MemberList> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<DescribeRdMemberListResponseBody::MemberList>) };
    inline vector<DescribeRdMemberListResponseBody::MemberList> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<DescribeRdMemberListResponseBody::MemberList>) };
    inline DescribeRdMemberListResponseBody& setMemberList(const vector<DescribeRdMemberListResponseBody::MemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
    inline DescribeRdMemberListResponseBody& setMemberList(vector<DescribeRdMemberListResponseBody::MemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdMemberListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeRdMemberListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The information about the members.
    shared_ptr<vector<DescribeRdMemberListResponseBody::MemberList>> memberList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
