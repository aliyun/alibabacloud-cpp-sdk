// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHOTLINENUMBERRESPONSEBODYDATAHOTLINENUMLISTCALLOUTRANGELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHOTLINENUMBERRESPONSEBODYDATAHOTLINENUMLISTCALLOUTRANGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(DepartmentName, departmentName_);
      DARABONBA_PTR_TO_JSON(GroupDOList, groupDOList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(DepartmentName, departmentName_);
      DARABONBA_PTR_FROM_JSON(GroupDOList, groupDOList_);
    };
    QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList() = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList(const QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList &) = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList(QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList &&) = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList() = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList& operator=(const QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList &) = default ;
    QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList& operator=(QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentId_ == nullptr
        && return this->departmentName_ == nullptr && return this->groupDOList_ == nullptr; };
    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline int64_t departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, 0L) };
    inline QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList& setDepartmentId(int64_t departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // departmentName Field Functions 
    bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
    void deleteDepartmentName() { this->departmentName_ = nullptr;};
    inline string departmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
    inline QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


    // groupDOList Field Functions 
    bool hasGroupDOList() const { return this->groupDOList_ != nullptr;};
    void deleteGroupDOList() { this->groupDOList_ = nullptr;};
    inline const vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList> & groupDOList() const { DARABONBA_PTR_GET_CONST(groupDOList_, vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList>) };
    inline vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList> groupDOList() { DARABONBA_PTR_GET(groupDOList_, vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList>) };
    inline QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList& setGroupDOList(const vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList> & groupDOList) { DARABONBA_PTR_SET_VALUE(groupDOList_, groupDOList) };
    inline QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeList& setGroupDOList(vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList> && groupDOList) { DARABONBA_PTR_SET_RVALUE(groupDOList_, groupDOList) };


  protected:
    std::shared_ptr<int64_t> departmentId_ = nullptr;
    std::shared_ptr<string> departmentName_ = nullptr;
    std::shared_ptr<vector<Models::QueryHotlineNumberResponseBodyDataHotlineNumListCalloutRangeListGroupDOList>> groupDOList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
