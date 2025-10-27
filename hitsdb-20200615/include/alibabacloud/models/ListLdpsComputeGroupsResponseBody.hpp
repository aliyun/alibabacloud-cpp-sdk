// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLDPSCOMPUTEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLDPSCOMPUTEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLdpsComputeGroupsResponseBodyGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ListLdpsComputeGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLdpsComputeGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(GroupList, groupList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLdpsComputeGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLdpsComputeGroupsResponseBody() = default ;
    ListLdpsComputeGroupsResponseBody(const ListLdpsComputeGroupsResponseBody &) = default ;
    ListLdpsComputeGroupsResponseBody(ListLdpsComputeGroupsResponseBody &&) = default ;
    ListLdpsComputeGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLdpsComputeGroupsResponseBody() = default ;
    ListLdpsComputeGroupsResponseBody& operator=(const ListLdpsComputeGroupsResponseBody &) = default ;
    ListLdpsComputeGroupsResponseBody& operator=(ListLdpsComputeGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->groupList_ == nullptr && return this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListLdpsComputeGroupsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<ListLdpsComputeGroupsResponseBodyGroupList> & groupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<ListLdpsComputeGroupsResponseBodyGroupList>) };
    inline vector<ListLdpsComputeGroupsResponseBodyGroupList> groupList() { DARABONBA_PTR_GET(groupList_, vector<ListLdpsComputeGroupsResponseBodyGroupList>) };
    inline ListLdpsComputeGroupsResponseBody& setGroupList(const vector<ListLdpsComputeGroupsResponseBodyGroupList> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline ListLdpsComputeGroupsResponseBody& setGroupList(vector<ListLdpsComputeGroupsResponseBodyGroupList> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLdpsComputeGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    std::shared_ptr<vector<ListLdpsComputeGroupsResponseBodyGroupList>> groupList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
