// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKRESULTDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKRESULTDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOssCheckResultDetailResponseBodyDataLabelDetails.hpp>
#include <alibabacloud/models/GetOssCheckResultDetailResponseBodyDataLabelDetails2.hpp>
#include <alibabacloud/models/GetOssCheckResultDetailResponseBodyDataScanServiceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckResultDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckResultDetailResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetOssCheckResultDetailResponseBodyData& obj) { 
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
    GetOssCheckResultDetailResponseBodyData() = default ;
    GetOssCheckResultDetailResponseBodyData(const GetOssCheckResultDetailResponseBodyData &) = default ;
    GetOssCheckResultDetailResponseBodyData(GetOssCheckResultDetailResponseBodyData &&) = default ;
    GetOssCheckResultDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckResultDetailResponseBodyData() = default ;
    GetOssCheckResultDetailResponseBodyData& operator=(const GetOssCheckResultDetailResponseBodyData &) = default ;
    GetOssCheckResultDetailResponseBodyData& operator=(GetOssCheckResultDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && return this->code_ == nullptr && return this->contentType_ == nullptr && return this->copyFrom_ == nullptr && return this->freezeStatus_ == nullptr && return this->freezeType_ == nullptr
        && return this->imageUrl_ == nullptr && return this->isCopy_ == nullptr && return this->jobName_ == nullptr && return this->labelDetails_ == nullptr && return this->labelDetails2_ == nullptr
        && return this->labels_ == nullptr && return this->labels2_ == nullptr && return this->manualFreezeAction_ == nullptr && return this->manualOperateTime_ == nullptr && return this->manualOperator_ == nullptr
        && return this->md5_ == nullptr && return this->msg_ == nullptr && return this->object_ == nullptr && return this->riskLevel_ == nullptr && return this->riskLevel0_ == nullptr
        && return this->riskLevel2_ == nullptr && return this->scanResult_ == nullptr && return this->scanServiceInfos_ == nullptr && return this->serviceCode_ == nullptr && return this->serviceName_ == nullptr
        && return this->taskId_ == nullptr && return this->url_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // copyFrom Field Functions 
    bool hasCopyFrom() const { return this->copyFrom_ != nullptr;};
    void deleteCopyFrom() { this->copyFrom_ = nullptr;};
    inline string copyFrom() const { DARABONBA_PTR_GET_DEFAULT(copyFrom_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setCopyFrom(string copyFrom) { DARABONBA_PTR_SET_VALUE(copyFrom_, copyFrom) };


    // freezeStatus Field Functions 
    bool hasFreezeStatus() const { return this->freezeStatus_ != nullptr;};
    void deleteFreezeStatus() { this->freezeStatus_ = nullptr;};
    inline string freezeStatus() const { DARABONBA_PTR_GET_DEFAULT(freezeStatus_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setFreezeStatus(string freezeStatus) { DARABONBA_PTR_SET_VALUE(freezeStatus_, freezeStatus) };


    // freezeType Field Functions 
    bool hasFreezeType() const { return this->freezeType_ != nullptr;};
    void deleteFreezeType() { this->freezeType_ = nullptr;};
    inline string freezeType() const { DARABONBA_PTR_GET_DEFAULT(freezeType_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setFreezeType(string freezeType) { DARABONBA_PTR_SET_VALUE(freezeType_, freezeType) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // isCopy Field Functions 
    bool hasIsCopy() const { return this->isCopy_ != nullptr;};
    void deleteIsCopy() { this->isCopy_ = nullptr;};
    inline bool isCopy() const { DARABONBA_PTR_GET_DEFAULT(isCopy_, false) };
    inline GetOssCheckResultDetailResponseBodyData& setIsCopy(bool isCopy) { DARABONBA_PTR_SET_VALUE(isCopy_, isCopy) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // labelDetails Field Functions 
    bool hasLabelDetails() const { return this->labelDetails_ != nullptr;};
    void deleteLabelDetails() { this->labelDetails_ = nullptr;};
    inline const vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails> & labelDetails() const { DARABONBA_PTR_GET_CONST(labelDetails_, vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails>) };
    inline vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails> labelDetails() { DARABONBA_PTR_GET(labelDetails_, vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails>) };
    inline GetOssCheckResultDetailResponseBodyData& setLabelDetails(const vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails> & labelDetails) { DARABONBA_PTR_SET_VALUE(labelDetails_, labelDetails) };
    inline GetOssCheckResultDetailResponseBodyData& setLabelDetails(vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails> && labelDetails) { DARABONBA_PTR_SET_RVALUE(labelDetails_, labelDetails) };


    // labelDetails2 Field Functions 
    bool hasLabelDetails2() const { return this->labelDetails2_ != nullptr;};
    void deleteLabelDetails2() { this->labelDetails2_ = nullptr;};
    inline const vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails2> & labelDetails2() const { DARABONBA_PTR_GET_CONST(labelDetails2_, vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails2>) };
    inline vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails2> labelDetails2() { DARABONBA_PTR_GET(labelDetails2_, vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails2>) };
    inline GetOssCheckResultDetailResponseBodyData& setLabelDetails2(const vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails2> & labelDetails2) { DARABONBA_PTR_SET_VALUE(labelDetails2_, labelDetails2) };
    inline GetOssCheckResultDetailResponseBodyData& setLabelDetails2(vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails2> && labelDetails2) { DARABONBA_PTR_SET_RVALUE(labelDetails2_, labelDetails2) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
    inline vector<string> labels() { DARABONBA_PTR_GET(labels_, vector<string>) };
    inline GetOssCheckResultDetailResponseBodyData& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetOssCheckResultDetailResponseBodyData& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // labels2 Field Functions 
    bool hasLabels2() const { return this->labels2_ != nullptr;};
    void deleteLabels2() { this->labels2_ = nullptr;};
    inline const vector<string> & labels2() const { DARABONBA_PTR_GET_CONST(labels2_, vector<string>) };
    inline vector<string> labels2() { DARABONBA_PTR_GET(labels2_, vector<string>) };
    inline GetOssCheckResultDetailResponseBodyData& setLabels2(const vector<string> & labels2) { DARABONBA_PTR_SET_VALUE(labels2_, labels2) };
    inline GetOssCheckResultDetailResponseBodyData& setLabels2(vector<string> && labels2) { DARABONBA_PTR_SET_RVALUE(labels2_, labels2) };


    // manualFreezeAction Field Functions 
    bool hasManualFreezeAction() const { return this->manualFreezeAction_ != nullptr;};
    void deleteManualFreezeAction() { this->manualFreezeAction_ = nullptr;};
    inline string manualFreezeAction() const { DARABONBA_PTR_GET_DEFAULT(manualFreezeAction_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setManualFreezeAction(string manualFreezeAction) { DARABONBA_PTR_SET_VALUE(manualFreezeAction_, manualFreezeAction) };


    // manualOperateTime Field Functions 
    bool hasManualOperateTime() const { return this->manualOperateTime_ != nullptr;};
    void deleteManualOperateTime() { this->manualOperateTime_ = nullptr;};
    inline string manualOperateTime() const { DARABONBA_PTR_GET_DEFAULT(manualOperateTime_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setManualOperateTime(string manualOperateTime) { DARABONBA_PTR_SET_VALUE(manualOperateTime_, manualOperateTime) };


    // manualOperator Field Functions 
    bool hasManualOperator() const { return this->manualOperator_ != nullptr;};
    void deleteManualOperator() { this->manualOperator_ = nullptr;};
    inline string manualOperator() const { DARABONBA_PTR_GET_DEFAULT(manualOperator_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setManualOperator(string manualOperator) { DARABONBA_PTR_SET_VALUE(manualOperator_, manualOperator) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskLevel0 Field Functions 
    bool hasRiskLevel0() const { return this->riskLevel0_ != nullptr;};
    void deleteRiskLevel0() { this->riskLevel0_ = nullptr;};
    inline string riskLevel0() const { DARABONBA_PTR_GET_DEFAULT(riskLevel0_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setRiskLevel0(string riskLevel0) { DARABONBA_PTR_SET_VALUE(riskLevel0_, riskLevel0) };


    // riskLevel2 Field Functions 
    bool hasRiskLevel2() const { return this->riskLevel2_ != nullptr;};
    void deleteRiskLevel2() { this->riskLevel2_ = nullptr;};
    inline string riskLevel2() const { DARABONBA_PTR_GET_DEFAULT(riskLevel2_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setRiskLevel2(string riskLevel2) { DARABONBA_PTR_SET_VALUE(riskLevel2_, riskLevel2) };


    // scanResult Field Functions 
    bool hasScanResult() const { return this->scanResult_ != nullptr;};
    void deleteScanResult() { this->scanResult_ = nullptr;};
    inline string scanResult() const { DARABONBA_PTR_GET_DEFAULT(scanResult_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setScanResult(string scanResult) { DARABONBA_PTR_SET_VALUE(scanResult_, scanResult) };


    // scanServiceInfos Field Functions 
    bool hasScanServiceInfos() const { return this->scanServiceInfos_ != nullptr;};
    void deleteScanServiceInfos() { this->scanServiceInfos_ = nullptr;};
    inline const vector<Models::GetOssCheckResultDetailResponseBodyDataScanServiceInfos> & scanServiceInfos() const { DARABONBA_PTR_GET_CONST(scanServiceInfos_, vector<Models::GetOssCheckResultDetailResponseBodyDataScanServiceInfos>) };
    inline vector<Models::GetOssCheckResultDetailResponseBodyDataScanServiceInfos> scanServiceInfos() { DARABONBA_PTR_GET(scanServiceInfos_, vector<Models::GetOssCheckResultDetailResponseBodyDataScanServiceInfos>) };
    inline GetOssCheckResultDetailResponseBodyData& setScanServiceInfos(const vector<Models::GetOssCheckResultDetailResponseBodyDataScanServiceInfos> & scanServiceInfos) { DARABONBA_PTR_SET_VALUE(scanServiceInfos_, scanServiceInfos) };
    inline GetOssCheckResultDetailResponseBodyData& setScanServiceInfos(vector<Models::GetOssCheckResultDetailResponseBodyDataScanServiceInfos> && scanServiceInfos) { DARABONBA_PTR_SET_RVALUE(scanServiceInfos_, scanServiceInfos) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetOssCheckResultDetailResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // Bucket name.
    std::shared_ptr<string> bucket_ = nullptr;
    // Error code, consistent with HTTP status.
    std::shared_ptr<string> code_ = nullptr;
    // Audio and video detection type.
    std::shared_ptr<string> contentType_ = nullptr;
    // Primary service.
    std::shared_ptr<string> copyFrom_ = nullptr;
    // Freeze status.
    std::shared_ptr<string> freezeStatus_ = nullptr;
    // Freeze type.
    std::shared_ptr<string> freezeType_ = nullptr;
    // Image URL.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // Whether to copy.
    std::shared_ptr<bool> isCopy_ = nullptr;
    // Job name.
    std::shared_ptr<string> jobName_ = nullptr;
    // Labels.
    std::shared_ptr<vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails>> labelDetails_ = nullptr;
    // Labels.
    std::shared_ptr<vector<Models::GetOssCheckResultDetailResponseBodyDataLabelDetails2>> labelDetails2_ = nullptr;
    // Image labels.
    std::shared_ptr<vector<string>> labels_ = nullptr;
    // Text labels.
    std::shared_ptr<vector<string>> labels2_ = nullptr;
    // Manual handling status.
    std::shared_ptr<string> manualFreezeAction_ = nullptr;
    // Handling time.
    std::shared_ptr<string> manualOperateTime_ = nullptr;
    // Handler.
    std::shared_ptr<string> manualOperator_ = nullptr;
    // File MD5.
    std::shared_ptr<string> md5_ = nullptr;
    // Further description of the error code.
    std::shared_ptr<string> msg_ = nullptr;
    // Object name.
    std::shared_ptr<string> object_ = nullptr;
    // Image risk level
    std::shared_ptr<string> riskLevel_ = nullptr;
    // Overall risk level.
    std::shared_ptr<string> riskLevel0_ = nullptr;
    // Text risk level
    std::shared_ptr<string> riskLevel2_ = nullptr;
    // Detailed scan results.
    std::shared_ptr<string> scanResult_ = nullptr;
    // Detection service information
    std::shared_ptr<vector<Models::GetOssCheckResultDetailResponseBodyDataScanServiceInfos>> scanServiceInfos_ = nullptr;
    // Service code.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // Task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // Task URL.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
