// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAINTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAINTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateTrainTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrainTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunMainId, aliyunMainId_);
      DARABONBA_PTR_TO_JSON(resSpecType, resSpecType_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
      DARABONBA_PTR_TO_JSON(useScene, useScene_);
      DARABONBA_PTR_TO_JSON(voiceGender, voiceGender_);
      DARABONBA_PTR_TO_JSON(voiceLanguage, voiceLanguage_);
      DARABONBA_PTR_TO_JSON(voiceName, voiceName_);
      DARABONBA_PTR_TO_JSON(voicePath, voicePath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrainTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunMainId, aliyunMainId_);
      DARABONBA_PTR_FROM_JSON(resSpecType, resSpecType_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
      DARABONBA_PTR_FROM_JSON(useScene, useScene_);
      DARABONBA_PTR_FROM_JSON(voiceGender, voiceGender_);
      DARABONBA_PTR_FROM_JSON(voiceLanguage, voiceLanguage_);
      DARABONBA_PTR_FROM_JSON(voiceName, voiceName_);
      DARABONBA_PTR_FROM_JSON(voicePath, voicePath_);
    };
    CreateTrainTaskRequest() = default ;
    CreateTrainTaskRequest(const CreateTrainTaskRequest &) = default ;
    CreateTrainTaskRequest(CreateTrainTaskRequest &&) = default ;
    CreateTrainTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrainTaskRequest() = default ;
    CreateTrainTaskRequest& operator=(const CreateTrainTaskRequest &) = default ;
    CreateTrainTaskRequest& operator=(CreateTrainTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunMainId_ == nullptr
        && this->resSpecType_ == nullptr && this->taskType_ == nullptr && this->useScene_ == nullptr && this->voiceGender_ == nullptr && this->voiceLanguage_ == nullptr
        && this->voiceName_ == nullptr && this->voicePath_ == nullptr; };
    // aliyunMainId Field Functions 
    bool hasAliyunMainId() const { return this->aliyunMainId_ != nullptr;};
    void deleteAliyunMainId() { this->aliyunMainId_ = nullptr;};
    inline string getAliyunMainId() const { DARABONBA_PTR_GET_DEFAULT(aliyunMainId_, "") };
    inline CreateTrainTaskRequest& setAliyunMainId(string aliyunMainId) { DARABONBA_PTR_SET_VALUE(aliyunMainId_, aliyunMainId) };


    // resSpecType Field Functions 
    bool hasResSpecType() const { return this->resSpecType_ != nullptr;};
    void deleteResSpecType() { this->resSpecType_ = nullptr;};
    inline string getResSpecType() const { DARABONBA_PTR_GET_DEFAULT(resSpecType_, "") };
    inline CreateTrainTaskRequest& setResSpecType(string resSpecType) { DARABONBA_PTR_SET_VALUE(resSpecType_, resSpecType) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateTrainTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // useScene Field Functions 
    bool hasUseScene() const { return this->useScene_ != nullptr;};
    void deleteUseScene() { this->useScene_ = nullptr;};
    inline string getUseScene() const { DARABONBA_PTR_GET_DEFAULT(useScene_, "") };
    inline CreateTrainTaskRequest& setUseScene(string useScene) { DARABONBA_PTR_SET_VALUE(useScene_, useScene) };


    // voiceGender Field Functions 
    bool hasVoiceGender() const { return this->voiceGender_ != nullptr;};
    void deleteVoiceGender() { this->voiceGender_ = nullptr;};
    inline string getVoiceGender() const { DARABONBA_PTR_GET_DEFAULT(voiceGender_, "") };
    inline CreateTrainTaskRequest& setVoiceGender(string voiceGender) { DARABONBA_PTR_SET_VALUE(voiceGender_, voiceGender) };


    // voiceLanguage Field Functions 
    bool hasVoiceLanguage() const { return this->voiceLanguage_ != nullptr;};
    void deleteVoiceLanguage() { this->voiceLanguage_ = nullptr;};
    inline string getVoiceLanguage() const { DARABONBA_PTR_GET_DEFAULT(voiceLanguage_, "") };
    inline CreateTrainTaskRequest& setVoiceLanguage(string voiceLanguage) { DARABONBA_PTR_SET_VALUE(voiceLanguage_, voiceLanguage) };


    // voiceName Field Functions 
    bool hasVoiceName() const { return this->voiceName_ != nullptr;};
    void deleteVoiceName() { this->voiceName_ = nullptr;};
    inline string getVoiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
    inline CreateTrainTaskRequest& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


    // voicePath Field Functions 
    bool hasVoicePath() const { return this->voicePath_ != nullptr;};
    void deleteVoicePath() { this->voicePath_ = nullptr;};
    inline string getVoicePath() const { DARABONBA_PTR_GET_DEFAULT(voicePath_, "") };
    inline CreateTrainTaskRequest& setVoicePath(string voicePath) { DARABONBA_PTR_SET_VALUE(voicePath_, voicePath) };


  protected:
    shared_ptr<string> aliyunMainId_ {};
    shared_ptr<string> resSpecType_ {};
    shared_ptr<string> taskType_ {};
    shared_ptr<string> useScene_ {};
    shared_ptr<string> voiceGender_ {};
    shared_ptr<string> voiceLanguage_ {};
    shared_ptr<string> voiceName_ {};
    shared_ptr<string> voicePath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
