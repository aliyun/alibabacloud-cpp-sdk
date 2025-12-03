// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccessGroupsResponseBodyAccessGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListAccessGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroups, accessGroups_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroups, accessGroups_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAccessGroupsResponseBody() = default ;
    ListAccessGroupsResponseBody(const ListAccessGroupsResponseBody &) = default ;
    ListAccessGroupsResponseBody(ListAccessGroupsResponseBody &&) = default ;
    ListAccessGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessGroupsResponseBody() = default ;
    ListAccessGroupsResponseBody& operator=(const ListAccessGroupsResponseBody &) = default ;
    ListAccessGroupsResponseBody& operator=(ListAccessGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroups_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // accessGroups Field Functions 
    bool hasAccessGroups() const { return this->accessGroups_ != nullptr;};
    void deleteAccessGroups() { this->accessGroups_ = nullptr;};
    inline const vector<ListAccessGroupsResponseBodyAccessGroups> & accessGroups() const { DARABONBA_PTR_GET_CONST(accessGroups_, vector<ListAccessGroupsResponseBodyAccessGroups>) };
    inline vector<ListAccessGroupsResponseBodyAccessGroups> accessGroups() { DARABONBA_PTR_GET(accessGroups_, vector<ListAccessGroupsResponseBodyAccessGroups>) };
    inline ListAccessGroupsResponseBody& setAccessGroups(const vector<ListAccessGroupsResponseBodyAccessGroups> & accessGroups) { DARABONBA_PTR_SET_VALUE(accessGroups_, accessGroups) };
    inline ListAccessGroupsResponseBody& setAccessGroups(vector<ListAccessGroupsResponseBodyAccessGroups> && accessGroups) { DARABONBA_PTR_SET_RVALUE(accessGroups_, accessGroups) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccessGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccessGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAccessGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListAccessGroupsResponseBodyAccessGroups>> accessGroups_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
