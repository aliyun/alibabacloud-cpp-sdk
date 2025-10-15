// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGroupsForApplicationResponseBodyGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListGroupsForApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListGroupsForApplicationResponseBody() = default ;
    ListGroupsForApplicationResponseBody(const ListGroupsForApplicationResponseBody &) = default ;
    ListGroupsForApplicationResponseBody(ListGroupsForApplicationResponseBody &&) = default ;
    ListGroupsForApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForApplicationResponseBody() = default ;
    ListGroupsForApplicationResponseBody& operator=(const ListGroupsForApplicationResponseBody &) = default ;
    ListGroupsForApplicationResponseBody& operator=(ListGroupsForApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groups_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<ListGroupsForApplicationResponseBodyGroups> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<ListGroupsForApplicationResponseBodyGroups>) };
    inline vector<ListGroupsForApplicationResponseBodyGroups> groups() { DARABONBA_PTR_GET(groups_, vector<ListGroupsForApplicationResponseBodyGroups>) };
    inline ListGroupsForApplicationResponseBody& setGroups(const vector<ListGroupsForApplicationResponseBodyGroups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListGroupsForApplicationResponseBody& setGroups(vector<ListGroupsForApplicationResponseBodyGroups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGroupsForApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListGroupsForApplicationResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The group IDs.
    std::shared_ptr<vector<ListGroupsForApplicationResponseBodyGroups>> groups_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
