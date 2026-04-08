// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINECONFIGSRESPONSEBODY_HPP_
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
  class ListBaselineConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListBaselineConfigsResponseBody() = default ;
    ListBaselineConfigsResponseBody(const ListBaselineConfigsResponseBody &) = default ;
    ListBaselineConfigsResponseBody(ListBaselineConfigsResponseBody &&) = default ;
    ListBaselineConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineConfigsResponseBody() = default ;
    ListBaselineConfigsResponseBody& operator=(const ListBaselineConfigsResponseBody &) = default ;
    ListBaselineConfigsResponseBody& operator=(ListBaselineConfigsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
          DARABONBA_PTR_TO_JSON(BaselineType, baselineType_);
          DARABONBA_PTR_TO_JSON(ExpHour, expHour_);
          DARABONBA_PTR_TO_JSON(ExpMinu, expMinu_);
          DARABONBA_PTR_TO_JSON(HourExpDetail, hourExpDetail_);
          DARABONBA_PTR_TO_JSON(HourSlaDetail, hourSlaDetail_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(SlaHour, slaHour_);
          DARABONBA_PTR_TO_JSON(SlaMinu, slaMinu_);
          DARABONBA_PTR_TO_JSON(UseFlag, useFlag_);
        };
        friend void from_json(const Darabonba::Json& j, Baselines& obj) { 
          DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
          DARABONBA_PTR_FROM_JSON(BaselineType, baselineType_);
          DARABONBA_PTR_FROM_JSON(ExpHour, expHour_);
          DARABONBA_PTR_FROM_JSON(ExpMinu, expMinu_);
          DARABONBA_PTR_FROM_JSON(HourExpDetail, hourExpDetail_);
          DARABONBA_PTR_FROM_JSON(HourSlaDetail, hourSlaDetail_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(SlaHour, slaHour_);
          DARABONBA_PTR_FROM_JSON(SlaMinu, slaMinu_);
          DARABONBA_PTR_FROM_JSON(UseFlag, useFlag_);
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
        virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->baselineName_ == nullptr && this->baselineType_ == nullptr && this->expHour_ == nullptr && this->expMinu_ == nullptr && this->hourExpDetail_ == nullptr
        && this->hourSlaDetail_ == nullptr && this->isDefault_ == nullptr && this->owner_ == nullptr && this->priority_ == nullptr && this->projectId_ == nullptr
        && this->slaHour_ == nullptr && this->slaMinu_ == nullptr && this->useFlag_ == nullptr; };
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


        // expHour Field Functions 
        bool hasExpHour() const { return this->expHour_ != nullptr;};
        void deleteExpHour() { this->expHour_ = nullptr;};
        inline int32_t getExpHour() const { DARABONBA_PTR_GET_DEFAULT(expHour_, 0) };
        inline Baselines& setExpHour(int32_t expHour) { DARABONBA_PTR_SET_VALUE(expHour_, expHour) };


        // expMinu Field Functions 
        bool hasExpMinu() const { return this->expMinu_ != nullptr;};
        void deleteExpMinu() { this->expMinu_ = nullptr;};
        inline int32_t getExpMinu() const { DARABONBA_PTR_GET_DEFAULT(expMinu_, 0) };
        inline Baselines& setExpMinu(int32_t expMinu) { DARABONBA_PTR_SET_VALUE(expMinu_, expMinu) };


        // hourExpDetail Field Functions 
        bool hasHourExpDetail() const { return this->hourExpDetail_ != nullptr;};
        void deleteHourExpDetail() { this->hourExpDetail_ = nullptr;};
        inline string getHourExpDetail() const { DARABONBA_PTR_GET_DEFAULT(hourExpDetail_, "") };
        inline Baselines& setHourExpDetail(string hourExpDetail) { DARABONBA_PTR_SET_VALUE(hourExpDetail_, hourExpDetail) };


        // hourSlaDetail Field Functions 
        bool hasHourSlaDetail() const { return this->hourSlaDetail_ != nullptr;};
        void deleteHourSlaDetail() { this->hourSlaDetail_ = nullptr;};
        inline string getHourSlaDetail() const { DARABONBA_PTR_GET_DEFAULT(hourSlaDetail_, "") };
        inline Baselines& setHourSlaDetail(string hourSlaDetail) { DARABONBA_PTR_SET_VALUE(hourSlaDetail_, hourSlaDetail) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline Baselines& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


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


        // slaHour Field Functions 
        bool hasSlaHour() const { return this->slaHour_ != nullptr;};
        void deleteSlaHour() { this->slaHour_ = nullptr;};
        inline int32_t getSlaHour() const { DARABONBA_PTR_GET_DEFAULT(slaHour_, 0) };
        inline Baselines& setSlaHour(int32_t slaHour) { DARABONBA_PTR_SET_VALUE(slaHour_, slaHour) };


        // slaMinu Field Functions 
        bool hasSlaMinu() const { return this->slaMinu_ != nullptr;};
        void deleteSlaMinu() { this->slaMinu_ = nullptr;};
        inline int32_t getSlaMinu() const { DARABONBA_PTR_GET_DEFAULT(slaMinu_, 0) };
        inline Baselines& setSlaMinu(int32_t slaMinu) { DARABONBA_PTR_SET_VALUE(slaMinu_, slaMinu) };


        // useFlag Field Functions 
        bool hasUseFlag() const { return this->useFlag_ != nullptr;};
        void deleteUseFlag() { this->useFlag_ = nullptr;};
        inline bool getUseFlag() const { DARABONBA_PTR_GET_DEFAULT(useFlag_, false) };
        inline Baselines& setUseFlag(bool useFlag) { DARABONBA_PTR_SET_VALUE(useFlag_, useFlag) };


      protected:
        // The baseline ID.
        shared_ptr<int64_t> baselineId_ {};
        // The name of the baseline.
        shared_ptr<string> baselineName_ {};
        // The type of the baseline. Valid values: DAILY and HOURLY.
        shared_ptr<string> baselineType_ {};
        // The hour in the alerting time of the day-level baseline. Valid values: [0, 47].
        shared_ptr<int32_t> expHour_ {};
        // The minute in the alerting time of the day-level baseline. Valid values: [0, 59].
        shared_ptr<int32_t> expMinu_ {};
        // The alerting time of the hour-level baseline. This parameter is presented as key-value pairs in the JSON format. The key indicates the ID of the cycle, and the value is presented in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
        shared_ptr<string> hourExpDetail_ {};
        // The committed completion time of the hour-level baseline. This parameter is presented as key-value pairs in the JSON format. The key indicates the ID of the cycle, and the value is presented in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
        shared_ptr<string> hourSlaDetail_ {};
        // Indicates whether the baseline is a default baseline of the workspace. Valid values: true and false.
        shared_ptr<bool> isDefault_ {};
        // The ID of the Alibaba Cloud account used by the baseline owner. Multiple IDs can be specified. The IDs are separated by commas (,).
        shared_ptr<string> owner_ {};
        // The priority of the baseline. Valid values: {1,3,5,7,8}.
        shared_ptr<int32_t> priority_ {};
        // The ID of the workspace to which the baseline belongs.
        shared_ptr<int64_t> projectId_ {};
        // The hour in the committed completion time of the day-level baseline. Valid values: [0, 47].
        shared_ptr<int32_t> slaHour_ {};
        // The minute in the alerting time of the day-level baseline. Valid values: [0, 59].
        shared_ptr<int32_t> slaMinu_ {};
        // Indicates whether the baseline is enabled. Valid values: true and false.
        shared_ptr<bool> useFlag_ {};
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
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The baselines.
      shared_ptr<vector<Data::Baselines>> baselines_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of baselines returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListBaselineConfigsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListBaselineConfigsResponseBody::Data) };
    inline ListBaselineConfigsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListBaselineConfigsResponseBody::Data) };
    inline ListBaselineConfigsResponseBody& setData(const ListBaselineConfigsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBaselineConfigsResponseBody& setData(ListBaselineConfigsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListBaselineConfigsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListBaselineConfigsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListBaselineConfigsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBaselineConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListBaselineConfigsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned data.
    shared_ptr<ListBaselineConfigsResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
