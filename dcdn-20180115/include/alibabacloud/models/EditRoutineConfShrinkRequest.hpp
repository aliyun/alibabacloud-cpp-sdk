// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITROUTINECONFSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITROUTINECONFSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class EditRoutineConfShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditRoutineConfShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvConf, envConfShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, EditRoutineConfShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvConf, envConfShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    EditRoutineConfShrinkRequest() = default ;
    EditRoutineConfShrinkRequest(const EditRoutineConfShrinkRequest &) = default ;
    EditRoutineConfShrinkRequest(EditRoutineConfShrinkRequest &&) = default ;
    EditRoutineConfShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditRoutineConfShrinkRequest() = default ;
    EditRoutineConfShrinkRequest& operator=(const EditRoutineConfShrinkRequest &) = default ;
    EditRoutineConfShrinkRequest& operator=(EditRoutineConfShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->envConfShrink_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline EditRoutineConfShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envConfShrink Field Functions 
    bool hasEnvConfShrink() const { return this->envConfShrink_ != nullptr;};
    void deleteEnvConfShrink() { this->envConfShrink_ = nullptr;};
    inline string getEnvConfShrink() const { DARABONBA_PTR_GET_DEFAULT(envConfShrink_, "") };
    inline EditRoutineConfShrinkRequest& setEnvConfShrink(string envConfShrink) { DARABONBA_PTR_SET_VALUE(envConfShrink_, envConfShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline EditRoutineConfShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the routine.
    shared_ptr<string> description_ {};
    // The configurations of the specified environment.
    shared_ptr<string> envConfShrink_ {};
    // The name of the routine. The name must be unique among the routines that belong to the same Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
