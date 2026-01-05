// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYALERTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYALERTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityAlertRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityAlertRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityAlertRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataQualityAlertRulesResponseBody() = default ;
    ListDataQualityAlertRulesResponseBody(const ListDataQualityAlertRulesResponseBody &) = default ;
    ListDataQualityAlertRulesResponseBody(ListDataQualityAlertRulesResponseBody &&) = default ;
    ListDataQualityAlertRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityAlertRulesResponseBody() = default ;
    ListDataQualityAlertRulesResponseBody& operator=(const ListDataQualityAlertRulesResponseBody &) = default ;
    ListDataQualityAlertRulesResponseBody& operator=(ListDataQualityAlertRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataQualityAlertRules, dataQualityAlertRules_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataQualityAlertRules, dataQualityAlertRules_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataQualityAlertRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataQualityAlertRules& obj) { 
          DARABONBA_PTR_TO_JSON(Condition, condition_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Notification, notification_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Target, target_);
        };
        friend void from_json(const Darabonba::Json& j, DataQualityAlertRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Condition, condition_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Notification, notification_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Target, target_);
        };
        DataQualityAlertRules() = default ;
        DataQualityAlertRules(const DataQualityAlertRules &) = default ;
        DataQualityAlertRules(DataQualityAlertRules &&) = default ;
        DataQualityAlertRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataQualityAlertRules() = default ;
        DataQualityAlertRules& operator=(const DataQualityAlertRules &) = default ;
        DataQualityAlertRules& operator=(DataQualityAlertRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Target : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Target& obj) { 
            DARABONBA_PTR_TO_JSON(Ids, ids_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Target& obj) { 
            DARABONBA_PTR_FROM_JSON(Ids, ids_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Target() = default ;
          Target(const Target &) = default ;
          Target(Target &&) = default ;
          Target(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Target() = default ;
          Target& operator=(const Target &) = default ;
          Target& operator=(Target &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ids_ == nullptr
        && this->type_ == nullptr; };
          // ids Field Functions 
          bool hasIds() const { return this->ids_ != nullptr;};
          void deleteIds() { this->ids_ = nullptr;};
          inline const vector<int64_t> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
          inline vector<int64_t> getIds() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
          inline Target& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
          inline Target& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Target& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The list of monitored target IDs
          shared_ptr<vector<int64_t>> ids_ {};
          // The type of the monitored target. Only DataQualityScan is supported.
          shared_ptr<string> type_ {};
        };

        class Notification : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Notification& obj) { 
            DARABONBA_PTR_TO_JSON(Channels, channels_);
            DARABONBA_PTR_TO_JSON(Receivers, receivers_);
          };
          friend void from_json(const Darabonba::Json& j, Notification& obj) { 
            DARABONBA_PTR_FROM_JSON(Channels, channels_);
            DARABONBA_PTR_FROM_JSON(Receivers, receivers_);
          };
          Notification() = default ;
          Notification(const Notification &) = default ;
          Notification(Notification &&) = default ;
          Notification(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Notification() = default ;
          Notification& operator=(const Notification &) = default ;
          Notification& operator=(Notification &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Receivers : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Receivers& obj) { 
              DARABONBA_PTR_TO_JSON(Extension, extension_);
              DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
              DARABONBA_PTR_TO_JSON(ReceiverValues, receiverValues_);
            };
            friend void from_json(const Darabonba::Json& j, Receivers& obj) { 
              DARABONBA_PTR_FROM_JSON(Extension, extension_);
              DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
              DARABONBA_PTR_FROM_JSON(ReceiverValues, receiverValues_);
            };
            Receivers() = default ;
            Receivers(const Receivers &) = default ;
            Receivers(Receivers &&) = default ;
            Receivers(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Receivers() = default ;
            Receivers& operator=(const Receivers &) = default ;
            Receivers& operator=(Receivers &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->extension_ == nullptr
        && this->receiverType_ == nullptr && this->receiverValues_ == nullptr; };
            // extension Field Functions 
            bool hasExtension() const { return this->extension_ != nullptr;};
            void deleteExtension() { this->extension_ = nullptr;};
            inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
            inline Receivers& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


            // receiverType Field Functions 
            bool hasReceiverType() const { return this->receiverType_ != nullptr;};
            void deleteReceiverType() { this->receiverType_ = nullptr;};
            inline string getReceiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, "") };
            inline Receivers& setReceiverType(string receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


            // receiverValues Field Functions 
            bool hasReceiverValues() const { return this->receiverValues_ != nullptr;};
            void deleteReceiverValues() { this->receiverValues_ = nullptr;};
            inline const vector<string> & getReceiverValues() const { DARABONBA_PTR_GET_CONST(receiverValues_, vector<string>) };
            inline vector<string> getReceiverValues() { DARABONBA_PTR_GET(receiverValues_, vector<string>) };
            inline Receivers& setReceiverValues(const vector<string> & receiverValues) { DARABONBA_PTR_SET_VALUE(receiverValues_, receiverValues) };
            inline Receivers& setReceiverValues(vector<string> && receiverValues) { DARABONBA_PTR_SET_RVALUE(receiverValues_, receiverValues) };


          protected:
            // Additional configurations required for the alert recipients. When ReceiverType is DingdingUrl, you can set `{"atAll":true}` to mention all members.
            shared_ptr<string> extension_ {};
            // The type of alert recipients.
            // 
            // *   ShiftSchedule
            // *   WebhookUrl
            // *   FeishuUrl
            // *   TaskOwner
            // *   WeixinUrl
            // *   DingdingUrl
            // *   DataQualityScanOwner
            // *   AliUid
            shared_ptr<string> receiverType_ {};
            // The value of alert recipients.
            shared_ptr<vector<string>> receiverValues_ {};
          };

          virtual bool empty() const override { return this->channels_ == nullptr
        && this->receivers_ == nullptr; };
          // channels Field Functions 
          bool hasChannels() const { return this->channels_ != nullptr;};
          void deleteChannels() { this->channels_ = nullptr;};
          inline const vector<string> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
          inline vector<string> getChannels() { DARABONBA_PTR_GET(channels_, vector<string>) };
          inline Notification& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
          inline Notification& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


          // receivers Field Functions 
          bool hasReceivers() const { return this->receivers_ != nullptr;};
          void deleteReceivers() { this->receivers_ = nullptr;};
          inline const vector<Notification::Receivers> & getReceivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<Notification::Receivers>) };
          inline vector<Notification::Receivers> getReceivers() { DARABONBA_PTR_GET(receivers_, vector<Notification::Receivers>) };
          inline Notification& setReceivers(const vector<Notification::Receivers> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
          inline Notification& setReceivers(vector<Notification::Receivers> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


        protected:
          // In Channels, you can set both Email and Sms at the same time. In other cases, only one channel can be set.
          shared_ptr<vector<string>> channels_ {};
          // The alert recipients.
          shared_ptr<vector<Notification::Receivers>> receivers_ {};
        };

        virtual bool empty() const override { return this->condition_ == nullptr
        && this->id_ == nullptr && this->notification_ == nullptr && this->projectId_ == nullptr && this->target_ == nullptr; };
        // condition Field Functions 
        bool hasCondition() const { return this->condition_ != nullptr;};
        void deleteCondition() { this->condition_ = nullptr;};
        inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
        inline DataQualityAlertRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataQualityAlertRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // notification Field Functions 
        bool hasNotification() const { return this->notification_ != nullptr;};
        void deleteNotification() { this->notification_ = nullptr;};
        inline const DataQualityAlertRules::Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, DataQualityAlertRules::Notification) };
        inline DataQualityAlertRules::Notification getNotification() { DARABONBA_PTR_GET(notification_, DataQualityAlertRules::Notification) };
        inline DataQualityAlertRules& setNotification(const DataQualityAlertRules::Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
        inline DataQualityAlertRules& setNotification(DataQualityAlertRules::Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline DataQualityAlertRules& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline const DataQualityAlertRules::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, DataQualityAlertRules::Target) };
        inline DataQualityAlertRules::Target getTarget() { DARABONBA_PTR_GET(target_, DataQualityAlertRules::Target) };
        inline DataQualityAlertRules& setTarget(const DataQualityAlertRules::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
        inline DataQualityAlertRules& setTarget(DataQualityAlertRules::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


      protected:
        // The alert conditions.
        shared_ptr<string> condition_ {};
        // The ID of the data quality monitor alert rule.
        shared_ptr<int64_t> id_ {};
        // Alert notification configurations.
        shared_ptr<DataQualityAlertRules::Notification> notification_ {};
        // The project ID.
        shared_ptr<int64_t> projectId_ {};
        // Monitored targets of the data quality alert rule.
        shared_ptr<DataQualityAlertRules::Target> target_ {};
      };

      virtual bool empty() const override { return this->dataQualityAlertRules_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataQualityAlertRules Field Functions 
      bool hasDataQualityAlertRules() const { return this->dataQualityAlertRules_ != nullptr;};
      void deleteDataQualityAlertRules() { this->dataQualityAlertRules_ = nullptr;};
      inline const vector<PageInfo::DataQualityAlertRules> & getDataQualityAlertRules() const { DARABONBA_PTR_GET_CONST(dataQualityAlertRules_, vector<PageInfo::DataQualityAlertRules>) };
      inline vector<PageInfo::DataQualityAlertRules> getDataQualityAlertRules() { DARABONBA_PTR_GET(dataQualityAlertRules_, vector<PageInfo::DataQualityAlertRules>) };
      inline PageInfo& setDataQualityAlertRules(const vector<PageInfo::DataQualityAlertRules> & dataQualityAlertRules) { DARABONBA_PTR_SET_VALUE(dataQualityAlertRules_, dataQualityAlertRules) };
      inline PageInfo& setDataQualityAlertRules(vector<PageInfo::DataQualityAlertRules> && dataQualityAlertRules) { DARABONBA_PTR_SET_RVALUE(dataQualityAlertRules_, dataQualityAlertRules) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of alert rule configurations.
      shared_ptr<vector<PageInfo::DataQualityAlertRules>> dataQualityAlertRules_ {};
      // The current page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of records per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListDataQualityAlertRulesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListDataQualityAlertRulesResponseBody::PageInfo) };
    inline ListDataQualityAlertRulesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListDataQualityAlertRulesResponseBody::PageInfo) };
    inline ListDataQualityAlertRulesResponseBody& setPageInfo(const ListDataQualityAlertRulesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListDataQualityAlertRulesResponseBody& setPageInfo(ListDataQualityAlertRulesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataQualityAlertRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Alert rule configurations.
    shared_ptr<ListDataQualityAlertRulesResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
