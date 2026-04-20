// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECALLCENTERPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECALLCENTERPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class UpdateCallCenterProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCallCenterProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Extras, extras_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Originator, originator_);
      DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
      DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
      DARABONBA_PTR_TO_JSON(ReferTo, referTo_);
      DARABONBA_PTR_TO_JSON(TrunkId, trunkId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCallCenterProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Extras, extras_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Originator, originator_);
      DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
      DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
      DARABONBA_PTR_FROM_JSON(ReferTo, referTo_);
      DARABONBA_PTR_FROM_JSON(TrunkId, trunkId_);
    };
    UpdateCallCenterProviderRequest() = default ;
    UpdateCallCenterProviderRequest(const UpdateCallCenterProviderRequest &) = default ;
    UpdateCallCenterProviderRequest(UpdateCallCenterProviderRequest &&) = default ;
    UpdateCallCenterProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCallCenterProviderRequest() = default ;
    UpdateCallCenterProviderRequest& operator=(const UpdateCallCenterProviderRequest &) = default ;
    UpdateCallCenterProviderRequest& operator=(UpdateCallCenterProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destination_ == nullptr
        && this->displayName_ == nullptr && this->extras_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->originator_ == nullptr
        && this->providerId_ == nullptr && this->providerType_ == nullptr && this->referTo_ == nullptr && this->trunkId_ == nullptr; };
    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline UpdateCallCenterProviderRequest& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateCallCenterProviderRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // extras Field Functions 
    bool hasExtras() const { return this->extras_ != nullptr;};
    void deleteExtras() { this->extras_ = nullptr;};
    inline string getExtras() const { DARABONBA_PTR_GET_DEFAULT(extras_, "") };
    inline UpdateCallCenterProviderRequest& setExtras(string extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCallCenterProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCallCenterProviderRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline string getOriginator() const { DARABONBA_PTR_GET_DEFAULT(originator_, "") };
    inline UpdateCallCenterProviderRequest& setOriginator(string originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };


    // providerId Field Functions 
    bool hasProviderId() const { return this->providerId_ != nullptr;};
    void deleteProviderId() { this->providerId_ = nullptr;};
    inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
    inline UpdateCallCenterProviderRequest& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


    // providerType Field Functions 
    bool hasProviderType() const { return this->providerType_ != nullptr;};
    void deleteProviderType() { this->providerType_ = nullptr;};
    inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
    inline UpdateCallCenterProviderRequest& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    // referTo Field Functions 
    bool hasReferTo() const { return this->referTo_ != nullptr;};
    void deleteReferTo() { this->referTo_ = nullptr;};
    inline string getReferTo() const { DARABONBA_PTR_GET_DEFAULT(referTo_, "") };
    inline UpdateCallCenterProviderRequest& setReferTo(string referTo) { DARABONBA_PTR_SET_VALUE(referTo_, referTo) };


    // trunkId Field Functions 
    bool hasTrunkId() const { return this->trunkId_ != nullptr;};
    void deleteTrunkId() { this->trunkId_ = nullptr;};
    inline string getTrunkId() const { DARABONBA_PTR_GET_DEFAULT(trunkId_, "") };
    inline UpdateCallCenterProviderRequest& setTrunkId(string trunkId) { DARABONBA_PTR_SET_VALUE(trunkId_, trunkId) };


  protected:
    shared_ptr<string> destination_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<string> extras_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> originator_ {};
    shared_ptr<string> providerId_ {};
    shared_ptr<string> providerType_ {};
    shared_ptr<string> referTo_ {};
    shared_ptr<string> trunkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
