// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDHOTLINENUMBERREQUESTOUTBOUNDRANGELIST_HPP_
#define ALIBABACLOUD_MODELS_ADDHOTLINENUMBERREQUESTOUTBOUNDRANGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class AddHotlineNumberRequestOutboundRangeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddHotlineNumberRequestOutboundRangeList& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(GroupIdList, groupIdList_);
    };
    friend void from_json(const Darabonba::Json& j, AddHotlineNumberRequestOutboundRangeList& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(GroupIdList, groupIdList_);
    };
    AddHotlineNumberRequestOutboundRangeList() = default ;
    AddHotlineNumberRequestOutboundRangeList(const AddHotlineNumberRequestOutboundRangeList &) = default ;
    AddHotlineNumberRequestOutboundRangeList(AddHotlineNumberRequestOutboundRangeList &&) = default ;
    AddHotlineNumberRequestOutboundRangeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddHotlineNumberRequestOutboundRangeList() = default ;
    AddHotlineNumberRequestOutboundRangeList& operator=(const AddHotlineNumberRequestOutboundRangeList &) = default ;
    AddHotlineNumberRequestOutboundRangeList& operator=(AddHotlineNumberRequestOutboundRangeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->departmentId_ != nullptr
        && this->groupIdList_ != nullptr; };
    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline int64_t departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, 0L) };
    inline AddHotlineNumberRequestOutboundRangeList& setDepartmentId(int64_t departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // groupIdList Field Functions 
    bool hasGroupIdList() const { return this->groupIdList_ != nullptr;};
    void deleteGroupIdList() { this->groupIdList_ = nullptr;};
    inline const vector<int64_t> & groupIdList() const { DARABONBA_PTR_GET_CONST(groupIdList_, vector<int64_t>) };
    inline vector<int64_t> groupIdList() { DARABONBA_PTR_GET(groupIdList_, vector<int64_t>) };
    inline AddHotlineNumberRequestOutboundRangeList& setGroupIdList(const vector<int64_t> & groupIdList) { DARABONBA_PTR_SET_VALUE(groupIdList_, groupIdList) };
    inline AddHotlineNumberRequestOutboundRangeList& setGroupIdList(vector<int64_t> && groupIdList) { DARABONBA_PTR_SET_RVALUE(groupIdList_, groupIdList) };


  protected:
    std::shared_ptr<int64_t> departmentId_ = nullptr;
    std::shared_ptr<vector<int64_t>> groupIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
