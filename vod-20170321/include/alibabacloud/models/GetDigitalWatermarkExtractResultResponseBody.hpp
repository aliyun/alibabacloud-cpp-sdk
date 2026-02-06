// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIGITALWATERMARKEXTRACTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIGITALWATERMARKEXTRACTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetDigitalWatermarkExtractResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDigitalWatermarkExtractResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AiExtractResultList, aiExtractResultList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDigitalWatermarkExtractResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AiExtractResultList, aiExtractResultList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDigitalWatermarkExtractResultResponseBody() = default ;
    GetDigitalWatermarkExtractResultResponseBody(const GetDigitalWatermarkExtractResultResponseBody &) = default ;
    GetDigitalWatermarkExtractResultResponseBody(GetDigitalWatermarkExtractResultResponseBody &&) = default ;
    GetDigitalWatermarkExtractResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDigitalWatermarkExtractResultResponseBody() = default ;
    GetDigitalWatermarkExtractResultResponseBody& operator=(const GetDigitalWatermarkExtractResultResponseBody &) = default ;
    GetDigitalWatermarkExtractResultResponseBody& operator=(GetDigitalWatermarkExtractResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AiExtractResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AiExtractResultList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(WaterMarkText, waterMarkText_);
      };
      friend void from_json(const Darabonba::Json& j, AiExtractResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(WaterMarkText, waterMarkText_);
      };
      AiExtractResultList() = default ;
      AiExtractResultList(const AiExtractResultList &) = default ;
      AiExtractResultList(AiExtractResultList &&) = default ;
      AiExtractResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AiExtractResultList() = default ;
      AiExtractResultList& operator=(const AiExtractResultList &) = default ;
      AiExtractResultList& operator=(AiExtractResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->errorMessage_ == nullptr && this->jobId_ == nullptr && this->modifyTime_ == nullptr && this->status_ == nullptr && this->waterMarkText_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AiExtractResultList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline AiExtractResultList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline AiExtractResultList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline AiExtractResultList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AiExtractResultList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // waterMarkText Field Functions 
      bool hasWaterMarkText() const { return this->waterMarkText_ != nullptr;};
      void deleteWaterMarkText() { this->waterMarkText_ = nullptr;};
      inline string getWaterMarkText() const { DARABONBA_PTR_GET_DEFAULT(waterMarkText_, "") };
      inline AiExtractResultList& setWaterMarkText(string waterMarkText) { DARABONBA_PTR_SET_VALUE(waterMarkText_, waterMarkText) };


    protected:
      // The time when the watermark extraction job was created.
      shared_ptr<string> createTime_ {};
      // The error message.
      shared_ptr<string> errorMessage_ {};
      // The ID of the watermark extraction job.
      shared_ptr<string> jobId_ {};
      // The time when the watermark extraction job was last updated.
      shared_ptr<string> modifyTime_ {};
      // The status of the watermark extraction job. Valid values:
      // 
      // *   **Success**
      // *   **Failed**
      // *   **Processing**
      shared_ptr<string> status_ {};
      // The extracted watermark content.
      shared_ptr<string> waterMarkText_ {};
    };

    virtual bool empty() const override { return this->aiExtractResultList_ == nullptr
        && this->requestId_ == nullptr; };
    // aiExtractResultList Field Functions 
    bool hasAiExtractResultList() const { return this->aiExtractResultList_ != nullptr;};
    void deleteAiExtractResultList() { this->aiExtractResultList_ = nullptr;};
    inline const vector<GetDigitalWatermarkExtractResultResponseBody::AiExtractResultList> & getAiExtractResultList() const { DARABONBA_PTR_GET_CONST(aiExtractResultList_, vector<GetDigitalWatermarkExtractResultResponseBody::AiExtractResultList>) };
    inline vector<GetDigitalWatermarkExtractResultResponseBody::AiExtractResultList> getAiExtractResultList() { DARABONBA_PTR_GET(aiExtractResultList_, vector<GetDigitalWatermarkExtractResultResponseBody::AiExtractResultList>) };
    inline GetDigitalWatermarkExtractResultResponseBody& setAiExtractResultList(const vector<GetDigitalWatermarkExtractResultResponseBody::AiExtractResultList> & aiExtractResultList) { DARABONBA_PTR_SET_VALUE(aiExtractResultList_, aiExtractResultList) };
    inline GetDigitalWatermarkExtractResultResponseBody& setAiExtractResultList(vector<GetDigitalWatermarkExtractResultResponseBody::AiExtractResultList> && aiExtractResultList) { DARABONBA_PTR_SET_RVALUE(aiExtractResultList_, aiExtractResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDigitalWatermarkExtractResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the watermark extraction job.
    shared_ptr<vector<GetDigitalWatermarkExtractResultResponseBody::AiExtractResultList>> aiExtractResultList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
