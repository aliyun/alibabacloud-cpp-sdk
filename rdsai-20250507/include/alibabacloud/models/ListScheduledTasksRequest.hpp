// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEDTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEDTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListScheduledTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduledTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScheduledId, scheduledId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduledTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScheduledId, scheduledId_);
    };
    ListScheduledTasksRequest() = default ;
    ListScheduledTasksRequest(const ListScheduledTasksRequest &) = default ;
    ListScheduledTasksRequest(ListScheduledTasksRequest &&) = default ;
    ListScheduledTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduledTasksRequest() = default ;
    ListScheduledTasksRequest& operator=(const ListScheduledTasksRequest &) = default ;
    ListScheduledTasksRequest& operator=(ListScheduledTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->scheduledId_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListScheduledTasksRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListScheduledTasksRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scheduledId Field Functions 
    bool hasScheduledId() const { return this->scheduledId_ != nullptr;};
    void deleteScheduledId() { this->scheduledId_ = nullptr;};
    inline string getScheduledId() const { DARABONBA_PTR_GET_DEFAULT(scheduledId_, "") };
    inline ListScheduledTasksRequest& setScheduledId(string scheduledId) { DARABONBA_PTR_SET_VALUE(scheduledId_, scheduledId) };


  protected:
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> scheduledId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
