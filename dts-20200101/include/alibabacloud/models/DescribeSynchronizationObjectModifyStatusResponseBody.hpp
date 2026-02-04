// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONOBJECTMODIFYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONOBJECTMODIFYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationObjectModifyStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationObjectModifyStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationObjectModifyStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSynchronizationObjectModifyStatusResponseBody() = default ;
    DescribeSynchronizationObjectModifyStatusResponseBody(const DescribeSynchronizationObjectModifyStatusResponseBody &) = default ;
    DescribeSynchronizationObjectModifyStatusResponseBody(DescribeSynchronizationObjectModifyStatusResponseBody &&) = default ;
    DescribeSynchronizationObjectModifyStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationObjectModifyStatusResponseBody() = default ;
    DescribeSynchronizationObjectModifyStatusResponseBody& operator=(const DescribeSynchronizationObjectModifyStatusResponseBody &) = default ;
    DescribeSynchronizationObjectModifyStatusResponseBody& operator=(DescribeSynchronizationObjectModifyStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StructureInitializationStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StructureInitializationStatus& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Percent, percent_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, StructureInitializationStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Percent, percent_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      StructureInitializationStatus() = default ;
      StructureInitializationStatus(const StructureInitializationStatus &) = default ;
      StructureInitializationStatus(StructureInitializationStatus &&) = default ;
      StructureInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StructureInitializationStatus() = default ;
      StructureInitializationStatus& operator=(const StructureInitializationStatus &) = default ;
      StructureInitializationStatus& operator=(StructureInitializationStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline StructureInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
      inline StructureInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline StructureInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StructureInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The error message returned if schema synchronization failed.
      shared_ptr<string> errorMessage_ {};
      // The progress of schema synchronization. Unit: %.
      shared_ptr<string> percent_ {};
      // The number of tables whose schemas have been synchronized.
      shared_ptr<string> progress_ {};
      // The status of schema synchronization. Valid values:
      // 
      // *   **NotStarted**: Schema synchronization is not started.
      // *   **Migrating**: Schema synchronization is in progress.
      // *   **Failed**: Schema synchronization failed.
      // *   **Finished**: Schema synchronization is completed.
      shared_ptr<string> status_ {};
    };

    class PrecheckStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrecheckStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(Percent, percent_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, PrecheckStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(Percent, percent_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      PrecheckStatus() = default ;
      PrecheckStatus(const PrecheckStatus &) = default ;
      PrecheckStatus(PrecheckStatus &&) = default ;
      PrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrecheckStatus() = default ;
      PrecheckStatus& operator=(const PrecheckStatus &) = default ;
      PrecheckStatus& operator=(PrecheckStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Detail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Detail& obj) { 
          DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(ItemName, itemName_);
          DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
        };
        friend void from_json(const Darabonba::Json& j, Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
          DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
        };
        Detail() = default ;
        Detail(const Detail &) = default ;
        Detail(Detail &&) = default ;
        Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Detail() = default ;
        Detail& operator=(const Detail &) = default ;
        Detail& operator=(Detail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkStatus_ == nullptr
        && this->errorMessage_ == nullptr && this->itemName_ == nullptr && this->repairMethod_ == nullptr; };
        // checkStatus Field Functions 
        bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
        void deleteCheckStatus() { this->checkStatus_ = nullptr;};
        inline string getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
        inline Detail& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Detail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // itemName Field Functions 
        bool hasItemName() const { return this->itemName_ != nullptr;};
        void deleteItemName() { this->itemName_ = nullptr;};
        inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
        inline Detail& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


        // repairMethod Field Functions 
        bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
        void deleteRepairMethod() { this->repairMethod_ = nullptr;};
        inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
        inline Detail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


      protected:
        // The precheck result. Valid values:
        // 
        // *   Success: The task passed the precheck.
        // *   Failed: The task failed to pass the precheck.
        shared_ptr<string> checkStatus_ {};
        // The error message returned if the task failed to pass the precheck.
        // 
        // >  This parameter is returned only if the return value of the **CheckStatus** parameter is **Failed**.
        shared_ptr<string> errorMessage_ {};
        // The name of the precheck item.
        shared_ptr<string> itemName_ {};
        // The method to fix the precheck failure.
        // 
        // >  This parameter is returned only if the return value of the **CheckStatus** parameter is Failed.
        shared_ptr<string> repairMethod_ {};
      };

      virtual bool empty() const override { return this->detail_ == nullptr
        && this->percent_ == nullptr && this->status_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline const vector<PrecheckStatus::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<PrecheckStatus::Detail>) };
      inline vector<PrecheckStatus::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<PrecheckStatus::Detail>) };
      inline PrecheckStatus& setDetail(const vector<PrecheckStatus::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
      inline PrecheckStatus& setDetail(vector<PrecheckStatus::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
      inline PrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The result of each precheck item.
      shared_ptr<vector<PrecheckStatus::Detail>> detail_ {};
      // The precheck progress. Unit: %.
      shared_ptr<string> percent_ {};
      // The precheck status.
      shared_ptr<string> status_ {};
    };

    class DataSynchronizationStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSynchronizationStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Delay, delay_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Percent, percent_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DataSynchronizationStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Delay, delay_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Percent, percent_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DataSynchronizationStatus() = default ;
      DataSynchronizationStatus(const DataSynchronizationStatus &) = default ;
      DataSynchronizationStatus(DataSynchronizationStatus &&) = default ;
      DataSynchronizationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSynchronizationStatus() = default ;
      DataSynchronizationStatus& operator=(const DataSynchronizationStatus &) = default ;
      DataSynchronizationStatus& operator=(DataSynchronizationStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->delay_ == nullptr
        && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->status_ == nullptr; };
      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline string getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, "") };
      inline DataSynchronizationStatus& setDelay(string delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline DataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
      inline DataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The synchronization latency, in seconds.
      shared_ptr<string> delay_ {};
      // The error message returned if incremental data synchronization failed.
      shared_ptr<string> errorMessage_ {};
      // The progress of incremental data synchronization. Unit: %.
      shared_ptr<string> percent_ {};
      // The status of incremental data synchronization. Valid values:
      // 
      // *   **NotStarted**: Incremental data synchronization is not started.
      // *   **Migrating**: Incremental data synchronization is in progress.
      // *   **Failed**: Incremental data synchronization failed.
      // *   **Finished**: Incremental data synchronization is completed.
      shared_ptr<string> status_ {};
    };

    class DataInitializationStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataInitializationStatus& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Percent, percent_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DataInitializationStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Percent, percent_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DataInitializationStatus() = default ;
      DataInitializationStatus(const DataInitializationStatus &) = default ;
      DataInitializationStatus(DataInitializationStatus &&) = default ;
      DataInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataInitializationStatus() = default ;
      DataInitializationStatus& operator=(const DataInitializationStatus &) = default ;
      DataInitializationStatus& operator=(DataInitializationStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline DataInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
      inline DataInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline DataInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The error message returned if full data synchronization failed.
      shared_ptr<string> errorMessage_ {};
      // The progress of full data synchronization. Unit: %.
      shared_ptr<string> percent_ {};
      // The number of records that have been synchronized during full data synchronization.
      shared_ptr<string> progress_ {};
      // The status of full data synchronization. Valid values:
      // 
      // *   **NotStarted**: Full data synchronization is not started.
      // *   **Migrating**: Full data synchronization is in progress.
      // *   **Failed**: Full data synchronization failed.
      // *   **Finished**: Full data synchronization is completed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->dataInitializationStatus_ == nullptr
        && this->dataSynchronizationStatus_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->errorMessage_ == nullptr && this->precheckStatus_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->structureInitializationStatus_ == nullptr && this->success_ == nullptr; };
    // dataInitializationStatus Field Functions 
    bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
    void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
    inline const DescribeSynchronizationObjectModifyStatusResponseBody::DataInitializationStatus & getDataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, DescribeSynchronizationObjectModifyStatusResponseBody::DataInitializationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody::DataInitializationStatus getDataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, DescribeSynchronizationObjectModifyStatusResponseBody::DataInitializationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setDataInitializationStatus(const DescribeSynchronizationObjectModifyStatusResponseBody::DataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setDataInitializationStatus(DescribeSynchronizationObjectModifyStatusResponseBody::DataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const DescribeSynchronizationObjectModifyStatusResponseBody::DataSynchronizationStatus & getDataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, DescribeSynchronizationObjectModifyStatusResponseBody::DataSynchronizationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody::DataSynchronizationStatus getDataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, DescribeSynchronizationObjectModifyStatusResponseBody::DataSynchronizationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setDataSynchronizationStatus(const DescribeSynchronizationObjectModifyStatusResponseBody::DataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setDataSynchronizationStatus(DescribeSynchronizationObjectModifyStatusResponseBody::DataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline const DescribeSynchronizationObjectModifyStatusResponseBody::PrecheckStatus & getPrecheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, DescribeSynchronizationObjectModifyStatusResponseBody::PrecheckStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody::PrecheckStatus getPrecheckStatus() { DARABONBA_PTR_GET(precheckStatus_, DescribeSynchronizationObjectModifyStatusResponseBody::PrecheckStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setPrecheckStatus(const DescribeSynchronizationObjectModifyStatusResponseBody::PrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setPrecheckStatus(DescribeSynchronizationObjectModifyStatusResponseBody::PrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structureInitializationStatus Field Functions 
    bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
    void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
    inline const DescribeSynchronizationObjectModifyStatusResponseBody::StructureInitializationStatus & getStructureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, DescribeSynchronizationObjectModifyStatusResponseBody::StructureInitializationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody::StructureInitializationStatus getStructureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, DescribeSynchronizationObjectModifyStatusResponseBody::StructureInitializationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setStructureInitializationStatus(const DescribeSynchronizationObjectModifyStatusResponseBody::StructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setStructureInitializationStatus(DescribeSynchronizationObjectModifyStatusResponseBody::StructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status of full data synchronization.
    shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBody::DataInitializationStatus> dataInitializationStatus_ {};
    // The status of incremental data synchronization.
    // 
    // >  This parameter and its sub-parameters will be removed in the future.
    shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBody::DataSynchronizationStatus> dataSynchronizationStatus_ {};
    // The error code returned if the call failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errMessage_ {};
    // The error message returned if the task failed to modify the objects to be synchronized.
    shared_ptr<string> errorMessage_ {};
    // The precheck status.
    shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBody::PrecheckStatus> precheckStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the task that changes the objects to be synchronized. Valid values:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is being prechecked.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **Migrating**: The task is running.
    // *   **Failed**: The task failed.
    // *   **Finished**: The task is completed.
    shared_ptr<string> status_ {};
    // The status of schema synchronization.
    shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBody::StructureInitializationStatus> structureInitializationStatus_ {};
    // Indicates whether the call was successful.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
