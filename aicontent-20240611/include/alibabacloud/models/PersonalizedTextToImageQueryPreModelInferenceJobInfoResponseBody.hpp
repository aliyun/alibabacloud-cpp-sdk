// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTEXTTOIMAGEQUERYPREMODELINFERENCEJOBINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTEXTTOIMAGEQUERYPREMODELINFERENCEJOBINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody() = default ;
    PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody(const PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody &) = default ;
    PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody(PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody &&) = default ;
    PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody() = default ;
    PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody& operator=(const PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody &) = default ;
    PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody& operator=(PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(jobStatus, jobStatus_);
        DARABONBA_PTR_TO_JSON(jobTrainProgress, jobTrainProgress_);
        DARABONBA_PTR_TO_JSON(modelId, modelId_);
        DARABONBA_PTR_TO_JSON(promptId, promptId_);
        DARABONBA_PTR_TO_JSON(resultImageUrl, resultImageUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(jobStatus, jobStatus_);
        DARABONBA_PTR_FROM_JSON(jobTrainProgress, jobTrainProgress_);
        DARABONBA_PTR_FROM_JSON(modelId, modelId_);
        DARABONBA_PTR_FROM_JSON(promptId, promptId_);
        DARABONBA_PTR_FROM_JSON(resultImageUrl, resultImageUrl_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->id_ == nullptr && this->jobStatus_ == nullptr && this->jobTrainProgress_ == nullptr && this->modelId_ == nullptr && this->promptId_ == nullptr
        && this->resultImageUrl_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
      inline Data& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // jobTrainProgress Field Functions 
      bool hasJobTrainProgress() const { return this->jobTrainProgress_ != nullptr;};
      void deleteJobTrainProgress() { this->jobTrainProgress_ = nullptr;};
      inline double getJobTrainProgress() const { DARABONBA_PTR_GET_DEFAULT(jobTrainProgress_, 0.0) };
      inline Data& setJobTrainProgress(double jobTrainProgress) { DARABONBA_PTR_SET_VALUE(jobTrainProgress_, jobTrainProgress) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
      inline Data& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // promptId Field Functions 
      bool hasPromptId() const { return this->promptId_ != nullptr;};
      void deletePromptId() { this->promptId_ = nullptr;};
      inline string getPromptId() const { DARABONBA_PTR_GET_DEFAULT(promptId_, "") };
      inline Data& setPromptId(string promptId) { DARABONBA_PTR_SET_VALUE(promptId_, promptId) };


      // resultImageUrl Field Functions 
      bool hasResultImageUrl() const { return this->resultImageUrl_ != nullptr;};
      void deleteResultImageUrl() { this->resultImageUrl_ = nullptr;};
      inline const vector<string> & getResultImageUrl() const { DARABONBA_PTR_GET_CONST(resultImageUrl_, vector<string>) };
      inline vector<string> getResultImageUrl() { DARABONBA_PTR_GET(resultImageUrl_, vector<string>) };
      inline Data& setResultImageUrl(const vector<string> & resultImageUrl) { DARABONBA_PTR_SET_VALUE(resultImageUrl_, resultImageUrl) };
      inline Data& setResultImageUrl(vector<string> && resultImageUrl) { DARABONBA_PTR_SET_RVALUE(resultImageUrl_, resultImageUrl) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> jobStatus_ {};
      shared_ptr<double> jobTrainProgress_ {};
      shared_ptr<string> modelId_ {};
      // promptId
      shared_ptr<string> promptId_ {};
      shared_ptr<vector<string>> resultImageUrl_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody::Data) };
    inline PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody::Data) };
    inline PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody& setData(const PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody& setData(PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
