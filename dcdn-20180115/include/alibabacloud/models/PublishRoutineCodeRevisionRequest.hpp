// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHROUTINECODEREVISIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHROUTINECODEREVISIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class PublishRoutineCodeRevisionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishRoutineCodeRevisionRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SelectCodeRevision, selectCodeRevision_);
    };
    friend void from_json(const Darabonba::Json& j, PublishRoutineCodeRevisionRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SelectCodeRevision, selectCodeRevision_);
    };
    PublishRoutineCodeRevisionRequest() = default ;
    PublishRoutineCodeRevisionRequest(const PublishRoutineCodeRevisionRequest &) = default ;
    PublishRoutineCodeRevisionRequest(PublishRoutineCodeRevisionRequest &&) = default ;
    PublishRoutineCodeRevisionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishRoutineCodeRevisionRequest() = default ;
    PublishRoutineCodeRevisionRequest& operator=(const PublishRoutineCodeRevisionRequest &) = default ;
    PublishRoutineCodeRevisionRequest& operator=(PublishRoutineCodeRevisionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envs_ == nullptr
        && this->name_ == nullptr && this->selectCodeRevision_ == nullptr; };
    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline     const Darabonba::Json & getEnvs() const { DARABONBA_GET(envs_) };
    Darabonba::Json & getEnvs() { DARABONBA_GET(envs_) };
    inline PublishRoutineCodeRevisionRequest& setEnvs(const Darabonba::Json & envs) { DARABONBA_SET_VALUE(envs_, envs) };
    inline PublishRoutineCodeRevisionRequest& setEnvs(Darabonba::Json && envs) { DARABONBA_SET_RVALUE(envs_, envs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PublishRoutineCodeRevisionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // selectCodeRevision Field Functions 
    bool hasSelectCodeRevision() const { return this->selectCodeRevision_ != nullptr;};
    void deleteSelectCodeRevision() { this->selectCodeRevision_ = nullptr;};
    inline string getSelectCodeRevision() const { DARABONBA_PTR_GET_DEFAULT(selectCodeRevision_, "") };
    inline PublishRoutineCodeRevisionRequest& setSelectCodeRevision(string selectCodeRevision) { DARABONBA_PTR_SET_VALUE(selectCodeRevision_, selectCodeRevision) };


  protected:
    // The environment to which you want to publish the code.
    // 
    // > 
    // 
    // *   production: the name of the environment, including the environment name (SpecName) and the domain name whitelist (AllowedHosts).
    // 
    // *   presetCanary: You can add canary release environments based on your business requirements. This parameter is optional.
    // 
    // This parameter is required.
    Darabonba::Json envs_ {};
    // The name of the routine. The name must be unique among the routines that belong to the same Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The version of the routine code that you want to publish.
    // 
    // This parameter is required.
    shared_ptr<string> selectCodeRevision_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
