// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUESTSAMLSSOCONFIGOPTIONALRELAYSTATES_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUESTSAMLSSOCONFIGOPTIONALRELAYSTATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(RelayState, relayState_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(RelayState, relayState_);
    };
    SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates() = default ;
    SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates(const SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates &) = default ;
    SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates(SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates &&) = default ;
    SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates() = default ;
    SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates& operator=(const SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates &) = default ;
    SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates& operator=(SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->relayState_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // relayState Field Functions 
    bool hasRelayState() const { return this->relayState_ != nullptr;};
    void deleteRelayState() { this->relayState_ = nullptr;};
    inline string relayState() const { DARABONBA_PTR_GET_DEFAULT(relayState_, "") };
    inline SetApplicationSsoConfigRequestSamlSsoConfigOptionalRelayStates& setRelayState(string relayState) { DARABONBA_PTR_SET_VALUE(relayState_, relayState) };


  protected:
    // RelayState displayName
    std::shared_ptr<string> displayName_ = nullptr;
    // RelayState value
    std::shared_ptr<string> relayState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
