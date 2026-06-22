// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEPROTECTCLIENTEVENTDASHBOARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEPROTECTCLIENTEVENTDASHBOARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileProtectClientEventDashboardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileProtectClientEventDashboardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileProtectClientEventDashboardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetFileProtectClientEventDashboardRequest() = default ;
    GetFileProtectClientEventDashboardRequest(const GetFileProtectClientEventDashboardRequest &) = default ;
    GetFileProtectClientEventDashboardRequest(GetFileProtectClientEventDashboardRequest &&) = default ;
    GetFileProtectClientEventDashboardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileProtectClientEventDashboardRequest() = default ;
    GetFileProtectClientEventDashboardRequest& operator=(const GetFileProtectClientEventDashboardRequest &) = default ;
    GetFileProtectClientEventDashboardRequest& operator=(GetFileProtectClientEventDashboardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endTime_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline GetFileProtectClientEventDashboardRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetFileProtectClientEventDashboardRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetFileProtectClientEventDashboardRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetFileProtectClientEventDashboardRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The page number of the current page to return.
    shared_ptr<string> currentPage_ {};
    // The end timestamp of the query.
    shared_ptr<int64_t> endTime_ {};
    // The maximum number of entries per page for a paged query.
    shared_ptr<string> pageSize_ {};
    // The start timestamp of the query.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
