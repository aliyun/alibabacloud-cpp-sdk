// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMIZATIONCONFIGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMIZATIONCONFIGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetCustomizationConfigListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomizationConfigListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomizationConfigListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCustomizationConfigListResponseBody() = default ;
    GetCustomizationConfigListResponseBody(const GetCustomizationConfigListResponseBody &) = default ;
    GetCustomizationConfigListResponseBody(GetCustomizationConfigListResponseBody &&) = default ;
    GetCustomizationConfigListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomizationConfigListResponseBody() = default ;
    GetCustomizationConfigListResponseBody& operator=(const GetCustomizationConfigListResponseBody &) = default ;
    GetCustomizationConfigListResponseBody& operator=(GetCustomizationConfigListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ModelCustomizationDataSetPo, modelCustomizationDataSetPo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ModelCustomizationDataSetPo, modelCustomizationDataSetPo_);
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
      class ModelCustomizationDataSetPo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelCustomizationDataSetPo& obj) { 
          DARABONBA_PTR_TO_JSON(AsrVersion, asrVersion_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ModeCustomizationId, modeCustomizationId_);
          DARABONBA_PTR_TO_JSON(ModelId, modelId_);
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
          DARABONBA_PTR_TO_JSON(ModelStatus, modelStatus_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        };
        friend void from_json(const Darabonba::Json& j, ModelCustomizationDataSetPo& obj) { 
          DARABONBA_PTR_FROM_JSON(AsrVersion, asrVersion_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ModeCustomizationId, modeCustomizationId_);
          DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
          DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
          DARABONBA_PTR_FROM_JSON(ModelStatus, modelStatus_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        };
        ModelCustomizationDataSetPo() = default ;
        ModelCustomizationDataSetPo(const ModelCustomizationDataSetPo &) = default ;
        ModelCustomizationDataSetPo(ModelCustomizationDataSetPo &&) = default ;
        ModelCustomizationDataSetPo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelCustomizationDataSetPo() = default ;
        ModelCustomizationDataSetPo& operator=(const ModelCustomizationDataSetPo &) = default ;
        ModelCustomizationDataSetPo& operator=(ModelCustomizationDataSetPo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->asrVersion_ == nullptr
        && this->createTime_ == nullptr && this->modeCustomizationId_ == nullptr && this->modelId_ == nullptr && this->modelName_ == nullptr && this->modelStatus_ == nullptr
        && this->taskType_ == nullptr; };
        // asrVersion Field Functions 
        bool hasAsrVersion() const { return this->asrVersion_ != nullptr;};
        void deleteAsrVersion() { this->asrVersion_ = nullptr;};
        inline int32_t getAsrVersion() const { DARABONBA_PTR_GET_DEFAULT(asrVersion_, 0) };
        inline ModelCustomizationDataSetPo& setAsrVersion(int32_t asrVersion) { DARABONBA_PTR_SET_VALUE(asrVersion_, asrVersion) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ModelCustomizationDataSetPo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // modeCustomizationId Field Functions 
        bool hasModeCustomizationId() const { return this->modeCustomizationId_ != nullptr;};
        void deleteModeCustomizationId() { this->modeCustomizationId_ = nullptr;};
        inline string getModeCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(modeCustomizationId_, "") };
        inline ModelCustomizationDataSetPo& setModeCustomizationId(string modeCustomizationId) { DARABONBA_PTR_SET_VALUE(modeCustomizationId_, modeCustomizationId) };


        // modelId Field Functions 
        bool hasModelId() const { return this->modelId_ != nullptr;};
        void deleteModelId() { this->modelId_ = nullptr;};
        inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
        inline ModelCustomizationDataSetPo& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline ModelCustomizationDataSetPo& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // modelStatus Field Functions 
        bool hasModelStatus() const { return this->modelStatus_ != nullptr;};
        void deleteModelStatus() { this->modelStatus_ = nullptr;};
        inline int32_t getModelStatus() const { DARABONBA_PTR_GET_DEFAULT(modelStatus_, 0) };
        inline ModelCustomizationDataSetPo& setModelStatus(int32_t modelStatus) { DARABONBA_PTR_SET_VALUE(modelStatus_, modelStatus) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
        inline ModelCustomizationDataSetPo& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      protected:
        shared_ptr<int32_t> asrVersion_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> modeCustomizationId_ {};
        shared_ptr<int64_t> modelId_ {};
        shared_ptr<string> modelName_ {};
        shared_ptr<int32_t> modelStatus_ {};
        shared_ptr<int32_t> taskType_ {};
      };

      virtual bool empty() const override { return this->modelCustomizationDataSetPo_ == nullptr; };
      // modelCustomizationDataSetPo Field Functions 
      bool hasModelCustomizationDataSetPo() const { return this->modelCustomizationDataSetPo_ != nullptr;};
      void deleteModelCustomizationDataSetPo() { this->modelCustomizationDataSetPo_ = nullptr;};
      inline const vector<Data::ModelCustomizationDataSetPo> & getModelCustomizationDataSetPo() const { DARABONBA_PTR_GET_CONST(modelCustomizationDataSetPo_, vector<Data::ModelCustomizationDataSetPo>) };
      inline vector<Data::ModelCustomizationDataSetPo> getModelCustomizationDataSetPo() { DARABONBA_PTR_GET(modelCustomizationDataSetPo_, vector<Data::ModelCustomizationDataSetPo>) };
      inline Data& setModelCustomizationDataSetPo(const vector<Data::ModelCustomizationDataSetPo> & modelCustomizationDataSetPo) { DARABONBA_PTR_SET_VALUE(modelCustomizationDataSetPo_, modelCustomizationDataSetPo) };
      inline Data& setModelCustomizationDataSetPo(vector<Data::ModelCustomizationDataSetPo> && modelCustomizationDataSetPo) { DARABONBA_PTR_SET_RVALUE(modelCustomizationDataSetPo_, modelCustomizationDataSetPo) };


    protected:
      shared_ptr<vector<Data::ModelCustomizationDataSetPo>> modelCustomizationDataSetPo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCustomizationConfigListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCustomizationConfigListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCustomizationConfigListResponseBody::Data) };
    inline GetCustomizationConfigListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCustomizationConfigListResponseBody::Data) };
    inline GetCustomizationConfigListResponseBody& setData(const GetCustomizationConfigListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCustomizationConfigListResponseBody& setData(GetCustomizationConfigListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCustomizationConfigListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomizationConfigListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomizationConfigListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetCustomizationConfigListResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
