// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERDMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERDMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListInstanceRdMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRdMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRdMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstanceRdMembersResponseBody() = default ;
    ListInstanceRdMembersResponseBody(const ListInstanceRdMembersResponseBody &) = default ;
    ListInstanceRdMembersResponseBody(ListInstanceRdMembersResponseBody &&) = default ;
    ListInstanceRdMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRdMembersResponseBody() = default ;
    ListInstanceRdMembersResponseBody& operator=(const ListInstanceRdMembersResponseBody &) = default ;
    ListInstanceRdMembersResponseBody& operator=(ListInstanceRdMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Members : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Members& obj) { 
        DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
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
      virtual bool empty() const override { return this->memberId_ == nullptr; };
      // memberId Field Functions 
      bool hasMemberId() const { return this->memberId_ != nullptr;};
      void deleteMemberId() { this->memberId_ = nullptr;};
      inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
      inline Members& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    protected:
      shared_ptr<string> memberId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->members_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInstanceRdMembersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<ListInstanceRdMembersResponseBody::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<ListInstanceRdMembersResponseBody::Members>) };
    inline vector<ListInstanceRdMembersResponseBody::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<ListInstanceRdMembersResponseBody::Members>) };
    inline ListInstanceRdMembersResponseBody& setMembers(const vector<ListInstanceRdMembersResponseBody::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline ListInstanceRdMembersResponseBody& setMembers(vector<ListInstanceRdMembersResponseBody::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstanceRdMembersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceRdMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<vector<ListInstanceRdMembersResponseBody::Members>> members_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
