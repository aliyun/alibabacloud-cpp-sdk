// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKCOLUMNRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKCOLUMNRESULTSRESPONSEBODY_HPP_
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
  class ListDataCheckColumnResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckColumnResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckColumnResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListDataCheckColumnResultsResponseBody() = default ;
    ListDataCheckColumnResultsResponseBody(const ListDataCheckColumnResultsResponseBody &) = default ;
    ListDataCheckColumnResultsResponseBody(ListDataCheckColumnResultsResponseBody &&) = default ;
    ListDataCheckColumnResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckColumnResultsResponseBody() = default ;
    ListDataCheckColumnResultsResponseBody& operator=(const ListDataCheckColumnResultsResponseBody &) = default ;
    ListDataCheckColumnResultsResponseBody& operator=(ListDataCheckColumnResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(actualThreshold, actualThreshold_);
        DARABONBA_PTR_TO_JSON(checkResult, checkResult_);
        DARABONBA_PTR_TO_JSON(checkRule, checkRule_);
        DARABONBA_PTR_TO_JSON(dstAlias, dstAlias_);
        DARABONBA_PTR_TO_JSON(dstColumnName, dstColumnName_);
        DARABONBA_PTR_TO_JSON(dstColumnType, dstColumnType_);
        DARABONBA_PTR_TO_JSON(dstMetricColumn, dstMetricColumn_);
        DARABONBA_PTR_TO_JSON(dstResult, dstResult_);
        DARABONBA_PTR_TO_JSON(expectThreshold, expectThreshold_);
        DARABONBA_PTR_TO_JSON(isConsistent, isConsistent_);
        DARABONBA_PTR_TO_JSON(srcAlias, srcAlias_);
        DARABONBA_PTR_TO_JSON(srcColumnName, srcColumnName_);
        DARABONBA_PTR_TO_JSON(srcColumnType, srcColumnType_);
        DARABONBA_PTR_TO_JSON(srcMetricColumn, srcMetricColumn_);
        DARABONBA_PTR_TO_JSON(srcResult, srcResult_);
        DARABONBA_PTR_TO_JSON(stepId, stepId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(actualThreshold, actualThreshold_);
        DARABONBA_PTR_FROM_JSON(checkResult, checkResult_);
        DARABONBA_PTR_FROM_JSON(checkRule, checkRule_);
        DARABONBA_PTR_FROM_JSON(dstAlias, dstAlias_);
        DARABONBA_PTR_FROM_JSON(dstColumnName, dstColumnName_);
        DARABONBA_PTR_FROM_JSON(dstColumnType, dstColumnType_);
        DARABONBA_PTR_FROM_JSON(dstMetricColumn, dstMetricColumn_);
        DARABONBA_PTR_FROM_JSON(dstResult, dstResult_);
        DARABONBA_PTR_FROM_JSON(expectThreshold, expectThreshold_);
        DARABONBA_PTR_FROM_JSON(isConsistent, isConsistent_);
        DARABONBA_PTR_FROM_JSON(srcAlias, srcAlias_);
        DARABONBA_PTR_FROM_JSON(srcColumnName, srcColumnName_);
        DARABONBA_PTR_FROM_JSON(srcColumnType, srcColumnType_);
        DARABONBA_PTR_FROM_JSON(srcMetricColumn, srcMetricColumn_);
        DARABONBA_PTR_FROM_JSON(srcResult, srcResult_);
        DARABONBA_PTR_FROM_JSON(stepId, stepId_);
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
      virtual bool empty() const override { return this->actualThreshold_ == nullptr
        && this->checkResult_ == nullptr && this->checkRule_ == nullptr && this->dstAlias_ == nullptr && this->dstColumnName_ == nullptr && this->dstColumnType_ == nullptr
        && this->dstMetricColumn_ == nullptr && this->dstResult_ == nullptr && this->expectThreshold_ == nullptr && this->isConsistent_ == nullptr && this->srcAlias_ == nullptr
        && this->srcColumnName_ == nullptr && this->srcColumnType_ == nullptr && this->srcMetricColumn_ == nullptr && this->srcResult_ == nullptr && this->stepId_ == nullptr; };
      // actualThreshold Field Functions 
      bool hasActualThreshold() const { return this->actualThreshold_ != nullptr;};
      void deleteActualThreshold() { this->actualThreshold_ = nullptr;};
      inline string getActualThreshold() const { DARABONBA_PTR_GET_DEFAULT(actualThreshold_, "") };
      inline Data& setActualThreshold(string actualThreshold) { DARABONBA_PTR_SET_VALUE(actualThreshold_, actualThreshold) };


      // checkResult Field Functions 
      bool hasCheckResult() const { return this->checkResult_ != nullptr;};
      void deleteCheckResult() { this->checkResult_ = nullptr;};
      inline int32_t getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, 0) };
      inline Data& setCheckResult(int32_t checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


      // checkRule Field Functions 
      bool hasCheckRule() const { return this->checkRule_ != nullptr;};
      void deleteCheckRule() { this->checkRule_ = nullptr;};
      inline string getCheckRule() const { DARABONBA_PTR_GET_DEFAULT(checkRule_, "") };
      inline Data& setCheckRule(string checkRule) { DARABONBA_PTR_SET_VALUE(checkRule_, checkRule) };


      // dstAlias Field Functions 
      bool hasDstAlias() const { return this->dstAlias_ != nullptr;};
      void deleteDstAlias() { this->dstAlias_ = nullptr;};
      inline string getDstAlias() const { DARABONBA_PTR_GET_DEFAULT(dstAlias_, "") };
      inline Data& setDstAlias(string dstAlias) { DARABONBA_PTR_SET_VALUE(dstAlias_, dstAlias) };


      // dstColumnName Field Functions 
      bool hasDstColumnName() const { return this->dstColumnName_ != nullptr;};
      void deleteDstColumnName() { this->dstColumnName_ = nullptr;};
      inline string getDstColumnName() const { DARABONBA_PTR_GET_DEFAULT(dstColumnName_, "") };
      inline Data& setDstColumnName(string dstColumnName) { DARABONBA_PTR_SET_VALUE(dstColumnName_, dstColumnName) };


      // dstColumnType Field Functions 
      bool hasDstColumnType() const { return this->dstColumnType_ != nullptr;};
      void deleteDstColumnType() { this->dstColumnType_ = nullptr;};
      inline string getDstColumnType() const { DARABONBA_PTR_GET_DEFAULT(dstColumnType_, "") };
      inline Data& setDstColumnType(string dstColumnType) { DARABONBA_PTR_SET_VALUE(dstColumnType_, dstColumnType) };


      // dstMetricColumn Field Functions 
      bool hasDstMetricColumn() const { return this->dstMetricColumn_ != nullptr;};
      void deleteDstMetricColumn() { this->dstMetricColumn_ = nullptr;};
      inline string getDstMetricColumn() const { DARABONBA_PTR_GET_DEFAULT(dstMetricColumn_, "") };
      inline Data& setDstMetricColumn(string dstMetricColumn) { DARABONBA_PTR_SET_VALUE(dstMetricColumn_, dstMetricColumn) };


      // dstResult Field Functions 
      bool hasDstResult() const { return this->dstResult_ != nullptr;};
      void deleteDstResult() { this->dstResult_ = nullptr;};
      inline string getDstResult() const { DARABONBA_PTR_GET_DEFAULT(dstResult_, "") };
      inline Data& setDstResult(string dstResult) { DARABONBA_PTR_SET_VALUE(dstResult_, dstResult) };


      // expectThreshold Field Functions 
      bool hasExpectThreshold() const { return this->expectThreshold_ != nullptr;};
      void deleteExpectThreshold() { this->expectThreshold_ = nullptr;};
      inline string getExpectThreshold() const { DARABONBA_PTR_GET_DEFAULT(expectThreshold_, "") };
      inline Data& setExpectThreshold(string expectThreshold) { DARABONBA_PTR_SET_VALUE(expectThreshold_, expectThreshold) };


      // isConsistent Field Functions 
      bool hasIsConsistent() const { return this->isConsistent_ != nullptr;};
      void deleteIsConsistent() { this->isConsistent_ = nullptr;};
      inline int32_t getIsConsistent() const { DARABONBA_PTR_GET_DEFAULT(isConsistent_, 0) };
      inline Data& setIsConsistent(int32_t isConsistent) { DARABONBA_PTR_SET_VALUE(isConsistent_, isConsistent) };


      // srcAlias Field Functions 
      bool hasSrcAlias() const { return this->srcAlias_ != nullptr;};
      void deleteSrcAlias() { this->srcAlias_ = nullptr;};
      inline string getSrcAlias() const { DARABONBA_PTR_GET_DEFAULT(srcAlias_, "") };
      inline Data& setSrcAlias(string srcAlias) { DARABONBA_PTR_SET_VALUE(srcAlias_, srcAlias) };


      // srcColumnName Field Functions 
      bool hasSrcColumnName() const { return this->srcColumnName_ != nullptr;};
      void deleteSrcColumnName() { this->srcColumnName_ = nullptr;};
      inline string getSrcColumnName() const { DARABONBA_PTR_GET_DEFAULT(srcColumnName_, "") };
      inline Data& setSrcColumnName(string srcColumnName) { DARABONBA_PTR_SET_VALUE(srcColumnName_, srcColumnName) };


      // srcColumnType Field Functions 
      bool hasSrcColumnType() const { return this->srcColumnType_ != nullptr;};
      void deleteSrcColumnType() { this->srcColumnType_ = nullptr;};
      inline string getSrcColumnType() const { DARABONBA_PTR_GET_DEFAULT(srcColumnType_, "") };
      inline Data& setSrcColumnType(string srcColumnType) { DARABONBA_PTR_SET_VALUE(srcColumnType_, srcColumnType) };


      // srcMetricColumn Field Functions 
      bool hasSrcMetricColumn() const { return this->srcMetricColumn_ != nullptr;};
      void deleteSrcMetricColumn() { this->srcMetricColumn_ = nullptr;};
      inline string getSrcMetricColumn() const { DARABONBA_PTR_GET_DEFAULT(srcMetricColumn_, "") };
      inline Data& setSrcMetricColumn(string srcMetricColumn) { DARABONBA_PTR_SET_VALUE(srcMetricColumn_, srcMetricColumn) };


      // srcResult Field Functions 
      bool hasSrcResult() const { return this->srcResult_ != nullptr;};
      void deleteSrcResult() { this->srcResult_ = nullptr;};
      inline string getSrcResult() const { DARABONBA_PTR_GET_DEFAULT(srcResult_, "") };
      inline Data& setSrcResult(string srcResult) { DARABONBA_PTR_SET_VALUE(srcResult_, srcResult) };


      // stepId Field Functions 
      bool hasStepId() const { return this->stepId_ != nullptr;};
      void deleteStepId() { this->stepId_ = nullptr;};
      inline int64_t getStepId() const { DARABONBA_PTR_GET_DEFAULT(stepId_, 0L) };
      inline Data& setStepId(int64_t stepId) { DARABONBA_PTR_SET_VALUE(stepId_, stepId) };


    protected:
      // The actual difference.
      shared_ptr<string> actualThreshold_ {};
      // The execution result. Valid values:
      // - 0: no record.
      // - 1: passed.
      // - 2: failed.
      shared_ptr<int32_t> checkResult_ {};
      // The comparison rule.
      shared_ptr<string> checkRule_ {};
      // The alias of the destination.
      shared_ptr<string> dstAlias_ {};
      // The field name of the destination.
      shared_ptr<string> dstColumnName_ {};
      // The field type of the destination.
      shared_ptr<string> dstColumnType_ {};
      // The metric key of the destination.
      shared_ptr<string> dstMetricColumn_ {};
      // The result value of the destination field.
      shared_ptr<string> dstResult_ {};
      // The expected threshold.
      shared_ptr<string> expectThreshold_ {};
      // The validation result. Valid values:
      // - 0: inconsistent.
      // - 1: consistent.
      // - 2: manually repaired.
      shared_ptr<int32_t> isConsistent_ {};
      // The alias of the source.
      shared_ptr<string> srcAlias_ {};
      // The field name of the source.
      shared_ptr<string> srcColumnName_ {};
      // The field type of the source.
      shared_ptr<string> srcColumnType_ {};
      // The metric key of the source.
      shared_ptr<string> srcMetricColumn_ {};
      // The result value of the source field.
      shared_ptr<string> srcResult_ {};
      // The step ID.
      shared_ptr<int64_t> stepId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDataCheckColumnResultsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDataCheckColumnResultsResponseBody::Data>) };
    inline vector<ListDataCheckColumnResultsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDataCheckColumnResultsResponseBody::Data>) };
    inline ListDataCheckColumnResultsResponseBody& setData(const vector<ListDataCheckColumnResultsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataCheckColumnResultsResponseBody& setData(vector<ListDataCheckColumnResultsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListDataCheckColumnResultsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListDataCheckColumnResultsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListDataCheckColumnResultsResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataCheckColumnResultsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCheckColumnResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataCheckColumnResultsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataCheckColumnResultsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response data.
    shared_ptr<vector<ListDataCheckColumnResultsResponseBody::Data>> data_ {};
    // The error code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The page number that indicates the requested page.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
