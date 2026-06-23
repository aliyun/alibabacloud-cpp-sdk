// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPLOADTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUPLOADTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUploadTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUploadTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListUploadTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListUploadTasksRequest() = default ;
    ListUploadTasksRequest(const ListUploadTasksRequest &) = default ;
    ListUploadTasksRequest(ListUploadTasksRequest &&) = default ;
    ListUploadTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUploadTasksRequest() = default ;
    ListUploadTasksRequest& operator=(const ListUploadTasksRequest &) = default ;
    ListUploadTasksRequest& operator=(ListUploadTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->siteId_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListUploadTasksRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListUploadTasksRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListUploadTasksRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListUploadTasksRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The end time in ISO 8601 format (for example, 2024-01-01T00:00:00+Z).
    // >Notice: StartTime and EndTime must be provided together to define the query time window. An error is returned if either one is missing..
    shared_ptr<string> endTime_ {};
    // The site ID. You can obtain this value by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // >Notice: This parameter is required when you call the ListUploadTasks operation..
    shared_ptr<int64_t> siteId_ {};
    // The start time in ISO 8601 format (for example, 2024-01-01T00:00:00+Z).
    // >Notice: StartTime and EndTime must be provided together to define the query time window. An error is returned if either one is missing..
    shared_ptr<string> startTime_ {};
    // The task type. Valid values:
    // 
    // - **file**: URL file purge.
    // - **preload**: resource prefetch.
    // - **directory**: directory purge.
    // - **ignoreparams**: purge with parameters ignored.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
