// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGESERVICECUSTOMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAGESERVICECUSTOMERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class PageServiceCustomerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageServiceCustomerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_TO_JSON(CmAuthStatus, cmAuthStatus_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MonitorAuthStatus, monitorAuthStatus_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, PageServiceCustomerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_FROM_JSON(CmAuthStatus, cmAuthStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MonitorAuthStatus, monitorAuthStatus_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    PageServiceCustomerRequest() = default ;
    PageServiceCustomerRequest(const PageServiceCustomerRequest &) = default ;
    PageServiceCustomerRequest(PageServiceCustomerRequest &&) = default ;
    PageServiceCustomerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageServiceCustomerRequest() = default ;
    PageServiceCustomerRequest& operator=(const PageServiceCustomerRequest &) = default ;
    PageServiceCustomerRequest& operator=(PageServiceCustomerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authStatus_ == nullptr
        && return this->cmAuthStatus_ == nullptr && return this->currentPage_ == nullptr && return this->endTime_ == nullptr && return this->monitorAuthStatus_ == nullptr && return this->pageSize_ == nullptr
        && return this->startTime_ == nullptr; };
    // authStatus Field Functions 
    bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
    void deleteAuthStatus() { this->authStatus_ = nullptr;};
    inline int32_t authStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, 0) };
    inline PageServiceCustomerRequest& setAuthStatus(int32_t authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


    // cmAuthStatus Field Functions 
    bool hasCmAuthStatus() const { return this->cmAuthStatus_ != nullptr;};
    void deleteCmAuthStatus() { this->cmAuthStatus_ = nullptr;};
    inline int32_t cmAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(cmAuthStatus_, 0) };
    inline PageServiceCustomerRequest& setCmAuthStatus(int32_t cmAuthStatus) { DARABONBA_PTR_SET_VALUE(cmAuthStatus_, cmAuthStatus) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline PageServiceCustomerRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline PageServiceCustomerRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // monitorAuthStatus Field Functions 
    bool hasMonitorAuthStatus() const { return this->monitorAuthStatus_ != nullptr;};
    void deleteMonitorAuthStatus() { this->monitorAuthStatus_ = nullptr;};
    inline int32_t monitorAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(monitorAuthStatus_, 0) };
    inline PageServiceCustomerRequest& setMonitorAuthStatus(int32_t monitorAuthStatus) { DARABONBA_PTR_SET_VALUE(monitorAuthStatus_, monitorAuthStatus) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline PageServiceCustomerRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline PageServiceCustomerRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Authorization status.
    std::shared_ptr<int32_t> authStatus_ = nullptr;
    // Cloud Monitoring - Alert authorization status.
    std::shared_ptr<int32_t> cmAuthStatus_ = nullptr;
    // The page number of the query result, default is 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // End time. The format is a Unix timestamp, which is the number of milliseconds since January 1, 1970.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Cloud Security - Alert authorization status.
    std::shared_ptr<int32_t> monitorAuthStatus_ = nullptr;
    // Number of records per page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Start time. The format is a Unix timestamp, which is the number of milliseconds since January 1, 1970.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
