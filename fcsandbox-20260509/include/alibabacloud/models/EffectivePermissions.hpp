// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EFFECTIVEPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_EFFECTIVEPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class EffectivePermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EffectivePermissions& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(capabilities, capabilities_);
    };
    friend void from_json(const Darabonba::Json& j, EffectivePermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(capabilities, capabilities_);
    };
    EffectivePermissions() = default ;
    EffectivePermissions(const EffectivePermissions &) = default ;
    EffectivePermissions(EffectivePermissions &&) = default ;
    EffectivePermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EffectivePermissions() = default ;
    EffectivePermissions& operator=(const EffectivePermissions &) = default ;
    EffectivePermissions& operator=(EffectivePermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && this->capabilities_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
    inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
    inline EffectivePermissions& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline EffectivePermissions& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const vector<string> & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
    inline vector<string> getCapabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
    inline EffectivePermissions& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline EffectivePermissions& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


  protected:
    // The actions.
    shared_ptr<vector<string>> actions_ {};
    // The capabilities.
    shared_ptr<vector<string>> capabilities_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
