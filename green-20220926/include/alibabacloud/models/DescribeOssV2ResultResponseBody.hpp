// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSV2RESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSV2RESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class DescribeOssV2ResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssV2ResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssV2ResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOssV2ResultResponseBody() = default ;
    DescribeOssV2ResultResponseBody(const DescribeOssV2ResultResponseBody &) = default ;
    DescribeOssV2ResultResponseBody(DescribeOssV2ResultResponseBody &&) = default ;
    DescribeOssV2ResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssV2ResultResponseBody() = default ;
    DescribeOssV2ResultResponseBody& operator=(const DescribeOssV2ResultResponseBody &) = default ;
    DescribeOssV2ResultResponseBody& operator=(DescribeOssV2ResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(Freeze, freeze_);
        DARABONBA_PTR_TO_JSON(FreezeStatus, freezeStatus_);
        DARABONBA_PTR_TO_JSON(FreezeType, freezeType_);
        DARABONBA_PTR_TO_JSON(LabelDetails, labelDetails_);
        DARABONBA_PTR_TO_JSON(LabelDetails2, labelDetails2_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Labels2, labels2_);
        DARABONBA_PTR_TO_JSON(ManualFreezeAction, manualFreezeAction_);
        DARABONBA_PTR_TO_JSON(ManualOperateTime, manualOperateTime_);
        DARABONBA_PTR_TO_JSON(ManualOperator, manualOperator_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(Object, object_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(RiskLevel0, riskLevel0_);
        DARABONBA_PTR_TO_JSON(RiskLevel2, riskLevel2_);
        DARABONBA_PTR_TO_JSON(ScanResult, scanResult_);
        DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_TO_JSON(SysDisposalStatus, sysDisposalStatus_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(Freeze, freeze_);
        DARABONBA_PTR_FROM_JSON(FreezeStatus, freezeStatus_);
        DARABONBA_PTR_FROM_JSON(FreezeType, freezeType_);
        DARABONBA_PTR_FROM_JSON(LabelDetails, labelDetails_);
        DARABONBA_PTR_FROM_JSON(LabelDetails2, labelDetails2_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Labels2, labels2_);
        DARABONBA_PTR_FROM_JSON(ManualFreezeAction, manualFreezeAction_);
        DARABONBA_PTR_FROM_JSON(ManualOperateTime, manualOperateTime_);
        DARABONBA_PTR_FROM_JSON(ManualOperator, manualOperator_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(Object, object_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(RiskLevel0, riskLevel0_);
        DARABONBA_PTR_FROM_JSON(RiskLevel2, riskLevel2_);
        DARABONBA_PTR_FROM_JSON(ScanResult, scanResult_);
        DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_FROM_JSON(SysDisposalStatus, sysDisposalStatus_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      class LabelDetails2 : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LabelDetails2& obj) { 
          DARABONBA_PTR_TO_JSON(Confidence, confidence_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Label, label_);
        };
        friend void from_json(const Darabonba::Json& j, LabelDetails2& obj) { 
          DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
        };
        LabelDetails2() = default ;
        LabelDetails2(const LabelDetails2 &) = default ;
        LabelDetails2(LabelDetails2 &&) = default ;
        LabelDetails2(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LabelDetails2() = default ;
        LabelDetails2& operator=(const LabelDetails2 &) = default ;
        LabelDetails2& operator=(LabelDetails2 &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->confidence_ == nullptr
        && this->description_ == nullptr && this->label_ == nullptr; };
        // confidence Field Functions 
        bool hasConfidence() const { return this->confidence_ != nullptr;};
        void deleteConfidence() { this->confidence_ = nullptr;};
        inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
        inline LabelDetails2& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline LabelDetails2& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline LabelDetails2& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      protected:
        shared_ptr<float> confidence_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> label_ {};
      };

      class LabelDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LabelDetails& obj) { 
          DARABONBA_PTR_TO_JSON(Confidence, confidence_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Label, label_);
        };
        friend void from_json(const Darabonba::Json& j, LabelDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
        };
        LabelDetails() = default ;
        LabelDetails(const LabelDetails &) = default ;
        LabelDetails(LabelDetails &&) = default ;
        LabelDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LabelDetails() = default ;
        LabelDetails& operator=(const LabelDetails &) = default ;
        LabelDetails& operator=(LabelDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->confidence_ == nullptr
        && this->description_ == nullptr && this->label_ == nullptr; };
        // confidence Field Functions 
        bool hasConfidence() const { return this->confidence_ != nullptr;};
        void deleteConfidence() { this->confidence_ = nullptr;};
        inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
        inline LabelDetails& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline LabelDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline LabelDetails& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      protected:
        shared_ptr<float> confidence_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> label_ {};
      };

      virtual bool empty() const override { return this->bucket_ == nullptr
        && this->code_ == nullptr && this->contentType_ == nullptr && this->freeze_ == nullptr && this->freezeStatus_ == nullptr && this->freezeType_ == nullptr
        && this->labelDetails_ == nullptr && this->labelDetails2_ == nullptr && this->labels_ == nullptr && this->labels2_ == nullptr && this->manualFreezeAction_ == nullptr
        && this->manualOperateTime_ == nullptr && this->manualOperator_ == nullptr && this->md5_ == nullptr && this->object_ == nullptr && this->requestId_ == nullptr
        && this->riskLevel_ == nullptr && this->riskLevel0_ == nullptr && this->riskLevel2_ == nullptr && this->scanResult_ == nullptr && this->serviceCode_ == nullptr
        && this->sysDisposalStatus_ == nullptr && this->taskId_ == nullptr && this->url_ == nullptr; };
      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline Items& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Items& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Items& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // freeze Field Functions 
      bool hasFreeze() const { return this->freeze_ != nullptr;};
      void deleteFreeze() { this->freeze_ = nullptr;};
      inline bool getFreeze() const { DARABONBA_PTR_GET_DEFAULT(freeze_, false) };
      inline Items& setFreeze(bool freeze) { DARABONBA_PTR_SET_VALUE(freeze_, freeze) };


      // freezeStatus Field Functions 
      bool hasFreezeStatus() const { return this->freezeStatus_ != nullptr;};
      void deleteFreezeStatus() { this->freezeStatus_ = nullptr;};
      inline string getFreezeStatus() const { DARABONBA_PTR_GET_DEFAULT(freezeStatus_, "") };
      inline Items& setFreezeStatus(string freezeStatus) { DARABONBA_PTR_SET_VALUE(freezeStatus_, freezeStatus) };


      // freezeType Field Functions 
      bool hasFreezeType() const { return this->freezeType_ != nullptr;};
      void deleteFreezeType() { this->freezeType_ = nullptr;};
      inline string getFreezeType() const { DARABONBA_PTR_GET_DEFAULT(freezeType_, "") };
      inline Items& setFreezeType(string freezeType) { DARABONBA_PTR_SET_VALUE(freezeType_, freezeType) };


      // labelDetails Field Functions 
      bool hasLabelDetails() const { return this->labelDetails_ != nullptr;};
      void deleteLabelDetails() { this->labelDetails_ = nullptr;};
      inline const vector<Items::LabelDetails> & getLabelDetails() const { DARABONBA_PTR_GET_CONST(labelDetails_, vector<Items::LabelDetails>) };
      inline vector<Items::LabelDetails> getLabelDetails() { DARABONBA_PTR_GET(labelDetails_, vector<Items::LabelDetails>) };
      inline Items& setLabelDetails(const vector<Items::LabelDetails> & labelDetails) { DARABONBA_PTR_SET_VALUE(labelDetails_, labelDetails) };
      inline Items& setLabelDetails(vector<Items::LabelDetails> && labelDetails) { DARABONBA_PTR_SET_RVALUE(labelDetails_, labelDetails) };


      // labelDetails2 Field Functions 
      bool hasLabelDetails2() const { return this->labelDetails2_ != nullptr;};
      void deleteLabelDetails2() { this->labelDetails2_ = nullptr;};
      inline const vector<Items::LabelDetails2> & getLabelDetails2() const { DARABONBA_PTR_GET_CONST(labelDetails2_, vector<Items::LabelDetails2>) };
      inline vector<Items::LabelDetails2> getLabelDetails2() { DARABONBA_PTR_GET(labelDetails2_, vector<Items::LabelDetails2>) };
      inline Items& setLabelDetails2(const vector<Items::LabelDetails2> & labelDetails2) { DARABONBA_PTR_SET_VALUE(labelDetails2_, labelDetails2) };
      inline Items& setLabelDetails2(vector<Items::LabelDetails2> && labelDetails2) { DARABONBA_PTR_SET_RVALUE(labelDetails2_, labelDetails2) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
      inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
      inline Items& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Items& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // labels2 Field Functions 
      bool hasLabels2() const { return this->labels2_ != nullptr;};
      void deleteLabels2() { this->labels2_ = nullptr;};
      inline const vector<string> & getLabels2() const { DARABONBA_PTR_GET_CONST(labels2_, vector<string>) };
      inline vector<string> getLabels2() { DARABONBA_PTR_GET(labels2_, vector<string>) };
      inline Items& setLabels2(const vector<string> & labels2) { DARABONBA_PTR_SET_VALUE(labels2_, labels2) };
      inline Items& setLabels2(vector<string> && labels2) { DARABONBA_PTR_SET_RVALUE(labels2_, labels2) };


      // manualFreezeAction Field Functions 
      bool hasManualFreezeAction() const { return this->manualFreezeAction_ != nullptr;};
      void deleteManualFreezeAction() { this->manualFreezeAction_ = nullptr;};
      inline string getManualFreezeAction() const { DARABONBA_PTR_GET_DEFAULT(manualFreezeAction_, "") };
      inline Items& setManualFreezeAction(string manualFreezeAction) { DARABONBA_PTR_SET_VALUE(manualFreezeAction_, manualFreezeAction) };


      // manualOperateTime Field Functions 
      bool hasManualOperateTime() const { return this->manualOperateTime_ != nullptr;};
      void deleteManualOperateTime() { this->manualOperateTime_ = nullptr;};
      inline string getManualOperateTime() const { DARABONBA_PTR_GET_DEFAULT(manualOperateTime_, "") };
      inline Items& setManualOperateTime(string manualOperateTime) { DARABONBA_PTR_SET_VALUE(manualOperateTime_, manualOperateTime) };


      // manualOperator Field Functions 
      bool hasManualOperator() const { return this->manualOperator_ != nullptr;};
      void deleteManualOperator() { this->manualOperator_ = nullptr;};
      inline string getManualOperator() const { DARABONBA_PTR_GET_DEFAULT(manualOperator_, "") };
      inline Items& setManualOperator(string manualOperator) { DARABONBA_PTR_SET_VALUE(manualOperator_, manualOperator) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Items& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
      inline Items& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Items& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Items& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // riskLevel0 Field Functions 
      bool hasRiskLevel0() const { return this->riskLevel0_ != nullptr;};
      void deleteRiskLevel0() { this->riskLevel0_ = nullptr;};
      inline string getRiskLevel0() const { DARABONBA_PTR_GET_DEFAULT(riskLevel0_, "") };
      inline Items& setRiskLevel0(string riskLevel0) { DARABONBA_PTR_SET_VALUE(riskLevel0_, riskLevel0) };


      // riskLevel2 Field Functions 
      bool hasRiskLevel2() const { return this->riskLevel2_ != nullptr;};
      void deleteRiskLevel2() { this->riskLevel2_ = nullptr;};
      inline string getRiskLevel2() const { DARABONBA_PTR_GET_DEFAULT(riskLevel2_, "") };
      inline Items& setRiskLevel2(string riskLevel2) { DARABONBA_PTR_SET_VALUE(riskLevel2_, riskLevel2) };


      // scanResult Field Functions 
      bool hasScanResult() const { return this->scanResult_ != nullptr;};
      void deleteScanResult() { this->scanResult_ = nullptr;};
      inline string getScanResult() const { DARABONBA_PTR_GET_DEFAULT(scanResult_, "") };
      inline Items& setScanResult(string scanResult) { DARABONBA_PTR_SET_VALUE(scanResult_, scanResult) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline Items& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      // sysDisposalStatus Field Functions 
      bool hasSysDisposalStatus() const { return this->sysDisposalStatus_ != nullptr;};
      void deleteSysDisposalStatus() { this->sysDisposalStatus_ = nullptr;};
      inline string getSysDisposalStatus() const { DARABONBA_PTR_GET_DEFAULT(sysDisposalStatus_, "") };
      inline Items& setSysDisposalStatus(string sysDisposalStatus) { DARABONBA_PTR_SET_VALUE(sysDisposalStatus_, sysDisposalStatus) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Items& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> bucket_ {};
      shared_ptr<string> code_ {};
      shared_ptr<string> contentType_ {};
      shared_ptr<bool> freeze_ {};
      shared_ptr<string> freezeStatus_ {};
      shared_ptr<string> freezeType_ {};
      shared_ptr<vector<Items::LabelDetails>> labelDetails_ {};
      shared_ptr<vector<Items::LabelDetails2>> labelDetails2_ {};
      shared_ptr<vector<string>> labels_ {};
      shared_ptr<vector<string>> labels2_ {};
      shared_ptr<string> manualFreezeAction_ {};
      shared_ptr<string> manualOperateTime_ {};
      shared_ptr<string> manualOperator_ {};
      shared_ptr<string> md5_ {};
      shared_ptr<string> object_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> riskLevel_ {};
      shared_ptr<string> riskLevel0_ {};
      shared_ptr<string> riskLevel2_ {};
      shared_ptr<string> scanResult_ {};
      // Service code。
      shared_ptr<string> serviceCode_ {};
      shared_ptr<string> sysDisposalStatus_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeOssV2ResultResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeOssV2ResultResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeOssV2ResultResponseBody::Items>) };
    inline vector<DescribeOssV2ResultResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeOssV2ResultResponseBody::Items>) };
    inline DescribeOssV2ResultResponseBody& setItems(const vector<DescribeOssV2ResultResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeOssV2ResultResponseBody& setItems(vector<DescribeOssV2ResultResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeOssV2ResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOssV2ResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeOssV2ResultResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<DescribeOssV2ResultResponseBody::Items>> items_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
