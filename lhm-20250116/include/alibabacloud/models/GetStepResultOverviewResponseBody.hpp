// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTEPRESULTOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTEPRESULTOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetStepResultOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStepResultOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStepResultOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetStepResultOverviewResponseBody() = default ;
    GetStepResultOverviewResponseBody(const GetStepResultOverviewResponseBody &) = default ;
    GetStepResultOverviewResponseBody(GetStepResultOverviewResponseBody &&) = default ;
    GetStepResultOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStepResultOverviewResponseBody() = default ;
    GetStepResultOverviewResponseBody& operator=(const GetStepResultOverviewResponseBody &) = default ;
    GetStepResultOverviewResponseBody& operator=(GetStepResultOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(checkColumnCount, checkColumnCount_);
        DARABONBA_PTR_TO_JSON(dstMetricName, dstMetricName_);
        DARABONBA_PTR_TO_JSON(isConsistent, isConsistent_);
        DARABONBA_PTR_TO_JSON(metricColumnCount, metricColumnCount_);
        DARABONBA_PTR_TO_JSON(metricPassColumnCount, metricPassColumnCount_);
        DARABONBA_PTR_TO_JSON(passColumnCount, passColumnCount_);
        DARABONBA_PTR_TO_JSON(resultId, resultId_);
        DARABONBA_PTR_TO_JSON(sourcePtName, sourcePtName_);
        DARABONBA_PTR_TO_JSON(sourceTable, sourceTable_);
        DARABONBA_PTR_TO_JSON(srcMetricName, srcMetricName_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(targetPtName, targetPtName_);
        DARABONBA_PTR_TO_JSON(targetTable, targetTable_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(checkColumnCount, checkColumnCount_);
        DARABONBA_PTR_FROM_JSON(dstMetricName, dstMetricName_);
        DARABONBA_PTR_FROM_JSON(isConsistent, isConsistent_);
        DARABONBA_PTR_FROM_JSON(metricColumnCount, metricColumnCount_);
        DARABONBA_PTR_FROM_JSON(metricPassColumnCount, metricPassColumnCount_);
        DARABONBA_PTR_FROM_JSON(passColumnCount, passColumnCount_);
        DARABONBA_PTR_FROM_JSON(resultId, resultId_);
        DARABONBA_PTR_FROM_JSON(sourcePtName, sourcePtName_);
        DARABONBA_PTR_FROM_JSON(sourceTable, sourceTable_);
        DARABONBA_PTR_FROM_JSON(srcMetricName, srcMetricName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(targetPtName, targetPtName_);
        DARABONBA_PTR_FROM_JSON(targetTable, targetTable_);
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
      virtual bool empty() const override { return this->checkColumnCount_ == nullptr
        && this->dstMetricName_ == nullptr && this->isConsistent_ == nullptr && this->metricColumnCount_ == nullptr && this->metricPassColumnCount_ == nullptr && this->passColumnCount_ == nullptr
        && this->resultId_ == nullptr && this->sourcePtName_ == nullptr && this->sourceTable_ == nullptr && this->srcMetricName_ == nullptr && this->status_ == nullptr
        && this->targetPtName_ == nullptr && this->targetTable_ == nullptr; };
      // checkColumnCount Field Functions 
      bool hasCheckColumnCount() const { return this->checkColumnCount_ != nullptr;};
      void deleteCheckColumnCount() { this->checkColumnCount_ = nullptr;};
      inline int64_t getCheckColumnCount() const { DARABONBA_PTR_GET_DEFAULT(checkColumnCount_, 0L) };
      inline Data& setCheckColumnCount(int64_t checkColumnCount) { DARABONBA_PTR_SET_VALUE(checkColumnCount_, checkColumnCount) };


      // dstMetricName Field Functions 
      bool hasDstMetricName() const { return this->dstMetricName_ != nullptr;};
      void deleteDstMetricName() { this->dstMetricName_ = nullptr;};
      inline string getDstMetricName() const { DARABONBA_PTR_GET_DEFAULT(dstMetricName_, "") };
      inline Data& setDstMetricName(string dstMetricName) { DARABONBA_PTR_SET_VALUE(dstMetricName_, dstMetricName) };


      // isConsistent Field Functions 
      bool hasIsConsistent() const { return this->isConsistent_ != nullptr;};
      void deleteIsConsistent() { this->isConsistent_ = nullptr;};
      inline int32_t getIsConsistent() const { DARABONBA_PTR_GET_DEFAULT(isConsistent_, 0) };
      inline Data& setIsConsistent(int32_t isConsistent) { DARABONBA_PTR_SET_VALUE(isConsistent_, isConsistent) };


      // metricColumnCount Field Functions 
      bool hasMetricColumnCount() const { return this->metricColumnCount_ != nullptr;};
      void deleteMetricColumnCount() { this->metricColumnCount_ = nullptr;};
      inline int64_t getMetricColumnCount() const { DARABONBA_PTR_GET_DEFAULT(metricColumnCount_, 0L) };
      inline Data& setMetricColumnCount(int64_t metricColumnCount) { DARABONBA_PTR_SET_VALUE(metricColumnCount_, metricColumnCount) };


      // metricPassColumnCount Field Functions 
      bool hasMetricPassColumnCount() const { return this->metricPassColumnCount_ != nullptr;};
      void deleteMetricPassColumnCount() { this->metricPassColumnCount_ = nullptr;};
      inline int64_t getMetricPassColumnCount() const { DARABONBA_PTR_GET_DEFAULT(metricPassColumnCount_, 0L) };
      inline Data& setMetricPassColumnCount(int64_t metricPassColumnCount) { DARABONBA_PTR_SET_VALUE(metricPassColumnCount_, metricPassColumnCount) };


      // passColumnCount Field Functions 
      bool hasPassColumnCount() const { return this->passColumnCount_ != nullptr;};
      void deletePassColumnCount() { this->passColumnCount_ = nullptr;};
      inline int64_t getPassColumnCount() const { DARABONBA_PTR_GET_DEFAULT(passColumnCount_, 0L) };
      inline Data& setPassColumnCount(int64_t passColumnCount) { DARABONBA_PTR_SET_VALUE(passColumnCount_, passColumnCount) };


      // resultId Field Functions 
      bool hasResultId() const { return this->resultId_ != nullptr;};
      void deleteResultId() { this->resultId_ = nullptr;};
      inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
      inline Data& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


      // sourcePtName Field Functions 
      bool hasSourcePtName() const { return this->sourcePtName_ != nullptr;};
      void deleteSourcePtName() { this->sourcePtName_ = nullptr;};
      inline string getSourcePtName() const { DARABONBA_PTR_GET_DEFAULT(sourcePtName_, "") };
      inline Data& setSourcePtName(string sourcePtName) { DARABONBA_PTR_SET_VALUE(sourcePtName_, sourcePtName) };


      // sourceTable Field Functions 
      bool hasSourceTable() const { return this->sourceTable_ != nullptr;};
      void deleteSourceTable() { this->sourceTable_ = nullptr;};
      inline string getSourceTable() const { DARABONBA_PTR_GET_DEFAULT(sourceTable_, "") };
      inline Data& setSourceTable(string sourceTable) { DARABONBA_PTR_SET_VALUE(sourceTable_, sourceTable) };


      // srcMetricName Field Functions 
      bool hasSrcMetricName() const { return this->srcMetricName_ != nullptr;};
      void deleteSrcMetricName() { this->srcMetricName_ = nullptr;};
      inline string getSrcMetricName() const { DARABONBA_PTR_GET_DEFAULT(srcMetricName_, "") };
      inline Data& setSrcMetricName(string srcMetricName) { DARABONBA_PTR_SET_VALUE(srcMetricName_, srcMetricName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetPtName Field Functions 
      bool hasTargetPtName() const { return this->targetPtName_ != nullptr;};
      void deleteTargetPtName() { this->targetPtName_ = nullptr;};
      inline string getTargetPtName() const { DARABONBA_PTR_GET_DEFAULT(targetPtName_, "") };
      inline Data& setTargetPtName(string targetPtName) { DARABONBA_PTR_SET_VALUE(targetPtName_, targetPtName) };


      // targetTable Field Functions 
      bool hasTargetTable() const { return this->targetTable_ != nullptr;};
      void deleteTargetTable() { this->targetTable_ = nullptr;};
      inline string getTargetTable() const { DARABONBA_PTR_GET_DEFAULT(targetTable_, "") };
      inline Data& setTargetTable(string targetTable) { DARABONBA_PTR_SET_VALUE(targetTable_, targetTable) };


    protected:
      // The number of validated fields.
      shared_ptr<int64_t> checkColumnCount_ {};
      // The metric name of the target.
      shared_ptr<string> dstMetricName_ {};
      // Indicates whether the source and target are consistent. Valid values:
      // - 0: Inconsistent.
      // - 1: Consistent.
      shared_ptr<int32_t> isConsistent_ {};
      // The number of validated metrics.
      shared_ptr<int64_t> metricColumnCount_ {};
      // The number of metrics that passed validation.
      shared_ptr<int64_t> metricPassColumnCount_ {};
      // The number of fields that passed validation.
      shared_ptr<int64_t> passColumnCount_ {};
      // The unique ID of the validation result.
      shared_ptr<string> resultId_ {};
      // The partition name of the source.
      shared_ptr<string> sourcePtName_ {};
      // The table name of the source.
      shared_ptr<string> sourceTable_ {};
      // The metric name of the source.
      shared_ptr<string> srcMetricName_ {};
      // The task status. Valid values:
      // - 0: Created.
      // - 1: Running.
      // - 2: Completed.
      // - 3: Stopped.
      // - 4: Canceled.
      shared_ptr<int32_t> status_ {};
      // The partition name of the target.
      shared_ptr<string> targetPtName_ {};
      // The table name of the target.
      shared_ptr<string> targetTable_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetStepResultOverviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetStepResultOverviewResponseBody::Data) };
    inline GetStepResultOverviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetStepResultOverviewResponseBody::Data) };
    inline GetStepResultOverviewResponseBody& setData(const GetStepResultOverviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetStepResultOverviewResponseBody& setData(GetStepResultOverviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetStepResultOverviewResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetStepResultOverviewResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStepResultOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStepResultOverviewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response data.
    shared_ptr<GetStepResultOverviewResponseBody::Data> data_ {};
    // The fault message code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - true: The call was successful.
    // - false: The call failed. Check errCode and errMessage for troubleshooting.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
