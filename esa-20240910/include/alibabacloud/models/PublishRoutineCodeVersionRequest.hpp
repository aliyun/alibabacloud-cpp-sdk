// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHROUTINECODEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHROUTINECODEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PublishRoutineCodeVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishRoutineCodeVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, PublishRoutineCodeVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    PublishRoutineCodeVersionRequest() = default ;
    PublishRoutineCodeVersionRequest(const PublishRoutineCodeVersionRequest &) = default ;
    PublishRoutineCodeVersionRequest(PublishRoutineCodeVersionRequest &&) = default ;
    PublishRoutineCodeVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishRoutineCodeVersionRequest() = default ;
    PublishRoutineCodeVersionRequest& operator=(const PublishRoutineCodeVersionRequest &) = default ;
    PublishRoutineCodeVersionRequest& operator=(PublishRoutineCodeVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeVersion_ == nullptr
        && this->env_ == nullptr && this->name_ == nullptr; };
    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string getCodeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline PublishRoutineCodeVersionRequest& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline PublishRoutineCodeVersionRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PublishRoutineCodeVersionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The code version to be released.
    shared_ptr<string> codeVersion_ {};
    // The environment name.
    // 
    // This parameter is required.
    shared_ptr<string> env_ {};
    // The routine name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
