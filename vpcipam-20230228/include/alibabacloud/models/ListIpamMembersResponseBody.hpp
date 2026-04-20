// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MemberInfos, memberInfos_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MemberInfos, memberInfos_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamMembersResponseBody() = default ;
    ListIpamMembersResponseBody(const ListIpamMembersResponseBody &) = default ;
    ListIpamMembersResponseBody(ListIpamMembersResponseBody &&) = default ;
    ListIpamMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamMembersResponseBody() = default ;
    ListIpamMembersResponseBody& operator=(const ListIpamMembersResponseBody &) = default ;
    ListIpamMembersResponseBody& operator=(ListIpamMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MemberInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MemberInfos& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(MemberId, memberId_);
        DARABONBA_PTR_TO_JSON(MemberType, memberType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, MemberInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
        DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      MemberInfos() = default ;
      MemberInfos(const MemberInfos &) = default ;
      MemberInfos(MemberInfos &&) = default ;
      MemberInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MemberInfos() = default ;
      MemberInfos& operator=(const MemberInfos &) = default ;
      MemberInfos& operator=(MemberInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->memberId_ == nullptr && this->memberType_ == nullptr && this->status_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline MemberInfos& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // memberId Field Functions 
      bool hasMemberId() const { return this->memberId_ != nullptr;};
      void deleteMemberId() { this->memberId_ = nullptr;};
      inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
      inline MemberInfos& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


      // memberType Field Functions 
      bool hasMemberType() const { return this->memberType_ != nullptr;};
      void deleteMemberType() { this->memberType_ = nullptr;};
      inline string getMemberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
      inline MemberInfos& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MemberInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> memberId_ {};
      shared_ptr<string> memberType_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->maxResults_ == nullptr && this->memberInfos_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListIpamMembersResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpamMembersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // memberInfos Field Functions 
    bool hasMemberInfos() const { return this->memberInfos_ != nullptr;};
    void deleteMemberInfos() { this->memberInfos_ = nullptr;};
    inline const vector<ListIpamMembersResponseBody::MemberInfos> & getMemberInfos() const { DARABONBA_PTR_GET_CONST(memberInfos_, vector<ListIpamMembersResponseBody::MemberInfos>) };
    inline vector<ListIpamMembersResponseBody::MemberInfos> getMemberInfos() { DARABONBA_PTR_GET(memberInfos_, vector<ListIpamMembersResponseBody::MemberInfos>) };
    inline ListIpamMembersResponseBody& setMemberInfos(const vector<ListIpamMembersResponseBody::MemberInfos> & memberInfos) { DARABONBA_PTR_SET_VALUE(memberInfos_, memberInfos) };
    inline ListIpamMembersResponseBody& setMemberInfos(vector<ListIpamMembersResponseBody::MemberInfos> && memberInfos) { DARABONBA_PTR_SET_RVALUE(memberInfos_, memberInfos) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamMembersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamMembersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int64_t> count_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<vector<ListIpamMembersResponseBody::MemberInfos>> memberInfos_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
