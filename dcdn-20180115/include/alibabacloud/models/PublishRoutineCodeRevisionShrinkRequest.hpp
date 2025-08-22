// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHROUTINECODEREVISIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHROUTINECODEREVISIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class PublishRoutineCodeRevisionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishRoutineCodeRevisionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Envs, envsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SelectCodeRevision, selectCodeRevision_);
    };
    friend void from_json(const Darabonba::Json& j, PublishRoutineCodeRevisionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Envs, envsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SelectCodeRevision, selectCodeRevision_);
    };
    PublishRoutineCodeRevisionShrinkRequest() = default ;
    PublishRoutineCodeRevisionShrinkRequest(const PublishRoutineCodeRevisionShrinkRequest &) = default ;
    PublishRoutineCodeRevisionShrinkRequest(PublishRoutineCodeRevisionShrinkRequest &&) = default ;
    PublishRoutineCodeRevisionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishRoutineCodeRevisionShrinkRequest() = default ;
    PublishRoutineCodeRevisionShrinkRequest& operator=(const PublishRoutineCodeRevisionShrinkRequest &) = default ;
    PublishRoutineCodeRevisionShrinkRequest& operator=(PublishRoutineCodeRevisionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->envsShrink_ != nullptr
        && this->name_ != nullptr && this->selectCodeRevision_ != nullptr; };
    // envsShrink Field Functions 
    bool hasEnvsShrink() const { return this->envsShrink_ != nullptr;};
    void deleteEnvsShrink() { this->envsShrink_ = nullptr;};
    inline string envsShrink() const { DARABONBA_PTR_GET_DEFAULT(envsShrink_, "") };
    inline PublishRoutineCodeRevisionShrinkRequest& setEnvsShrink(string envsShrink) { DARABONBA_PTR_SET_VALUE(envsShrink_, envsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PublishRoutineCodeRevisionShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // selectCodeRevision Field Functions 
    bool hasSelectCodeRevision() const { return this->selectCodeRevision_ != nullptr;};
    void deleteSelectCodeRevision() { this->selectCodeRevision_ = nullptr;};
    inline string selectCodeRevision() const { DARABONBA_PTR_GET_DEFAULT(selectCodeRevision_, "") };
    inline PublishRoutineCodeRevisionShrinkRequest& setSelectCodeRevision(string selectCodeRevision) { DARABONBA_PTR_SET_VALUE(selectCodeRevision_, selectCodeRevision) };


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
    std::shared_ptr<string> envsShrink_ = nullptr;
    // The name of the routine. The name must be unique among the routines that belong to the same Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The version of the routine code that you want to publish.
    // 
    // This parameter is required.
    std::shared_ptr<string> selectCodeRevision_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
