// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGADDMODELTRAINJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGADDMODELTRAINJOBRESPONSEBODY_HPP_
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
  class Personalizedtxt2imgAddModelTrainJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Personalizedtxt2imgAddModelTrainJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, Personalizedtxt2imgAddModelTrainJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    Personalizedtxt2imgAddModelTrainJobResponseBody() = default ;
    Personalizedtxt2imgAddModelTrainJobResponseBody(const Personalizedtxt2imgAddModelTrainJobResponseBody &) = default ;
    Personalizedtxt2imgAddModelTrainJobResponseBody(Personalizedtxt2imgAddModelTrainJobResponseBody &&) = default ;
    Personalizedtxt2imgAddModelTrainJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Personalizedtxt2imgAddModelTrainJobResponseBody() = default ;
    Personalizedtxt2imgAddModelTrainJobResponseBody& operator=(const Personalizedtxt2imgAddModelTrainJobResponseBody &) = default ;
    Personalizedtxt2imgAddModelTrainJobResponseBody& operator=(Personalizedtxt2imgAddModelTrainJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(inferenceImageCount, inferenceImageCount_);
        DARABONBA_PTR_TO_JSON(inferenceJobList, inferenceJobList_);
        DARABONBA_PTR_TO_JSON(jobStatus, jobStatus_);
        DARABONBA_PTR_TO_JSON(jobTrainProgress, jobTrainProgress_);
        DARABONBA_PTR_TO_JSON(modelId, modelId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(objectType, objectType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(inferenceImageCount, inferenceImageCount_);
        DARABONBA_PTR_FROM_JSON(inferenceJobList, inferenceJobList_);
        DARABONBA_PTR_FROM_JSON(jobStatus, jobStatus_);
        DARABONBA_PTR_FROM_JSON(jobTrainProgress, jobTrainProgress_);
        DARABONBA_PTR_FROM_JSON(modelId, modelId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(objectType, objectType_);
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
      class InferenceJobList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InferenceJobList& obj) { 
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(jobStatus, jobStatus_);
          DARABONBA_PTR_TO_JSON(jobTrainProgress, jobTrainProgress_);
          DARABONBA_PTR_TO_JSON(modelId, modelId_);
          DARABONBA_PTR_TO_JSON(promptId, promptId_);
          DARABONBA_PTR_TO_JSON(resultImageUrl, resultImageUrl_);
        };
        friend void from_json(const Darabonba::Json& j, InferenceJobList& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(jobStatus, jobStatus_);
          DARABONBA_PTR_FROM_JSON(jobTrainProgress, jobTrainProgress_);
          DARABONBA_PTR_FROM_JSON(modelId, modelId_);
          DARABONBA_PTR_FROM_JSON(promptId, promptId_);
          DARABONBA_PTR_FROM_JSON(resultImageUrl, resultImageUrl_);
        };
        InferenceJobList() = default ;
        InferenceJobList(const InferenceJobList &) = default ;
        InferenceJobList(InferenceJobList &&) = default ;
        InferenceJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InferenceJobList() = default ;
        InferenceJobList& operator=(const InferenceJobList &) = default ;
        InferenceJobList& operator=(InferenceJobList &&) = default ;
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
        inline InferenceJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline InferenceJobList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // jobStatus Field Functions 
        bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
        void deleteJobStatus() { this->jobStatus_ = nullptr;};
        inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
        inline InferenceJobList& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


        // jobTrainProgress Field Functions 
        bool hasJobTrainProgress() const { return this->jobTrainProgress_ != nullptr;};
        void deleteJobTrainProgress() { this->jobTrainProgress_ = nullptr;};
        inline double getJobTrainProgress() const { DARABONBA_PTR_GET_DEFAULT(jobTrainProgress_, 0.0) };
        inline InferenceJobList& setJobTrainProgress(double jobTrainProgress) { DARABONBA_PTR_SET_VALUE(jobTrainProgress_, jobTrainProgress) };


        // modelId Field Functions 
        bool hasModelId() const { return this->modelId_ != nullptr;};
        void deleteModelId() { this->modelId_ = nullptr;};
        inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
        inline InferenceJobList& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


        // promptId Field Functions 
        bool hasPromptId() const { return this->promptId_ != nullptr;};
        void deletePromptId() { this->promptId_ = nullptr;};
        inline string getPromptId() const { DARABONBA_PTR_GET_DEFAULT(promptId_, "") };
        inline InferenceJobList& setPromptId(string promptId) { DARABONBA_PTR_SET_VALUE(promptId_, promptId) };


        // resultImageUrl Field Functions 
        bool hasResultImageUrl() const { return this->resultImageUrl_ != nullptr;};
        void deleteResultImageUrl() { this->resultImageUrl_ = nullptr;};
        inline const vector<string> & getResultImageUrl() const { DARABONBA_PTR_GET_CONST(resultImageUrl_, vector<string>) };
        inline vector<string> getResultImageUrl() { DARABONBA_PTR_GET(resultImageUrl_, vector<string>) };
        inline InferenceJobList& setResultImageUrl(const vector<string> & resultImageUrl) { DARABONBA_PTR_SET_VALUE(resultImageUrl_, resultImageUrl) };
        inline InferenceJobList& setResultImageUrl(vector<string> && resultImageUrl) { DARABONBA_PTR_SET_RVALUE(resultImageUrl_, resultImageUrl) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> jobStatus_ {};
        shared_ptr<double> jobTrainProgress_ {};
        shared_ptr<string> modelId_ {};
        shared_ptr<string> promptId_ {};
        shared_ptr<vector<string>> resultImageUrl_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->id_ == nullptr && this->imageUrl_ == nullptr && this->inferenceImageCount_ == nullptr && this->inferenceJobList_ == nullptr && this->jobStatus_ == nullptr
        && this->jobTrainProgress_ == nullptr && this->modelId_ == nullptr && this->name_ == nullptr && this->objectType_ == nullptr; };
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


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline const vector<string> & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, vector<string>) };
      inline vector<string> getImageUrl() { DARABONBA_PTR_GET(imageUrl_, vector<string>) };
      inline Data& setImageUrl(const vector<string> & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
      inline Data& setImageUrl(vector<string> && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


      // inferenceImageCount Field Functions 
      bool hasInferenceImageCount() const { return this->inferenceImageCount_ != nullptr;};
      void deleteInferenceImageCount() { this->inferenceImageCount_ = nullptr;};
      inline int32_t getInferenceImageCount() const { DARABONBA_PTR_GET_DEFAULT(inferenceImageCount_, 0) };
      inline Data& setInferenceImageCount(int32_t inferenceImageCount) { DARABONBA_PTR_SET_VALUE(inferenceImageCount_, inferenceImageCount) };


      // inferenceJobList Field Functions 
      bool hasInferenceJobList() const { return this->inferenceJobList_ != nullptr;};
      void deleteInferenceJobList() { this->inferenceJobList_ = nullptr;};
      inline const vector<Data::InferenceJobList> & getInferenceJobList() const { DARABONBA_PTR_GET_CONST(inferenceJobList_, vector<Data::InferenceJobList>) };
      inline vector<Data::InferenceJobList> getInferenceJobList() { DARABONBA_PTR_GET(inferenceJobList_, vector<Data::InferenceJobList>) };
      inline Data& setInferenceJobList(const vector<Data::InferenceJobList> & inferenceJobList) { DARABONBA_PTR_SET_VALUE(inferenceJobList_, inferenceJobList) };
      inline Data& setInferenceJobList(vector<Data::InferenceJobList> && inferenceJobList) { DARABONBA_PTR_SET_RVALUE(inferenceJobList_, inferenceJobList) };


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


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline Data& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> id_ {};
      shared_ptr<vector<string>> imageUrl_ {};
      shared_ptr<int32_t> inferenceImageCount_ {};
      shared_ptr<vector<Data::InferenceJobList>> inferenceJobList_ {};
      shared_ptr<string> jobStatus_ {};
      shared_ptr<double> jobTrainProgress_ {};
      shared_ptr<string> modelId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> objectType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Personalizedtxt2imgAddModelTrainJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Personalizedtxt2imgAddModelTrainJobResponseBody::Data) };
    inline Personalizedtxt2imgAddModelTrainJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, Personalizedtxt2imgAddModelTrainJobResponseBody::Data) };
    inline Personalizedtxt2imgAddModelTrainJobResponseBody& setData(const Personalizedtxt2imgAddModelTrainJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline Personalizedtxt2imgAddModelTrainJobResponseBody& setData(Personalizedtxt2imgAddModelTrainJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline Personalizedtxt2imgAddModelTrainJobResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline Personalizedtxt2imgAddModelTrainJobResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline Personalizedtxt2imgAddModelTrainJobResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Personalizedtxt2imgAddModelTrainJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline Personalizedtxt2imgAddModelTrainJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<Personalizedtxt2imgAddModelTrainJobResponseBody::Data> data_ {};
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
