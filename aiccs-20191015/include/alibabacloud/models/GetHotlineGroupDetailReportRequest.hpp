// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINEGROUPDETAILREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINEGROUPDETAILREPORTREQUEST_HPP_
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
  class GetHotlineGroupDetailReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineGroupDetailReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DepIds, depIds_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineGroupDetailReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DepIds, depIds_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    GetHotlineGroupDetailReportRequest() = default ;
    GetHotlineGroupDetailReportRequest(const GetHotlineGroupDetailReportRequest &) = default ;
    GetHotlineGroupDetailReportRequest(GetHotlineGroupDetailReportRequest &&) = default ;
    GetHotlineGroupDetailReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineGroupDetailReportRequest() = default ;
    GetHotlineGroupDetailReportRequest& operator=(const GetHotlineGroupDetailReportRequest &) = default ;
    GetHotlineGroupDetailReportRequest& operator=(GetHotlineGroupDetailReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->depIds_ == nullptr && return this->endDate_ == nullptr && return this->groupIds_ == nullptr && return this->instanceId_ == nullptr && return this->pageSize_ == nullptr
        && return this->startDate_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetHotlineGroupDetailReportRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // depIds Field Functions 
    bool hasDepIds() const { return this->depIds_ != nullptr;};
    void deleteDepIds() { this->depIds_ = nullptr;};
    inline const vector<int64_t> & depIds() const { DARABONBA_PTR_GET_CONST(depIds_, vector<int64_t>) };
    inline vector<int64_t> depIds() { DARABONBA_PTR_GET(depIds_, vector<int64_t>) };
    inline GetHotlineGroupDetailReportRequest& setDepIds(const vector<int64_t> & depIds) { DARABONBA_PTR_SET_VALUE(depIds_, depIds) };
    inline GetHotlineGroupDetailReportRequest& setDepIds(vector<int64_t> && depIds) { DARABONBA_PTR_SET_RVALUE(depIds_, depIds) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline GetHotlineGroupDetailReportRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<int64_t> & groupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<int64_t>) };
    inline vector<int64_t> groupIds() { DARABONBA_PTR_GET(groupIds_, vector<int64_t>) };
    inline GetHotlineGroupDetailReportRequest& setGroupIds(const vector<int64_t> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline GetHotlineGroupDetailReportRequest& setGroupIds(vector<int64_t> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetHotlineGroupDetailReportRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetHotlineGroupDetailReportRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline GetHotlineGroupDetailReportRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<int64_t>> depIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endDate_ = nullptr;
    std::shared_ptr<vector<int64_t>> groupIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
