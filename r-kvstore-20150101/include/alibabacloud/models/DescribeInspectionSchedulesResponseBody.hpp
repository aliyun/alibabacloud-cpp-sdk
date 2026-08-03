// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONSCHEDULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONSCHEDULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeInspectionSchedulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInspectionSchedulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInspectionSchedulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeInspectionSchedulesResponseBody() = default ;
    DescribeInspectionSchedulesResponseBody(const DescribeInspectionSchedulesResponseBody &) = default ;
    DescribeInspectionSchedulesResponseBody(DescribeInspectionSchedulesResponseBody &&) = default ;
    DescribeInspectionSchedulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInspectionSchedulesResponseBody() = default ;
    DescribeInspectionSchedulesResponseBody& operator=(const DescribeInspectionSchedulesResponseBody &) = default ;
    DescribeInspectionSchedulesResponseBody& operator=(DescribeInspectionSchedulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(InspectionItems, inspectionItems_);
          DARABONBA_PTR_TO_JSON(InspectionWindow, inspectionWindow_);
          DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
          DARABONBA_PTR_TO_JSON(NextFireTime, nextFireTime_);
          DARABONBA_PTR_TO_JSON(NotifyConfig, notifyConfig_);
          DARABONBA_PTR_TO_JSON(ReportLanguage, reportLanguage_);
          DARABONBA_PTR_TO_JSON(ScheduleId, scheduleId_);
          DARABONBA_PTR_TO_JSON(ScheduleName, scheduleName_);
          DARABONBA_PTR_TO_JSON(Timezone, timezone_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(InspectionItems, inspectionItems_);
          DARABONBA_PTR_FROM_JSON(InspectionWindow, inspectionWindow_);
          DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
          DARABONBA_PTR_FROM_JSON(NextFireTime, nextFireTime_);
          DARABONBA_PTR_FROM_JSON(NotifyConfig, notifyConfig_);
          DARABONBA_PTR_FROM_JSON(ReportLanguage, reportLanguage_);
          DARABONBA_PTR_FROM_JSON(ScheduleId, scheduleId_);
          DARABONBA_PTR_FROM_JSON(ScheduleName, scheduleName_);
          DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->cronExpression_ == nullptr && this->enabled_ == nullptr && this->inspectionItems_ == nullptr && this->inspectionWindow_ == nullptr && this->instanceIds_ == nullptr
        && this->nextFireTime_ == nullptr && this->notifyConfig_ == nullptr && this->reportLanguage_ == nullptr && this->scheduleId_ == nullptr && this->scheduleName_ == nullptr
        && this->timezone_ == nullptr && this->updateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Items& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // cronExpression Field Functions 
        bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
        void deleteCronExpression() { this->cronExpression_ = nullptr;};
        inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
        inline Items& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline int64_t getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0L) };
        inline Items& setEnabled(int64_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // inspectionItems Field Functions 
        bool hasInspectionItems() const { return this->inspectionItems_ != nullptr;};
        void deleteInspectionItems() { this->inspectionItems_ = nullptr;};
        inline string getInspectionItems() const { DARABONBA_PTR_GET_DEFAULT(inspectionItems_, "") };
        inline Items& setInspectionItems(string inspectionItems) { DARABONBA_PTR_SET_VALUE(inspectionItems_, inspectionItems) };


        // inspectionWindow Field Functions 
        bool hasInspectionWindow() const { return this->inspectionWindow_ != nullptr;};
        void deleteInspectionWindow() { this->inspectionWindow_ = nullptr;};
        inline string getInspectionWindow() const { DARABONBA_PTR_GET_DEFAULT(inspectionWindow_, "") };
        inline Items& setInspectionWindow(string inspectionWindow) { DARABONBA_PTR_SET_VALUE(inspectionWindow_, inspectionWindow) };


        // instanceIds Field Functions 
        bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
        void deleteInstanceIds() { this->instanceIds_ = nullptr;};
        inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
        inline Items& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


        // nextFireTime Field Functions 
        bool hasNextFireTime() const { return this->nextFireTime_ != nullptr;};
        void deleteNextFireTime() { this->nextFireTime_ = nullptr;};
        inline string getNextFireTime() const { DARABONBA_PTR_GET_DEFAULT(nextFireTime_, "") };
        inline Items& setNextFireTime(string nextFireTime) { DARABONBA_PTR_SET_VALUE(nextFireTime_, nextFireTime) };


        // notifyConfig Field Functions 
        bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
        void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
        inline string getNotifyConfig() const { DARABONBA_PTR_GET_DEFAULT(notifyConfig_, "") };
        inline Items& setNotifyConfig(string notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };


        // reportLanguage Field Functions 
        bool hasReportLanguage() const { return this->reportLanguage_ != nullptr;};
        void deleteReportLanguage() { this->reportLanguage_ = nullptr;};
        inline string getReportLanguage() const { DARABONBA_PTR_GET_DEFAULT(reportLanguage_, "") };
        inline Items& setReportLanguage(string reportLanguage) { DARABONBA_PTR_SET_VALUE(reportLanguage_, reportLanguage) };


        // scheduleId Field Functions 
        bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
        void deleteScheduleId() { this->scheduleId_ = nullptr;};
        inline string getScheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, "") };
        inline Items& setScheduleId(string scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


        // scheduleName Field Functions 
        bool hasScheduleName() const { return this->scheduleName_ != nullptr;};
        void deleteScheduleName() { this->scheduleName_ = nullptr;};
        inline string getScheduleName() const { DARABONBA_PTR_GET_DEFAULT(scheduleName_, "") };
        inline Items& setScheduleName(string scheduleName) { DARABONBA_PTR_SET_VALUE(scheduleName_, scheduleName) };


        // timezone Field Functions 
        bool hasTimezone() const { return this->timezone_ != nullptr;};
        void deleteTimezone() { this->timezone_ = nullptr;};
        inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
        inline Items& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Items& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> cronExpression_ {};
        shared_ptr<int64_t> enabled_ {};
        shared_ptr<string> inspectionItems_ {};
        shared_ptr<string> inspectionWindow_ {};
        shared_ptr<string> instanceIds_ {};
        shared_ptr<string> nextFireTime_ {};
        shared_ptr<string> notifyConfig_ {};
        shared_ptr<string> reportLanguage_ {};
        shared_ptr<string> scheduleId_ {};
        shared_ptr<string> scheduleName_ {};
        shared_ptr<string> timezone_ {};
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
      inline Data& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::Items>> items_ {};
      shared_ptr<int64_t> pageNum_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeInspectionSchedulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeInspectionSchedulesResponseBody::Data) };
    inline DescribeInspectionSchedulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeInspectionSchedulesResponseBody::Data) };
    inline DescribeInspectionSchedulesResponseBody& setData(const DescribeInspectionSchedulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeInspectionSchedulesResponseBody& setData(DescribeInspectionSchedulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInspectionSchedulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInspectionSchedulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeInspectionSchedulesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
