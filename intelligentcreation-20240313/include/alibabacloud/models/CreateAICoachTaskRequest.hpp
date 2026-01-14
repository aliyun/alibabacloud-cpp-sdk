// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAICOACHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAICOACHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateAICoachTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAICoachTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scriptRecordId, scriptRecordId_);
      DARABONBA_PTR_TO_JSON(studentAudioUrl, studentAudioUrl_);
      DARABONBA_PTR_TO_JSON(studentId, studentId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAICoachTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scriptRecordId, scriptRecordId_);
      DARABONBA_PTR_FROM_JSON(studentAudioUrl, studentAudioUrl_);
      DARABONBA_PTR_FROM_JSON(studentId, studentId_);
    };
    CreateAICoachTaskRequest() = default ;
    CreateAICoachTaskRequest(const CreateAICoachTaskRequest &) = default ;
    CreateAICoachTaskRequest(CreateAICoachTaskRequest &&) = default ;
    CreateAICoachTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAICoachTaskRequest() = default ;
    CreateAICoachTaskRequest& operator=(const CreateAICoachTaskRequest &) = default ;
    CreateAICoachTaskRequest& operator=(CreateAICoachTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scriptRecordId_ == nullptr && this->studentAudioUrl_ == nullptr && this->studentId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAICoachTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptRecordId Field Functions 
    bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
    void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
    inline string getScriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
    inline CreateAICoachTaskRequest& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


    // studentAudioUrl Field Functions 
    bool hasStudentAudioUrl() const { return this->studentAudioUrl_ != nullptr;};
    void deleteStudentAudioUrl() { this->studentAudioUrl_ = nullptr;};
    inline string getStudentAudioUrl() const { DARABONBA_PTR_GET_DEFAULT(studentAudioUrl_, "") };
    inline CreateAICoachTaskRequest& setStudentAudioUrl(string studentAudioUrl) { DARABONBA_PTR_SET_VALUE(studentAudioUrl_, studentAudioUrl) };


    // studentId Field Functions 
    bool hasStudentId() const { return this->studentId_ != nullptr;};
    void deleteStudentId() { this->studentId_ = nullptr;};
    inline string getStudentId() const { DARABONBA_PTR_GET_DEFAULT(studentId_, "") };
    inline CreateAICoachTaskRequest& setStudentId(string studentId) { DARABONBA_PTR_SET_VALUE(studentId_, studentId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scriptRecordId_ {};
    shared_ptr<string> studentAudioUrl_ {};
    shared_ptr<string> studentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
