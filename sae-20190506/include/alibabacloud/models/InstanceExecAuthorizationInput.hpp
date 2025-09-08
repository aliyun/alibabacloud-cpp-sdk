// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEEXECAUTHORIZATIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEEXECAUTHORIZATIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InstanceExecAuthorizationInputOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class InstanceExecAuthorizationInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceExecAuthorizationInput& obj) { 
      DARABONBA_PTR_TO_JSON(options, options_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceExecAuthorizationInput& obj) { 
      DARABONBA_PTR_FROM_JSON(options, options_);
    };
    InstanceExecAuthorizationInput() = default ;
    InstanceExecAuthorizationInput(const InstanceExecAuthorizationInput &) = default ;
    InstanceExecAuthorizationInput(InstanceExecAuthorizationInput &&) = default ;
    InstanceExecAuthorizationInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceExecAuthorizationInput() = default ;
    InstanceExecAuthorizationInput& operator=(const InstanceExecAuthorizationInput &) = default ;
    InstanceExecAuthorizationInput& operator=(InstanceExecAuthorizationInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->options_ != nullptr; };
    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const InstanceExecAuthorizationInputOptions & options() const { DARABONBA_PTR_GET_CONST(options_, InstanceExecAuthorizationInputOptions) };
    inline InstanceExecAuthorizationInputOptions options() { DARABONBA_PTR_GET(options_, InstanceExecAuthorizationInputOptions) };
    inline InstanceExecAuthorizationInput& setOptions(const InstanceExecAuthorizationInputOptions & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline InstanceExecAuthorizationInput& setOptions(InstanceExecAuthorizationInputOptions && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


  protected:
    std::shared_ptr<InstanceExecAuthorizationInputOptions> options_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
