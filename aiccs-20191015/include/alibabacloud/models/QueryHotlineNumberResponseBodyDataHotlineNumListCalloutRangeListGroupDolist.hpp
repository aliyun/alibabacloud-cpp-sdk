// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHOTLINENUMBERRESPONSEBODYDATAHOTLINENUMLISTCALLOUTRANGELISTGROUPDOLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHOTLINENUMBERRESPONSEBODYDATAHOTLINENUMLISTCALLOUTRANGELISTGROUPDOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList() = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList(const QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList &) = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList(QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList &&) = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList() = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList& operator=(const QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList &) = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList& operator=(QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->groupName_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
