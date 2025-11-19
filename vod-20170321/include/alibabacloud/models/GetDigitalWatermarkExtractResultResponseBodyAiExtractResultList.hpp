// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIGITALWATERMARKEXTRACTRESULTRESPONSEBODYAIEXTRACTRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDIGITALWATERMARKEXTRACTRESULTRESPONSEBODYAIEXTRACTRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WaterMarkText, waterMarkText_);
    };
    friend void from_json(const Darabonba::Json& j, GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WaterMarkText, waterMarkText_);
    };
    GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList() = default ;
    GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList(const GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList &) = default ;
    GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList(GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList &&) = default ;
    GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList() = default ;
    GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList& operator=(const GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList &) = default ;
    GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList& operator=(GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->errorMessage_ == nullptr && return this->jobId_ == nullptr && return this->modifyTime_ == nullptr && return this->status_ == nullptr && return this->waterMarkText_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // waterMarkText Field Functions 
    bool hasWaterMarkText() const { return this->waterMarkText_ != nullptr;};
    void deleteWaterMarkText() { this->waterMarkText_ = nullptr;};
    inline string waterMarkText() const { DARABONBA_PTR_GET_DEFAULT(waterMarkText_, "") };
    inline GetDigitalWatermarkExtractResultResponseBodyAiExtractResultList& setWaterMarkText(string waterMarkText) { DARABONBA_PTR_SET_VALUE(waterMarkText_, waterMarkText) };


  protected:
    // The time when the watermark extraction job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the watermark extraction job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The time when the watermark extraction job was last updated.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The status of the watermark extraction job. Valid values:
    // 
    // *   **Success**
    // *   **Failed**
    // *   **Processing**
    std::shared_ptr<string> status_ = nullptr;
    // The extracted watermark content.
    std::shared_ptr<string> waterMarkText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
