// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveMessageGroupsResponseBodyGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupList, groupList_);
      DARABONBA_PTR_TO_JSON(Hasmore, hasmore_);
      DARABONBA_PTR_TO_JSON(NextpageToken, nextpageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
      DARABONBA_PTR_FROM_JSON(Hasmore, hasmore_);
      DARABONBA_PTR_FROM_JSON(NextpageToken, nextpageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLiveMessageGroupsResponseBody() = default ;
    ListLiveMessageGroupsResponseBody(const ListLiveMessageGroupsResponseBody &) = default ;
    ListLiveMessageGroupsResponseBody(ListLiveMessageGroupsResponseBody &&) = default ;
    ListLiveMessageGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageGroupsResponseBody() = default ;
    ListLiveMessageGroupsResponseBody& operator=(const ListLiveMessageGroupsResponseBody &) = default ;
    ListLiveMessageGroupsResponseBody& operator=(ListLiveMessageGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupList_ != nullptr
        && this->hasmore_ != nullptr && this->nextpageToken_ != nullptr && this->requestId_ != nullptr; };
    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<ListLiveMessageGroupsResponseBodyGroupList> & groupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<ListLiveMessageGroupsResponseBodyGroupList>) };
    inline vector<ListLiveMessageGroupsResponseBodyGroupList> groupList() { DARABONBA_PTR_GET(groupList_, vector<ListLiveMessageGroupsResponseBodyGroupList>) };
    inline ListLiveMessageGroupsResponseBody& setGroupList(const vector<ListLiveMessageGroupsResponseBodyGroupList> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline ListLiveMessageGroupsResponseBody& setGroupList(vector<ListLiveMessageGroupsResponseBodyGroupList> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // hasmore Field Functions 
    bool hasHasmore() const { return this->hasmore_ != nullptr;};
    void deleteHasmore() { this->hasmore_ = nullptr;};
    inline bool hasmore() const { DARABONBA_PTR_GET_DEFAULT(hasmore_, false) };
    inline ListLiveMessageGroupsResponseBody& setHasmore(bool hasmore) { DARABONBA_PTR_SET_VALUE(hasmore_, hasmore) };


    // nextpageToken Field Functions 
    bool hasNextpageToken() const { return this->nextpageToken_ != nullptr;};
    void deleteNextpageToken() { this->nextpageToken_ = nullptr;};
    inline string nextpageToken() const { DARABONBA_PTR_GET_DEFAULT(nextpageToken_, "") };
    inline ListLiveMessageGroupsResponseBody& setNextpageToken(string nextpageToken) { DARABONBA_PTR_SET_VALUE(nextpageToken_, nextpageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveMessageGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the groups.
    std::shared_ptr<vector<ListLiveMessageGroupsResponseBodyGroupList>> groupList_ = nullptr;
    // Indicates whether the current page is followed by another page.
    std::shared_ptr<bool> hasmore_ = nullptr;
    // The starting page number for the next query. This parameter is returned only if the value of Hasmore is true.
    std::shared_ptr<string> nextpageToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
