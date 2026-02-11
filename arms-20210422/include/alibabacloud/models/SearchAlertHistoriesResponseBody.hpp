// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTHISTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTHISTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SearchAlertHistoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertHistoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertHistoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchAlertHistoriesResponseBody() = default ;
    SearchAlertHistoriesResponseBody(const SearchAlertHistoriesResponseBody &) = default ;
    SearchAlertHistoriesResponseBody(SearchAlertHistoriesResponseBody &&) = default ;
    SearchAlertHistoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertHistoriesResponseBody() = default ;
    SearchAlertHistoriesResponseBody& operator=(const SearchAlertHistoriesResponseBody &) = default ;
    SearchAlertHistoriesResponseBody& operator=(SearchAlertHistoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmHistories, alarmHistories_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmHistories, alarmHistories_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageBean() = default ;
      PageBean(const PageBean &) = default ;
      PageBean(PageBean &&) = default ;
      PageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageBean() = default ;
      PageBean& operator=(const PageBean &) = default ;
      PageBean& operator=(PageBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlarmHistories : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlarmHistories& obj) { 
          DARABONBA_PTR_TO_JSON(AlarmContent, alarmContent_);
          DARABONBA_PTR_TO_JSON(AlarmResponseCode, alarmResponseCode_);
          DARABONBA_PTR_TO_JSON(AlarmSources, alarmSources_);
          DARABONBA_PTR_TO_JSON(AlarmTime, alarmTime_);
          DARABONBA_PTR_TO_JSON(AlarmType, alarmType_);
          DARABONBA_PTR_TO_JSON(Emails, emails_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Phones, phones_);
          DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
          DARABONBA_PTR_TO_JSON(Target, target_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, AlarmHistories& obj) { 
          DARABONBA_PTR_FROM_JSON(AlarmContent, alarmContent_);
          DARABONBA_PTR_FROM_JSON(AlarmResponseCode, alarmResponseCode_);
          DARABONBA_PTR_FROM_JSON(AlarmSources, alarmSources_);
          DARABONBA_PTR_FROM_JSON(AlarmTime, alarmTime_);
          DARABONBA_PTR_FROM_JSON(AlarmType, alarmType_);
          DARABONBA_PTR_FROM_JSON(Emails, emails_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Phones, phones_);
          DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
          DARABONBA_PTR_FROM_JSON(Target, target_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        AlarmHistories() = default ;
        AlarmHistories(const AlarmHistories &) = default ;
        AlarmHistories(AlarmHistories &&) = default ;
        AlarmHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlarmHistories() = default ;
        AlarmHistories& operator=(const AlarmHistories &) = default ;
        AlarmHistories& operator=(AlarmHistories &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alarmContent_ == nullptr
        && this->alarmResponseCode_ == nullptr && this->alarmSources_ == nullptr && this->alarmTime_ == nullptr && this->alarmType_ == nullptr && this->emails_ == nullptr
        && this->id_ == nullptr && this->phones_ == nullptr && this->strategyId_ == nullptr && this->target_ == nullptr && this->userId_ == nullptr; };
        // alarmContent Field Functions 
        bool hasAlarmContent() const { return this->alarmContent_ != nullptr;};
        void deleteAlarmContent() { this->alarmContent_ = nullptr;};
        inline string getAlarmContent() const { DARABONBA_PTR_GET_DEFAULT(alarmContent_, "") };
        inline AlarmHistories& setAlarmContent(string alarmContent) { DARABONBA_PTR_SET_VALUE(alarmContent_, alarmContent) };


        // alarmResponseCode Field Functions 
        bool hasAlarmResponseCode() const { return this->alarmResponseCode_ != nullptr;};
        void deleteAlarmResponseCode() { this->alarmResponseCode_ = nullptr;};
        inline int32_t getAlarmResponseCode() const { DARABONBA_PTR_GET_DEFAULT(alarmResponseCode_, 0) };
        inline AlarmHistories& setAlarmResponseCode(int32_t alarmResponseCode) { DARABONBA_PTR_SET_VALUE(alarmResponseCode_, alarmResponseCode) };


        // alarmSources Field Functions 
        bool hasAlarmSources() const { return this->alarmSources_ != nullptr;};
        void deleteAlarmSources() { this->alarmSources_ = nullptr;};
        inline string getAlarmSources() const { DARABONBA_PTR_GET_DEFAULT(alarmSources_, "") };
        inline AlarmHistories& setAlarmSources(string alarmSources) { DARABONBA_PTR_SET_VALUE(alarmSources_, alarmSources) };


        // alarmTime Field Functions 
        bool hasAlarmTime() const { return this->alarmTime_ != nullptr;};
        void deleteAlarmTime() { this->alarmTime_ = nullptr;};
        inline int64_t getAlarmTime() const { DARABONBA_PTR_GET_DEFAULT(alarmTime_, 0L) };
        inline AlarmHistories& setAlarmTime(int64_t alarmTime) { DARABONBA_PTR_SET_VALUE(alarmTime_, alarmTime) };


        // alarmType Field Functions 
        bool hasAlarmType() const { return this->alarmType_ != nullptr;};
        void deleteAlarmType() { this->alarmType_ = nullptr;};
        inline int32_t getAlarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, 0) };
        inline AlarmHistories& setAlarmType(int32_t alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


        // emails Field Functions 
        bool hasEmails() const { return this->emails_ != nullptr;};
        void deleteEmails() { this->emails_ = nullptr;};
        inline string getEmails() const { DARABONBA_PTR_GET_DEFAULT(emails_, "") };
        inline AlarmHistories& setEmails(string emails) { DARABONBA_PTR_SET_VALUE(emails_, emails) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline AlarmHistories& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // phones Field Functions 
        bool hasPhones() const { return this->phones_ != nullptr;};
        void deletePhones() { this->phones_ = nullptr;};
        inline string getPhones() const { DARABONBA_PTR_GET_DEFAULT(phones_, "") };
        inline AlarmHistories& setPhones(string phones) { DARABONBA_PTR_SET_VALUE(phones_, phones) };


        // strategyId Field Functions 
        bool hasStrategyId() const { return this->strategyId_ != nullptr;};
        void deleteStrategyId() { this->strategyId_ = nullptr;};
        inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
        inline AlarmHistories& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
        inline AlarmHistories& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline AlarmHistories& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> alarmContent_ {};
        shared_ptr<int32_t> alarmResponseCode_ {};
        shared_ptr<string> alarmSources_ {};
        shared_ptr<int64_t> alarmTime_ {};
        shared_ptr<int32_t> alarmType_ {};
        shared_ptr<string> emails_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> phones_ {};
        shared_ptr<string> strategyId_ {};
        shared_ptr<string> target_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->alarmHistories_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // alarmHistories Field Functions 
      bool hasAlarmHistories() const { return this->alarmHistories_ != nullptr;};
      void deleteAlarmHistories() { this->alarmHistories_ = nullptr;};
      inline const vector<PageBean::AlarmHistories> & getAlarmHistories() const { DARABONBA_PTR_GET_CONST(alarmHistories_, vector<PageBean::AlarmHistories>) };
      inline vector<PageBean::AlarmHistories> getAlarmHistories() { DARABONBA_PTR_GET(alarmHistories_, vector<PageBean::AlarmHistories>) };
      inline PageBean& setAlarmHistories(const vector<PageBean::AlarmHistories> & alarmHistories) { DARABONBA_PTR_SET_VALUE(alarmHistories_, alarmHistories) };
      inline PageBean& setAlarmHistories(vector<PageBean::AlarmHistories> && alarmHistories) { DARABONBA_PTR_SET_RVALUE(alarmHistories_, alarmHistories) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageBean& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageBean::AlarmHistories>> alarmHistories_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const SearchAlertHistoriesResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, SearchAlertHistoriesResponseBody::PageBean) };
    inline SearchAlertHistoriesResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, SearchAlertHistoriesResponseBody::PageBean) };
    inline SearchAlertHistoriesResponseBody& setPageBean(const SearchAlertHistoriesResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline SearchAlertHistoriesResponseBody& setPageBean(SearchAlertHistoriesResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchAlertHistoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<SearchAlertHistoriesResponseBody::PageBean> pageBean_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
