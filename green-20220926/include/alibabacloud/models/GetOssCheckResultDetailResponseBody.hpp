// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKRESULTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKRESULTDETAILRESPONSEBODY_HPP_
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
  class GetOssCheckResultDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckResultDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckResultDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOssCheckResultDetailResponseBody() = default ;
    GetOssCheckResultDetailResponseBody(const GetOssCheckResultDetailResponseBody &) = default ;
    GetOssCheckResultDetailResponseBody(GetOssCheckResultDetailResponseBody &&) = default ;
    GetOssCheckResultDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckResultDetailResponseBody() = default ;
    GetOssCheckResultDetailResponseBody& operator=(const GetOssCheckResultDetailResponseBody &) = default ;
    GetOssCheckResultDetailResponseBody& operator=(GetOssCheckResultDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(CopyFrom, copyFrom_);
        DARABONBA_PTR_TO_JSON(FreezeStatus, freezeStatus_);
        DARABONBA_PTR_TO_JSON(FreezeType, freezeType_);
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(IsCopy, isCopy_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(LabelDetails, labelDetails_);
        DARABONBA_PTR_TO_JSON(LabelDetails2, labelDetails2_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Labels2, labels2_);
        DARABONBA_PTR_TO_JSON(ManualFreezeAction, manualFreezeAction_);
        DARABONBA_PTR_TO_JSON(ManualOperateTime, manualOperateTime_);
        DARABONBA_PTR_TO_JSON(ManualOperator, manualOperator_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(Msg, msg_);
        DARABONBA_PTR_TO_JSON(Object, object_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(RiskLevel0, riskLevel0_);
        DARABONBA_PTR_TO_JSON(RiskLevel2, riskLevel2_);
        DARABONBA_PTR_TO_JSON(ScanResult, scanResult_);
        DARABONBA_PTR_TO_JSON(ScanServiceInfos, scanServiceInfos_);
        DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(CopyFrom, copyFrom_);
        DARABONBA_PTR_FROM_JSON(FreezeStatus, freezeStatus_);
        DARABONBA_PTR_FROM_JSON(FreezeType, freezeType_);
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(IsCopy, isCopy_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(LabelDetails, labelDetails_);
        DARABONBA_PTR_FROM_JSON(LabelDetails2, labelDetails2_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Labels2, labels2_);
        DARABONBA_PTR_FROM_JSON(ManualFreezeAction, manualFreezeAction_);
        DARABONBA_PTR_FROM_JSON(ManualOperateTime, manualOperateTime_);
        DARABONBA_PTR_FROM_JSON(ManualOperator, manualOperator_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(Msg, msg_);
        DARABONBA_PTR_FROM_JSON(Object, object_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(RiskLevel0, riskLevel0_);
        DARABONBA_PTR_FROM_JSON(RiskLevel2, riskLevel2_);
        DARABONBA_PTR_FROM_JSON(ScanResult, scanResult_);
        DARABONBA_PTR_FROM_JSON(ScanServiceInfos, scanServiceInfos_);
        DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      class ScanServiceInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScanServiceInfos& obj) { 
          DARABONBA_PTR_TO_JSON(CopyFrom, copyFrom_);
          DARABONBA_PTR_TO_JSON(IsCopy, isCopy_);
          DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        };
        friend void from_json(const Darabonba::Json& j, ScanServiceInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(CopyFrom, copyFrom_);
          DARABONBA_PTR_FROM_JSON(IsCopy, isCopy_);
          DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        };
        ScanServiceInfos() = default ;
        ScanServiceInfos(const ScanServiceInfos &) = default ;
        ScanServiceInfos(ScanServiceInfos &&) = default ;
        ScanServiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScanServiceInfos() = default ;
        ScanServiceInfos& operator=(const ScanServiceInfos &) = default ;
        ScanServiceInfos& operator=(ScanServiceInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->copyFrom_ == nullptr
        && this->isCopy_ == nullptr && this->serviceCode_ == nullptr && this->serviceName_ == nullptr; };
        // copyFrom Field Functions 
        bool hasCopyFrom() const { return this->copyFrom_ != nullptr;};
        void deleteCopyFrom() { this->copyFrom_ = nullptr;};
        inline string getCopyFrom() const { DARABONBA_PTR_GET_DEFAULT(copyFrom_, "") };
        inline ScanServiceInfos& setCopyFrom(string copyFrom) { DARABONBA_PTR_SET_VALUE(copyFrom_, copyFrom) };


        // isCopy Field Functions 
        bool hasIsCopy() const { return this->isCopy_ != nullptr;};
        void deleteIsCopy() { this->isCopy_ = nullptr;};
        inline bool getIsCopy() const { DARABONBA_PTR_GET_DEFAULT(isCopy_, false) };
        inline ScanServiceInfos& setIsCopy(bool isCopy) { DARABONBA_PTR_SET_VALUE(isCopy_, isCopy) };


        // serviceCode Field Functions 
        bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
        void deleteServiceCode() { this->serviceCode_ = nullptr;};
        inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
        inline ScanServiceInfos& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline ScanServiceInfos& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      protected:
        // Main service.
        shared_ptr<string> copyFrom_ {};
        // Whether to copy.
        shared_ptr<bool> isCopy_ {};
        // Service code.
        shared_ptr<string> serviceCode_ {};
        // Service name.
        shared_ptr<string> serviceName_ {};
      };

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
        // Confidence score, 0 to 100, retained to two decimal places.
        shared_ptr<float> confidence_ {};
        // Label description.
        shared_ptr<string> description_ {};
        // Label.
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
        // Confidence score, 0 to 100, retained to two decimal places.
        shared_ptr<float> confidence_ {};
        // Label description.
        shared_ptr<string> description_ {};
        // Label.
        shared_ptr<string> label_ {};
      };

      virtual bool empty() const override { return this->bucket_ == nullptr
        && this->code_ == nullptr && this->contentType_ == nullptr && this->copyFrom_ == nullptr && this->freezeStatus_ == nullptr && this->freezeType_ == nullptr
        && this->imageUrl_ == nullptr && this->isCopy_ == nullptr && this->jobName_ == nullptr && this->labelDetails_ == nullptr && this->labelDetails2_ == nullptr
        && this->labels_ == nullptr && this->labels2_ == nullptr && this->manualFreezeAction_ == nullptr && this->manualOperateTime_ == nullptr && this->manualOperator_ == nullptr
        && this->md5_ == nullptr && this->msg_ == nullptr && this->object_ == nullptr && this->riskLevel_ == nullptr && this->riskLevel0_ == nullptr
        && this->riskLevel2_ == nullptr && this->scanResult_ == nullptr && this->scanServiceInfos_ == nullptr && this->serviceCode_ == nullptr && this->serviceName_ == nullptr
        && this->taskId_ == nullptr && this->url_ == nullptr; };
      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline Data& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Data& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // copyFrom Field Functions 
      bool hasCopyFrom() const { return this->copyFrom_ != nullptr;};
      void deleteCopyFrom() { this->copyFrom_ = nullptr;};
      inline string getCopyFrom() const { DARABONBA_PTR_GET_DEFAULT(copyFrom_, "") };
      inline Data& setCopyFrom(string copyFrom) { DARABONBA_PTR_SET_VALUE(copyFrom_, copyFrom) };


      // freezeStatus Field Functions 
      bool hasFreezeStatus() const { return this->freezeStatus_ != nullptr;};
      void deleteFreezeStatus() { this->freezeStatus_ = nullptr;};
      inline string getFreezeStatus() const { DARABONBA_PTR_GET_DEFAULT(freezeStatus_, "") };
      inline Data& setFreezeStatus(string freezeStatus) { DARABONBA_PTR_SET_VALUE(freezeStatus_, freezeStatus) };


      // freezeType Field Functions 
      bool hasFreezeType() const { return this->freezeType_ != nullptr;};
      void deleteFreezeType() { this->freezeType_ = nullptr;};
      inline string getFreezeType() const { DARABONBA_PTR_GET_DEFAULT(freezeType_, "") };
      inline Data& setFreezeType(string freezeType) { DARABONBA_PTR_SET_VALUE(freezeType_, freezeType) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline Data& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // isCopy Field Functions 
      bool hasIsCopy() const { return this->isCopy_ != nullptr;};
      void deleteIsCopy() { this->isCopy_ = nullptr;};
      inline bool getIsCopy() const { DARABONBA_PTR_GET_DEFAULT(isCopy_, false) };
      inline Data& setIsCopy(bool isCopy) { DARABONBA_PTR_SET_VALUE(isCopy_, isCopy) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline Data& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // labelDetails Field Functions 
      bool hasLabelDetails() const { return this->labelDetails_ != nullptr;};
      void deleteLabelDetails() { this->labelDetails_ = nullptr;};
      inline const vector<Data::LabelDetails> & getLabelDetails() const { DARABONBA_PTR_GET_CONST(labelDetails_, vector<Data::LabelDetails>) };
      inline vector<Data::LabelDetails> getLabelDetails() { DARABONBA_PTR_GET(labelDetails_, vector<Data::LabelDetails>) };
      inline Data& setLabelDetails(const vector<Data::LabelDetails> & labelDetails) { DARABONBA_PTR_SET_VALUE(labelDetails_, labelDetails) };
      inline Data& setLabelDetails(vector<Data::LabelDetails> && labelDetails) { DARABONBA_PTR_SET_RVALUE(labelDetails_, labelDetails) };


      // labelDetails2 Field Functions 
      bool hasLabelDetails2() const { return this->labelDetails2_ != nullptr;};
      void deleteLabelDetails2() { this->labelDetails2_ = nullptr;};
      inline const vector<Data::LabelDetails2> & getLabelDetails2() const { DARABONBA_PTR_GET_CONST(labelDetails2_, vector<Data::LabelDetails2>) };
      inline vector<Data::LabelDetails2> getLabelDetails2() { DARABONBA_PTR_GET(labelDetails2_, vector<Data::LabelDetails2>) };
      inline Data& setLabelDetails2(const vector<Data::LabelDetails2> & labelDetails2) { DARABONBA_PTR_SET_VALUE(labelDetails2_, labelDetails2) };
      inline Data& setLabelDetails2(vector<Data::LabelDetails2> && labelDetails2) { DARABONBA_PTR_SET_RVALUE(labelDetails2_, labelDetails2) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
      inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
      inline Data& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Data& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // labels2 Field Functions 
      bool hasLabels2() const { return this->labels2_ != nullptr;};
      void deleteLabels2() { this->labels2_ = nullptr;};
      inline const vector<string> & getLabels2() const { DARABONBA_PTR_GET_CONST(labels2_, vector<string>) };
      inline vector<string> getLabels2() { DARABONBA_PTR_GET(labels2_, vector<string>) };
      inline Data& setLabels2(const vector<string> & labels2) { DARABONBA_PTR_SET_VALUE(labels2_, labels2) };
      inline Data& setLabels2(vector<string> && labels2) { DARABONBA_PTR_SET_RVALUE(labels2_, labels2) };


      // manualFreezeAction Field Functions 
      bool hasManualFreezeAction() const { return this->manualFreezeAction_ != nullptr;};
      void deleteManualFreezeAction() { this->manualFreezeAction_ = nullptr;};
      inline string getManualFreezeAction() const { DARABONBA_PTR_GET_DEFAULT(manualFreezeAction_, "") };
      inline Data& setManualFreezeAction(string manualFreezeAction) { DARABONBA_PTR_SET_VALUE(manualFreezeAction_, manualFreezeAction) };


      // manualOperateTime Field Functions 
      bool hasManualOperateTime() const { return this->manualOperateTime_ != nullptr;};
      void deleteManualOperateTime() { this->manualOperateTime_ = nullptr;};
      inline string getManualOperateTime() const { DARABONBA_PTR_GET_DEFAULT(manualOperateTime_, "") };
      inline Data& setManualOperateTime(string manualOperateTime) { DARABONBA_PTR_SET_VALUE(manualOperateTime_, manualOperateTime) };


      // manualOperator Field Functions 
      bool hasManualOperator() const { return this->manualOperator_ != nullptr;};
      void deleteManualOperator() { this->manualOperator_ = nullptr;};
      inline string getManualOperator() const { DARABONBA_PTR_GET_DEFAULT(manualOperator_, "") };
      inline Data& setManualOperator(string manualOperator) { DARABONBA_PTR_SET_VALUE(manualOperator_, manualOperator) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Data& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline Data& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // object Field Functions 
      bool hasObject() const { return this->object_ != nullptr;};
      void deleteObject() { this->object_ = nullptr;};
      inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
      inline Data& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // riskLevel0 Field Functions 
      bool hasRiskLevel0() const { return this->riskLevel0_ != nullptr;};
      void deleteRiskLevel0() { this->riskLevel0_ = nullptr;};
      inline string getRiskLevel0() const { DARABONBA_PTR_GET_DEFAULT(riskLevel0_, "") };
      inline Data& setRiskLevel0(string riskLevel0) { DARABONBA_PTR_SET_VALUE(riskLevel0_, riskLevel0) };


      // riskLevel2 Field Functions 
      bool hasRiskLevel2() const { return this->riskLevel2_ != nullptr;};
      void deleteRiskLevel2() { this->riskLevel2_ = nullptr;};
      inline string getRiskLevel2() const { DARABONBA_PTR_GET_DEFAULT(riskLevel2_, "") };
      inline Data& setRiskLevel2(string riskLevel2) { DARABONBA_PTR_SET_VALUE(riskLevel2_, riskLevel2) };


      // scanResult Field Functions 
      bool hasScanResult() const { return this->scanResult_ != nullptr;};
      void deleteScanResult() { this->scanResult_ = nullptr;};
      inline string getScanResult() const { DARABONBA_PTR_GET_DEFAULT(scanResult_, "") };
      inline Data& setScanResult(string scanResult) { DARABONBA_PTR_SET_VALUE(scanResult_, scanResult) };


      // scanServiceInfos Field Functions 
      bool hasScanServiceInfos() const { return this->scanServiceInfos_ != nullptr;};
      void deleteScanServiceInfos() { this->scanServiceInfos_ = nullptr;};
      inline const vector<Data::ScanServiceInfos> & getScanServiceInfos() const { DARABONBA_PTR_GET_CONST(scanServiceInfos_, vector<Data::ScanServiceInfos>) };
      inline vector<Data::ScanServiceInfos> getScanServiceInfos() { DARABONBA_PTR_GET(scanServiceInfos_, vector<Data::ScanServiceInfos>) };
      inline Data& setScanServiceInfos(const vector<Data::ScanServiceInfos> & scanServiceInfos) { DARABONBA_PTR_SET_VALUE(scanServiceInfos_, scanServiceInfos) };
      inline Data& setScanServiceInfos(vector<Data::ScanServiceInfos> && scanServiceInfos) { DARABONBA_PTR_SET_RVALUE(scanServiceInfos_, scanServiceInfos) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline Data& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // Bucket name.
      shared_ptr<string> bucket_ {};
      // Error code, consistent with HTTP status.
      shared_ptr<string> code_ {};
      // Audio and video detection type.
      shared_ptr<string> contentType_ {};
      // Primary service.
      shared_ptr<string> copyFrom_ {};
      // Freeze status.
      shared_ptr<string> freezeStatus_ {};
      // Freeze type.
      shared_ptr<string> freezeType_ {};
      // Image URL.
      shared_ptr<string> imageUrl_ {};
      // Whether to copy.
      shared_ptr<bool> isCopy_ {};
      // Job name.
      shared_ptr<string> jobName_ {};
      // Labels.
      shared_ptr<vector<Data::LabelDetails>> labelDetails_ {};
      // Labels.
      shared_ptr<vector<Data::LabelDetails2>> labelDetails2_ {};
      // Image labels.
      shared_ptr<vector<string>> labels_ {};
      // Text labels.
      shared_ptr<vector<string>> labels2_ {};
      // Manual handling status.
      shared_ptr<string> manualFreezeAction_ {};
      // Handling time.
      shared_ptr<string> manualOperateTime_ {};
      // Handler.
      shared_ptr<string> manualOperator_ {};
      // File MD5.
      shared_ptr<string> md5_ {};
      // Further description of the error code.
      shared_ptr<string> msg_ {};
      // Object name.
      shared_ptr<string> object_ {};
      // Image risk level
      shared_ptr<string> riskLevel_ {};
      // Overall risk level.
      shared_ptr<string> riskLevel0_ {};
      // Text risk level
      shared_ptr<string> riskLevel2_ {};
      // Detailed scan results.
      shared_ptr<string> scanResult_ {};
      // Detection service information
      shared_ptr<vector<Data::ScanServiceInfos>> scanServiceInfos_ {};
      // Service code.
      shared_ptr<string> serviceCode_ {};
      // Service name.
      shared_ptr<string> serviceName_ {};
      // Task ID.
      shared_ptr<string> taskId_ {};
      // Task URL.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetOssCheckResultDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetOssCheckResultDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetOssCheckResultDetailResponseBody::Data) };
    inline GetOssCheckResultDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetOssCheckResultDetailResponseBody::Data) };
    inline GetOssCheckResultDetailResponseBody& setData(const GetOssCheckResultDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetOssCheckResultDetailResponseBody& setData(GetOssCheckResultDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetOssCheckResultDetailResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssCheckResultDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOssCheckResultDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code, consistent with HTTP status.
    shared_ptr<int32_t> code_ {};
    // Detailed data.
    shared_ptr<GetOssCheckResultDetailResponseBody::Data> data_ {};
    // Further description of the error code.
    shared_ptr<string> msg_ {};
    // Backend-assigned ID used to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Success indicator.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
