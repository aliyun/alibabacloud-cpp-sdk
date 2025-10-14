// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETTRAINTASKRESPONSEBODYVOICELIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETTRAINTASKRESPONSEBODYVOICELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchGetTrainTaskResponseBodyVoiceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetTrainTaskResponseBodyVoiceList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, BatchGetTrainTaskResponseBodyVoiceList& obj) { 
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
    BatchGetTrainTaskResponseBodyVoiceList() = default ;
    BatchGetTrainTaskResponseBodyVoiceList(const BatchGetTrainTaskResponseBodyVoiceList &) = default ;
    BatchGetTrainTaskResponseBodyVoiceList(BatchGetTrainTaskResponseBodyVoiceList &&) = default ;
    BatchGetTrainTaskResponseBodyVoiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetTrainTaskResponseBodyVoiceList() = default ;
    BatchGetTrainTaskResponseBodyVoiceList& operator=(const BatchGetTrainTaskResponseBodyVoiceList &) = default ;
    BatchGetTrainTaskResponseBodyVoiceList& operator=(BatchGetTrainTaskResponseBodyVoiceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunSubId_ == nullptr
        && return this->auditFailMessage_ == nullptr && return this->auditStatus_ == nullptr && return this->createTime_ == nullptr && return this->gender_ == nullptr && return this->name_ == nullptr
        && return this->resSpecType_ == nullptr && return this->taskId_ == nullptr && return this->taskType_ == nullptr && return this->trainFailMessage_ == nullptr && return this->trainStatus_ == nullptr
        && return this->useScene_ == nullptr && return this->voiceMaterial_ == nullptr; };
    // aliyunSubId Field Functions 
    bool hasAliyunSubId() const { return this->aliyunSubId_ != nullptr;};
    void deleteAliyunSubId() { this->aliyunSubId_ = nullptr;};
    inline string aliyunSubId() const { DARABONBA_PTR_GET_DEFAULT(aliyunSubId_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceList& setAliyunSubId(string aliyunSubId) { DARABONBA_PTR_SET_VALUE(aliyunSubId_, aliyunSubId) };


    // auditFailMessage Field Functions 
    bool hasAuditFailMessage() const { return this->auditFailMessage_ != nullptr;};
    void deleteAuditFailMessage() { this->auditFailMessage_ = nullptr;};
    inline string auditFailMessage() const { DARABONBA_PTR_GET_DEFAULT(auditFailMessage_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceList& setAuditFailMessage(string auditFailMessage) { DARABONBA_PTR_SET_VALUE(auditFailMessage_, auditFailMessage) };


    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline string auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceList& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceList& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resSpecType Field Functions 
    bool hasResSpecType() const { return this->resSpecType_ != nullptr;};
    void deleteResSpecType() { this->resSpecType_ = nullptr;};
    inline string resSpecType() const { DARABONBA_PTR_GET_DEFAULT(resSpecType_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceList& setResSpecType(string resSpecType) { DARABONBA_PTR_SET_VALUE(resSpecType_, resSpecType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // trainFailMessage Field Functions 
    bool hasTrainFailMessage() const { return this->trainFailMessage_ != nullptr;};
    void deleteTrainFailMessage() { this->trainFailMessage_ = nullptr;};
    inline string trainFailMessage() const { DARABONBA_PTR_GET_DEFAULT(trainFailMessage_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceList& setTrainFailMessage(string trainFailMessage) { DARABONBA_PTR_SET_VALUE(trainFailMessage_, trainFailMessage) };


    // trainStatus Field Functions 
    bool hasTrainStatus() const { return this->trainStatus_ != nullptr;};
    void deleteTrainStatus() { this->trainStatus_ = nullptr;};
    inline string trainStatus() const { DARABONBA_PTR_GET_DEFAULT(trainStatus_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceList& setTrainStatus(string trainStatus) { DARABONBA_PTR_SET_VALUE(trainStatus_, trainStatus) };


    // useScene Field Functions 
    bool hasUseScene() const { return this->useScene_ != nullptr;};
    void deleteUseScene() { this->useScene_ = nullptr;};
    inline string useScene() const { DARABONBA_PTR_GET_DEFAULT(useScene_, "") };
    inline BatchGetTrainTaskResponseBodyVoiceList& setUseScene(string useScene) { DARABONBA_PTR_SET_VALUE(useScene_, useScene) };


    // voiceMaterial Field Functions 
    bool hasVoiceMaterial() const { return this->voiceMaterial_ != nullptr;};
    void deleteVoiceMaterial() { this->voiceMaterial_ = nullptr;};
    inline const Models::BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial & voiceMaterial() const { DARABONBA_PTR_GET_CONST(voiceMaterial_, Models::BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial) };
    inline Models::BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial voiceMaterial() { DARABONBA_PTR_GET(voiceMaterial_, Models::BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial) };
    inline BatchGetTrainTaskResponseBodyVoiceList& setVoiceMaterial(const Models::BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial & voiceMaterial) { DARABONBA_PTR_SET_VALUE(voiceMaterial_, voiceMaterial) };
    inline BatchGetTrainTaskResponseBodyVoiceList& setVoiceMaterial(Models::BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial && voiceMaterial) { DARABONBA_PTR_SET_RVALUE(voiceMaterial_, voiceMaterial) };


  protected:
    std::shared_ptr<string> aliyunSubId_ = nullptr;
    std::shared_ptr<string> auditFailMessage_ = nullptr;
    std::shared_ptr<string> auditStatus_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> resSpecType_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> trainFailMessage_ = nullptr;
    std::shared_ptr<string> trainStatus_ = nullptr;
    std::shared_ptr<string> useScene_ = nullptr;
    std::shared_ptr<Models::BatchGetTrainTaskResponseBodyVoiceListVoiceMaterial> voiceMaterial_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
