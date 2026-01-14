// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAICOACHTASKSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAICOACHTASKSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateAICoachTaskSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAICoachTaskSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAICoachTaskSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    CreateAICoachTaskSessionRequest() = default ;
    CreateAICoachTaskSessionRequest(const CreateAICoachTaskSessionRequest &) = default ;
    CreateAICoachTaskSessionRequest(CreateAICoachTaskSessionRequest &&) = default ;
    CreateAICoachTaskSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAICoachTaskSessionRequest() = default ;
    CreateAICoachTaskSessionRequest& operator=(const CreateAICoachTaskSessionRequest &) = default ;
    CreateAICoachTaskSessionRequest& operator=(CreateAICoachTaskSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr
        && this->uid_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateAICoachTaskSessionRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline CreateAICoachTaskSessionRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    shared_ptr<string> taskId_ {};
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
