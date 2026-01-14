// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETTRAINTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETTRAINTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetTrainTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetTrainTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(voiceList, voiceList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetTrainTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(voiceList, voiceList_);
    };
    BatchGetTrainTaskResponseBody() = default ;
    BatchGetTrainTaskResponseBody(const BatchGetTrainTaskResponseBody &) = default ;
    BatchGetTrainTaskResponseBody(BatchGetTrainTaskResponseBody &&) = default ;
    BatchGetTrainTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetTrainTaskResponseBody() = default ;
    BatchGetTrainTaskResponseBody& operator=(const BatchGetTrainTaskResponseBody &) = default ;
    BatchGetTrainTaskResponseBody& operator=(BatchGetTrainTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VoiceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VoiceList& obj) { 
        DARABONBA_PTR_TO_JSON(aliyunSubId, aliyunSubId_);
        DARABONBA_PTR_TO_JSON(auditFailMessage, auditFailMessage_);
        DARABONBA_PTR_TO_JSON(auditStatus, auditStatus_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(gender, gender_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(resSpecType, resSpecType_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskType, taskType_);
        DARABONBA_PTR_TO_JSON(trainFailMessage, trainFailMessage_);
        DARABONBA_PTR_TO_JSON(trainStatus, trainStatus_);
        DARABONBA_PTR_TO_JSON(useScene, useScene_);
        DARABONBA_PTR_TO_JSON(voiceMaterial, voiceMaterial_);
      };
      friend void from_json(const Darabonba::Json& j, VoiceList& obj) { 
        DARABONBA_PTR_FROM_JSON(aliyunSubId, aliyunSubId_);
        DARABONBA_PTR_FROM_JSON(auditFailMessage, auditFailMessage_);
        DARABONBA_PTR_FROM_JSON(auditStatus, auditStatus_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(gender, gender_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(resSpecType, resSpecType_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskType, taskType_);
        DARABONBA_PTR_FROM_JSON(trainFailMessage, trainFailMessage_);
        DARABONBA_PTR_FROM_JSON(trainStatus, trainStatus_);
        DARABONBA_PTR_FROM_JSON(useScene, useScene_);
        DARABONBA_PTR_FROM_JSON(voiceMaterial, voiceMaterial_);
      };
      VoiceList() = default ;
      VoiceList(const VoiceList &) = default ;
      VoiceList(VoiceList &&) = default ;
      VoiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VoiceList() = default ;
      VoiceList& operator=(const VoiceList &) = default ;
      VoiceList& operator=(VoiceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VoiceMaterial : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VoiceMaterial& obj) { 
          DARABONBA_PTR_TO_JSON(voiceId, voiceId_);
          DARABONBA_PTR_TO_JSON(voiceLanguage, voiceLanguage_);
          DARABONBA_PTR_TO_JSON(voiceUrl, voiceUrl_);
        };
        friend void from_json(const Darabonba::Json& j, VoiceMaterial& obj) { 
          DARABONBA_PTR_FROM_JSON(voiceId, voiceId_);
          DARABONBA_PTR_FROM_JSON(voiceLanguage, voiceLanguage_);
          DARABONBA_PTR_FROM_JSON(voiceUrl, voiceUrl_);
        };
        VoiceMaterial() = default ;
        VoiceMaterial(const VoiceMaterial &) = default ;
        VoiceMaterial(VoiceMaterial &&) = default ;
        VoiceMaterial(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VoiceMaterial() = default ;
        VoiceMaterial& operator=(const VoiceMaterial &) = default ;
        VoiceMaterial& operator=(VoiceMaterial &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->voiceId_ == nullptr
        && this->voiceLanguage_ == nullptr && this->voiceUrl_ == nullptr; };
        // voiceId Field Functions 
        bool hasVoiceId() const { return this->voiceId_ != nullptr;};
        void deleteVoiceId() { this->voiceId_ = nullptr;};
        inline int64_t getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, 0L) };
        inline VoiceMaterial& setVoiceId(int64_t voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


        // voiceLanguage Field Functions 
        bool hasVoiceLanguage() const { return this->voiceLanguage_ != nullptr;};
        void deleteVoiceLanguage() { this->voiceLanguage_ = nullptr;};
        inline string getVoiceLanguage() const { DARABONBA_PTR_GET_DEFAULT(voiceLanguage_, "") };
        inline VoiceMaterial& setVoiceLanguage(string voiceLanguage) { DARABONBA_PTR_SET_VALUE(voiceLanguage_, voiceLanguage) };


        // voiceUrl Field Functions 
        bool hasVoiceUrl() const { return this->voiceUrl_ != nullptr;};
        void deleteVoiceUrl() { this->voiceUrl_ = nullptr;};
        inline string getVoiceUrl() const { DARABONBA_PTR_GET_DEFAULT(voiceUrl_, "") };
        inline VoiceMaterial& setVoiceUrl(string voiceUrl) { DARABONBA_PTR_SET_VALUE(voiceUrl_, voiceUrl) };


      protected:
        shared_ptr<int64_t> voiceId_ {};
        shared_ptr<string> voiceLanguage_ {};
        shared_ptr<string> voiceUrl_ {};
      };

      virtual bool empty() const override { return this->aliyunSubId_ == nullptr
        && this->auditFailMessage_ == nullptr && this->auditStatus_ == nullptr && this->createTime_ == nullptr && this->gender_ == nullptr && this->name_ == nullptr
        && this->resSpecType_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr && this->trainFailMessage_ == nullptr && this->trainStatus_ == nullptr
        && this->useScene_ == nullptr && this->voiceMaterial_ == nullptr; };
      // aliyunSubId Field Functions 
      bool hasAliyunSubId() const { return this->aliyunSubId_ != nullptr;};
      void deleteAliyunSubId() { this->aliyunSubId_ = nullptr;};
      inline string getAliyunSubId() const { DARABONBA_PTR_GET_DEFAULT(aliyunSubId_, "") };
      inline VoiceList& setAliyunSubId(string aliyunSubId) { DARABONBA_PTR_SET_VALUE(aliyunSubId_, aliyunSubId) };


      // auditFailMessage Field Functions 
      bool hasAuditFailMessage() const { return this->auditFailMessage_ != nullptr;};
      void deleteAuditFailMessage() { this->auditFailMessage_ = nullptr;};
      inline string getAuditFailMessage() const { DARABONBA_PTR_GET_DEFAULT(auditFailMessage_, "") };
      inline VoiceList& setAuditFailMessage(string auditFailMessage) { DARABONBA_PTR_SET_VALUE(auditFailMessage_, auditFailMessage) };


      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
      inline VoiceList& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline VoiceList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // gender Field Functions 
      bool hasGender() const { return this->gender_ != nullptr;};
      void deleteGender() { this->gender_ = nullptr;};
      inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
      inline VoiceList& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VoiceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resSpecType Field Functions 
      bool hasResSpecType() const { return this->resSpecType_ != nullptr;};
      void deleteResSpecType() { this->resSpecType_ = nullptr;};
      inline string getResSpecType() const { DARABONBA_PTR_GET_DEFAULT(resSpecType_, "") };
      inline VoiceList& setResSpecType(string resSpecType) { DARABONBA_PTR_SET_VALUE(resSpecType_, resSpecType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline VoiceList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline VoiceList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // trainFailMessage Field Functions 
      bool hasTrainFailMessage() const { return this->trainFailMessage_ != nullptr;};
      void deleteTrainFailMessage() { this->trainFailMessage_ = nullptr;};
      inline string getTrainFailMessage() const { DARABONBA_PTR_GET_DEFAULT(trainFailMessage_, "") };
      inline VoiceList& setTrainFailMessage(string trainFailMessage) { DARABONBA_PTR_SET_VALUE(trainFailMessage_, trainFailMessage) };


      // trainStatus Field Functions 
      bool hasTrainStatus() const { return this->trainStatus_ != nullptr;};
      void deleteTrainStatus() { this->trainStatus_ = nullptr;};
      inline string getTrainStatus() const { DARABONBA_PTR_GET_DEFAULT(trainStatus_, "") };
      inline VoiceList& setTrainStatus(string trainStatus) { DARABONBA_PTR_SET_VALUE(trainStatus_, trainStatus) };


      // useScene Field Functions 
      bool hasUseScene() const { return this->useScene_ != nullptr;};
      void deleteUseScene() { this->useScene_ = nullptr;};
      inline string getUseScene() const { DARABONBA_PTR_GET_DEFAULT(useScene_, "") };
      inline VoiceList& setUseScene(string useScene) { DARABONBA_PTR_SET_VALUE(useScene_, useScene) };


      // voiceMaterial Field Functions 
      bool hasVoiceMaterial() const { return this->voiceMaterial_ != nullptr;};
      void deleteVoiceMaterial() { this->voiceMaterial_ = nullptr;};
      inline const VoiceList::VoiceMaterial & getVoiceMaterial() const { DARABONBA_PTR_GET_CONST(voiceMaterial_, VoiceList::VoiceMaterial) };
      inline VoiceList::VoiceMaterial getVoiceMaterial() { DARABONBA_PTR_GET(voiceMaterial_, VoiceList::VoiceMaterial) };
      inline VoiceList& setVoiceMaterial(const VoiceList::VoiceMaterial & voiceMaterial) { DARABONBA_PTR_SET_VALUE(voiceMaterial_, voiceMaterial) };
      inline VoiceList& setVoiceMaterial(VoiceList::VoiceMaterial && voiceMaterial) { DARABONBA_PTR_SET_RVALUE(voiceMaterial_, voiceMaterial) };


    protected:
      shared_ptr<string> aliyunSubId_ {};
      shared_ptr<string> auditFailMessage_ {};
      shared_ptr<string> auditStatus_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> gender_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> resSpecType_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskType_ {};
      shared_ptr<string> trainFailMessage_ {};
      shared_ptr<string> trainStatus_ {};
      shared_ptr<string> useScene_ {};
      shared_ptr<VoiceList::VoiceMaterial> voiceMaterial_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->voiceList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetTrainTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // voiceList Field Functions 
    bool hasVoiceList() const { return this->voiceList_ != nullptr;};
    void deleteVoiceList() { this->voiceList_ = nullptr;};
    inline const vector<BatchGetTrainTaskResponseBody::VoiceList> & getVoiceList() const { DARABONBA_PTR_GET_CONST(voiceList_, vector<BatchGetTrainTaskResponseBody::VoiceList>) };
    inline vector<BatchGetTrainTaskResponseBody::VoiceList> getVoiceList() { DARABONBA_PTR_GET(voiceList_, vector<BatchGetTrainTaskResponseBody::VoiceList>) };
    inline BatchGetTrainTaskResponseBody& setVoiceList(const vector<BatchGetTrainTaskResponseBody::VoiceList> & voiceList) { DARABONBA_PTR_SET_VALUE(voiceList_, voiceList) };
    inline BatchGetTrainTaskResponseBody& setVoiceList(vector<BatchGetTrainTaskResponseBody::VoiceList> && voiceList) { DARABONBA_PTR_SET_RVALUE(voiceList_, voiceList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<BatchGetTrainTaskResponseBody::VoiceList>> voiceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
