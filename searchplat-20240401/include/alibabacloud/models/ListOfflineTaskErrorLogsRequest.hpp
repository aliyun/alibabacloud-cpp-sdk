// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFLINETASKERRORLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFLINETASKERRORLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListOfflineTaskErrorLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfflineTaskErrorLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfflineTaskErrorLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ListOfflineTaskErrorLogsRequest() = default ;
    ListOfflineTaskErrorLogsRequest(const ListOfflineTaskErrorLogsRequest &) = default ;
    ListOfflineTaskErrorLogsRequest(ListOfflineTaskErrorLogsRequest &&) = default ;
    ListOfflineTaskErrorLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfflineTaskErrorLogsRequest() = default ;
    ListOfflineTaskErrorLogsRequest& operator=(const ListOfflineTaskErrorLogsRequest &) = default ;
    ListOfflineTaskErrorLogsRequest& operator=(ListOfflineTaskErrorLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline ListOfflineTaskErrorLogsRequest& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListOfflineTaskErrorLogsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOfflineTaskErrorLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOfflineTaskErrorLogsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline ListOfflineTaskErrorLogsRequest& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end timestamp in seconds. If not specified, the current time is used by default.
    shared_ptr<int32_t> endTime_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The start timestamp in seconds. If not specified, the time one hour before the current time is used by default.
    shared_ptr<int32_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
