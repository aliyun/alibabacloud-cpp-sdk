// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKREPORTSTEPBYJOBIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKREPORTSTEPBYJOBIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListDataCheckReportStepByJobIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckReportStepByJobIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckReportStepByJobIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListDataCheckReportStepByJobIdResponseBody() = default ;
    ListDataCheckReportStepByJobIdResponseBody(const ListDataCheckReportStepByJobIdResponseBody &) = default ;
    ListDataCheckReportStepByJobIdResponseBody(ListDataCheckReportStepByJobIdResponseBody &&) = default ;
    ListDataCheckReportStepByJobIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckReportStepByJobIdResponseBody() = default ;
    ListDataCheckReportStepByJobIdResponseBody& operator=(const ListDataCheckReportStepByJobIdResponseBody &) = default ;
    ListDataCheckReportStepByJobIdResponseBody& operator=(ListDataCheckReportStepByJobIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(boundary, boundary_);
        DARABONBA_PTR_TO_JSON(checkColumCount, checkColumCount_);
        DARABONBA_PTR_TO_JSON(dstCount, dstCount_);
        DARABONBA_PTR_TO_JSON(dstSql, dstSql_);
        DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
        DARABONBA_PTR_TO_JSON(extra, extra_);
        DARABONBA_PTR_TO_JSON(gmtEnd, gmtEnd_);
        DARABONBA_PTR_TO_JSON(gmtStart, gmtStart_);
        DARABONBA_PTR_TO_JSON(isConsistent, isConsistent_);
        DARABONBA_PTR_TO_JSON(metricColumCount, metricColumCount_);
        DARABONBA_PTR_TO_JSON(metricPassColumCount, metricPassColumCount_);
        DARABONBA_PTR_TO_JSON(passColumCount, passColumCount_);
        DARABONBA_PTR_TO_JSON(resultId, resultId_);
        DARABONBA_PTR_TO_JSON(sourcePtName, sourcePtName_);
        DARABONBA_PTR_TO_JSON(srcCount, srcCount_);
        DARABONBA_PTR_TO_JSON(srcSql, srcSql_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(stepId, stepId_);
        DARABONBA_PTR_TO_JSON(targetPtName, targetPtName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(boundary, boundary_);
        DARABONBA_PTR_FROM_JSON(checkColumCount, checkColumCount_);
        DARABONBA_PTR_FROM_JSON(dstCount, dstCount_);
        DARABONBA_PTR_FROM_JSON(dstSql, dstSql_);
        DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
        DARABONBA_PTR_FROM_JSON(extra, extra_);
        DARABONBA_PTR_FROM_JSON(gmtEnd, gmtEnd_);
        DARABONBA_PTR_FROM_JSON(gmtStart, gmtStart_);
        DARABONBA_PTR_FROM_JSON(isConsistent, isConsistent_);
        DARABONBA_PTR_FROM_JSON(metricColumCount, metricColumCount_);
        DARABONBA_PTR_FROM_JSON(metricPassColumCount, metricPassColumCount_);
        DARABONBA_PTR_FROM_JSON(passColumCount, passColumCount_);
        DARABONBA_PTR_FROM_JSON(resultId, resultId_);
        DARABONBA_PTR_FROM_JSON(sourcePtName, sourcePtName_);
        DARABONBA_PTR_FROM_JSON(srcCount, srcCount_);
        DARABONBA_PTR_FROM_JSON(srcSql, srcSql_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(stepId, stepId_);
        DARABONBA_PTR_FROM_JSON(targetPtName, targetPtName_);
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
      virtual bool empty() const override { return this->boundary_ == nullptr
        && this->checkColumCount_ == nullptr && this->dstCount_ == nullptr && this->dstSql_ == nullptr && this->errMessage_ == nullptr && this->extra_ == nullptr
        && this->gmtEnd_ == nullptr && this->gmtStart_ == nullptr && this->isConsistent_ == nullptr && this->metricColumCount_ == nullptr && this->metricPassColumCount_ == nullptr
        && this->passColumCount_ == nullptr && this->resultId_ == nullptr && this->sourcePtName_ == nullptr && this->srcCount_ == nullptr && this->srcSql_ == nullptr
        && this->status_ == nullptr && this->stepId_ == nullptr && this->targetPtName_ == nullptr; };
      // boundary Field Functions 
      bool hasBoundary() const { return this->boundary_ != nullptr;};
      void deleteBoundary() { this->boundary_ = nullptr;};
      inline string getBoundary() const { DARABONBA_PTR_GET_DEFAULT(boundary_, "") };
      inline Data& setBoundary(string boundary) { DARABONBA_PTR_SET_VALUE(boundary_, boundary) };


      // checkColumCount Field Functions 
      bool hasCheckColumCount() const { return this->checkColumCount_ != nullptr;};
      void deleteCheckColumCount() { this->checkColumCount_ = nullptr;};
      inline int64_t getCheckColumCount() const { DARABONBA_PTR_GET_DEFAULT(checkColumCount_, 0L) };
      inline Data& setCheckColumCount(int64_t checkColumCount) { DARABONBA_PTR_SET_VALUE(checkColumCount_, checkColumCount) };


      // dstCount Field Functions 
      bool hasDstCount() const { return this->dstCount_ != nullptr;};
      void deleteDstCount() { this->dstCount_ = nullptr;};
      inline string getDstCount() const { DARABONBA_PTR_GET_DEFAULT(dstCount_, "") };
      inline Data& setDstCount(string dstCount) { DARABONBA_PTR_SET_VALUE(dstCount_, dstCount) };


      // dstSql Field Functions 
      bool hasDstSql() const { return this->dstSql_ != nullptr;};
      void deleteDstSql() { this->dstSql_ = nullptr;};
      inline string getDstSql() const { DARABONBA_PTR_GET_DEFAULT(dstSql_, "") };
      inline Data& setDstSql(string dstSql) { DARABONBA_PTR_SET_VALUE(dstSql_, dstSql) };


      // errMessage Field Functions 
      bool hasErrMessage() const { return this->errMessage_ != nullptr;};
      void deleteErrMessage() { this->errMessage_ = nullptr;};
      inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
      inline Data& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Data& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // gmtEnd Field Functions 
      bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
      void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
      inline string getGmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, "") };
      inline Data& setGmtEnd(string gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


      // gmtStart Field Functions 
      bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
      void deleteGmtStart() { this->gmtStart_ = nullptr;};
      inline string getGmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, "") };
      inline Data& setGmtStart(string gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


      // isConsistent Field Functions 
      bool hasIsConsistent() const { return this->isConsistent_ != nullptr;};
      void deleteIsConsistent() { this->isConsistent_ = nullptr;};
      inline int32_t getIsConsistent() const { DARABONBA_PTR_GET_DEFAULT(isConsistent_, 0) };
      inline Data& setIsConsistent(int32_t isConsistent) { DARABONBA_PTR_SET_VALUE(isConsistent_, isConsistent) };


      // metricColumCount Field Functions 
      bool hasMetricColumCount() const { return this->metricColumCount_ != nullptr;};
      void deleteMetricColumCount() { this->metricColumCount_ = nullptr;};
      inline int64_t getMetricColumCount() const { DARABONBA_PTR_GET_DEFAULT(metricColumCount_, 0L) };
      inline Data& setMetricColumCount(int64_t metricColumCount) { DARABONBA_PTR_SET_VALUE(metricColumCount_, metricColumCount) };


      // metricPassColumCount Field Functions 
      bool hasMetricPassColumCount() const { return this->metricPassColumCount_ != nullptr;};
      void deleteMetricPassColumCount() { this->metricPassColumCount_ = nullptr;};
      inline int64_t getMetricPassColumCount() const { DARABONBA_PTR_GET_DEFAULT(metricPassColumCount_, 0L) };
      inline Data& setMetricPassColumCount(int64_t metricPassColumCount) { DARABONBA_PTR_SET_VALUE(metricPassColumCount_, metricPassColumCount) };


      // passColumCount Field Functions 
      bool hasPassColumCount() const { return this->passColumCount_ != nullptr;};
      void deletePassColumCount() { this->passColumCount_ = nullptr;};
      inline int64_t getPassColumCount() const { DARABONBA_PTR_GET_DEFAULT(passColumCount_, 0L) };
      inline Data& setPassColumCount(int64_t passColumCount) { DARABONBA_PTR_SET_VALUE(passColumCount_, passColumCount) };


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


      // srcCount Field Functions 
      bool hasSrcCount() const { return this->srcCount_ != nullptr;};
      void deleteSrcCount() { this->srcCount_ = nullptr;};
      inline string getSrcCount() const { DARABONBA_PTR_GET_DEFAULT(srcCount_, "") };
      inline Data& setSrcCount(string srcCount) { DARABONBA_PTR_SET_VALUE(srcCount_, srcCount) };


      // srcSql Field Functions 
      bool hasSrcSql() const { return this->srcSql_ != nullptr;};
      void deleteSrcSql() { this->srcSql_ = nullptr;};
      inline string getSrcSql() const { DARABONBA_PTR_GET_DEFAULT(srcSql_, "") };
      inline Data& setSrcSql(string srcSql) { DARABONBA_PTR_SET_VALUE(srcSql_, srcSql) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // stepId Field Functions 
      bool hasStepId() const { return this->stepId_ != nullptr;};
      void deleteStepId() { this->stepId_ = nullptr;};
      inline string getStepId() const { DARABONBA_PTR_GET_DEFAULT(stepId_, "") };
      inline Data& setStepId(string stepId) { DARABONBA_PTR_SET_VALUE(stepId_, stepId) };


      // targetPtName Field Functions 
      bool hasTargetPtName() const { return this->targetPtName_ != nullptr;};
      void deleteTargetPtName() { this->targetPtName_ = nullptr;};
      inline string getTargetPtName() const { DARABONBA_PTR_GET_DEFAULT(targetPtName_, "") };
      inline Data& setTargetPtName(string targetPtName) { DARABONBA_PTR_SET_VALUE(targetPtName_, targetPtName) };


    protected:
      shared_ptr<string> boundary_ {};
      shared_ptr<int64_t> checkColumCount_ {};
      shared_ptr<string> dstCount_ {};
      shared_ptr<string> dstSql_ {};
      shared_ptr<string> errMessage_ {};
      shared_ptr<string> extra_ {};
      shared_ptr<string> gmtEnd_ {};
      shared_ptr<string> gmtStart_ {};
      shared_ptr<int32_t> isConsistent_ {};
      shared_ptr<int64_t> metricColumCount_ {};
      shared_ptr<int64_t> metricPassColumCount_ {};
      shared_ptr<int64_t> passColumCount_ {};
      shared_ptr<string> resultId_ {};
      shared_ptr<string> sourcePtName_ {};
      shared_ptr<string> srcCount_ {};
      shared_ptr<string> srcSql_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> stepId_ {};
      shared_ptr<string> targetPtName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDataCheckReportStepByJobIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDataCheckReportStepByJobIdResponseBody::Data>) };
    inline vector<ListDataCheckReportStepByJobIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDataCheckReportStepByJobIdResponseBody::Data>) };
    inline ListDataCheckReportStepByJobIdResponseBody& setData(const vector<ListDataCheckReportStepByJobIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataCheckReportStepByJobIdResponseBody& setData(vector<ListDataCheckReportStepByJobIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListDataCheckReportStepByJobIdResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListDataCheckReportStepByJobIdResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListDataCheckReportStepByJobIdResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataCheckReportStepByJobIdResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCheckReportStepByJobIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataCheckReportStepByJobIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataCheckReportStepByJobIdResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDataCheckReportStepByJobIdResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
