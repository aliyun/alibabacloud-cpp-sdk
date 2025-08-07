// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPECTASKEXECUTORVM_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPECTASKEXECUTORVM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestTasksTaskSpecTaskExecutorVM : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestTasksTaskSpecTaskExecutorVM& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PrologScript, prologScript_);
      DARABONBA_PTR_TO_JSON(Script, script_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestTasksTaskSpecTaskExecutorVM& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PrologScript, prologScript_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
    };
    CreateJobRequestTasksTaskSpecTaskExecutorVM() = default ;
    CreateJobRequestTasksTaskSpecTaskExecutorVM(const CreateJobRequestTasksTaskSpecTaskExecutorVM &) = default ;
    CreateJobRequestTasksTaskSpecTaskExecutorVM(CreateJobRequestTasksTaskSpecTaskExecutorVM &&) = default ;
    CreateJobRequestTasksTaskSpecTaskExecutorVM(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestTasksTaskSpecTaskExecutorVM() = default ;
    CreateJobRequestTasksTaskSpecTaskExecutorVM& operator=(const CreateJobRequestTasksTaskSpecTaskExecutorVM &) = default ;
    CreateJobRequestTasksTaskSpecTaskExecutorVM& operator=(CreateJobRequestTasksTaskSpecTaskExecutorVM &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->image_ != nullptr && this->password_ != nullptr && this->prologScript_ != nullptr && this->script_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateJobRequestTasksTaskSpecTaskExecutorVM& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline CreateJobRequestTasksTaskSpecTaskExecutorVM& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateJobRequestTasksTaskSpecTaskExecutorVM& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // prologScript Field Functions 
    bool hasPrologScript() const { return this->prologScript_ != nullptr;};
    void deletePrologScript() { this->prologScript_ = nullptr;};
    inline string prologScript() const { DARABONBA_PTR_GET_DEFAULT(prologScript_, "") };
    inline CreateJobRequestTasksTaskSpecTaskExecutorVM& setPrologScript(string prologScript) { DARABONBA_PTR_SET_VALUE(prologScript_, prologScript) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline CreateJobRequestTasksTaskSpecTaskExecutorVM& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> prologScript_ = nullptr;
    std::shared_ptr<string> script_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
