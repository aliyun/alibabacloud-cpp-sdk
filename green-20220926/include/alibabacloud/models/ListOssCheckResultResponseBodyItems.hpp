// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOSSCHECKRESULTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTOSSCHECKRESULTRESPONSEBODYITEMS_HPP_
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
  class ListOssCheckResultResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOssCheckResultResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(CopyFrom, copyFrom_);
      DARABONBA_PTR_TO_JSON(FreezeStatus, freezeStatus_);
      DARABONBA_PTR_TO_JSON(FreezeType, freezeType_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(IsCopy, isCopy_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Labels2, labels2_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Object, object_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RiskLevel0, riskLevel0_);
      DARABONBA_PTR_TO_JSON(RiskLevel2, riskLevel2_);
      DARABONBA_PTR_TO_JSON(ScanResult, scanResult_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListOssCheckResultResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(CopyFrom, copyFrom_);
      DARABONBA_PTR_FROM_JSON(FreezeStatus, freezeStatus_);
      DARABONBA_PTR_FROM_JSON(FreezeType, freezeType_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(IsCopy, isCopy_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Labels2, labels2_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Object, object_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RiskLevel0, riskLevel0_);
      DARABONBA_PTR_FROM_JSON(RiskLevel2, riskLevel2_);
      DARABONBA_PTR_FROM_JSON(ScanResult, scanResult_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListOssCheckResultResponseBodyItems() = default ;
    ListOssCheckResultResponseBodyItems(const ListOssCheckResultResponseBodyItems &) = default ;
    ListOssCheckResultResponseBodyItems(ListOssCheckResultResponseBodyItems &&) = default ;
    ListOssCheckResultResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOssCheckResultResponseBodyItems() = default ;
    ListOssCheckResultResponseBodyItems& operator=(const ListOssCheckResultResponseBodyItems &) = default ;
    ListOssCheckResultResponseBodyItems& operator=(ListOssCheckResultResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && return this->code_ == nullptr && return this->contentType_ == nullptr && return this->copyFrom_ == nullptr && return this->freezeStatus_ == nullptr && return this->freezeType_ == nullptr
        && return this->imageUrl_ == nullptr && return this->isCopy_ == nullptr && return this->jobName_ == nullptr && return this->labels_ == nullptr && return this->labels2_ == nullptr
        && return this->md5_ == nullptr && return this->msg_ == nullptr && return this->object_ == nullptr && return this->riskLevel_ == nullptr && return this->riskLevel0_ == nullptr
        && return this->riskLevel2_ == nullptr && return this->scanResult_ == nullptr && return this->serviceCode_ == nullptr && return this->serviceName_ == nullptr && return this->taskId_ == nullptr
        && return this->url_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline ListOssCheckResultResponseBodyItems& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListOssCheckResultResponseBodyItems& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ListOssCheckResultResponseBodyItems& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // copyFrom Field Functions 
    bool hasCopyFrom() const { return this->copyFrom_ != nullptr;};
    void deleteCopyFrom() { this->copyFrom_ = nullptr;};
    inline string copyFrom() const { DARABONBA_PTR_GET_DEFAULT(copyFrom_, "") };
    inline ListOssCheckResultResponseBodyItems& setCopyFrom(string copyFrom) { DARABONBA_PTR_SET_VALUE(copyFrom_, copyFrom) };


    // freezeStatus Field Functions 
    bool hasFreezeStatus() const { return this->freezeStatus_ != nullptr;};
    void deleteFreezeStatus() { this->freezeStatus_ = nullptr;};
    inline string freezeStatus() const { DARABONBA_PTR_GET_DEFAULT(freezeStatus_, "") };
    inline ListOssCheckResultResponseBodyItems& setFreezeStatus(string freezeStatus) { DARABONBA_PTR_SET_VALUE(freezeStatus_, freezeStatus) };


    // freezeType Field Functions 
    bool hasFreezeType() const { return this->freezeType_ != nullptr;};
    void deleteFreezeType() { this->freezeType_ = nullptr;};
    inline string freezeType() const { DARABONBA_PTR_GET_DEFAULT(freezeType_, "") };
    inline ListOssCheckResultResponseBodyItems& setFreezeType(string freezeType) { DARABONBA_PTR_SET_VALUE(freezeType_, freezeType) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ListOssCheckResultResponseBodyItems& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // isCopy Field Functions 
    bool hasIsCopy() const { return this->isCopy_ != nullptr;};
    void deleteIsCopy() { this->isCopy_ = nullptr;};
    inline bool isCopy() const { DARABONBA_PTR_GET_DEFAULT(isCopy_, false) };
    inline ListOssCheckResultResponseBodyItems& setIsCopy(bool isCopy) { DARABONBA_PTR_SET_VALUE(isCopy_, isCopy) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListOssCheckResultResponseBodyItems& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
    inline vector<string> labels() { DARABONBA_PTR_GET(labels_, vector<string>) };
    inline ListOssCheckResultResponseBodyItems& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListOssCheckResultResponseBodyItems& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // labels2 Field Functions 
    bool hasLabels2() const { return this->labels2_ != nullptr;};
    void deleteLabels2() { this->labels2_ = nullptr;};
    inline const vector<string> & labels2() const { DARABONBA_PTR_GET_CONST(labels2_, vector<string>) };
    inline vector<string> labels2() { DARABONBA_PTR_GET(labels2_, vector<string>) };
    inline ListOssCheckResultResponseBodyItems& setLabels2(const vector<string> & labels2) { DARABONBA_PTR_SET_VALUE(labels2_, labels2) };
    inline ListOssCheckResultResponseBodyItems& setLabels2(vector<string> && labels2) { DARABONBA_PTR_SET_RVALUE(labels2_, labels2) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ListOssCheckResultResponseBodyItems& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ListOssCheckResultResponseBodyItems& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline ListOssCheckResultResponseBodyItems& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListOssCheckResultResponseBodyItems& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskLevel0 Field Functions 
    bool hasRiskLevel0() const { return this->riskLevel0_ != nullptr;};
    void deleteRiskLevel0() { this->riskLevel0_ = nullptr;};
    inline string riskLevel0() const { DARABONBA_PTR_GET_DEFAULT(riskLevel0_, "") };
    inline ListOssCheckResultResponseBodyItems& setRiskLevel0(string riskLevel0) { DARABONBA_PTR_SET_VALUE(riskLevel0_, riskLevel0) };


    // riskLevel2 Field Functions 
    bool hasRiskLevel2() const { return this->riskLevel2_ != nullptr;};
    void deleteRiskLevel2() { this->riskLevel2_ = nullptr;};
    inline string riskLevel2() const { DARABONBA_PTR_GET_DEFAULT(riskLevel2_, "") };
    inline ListOssCheckResultResponseBodyItems& setRiskLevel2(string riskLevel2) { DARABONBA_PTR_SET_VALUE(riskLevel2_, riskLevel2) };


    // scanResult Field Functions 
    bool hasScanResult() const { return this->scanResult_ != nullptr;};
    void deleteScanResult() { this->scanResult_ = nullptr;};
    inline string scanResult() const { DARABONBA_PTR_GET_DEFAULT(scanResult_, "") };
    inline ListOssCheckResultResponseBodyItems& setScanResult(string scanResult) { DARABONBA_PTR_SET_VALUE(scanResult_, scanResult) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline ListOssCheckResultResponseBodyItems& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListOssCheckResultResponseBodyItems& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListOssCheckResultResponseBodyItems& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListOssCheckResultResponseBodyItems& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // Storage space.
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
    // Image URL address.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // Whether to copy.
    std::shared_ptr<bool> isCopy_ = nullptr;
    // Job name.
    std::shared_ptr<string> jobName_ = nullptr;
    // Image labels.
    std::shared_ptr<vector<string>> labels_ = nullptr;
    // Text labels.
    std::shared_ptr<vector<string>> labels2_ = nullptr;
    // File MD5.
    std::shared_ptr<string> md5_ = nullptr;
    // Further description of the error code.
    std::shared_ptr<string> msg_ = nullptr;
    // Object name.
    std::shared_ptr<string> object_ = nullptr;
    // Image risk level
    std::shared_ptr<string> riskLevel_ = nullptr;
    // Overall risk level
    std::shared_ptr<string> riskLevel0_ = nullptr;
    // Text risk level
    std::shared_ptr<string> riskLevel2_ = nullptr;
    // Details of the result.
    std::shared_ptr<string> scanResult_ = nullptr;
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
