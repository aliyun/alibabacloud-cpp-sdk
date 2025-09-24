// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMembersResponseBodyMembers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMembersResponseBody() = default ;
    ListMembersResponseBody(const ListMembersResponseBody &) = default ;
    ListMembersResponseBody(ListMembersResponseBody &&) = default ;
    ListMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMembersResponseBody() = default ;
    ListMembersResponseBody& operator=(const ListMembersResponseBody &) = default ;
    ListMembersResponseBody& operator=(ListMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->members_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<ListMembersResponseBodyMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<ListMembersResponseBodyMembers>) };
    inline vector<ListMembersResponseBodyMembers> members() { DARABONBA_PTR_GET(members_, vector<ListMembersResponseBodyMembers>) };
    inline ListMembersResponseBody& setMembers(const vector<ListMembersResponseBodyMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline ListMembersResponseBody& setMembers(vector<ListMembersResponseBodyMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMembersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The members.
    std::shared_ptr<vector<ListMembersResponseBodyMembers>> members_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of members that meet the filter conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
