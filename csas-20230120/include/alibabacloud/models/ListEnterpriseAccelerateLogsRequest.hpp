// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATELOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATELOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListEnterpriseAccelerateLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseAccelerateLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(DstAddr, dstAddr_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseAccelerateLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(DstAddr, dstAddr_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    ListEnterpriseAccelerateLogsRequest() = default ;
    ListEnterpriseAccelerateLogsRequest(const ListEnterpriseAccelerateLogsRequest &) = default ;
    ListEnterpriseAccelerateLogsRequest(ListEnterpriseAccelerateLogsRequest &&) = default ;
    ListEnterpriseAccelerateLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseAccelerateLogsRequest() = default ;
    ListEnterpriseAccelerateLogsRequest& operator=(const ListEnterpriseAccelerateLogsRequest &) = default ;
    ListEnterpriseAccelerateLogsRequest& operator=(ListEnterpriseAccelerateLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->department_ == nullptr && return this->dstAddr_ == nullptr && return this->endTime_ == nullptr && return this->pageSize_ == nullptr && return this->searchMode_ == nullptr
        && return this->startTime_ == nullptr && return this->username_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListEnterpriseAccelerateLogsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListEnterpriseAccelerateLogsRequest& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // dstAddr Field Functions 
    bool hasDstAddr() const { return this->dstAddr_ != nullptr;};
    void deleteDstAddr() { this->dstAddr_ = nullptr;};
    inline string dstAddr() const { DARABONBA_PTR_GET_DEFAULT(dstAddr_, "") };
    inline ListEnterpriseAccelerateLogsRequest& setDstAddr(string dstAddr) { DARABONBA_PTR_SET_VALUE(dstAddr_, dstAddr) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListEnterpriseAccelerateLogsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEnterpriseAccelerateLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string searchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline ListEnterpriseAccelerateLogsRequest& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListEnterpriseAccelerateLogsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListEnterpriseAccelerateLogsRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> department_ = nullptr;
    std::shared_ptr<string> dstAddr_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> searchMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
