// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationProcessDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationProcessDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatusCodes, statusCodes_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationProcessDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatusCodes, statusCodes_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    ListOperationProcessDetailRequest() = default ;
    ListOperationProcessDetailRequest(const ListOperationProcessDetailRequest &) = default ;
    ListOperationProcessDetailRequest(ListOperationProcessDetailRequest &&) = default ;
    ListOperationProcessDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationProcessDetailRequest() = default ;
    ListOperationProcessDetailRequest& operator=(const ListOperationProcessDetailRequest &) = default ;
    ListOperationProcessDetailRequest& operator=(ListOperationProcessDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->endTime_ != nullptr && this->lang_ != nullptr && this->pageSize_ != nullptr && this->startTime_ != nullptr && this->statusCodes_ != nullptr
        && this->taskIds_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListOperationProcessDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListOperationProcessDetailRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListOperationProcessDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOperationProcessDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListOperationProcessDetailRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusCodes Field Functions 
    bool hasStatusCodes() const { return this->statusCodes_ != nullptr;};
    void deleteStatusCodes() { this->statusCodes_ = nullptr;};
    inline const vector<int32_t> & statusCodes() const { DARABONBA_PTR_GET_CONST(statusCodes_, vector<int32_t>) };
    inline vector<int32_t> statusCodes() { DARABONBA_PTR_GET(statusCodes_, vector<int32_t>) };
    inline ListOperationProcessDetailRequest& setStatusCodes(const vector<int32_t> & statusCodes) { DARABONBA_PTR_SET_VALUE(statusCodes_, statusCodes) };
    inline ListOperationProcessDetailRequest& setStatusCodes(vector<int32_t> && statusCodes) { DARABONBA_PTR_SET_RVALUE(statusCodes_, statusCodes) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline ListOperationProcessDetailRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline ListOperationProcessDetailRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The end of the time range to query. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The beginning of the time range to query. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The subtask status codes.
    std::shared_ptr<vector<int32_t>> statusCodes_ = nullptr;
    // The IDs of operation tasks.
    std::shared_ptr<vector<string>> taskIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
