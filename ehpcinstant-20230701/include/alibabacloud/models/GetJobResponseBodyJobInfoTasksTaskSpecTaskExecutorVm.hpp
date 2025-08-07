// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPECTASKEXECUTORVM_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPECTASKEXECUTORVM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(PrologScript, prologScript_);
      DARABONBA_PTR_TO_JSON(Script, script_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(PrologScript, prologScript_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
    };
    GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM(const GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM(GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM &&) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM& operator=(const GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM& operator=(GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->image_ != nullptr
        && this->prologScript_ != nullptr && this->script_ != nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // prologScript Field Functions 
    bool hasPrologScript() const { return this->prologScript_ != nullptr;};
    void deletePrologScript() { this->prologScript_ = nullptr;};
    inline string prologScript() const { DARABONBA_PTR_GET_DEFAULT(prologScript_, "") };
    inline GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM& setPrologScript(string prologScript) { DARABONBA_PTR_SET_VALUE(prologScript_, prologScript) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline string script() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
    inline GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


  protected:
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<string> prologScript_ = nullptr;
    std::shared_ptr<string> script_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
