// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTUSERCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTUSERCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateInstanceRequestUserCommandOnStart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class UpdateInstanceRequestUserCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequestUserCommand& obj) { 
      DARABONBA_PTR_TO_JSON(OnStart, onStart_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequestUserCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(OnStart, onStart_);
    };
    UpdateInstanceRequestUserCommand() = default ;
    UpdateInstanceRequestUserCommand(const UpdateInstanceRequestUserCommand &) = default ;
    UpdateInstanceRequestUserCommand(UpdateInstanceRequestUserCommand &&) = default ;
    UpdateInstanceRequestUserCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequestUserCommand() = default ;
    UpdateInstanceRequestUserCommand& operator=(const UpdateInstanceRequestUserCommand &) = default ;
    UpdateInstanceRequestUserCommand& operator=(UpdateInstanceRequestUserCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->onStart_ == nullptr; };
    // onStart Field Functions 
    bool hasOnStart() const { return this->onStart_ != nullptr;};
    void deleteOnStart() { this->onStart_ = nullptr;};
    inline const Models::UpdateInstanceRequestUserCommandOnStart & onStart() const { DARABONBA_PTR_GET_CONST(onStart_, Models::UpdateInstanceRequestUserCommandOnStart) };
    inline Models::UpdateInstanceRequestUserCommandOnStart onStart() { DARABONBA_PTR_GET(onStart_, Models::UpdateInstanceRequestUserCommandOnStart) };
    inline UpdateInstanceRequestUserCommand& setOnStart(const Models::UpdateInstanceRequestUserCommandOnStart & onStart) { DARABONBA_PTR_SET_VALUE(onStart_, onStart) };
    inline UpdateInstanceRequestUserCommand& setOnStart(Models::UpdateInstanceRequestUserCommandOnStart && onStart) { DARABONBA_PTR_SET_RVALUE(onStart_, onStart) };


  protected:
    std::shared_ptr<Models::UpdateInstanceRequestUserCommandOnStart> onStart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
