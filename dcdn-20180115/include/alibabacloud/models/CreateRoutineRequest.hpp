// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateRoutineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_ANY_TO_JSON(EnvConf, envConf_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_ANY_FROM_JSON(EnvConf, envConf_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateRoutineRequest() = default ;
    CreateRoutineRequest(const CreateRoutineRequest &) = default ;
    CreateRoutineRequest(CreateRoutineRequest &&) = default ;
    CreateRoutineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineRequest() = default ;
    CreateRoutineRequest& operator=(const CreateRoutineRequest &) = default ;
    CreateRoutineRequest& operator=(CreateRoutineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->envConf_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRoutineRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envConf Field Functions 
    bool hasEnvConf() const { return this->envConf_ != nullptr;};
    void deleteEnvConf() { this->envConf_ = nullptr;};
    inline     const Darabonba::Json & getEnvConf() const { DARABONBA_GET(envConf_) };
    Darabonba::Json & getEnvConf() { DARABONBA_GET(envConf_) };
    inline CreateRoutineRequest& setEnvConf(const Darabonba::Json & envConf) { DARABONBA_SET_VALUE(envConf_, envConf) };
    inline CreateRoutineRequest& setEnvConf(Darabonba::Json && envConf) { DARABONBA_SET_RVALUE(envConf_, envConf) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRoutineRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the routine.
    shared_ptr<string> description_ {};
    // The configurations of the specified environment.
    Darabonba::Json envConf_ {};
    // The name of the routine. The name must be unique among the routines that belong to the same Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
