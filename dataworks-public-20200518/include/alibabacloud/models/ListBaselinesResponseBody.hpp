// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListBaselinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListBaselinesResponseBody() = default ;
    ListBaselinesResponseBody(const ListBaselinesResponseBody &) = default ;
    ListBaselinesResponseBody(ListBaselinesResponseBody &&) = default ;
    ListBaselinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselinesResponseBody() = default ;
    ListBaselinesResponseBody& operator=(const ListBaselinesResponseBody &) = default ;
    ListBaselinesResponseBody& operator=(ListBaselinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Baselines, baselines_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Baselines, baselines_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Baselines : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Baselines& obj) { 
          DARABONBA_PTR_TO_JSON(AlertEnabled, alertEnabled_);
          DARABONBA_PTR_TO_JSON(AlertMarginThreshold, alertMarginThreshold_);
          DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
          DARABONBA_PTR_TO_JSON(BaselineType, baselineType_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(OverTimeSettings, overTimeSettings_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        };
        friend void from_json(const Darabonba::Json& j, Baselines& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertEnabled, alertEnabled_);
          DARABONBA_PTR_FROM_JSON(AlertMarginThreshold, alertMarginThreshold_);
          DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
          DARABONBA_PTR_FROM_JSON(BaselineType, baselineType_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(OverTimeSettings, overTimeSettings_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        };
        Baselines() = default ;
        Baselines(const Baselines &) = default ;
        Baselines(Baselines &&) = default ;
        Baselines(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Baselines() = default ;
        Baselines& operator=(const Baselines &) = default ;
        Baselines& operator=(Baselines &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OverTimeSettings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OverTimeSettings& obj) { 
            DARABONBA_PTR_TO_JSON(Cycle, cycle_);
            DARABONBA_PTR_TO_JSON(Time, time_);
          };
          friend void from_json(const Darabonba::Json& j, OverTimeSettings& obj) { 
            DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
            DARABONBA_PTR_FROM_JSON(Time, time_);
          };
          OverTimeSettings() = default ;
          OverTimeSettings(const OverTimeSettings &) = default ;
          OverTimeSettings(OverTimeSettings &&) = default ;
          OverTimeSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OverTimeSettings() = default ;
          OverTimeSettings& operator=(const OverTimeSettings &) = default ;
          OverTimeSettings& operator=(OverTimeSettings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cycle_ == nullptr
        && this->time_ == nullptr; };
          // cycle Field Functions 
          bool hasCycle() const { return this->cycle_ != nullptr;};
          void deleteCycle() { this->cycle_ = nullptr;};
          inline int32_t getCycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, 0) };
          inline OverTimeSettings& setCycle(int32_t cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


          // time Field Functions 
          bool hasTime() const { return this->time_ != nullptr;};
          void deleteTime() { this->time_ = nullptr;};
          inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
          inline OverTimeSettings& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        protected:
          // The cycle that corresponds to the committed completion time. For a day-level baseline, the value of this parameter is 1. For an hour-level baseline, the value of this parameter cannot exceed 24.
          shared_ptr<int32_t> cycle_ {};
          // The committed completion time in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
          shared_ptr<string> time_ {};
        };

        virtual bool empty() const override { return this->alertEnabled_ == nullptr
        && this->alertMarginThreshold_ == nullptr && this->baselineId_ == nullptr && this->baselineName_ == nullptr && this->baselineType_ == nullptr && this->enabled_ == nullptr
        && this->overTimeSettings_ == nullptr && this->owner_ == nullptr && this->priority_ == nullptr && this->projectId_ == nullptr; };
        // alertEnabled Field Functions 
        bool hasAlertEnabled() const { return this->alertEnabled_ != nullptr;};
        void deleteAlertEnabled() { this->alertEnabled_ = nullptr;};
        inline bool getAlertEnabled() const { DARABONBA_PTR_GET_DEFAULT(alertEnabled_, false) };
        inline Baselines& setAlertEnabled(bool alertEnabled) { DARABONBA_PTR_SET_VALUE(alertEnabled_, alertEnabled) };


        // alertMarginThreshold Field Functions 
        bool hasAlertMarginThreshold() const { return this->alertMarginThreshold_ != nullptr;};
        void deleteAlertMarginThreshold() { this->alertMarginThreshold_ = nullptr;};
        inline int32_t getAlertMarginThreshold() const { DARABONBA_PTR_GET_DEFAULT(alertMarginThreshold_, 0) };
        inline Baselines& setAlertMarginThreshold(int32_t alertMarginThreshold) { DARABONBA_PTR_SET_VALUE(alertMarginThreshold_, alertMarginThreshold) };


        // baselineId Field Functions 
        bool hasBaselineId() const { return this->baselineId_ != nullptr;};
        void deleteBaselineId() { this->baselineId_ = nullptr;};
        inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
        inline Baselines& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


        // baselineName Field Functions 
        bool hasBaselineName() const { return this->baselineName_ != nullptr;};
        void deleteBaselineName() { this->baselineName_ = nullptr;};
        inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
        inline Baselines& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


        // baselineType Field Functions 
        bool hasBaselineType() const { return this->baselineType_ != nullptr;};
        void deleteBaselineType() { this->baselineType_ = nullptr;};
        inline string getBaselineType() const { DARABONBA_PTR_GET_DEFAULT(baselineType_, "") };
        inline Baselines& setBaselineType(string baselineType) { DARABONBA_PTR_SET_VALUE(baselineType_, baselineType) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Baselines& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // overTimeSettings Field Functions 
        bool hasOverTimeSettings() const { return this->overTimeSettings_ != nullptr;};
        void deleteOverTimeSettings() { this->overTimeSettings_ = nullptr;};
        inline const vector<Baselines::OverTimeSettings> & getOverTimeSettings() const { DARABONBA_PTR_GET_CONST(overTimeSettings_, vector<Baselines::OverTimeSettings>) };
        inline vector<Baselines::OverTimeSettings> getOverTimeSettings() { DARABONBA_PTR_GET(overTimeSettings_, vector<Baselines::OverTimeSettings>) };
        inline Baselines& setOverTimeSettings(const vector<Baselines::OverTimeSettings> & overTimeSettings) { DARABONBA_PTR_SET_VALUE(overTimeSettings_, overTimeSettings) };
        inline Baselines& setOverTimeSettings(vector<Baselines::OverTimeSettings> && overTimeSettings) { DARABONBA_PTR_SET_RVALUE(overTimeSettings_, overTimeSettings) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Baselines& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Baselines& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Baselines& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      protected:
        // Indicates whether the alerting feature is enabled. Valid values: true and false.
        shared_ptr<bool> alertEnabled_ {};
        // The alert margin threshold for the baseline instance. Unit: minutes.
        shared_ptr<int32_t> alertMarginThreshold_ {};
        // The baseline ID.
        shared_ptr<int64_t> baselineId_ {};
        // The name of the baseline.
        shared_ptr<string> baselineName_ {};
        // The type of the baseline. Valid values: DAILY and HOURLY.
        shared_ptr<string> baselineType_ {};
        // Indicates whether the baseline is enabled. Valid values: true and false.
        shared_ptr<bool> enabled_ {};
        // The settings of the committed completion time of the baseline.
        shared_ptr<vector<Baselines::OverTimeSettings>> overTimeSettings_ {};
        // The ID of the Alibaba Cloud account used by the baseline owner. Multiple IDs can be specified. The IDs are separated by commas (,).
        shared_ptr<string> owner_ {};
        // The priority of the baseline. Valid values: {1,2,5,7,8}.
        shared_ptr<int32_t> priority_ {};
        // The ID of the workspace to which the baseline belongs.
        shared_ptr<int64_t> projectId_ {};
      };

      virtual bool empty() const override { return this->baselines_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // baselines Field Functions 
      bool hasBaselines() const { return this->baselines_ != nullptr;};
      void deleteBaselines() { this->baselines_ = nullptr;};
      inline const vector<Data::Baselines> & getBaselines() const { DARABONBA_PTR_GET_CONST(baselines_, vector<Data::Baselines>) };
      inline vector<Data::Baselines> getBaselines() { DARABONBA_PTR_GET(baselines_, vector<Data::Baselines>) };
      inline Data& setBaselines(const vector<Data::Baselines> & baselines) { DARABONBA_PTR_SET_VALUE(baselines_, baselines) };
      inline Data& setBaselines(vector<Data::Baselines> && baselines) { DARABONBA_PTR_SET_RVALUE(baselines_, baselines) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
      inline Data& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline Data& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline Data& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The baselines.
      shared_ptr<vector<Data::Baselines>> baselines_ {};
      // The page number.
      shared_ptr<string> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<string> pageSize_ {};
      // The total number of baselines returned.
      shared_ptr<string> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListBaselinesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListBaselinesResponseBody::Data) };
    inline ListBaselinesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListBaselinesResponseBody::Data) };
    inline ListBaselinesResponseBody& setData(const ListBaselinesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBaselinesResponseBody& setData(ListBaselinesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListBaselinesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListBaselinesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListBaselinesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBaselinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListBaselinesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<ListBaselinesResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
