// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFERENCEMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFERENCEMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryConferenceMembersResponseBodyMemberModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryConferenceMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConferenceMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(memberModels, memberModels_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConferenceMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(memberModels, memberModels_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    QueryConferenceMembersResponseBody() = default ;
    QueryConferenceMembersResponseBody(const QueryConferenceMembersResponseBody &) = default ;
    QueryConferenceMembersResponseBody(QueryConferenceMembersResponseBody &&) = default ;
    QueryConferenceMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConferenceMembersResponseBody() = default ;
    QueryConferenceMembersResponseBody& operator=(const QueryConferenceMembersResponseBody &) = default ;
    QueryConferenceMembersResponseBody& operator=(QueryConferenceMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->memberModels_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // memberModels Field Functions 
    bool hasMemberModels() const { return this->memberModels_ != nullptr;};
    void deleteMemberModels() { this->memberModels_ = nullptr;};
    inline const vector<QueryConferenceMembersResponseBodyMemberModels> & memberModels() const { DARABONBA_PTR_GET_CONST(memberModels_, vector<QueryConferenceMembersResponseBodyMemberModels>) };
    inline vector<QueryConferenceMembersResponseBodyMemberModels> memberModels() { DARABONBA_PTR_GET(memberModels_, vector<QueryConferenceMembersResponseBodyMemberModels>) };
    inline QueryConferenceMembersResponseBody& setMemberModels(const vector<QueryConferenceMembersResponseBodyMemberModels> & memberModels) { DARABONBA_PTR_SET_VALUE(memberModels_, memberModels) };
    inline QueryConferenceMembersResponseBody& setMemberModels(vector<QueryConferenceMembersResponseBodyMemberModels> && memberModels) { DARABONBA_PTR_SET_RVALUE(memberModels_, memberModels) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryConferenceMembersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryConferenceMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryConferenceMembersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<QueryConferenceMembersResponseBodyMemberModels>> memberModels_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
