// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTINECONFENVSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTINECONFENVSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DeleteRoutineConfEnvsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRoutineConfEnvsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Envs, envsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRoutineConfEnvsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Envs, envsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteRoutineConfEnvsShrinkRequest() = default ;
    DeleteRoutineConfEnvsShrinkRequest(const DeleteRoutineConfEnvsShrinkRequest &) = default ;
    DeleteRoutineConfEnvsShrinkRequest(DeleteRoutineConfEnvsShrinkRequest &&) = default ;
    DeleteRoutineConfEnvsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRoutineConfEnvsShrinkRequest() = default ;
    DeleteRoutineConfEnvsShrinkRequest& operator=(const DeleteRoutineConfEnvsShrinkRequest &) = default ;
    DeleteRoutineConfEnvsShrinkRequest& operator=(DeleteRoutineConfEnvsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->envsShrink_ != nullptr
        && this->name_ != nullptr; };
    // envsShrink Field Functions 
    bool hasEnvsShrink() const { return this->envsShrink_ != nullptr;};
    void deleteEnvsShrink() { this->envsShrink_ = nullptr;};
    inline string envsShrink() const { DARABONBA_PTR_GET_DEFAULT(envsShrink_, "") };
    inline DeleteRoutineConfEnvsShrinkRequest& setEnvsShrink(string envsShrink) { DARABONBA_PTR_SET_VALUE(envsShrink_, envsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteRoutineConfEnvsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The custom canary release environments that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> envsShrink_ = nullptr;
    // The name of the routine. The name must be unique among the routines that belong to the same Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
