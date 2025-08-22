// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTINECONFENVSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTINECONFENVSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DeleteRoutineConfEnvsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRoutineConfEnvsRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRoutineConfEnvsRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteRoutineConfEnvsRequest() = default ;
    DeleteRoutineConfEnvsRequest(const DeleteRoutineConfEnvsRequest &) = default ;
    DeleteRoutineConfEnvsRequest(DeleteRoutineConfEnvsRequest &&) = default ;
    DeleteRoutineConfEnvsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRoutineConfEnvsRequest() = default ;
    DeleteRoutineConfEnvsRequest& operator=(const DeleteRoutineConfEnvsRequest &) = default ;
    DeleteRoutineConfEnvsRequest& operator=(DeleteRoutineConfEnvsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->envs_ != nullptr
        && this->name_ != nullptr; };
    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline     const Darabonba::Json & envs() const { DARABONBA_GET(envs_) };
    Darabonba::Json & envs() { DARABONBA_GET(envs_) };
    inline DeleteRoutineConfEnvsRequest& setEnvs(const Darabonba::Json & envs) { DARABONBA_SET_VALUE(envs_, envs) };
    inline DeleteRoutineConfEnvsRequest& setEnvs(Darabonba::Json & envs) { DARABONBA_SET_RVALUE(envs_, envs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteRoutineConfEnvsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The custom canary release environments that you want to delete.
    // 
    // This parameter is required.
    Darabonba::Json envs_ = nullptr;
    // The name of the routine. The name must be unique among the routines that belong to the same Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
