// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTUSERCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTUSERCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceRequestUserCommandOnStart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CreateInstanceRequestUserCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestUserCommand& obj) { 
      DARABONBA_PTR_TO_JSON(OnStart, onStart_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestUserCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(OnStart, onStart_);
    };
    CreateInstanceRequestUserCommand() = default ;
    CreateInstanceRequestUserCommand(const CreateInstanceRequestUserCommand &) = default ;
    CreateInstanceRequestUserCommand(CreateInstanceRequestUserCommand &&) = default ;
    CreateInstanceRequestUserCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestUserCommand() = default ;
    CreateInstanceRequestUserCommand& operator=(const CreateInstanceRequestUserCommand &) = default ;
    CreateInstanceRequestUserCommand& operator=(CreateInstanceRequestUserCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->onStart_ == nullptr; };
    // onStart Field Functions 
    bool hasOnStart() const { return this->onStart_ != nullptr;};
    void deleteOnStart() { this->onStart_ = nullptr;};
    inline const Models::CreateInstanceRequestUserCommandOnStart & onStart() const { DARABONBA_PTR_GET_CONST(onStart_, Models::CreateInstanceRequestUserCommandOnStart) };
    inline Models::CreateInstanceRequestUserCommandOnStart onStart() { DARABONBA_PTR_GET(onStart_, Models::CreateInstanceRequestUserCommandOnStart) };
    inline CreateInstanceRequestUserCommand& setOnStart(const Models::CreateInstanceRequestUserCommandOnStart & onStart) { DARABONBA_PTR_SET_VALUE(onStart_, onStart) };
    inline CreateInstanceRequestUserCommand& setOnStart(Models::CreateInstanceRequestUserCommandOnStart && onStart) { DARABONBA_PTR_SET_RVALUE(onStart_, onStart) };


  protected:
    std::shared_ptr<Models::CreateInstanceRequestUserCommandOnStart> onStart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
