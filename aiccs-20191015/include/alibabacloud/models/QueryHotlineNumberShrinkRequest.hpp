// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHOTLINENUMBERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHOTLINENUMBERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryHotlineNumberShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHotlineNumberShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(GroupIds, groupIdsShrink_);
      DARABONBA_PTR_TO_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHotlineNumberShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryHotlineNumberShrinkRequest() = default ;
    QueryHotlineNumberShrinkRequest(const QueryHotlineNumberShrinkRequest &) = default ;
    QueryHotlineNumberShrinkRequest(QueryHotlineNumberShrinkRequest &&) = default ;
    QueryHotlineNumberShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHotlineNumberShrinkRequest() = default ;
    QueryHotlineNumberShrinkRequest& operator=(const QueryHotlineNumberShrinkRequest &) = default ;
    QueryHotlineNumberShrinkRequest& operator=(QueryHotlineNumberShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->departmentId_ == nullptr && return this->groupIdsShrink_ == nullptr && return this->hotlineNumber_ == nullptr && return this->instanceId_ == nullptr && return this->pageSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryHotlineNumberShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline int64_t departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, 0L) };
    inline QueryHotlineNumberShrinkRequest& setDepartmentId(int64_t departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // groupIdsShrink Field Functions 
    bool hasGroupIdsShrink() const { return this->groupIdsShrink_ != nullptr;};
    void deleteGroupIdsShrink() { this->groupIdsShrink_ = nullptr;};
    inline string groupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(groupIdsShrink_, "") };
    inline QueryHotlineNumberShrinkRequest& setGroupIdsShrink(string groupIdsShrink) { DARABONBA_PTR_SET_VALUE(groupIdsShrink_, groupIdsShrink) };


    // hotlineNumber Field Functions 
    bool hasHotlineNumber() const { return this->hotlineNumber_ != nullptr;};
    void deleteHotlineNumber() { this->hotlineNumber_ = nullptr;};
    inline string hotlineNumber() const { DARABONBA_PTR_GET_DEFAULT(hotlineNumber_, "") };
    inline QueryHotlineNumberShrinkRequest& setHotlineNumber(string hotlineNumber) { DARABONBA_PTR_SET_VALUE(hotlineNumber_, hotlineNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryHotlineNumberShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryHotlineNumberShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<int64_t> departmentId_ = nullptr;
    std::shared_ptr<string> groupIdsShrink_ = nullptr;
    std::shared_ptr<string> hotlineNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
