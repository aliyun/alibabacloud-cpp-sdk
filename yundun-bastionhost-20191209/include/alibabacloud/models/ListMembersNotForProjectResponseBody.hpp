// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMBERSNOTFORPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMBERSNOTFORPROJECTRESPONSEBODY_HPP_
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
  class ListMembersNotForProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMembersNotForProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMembersNotForProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMembersNotForProjectResponseBody() = default ;
    ListMembersNotForProjectResponseBody(const ListMembersNotForProjectResponseBody &) = default ;
    ListMembersNotForProjectResponseBody(ListMembersNotForProjectResponseBody &&) = default ;
    ListMembersNotForProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMembersNotForProjectResponseBody() = default ;
    ListMembersNotForProjectResponseBody& operator=(const ListMembersNotForProjectResponseBody &) = default ;
    ListMembersNotForProjectResponseBody& operator=(ListMembersNotForProjectResponseBody &&) = default ;
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
      inline int64_t getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, 0L) };
      inline Members& setMemberId(int64_t memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    protected:
      // The UID of the member accounts.
      shared_ptr<int64_t> memberId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->members_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMembersNotForProjectResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<ListMembersNotForProjectResponseBody::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<ListMembersNotForProjectResponseBody::Members>) };
    inline vector<ListMembersNotForProjectResponseBody::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<ListMembersNotForProjectResponseBody::Members>) };
    inline ListMembersNotForProjectResponseBody& setMembers(const vector<ListMembersNotForProjectResponseBody::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline ListMembersNotForProjectResponseBody& setMembers(vector<ListMembersNotForProjectResponseBody::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMembersNotForProjectResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMembersNotForProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMembersNotForProjectResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries to return. If a valid value is specified for the MaxResults request parameter, the value of the parameter is returned. Otherwise, the default value is returned.
    shared_ptr<int32_t> maxResults_ {};
    // The list of member accounts.
    shared_ptr<vector<ListMembersNotForProjectResponseBody::Members>> members_ {};
    // The token for the next request, which is used for paging. Specify this token in the NextToken request parameter for the next paged query. If this field is empty in the response, no more data is available.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
