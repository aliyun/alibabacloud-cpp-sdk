// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGEGROUPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGEGROUPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMessageGroupResponseBodyResultGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageGroupResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageGroupResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(GroupList, groupList_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageGroupResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListMessageGroupResponseBodyResult() = default ;
    ListMessageGroupResponseBodyResult(const ListMessageGroupResponseBodyResult &) = default ;
    ListMessageGroupResponseBodyResult(ListMessageGroupResponseBodyResult &&) = default ;
    ListMessageGroupResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageGroupResponseBodyResult() = default ;
    ListMessageGroupResponseBodyResult& operator=(const ListMessageGroupResponseBodyResult &) = default ;
    ListMessageGroupResponseBodyResult& operator=(ListMessageGroupResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupList_ == nullptr
        && return this->hasMore_ == nullptr && return this->total_ == nullptr; };
    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<Models::ListMessageGroupResponseBodyResultGroupList> & groupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<Models::ListMessageGroupResponseBodyResultGroupList>) };
    inline vector<Models::ListMessageGroupResponseBodyResultGroupList> groupList() { DARABONBA_PTR_GET(groupList_, vector<Models::ListMessageGroupResponseBodyResultGroupList>) };
    inline ListMessageGroupResponseBodyResult& setGroupList(const vector<Models::ListMessageGroupResponseBodyResultGroupList> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline ListMessageGroupResponseBodyResult& setGroupList(vector<Models::ListMessageGroupResponseBodyResultGroupList> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListMessageGroupResponseBodyResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListMessageGroupResponseBodyResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of message groups.
    std::shared_ptr<vector<Models::ListMessageGroupResponseBodyResultGroupList>> groupList_ = nullptr;
    // Indicates whether the current page is followed by another page. Valid values:
    // 
    // *   true: The current page is followed by another page.
    // *   false: The current page is not followed by another page.
    std::shared_ptr<bool> hasMore_ = nullptr;
    // The total number of message groups.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
