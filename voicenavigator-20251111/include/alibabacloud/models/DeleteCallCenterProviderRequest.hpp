// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECALLCENTERPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECALLCENTERPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class DeleteCallCenterProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCallCenterProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCallCenterProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
    };
    DeleteCallCenterProviderRequest() = default ;
    DeleteCallCenterProviderRequest(const DeleteCallCenterProviderRequest &) = default ;
    DeleteCallCenterProviderRequest(DeleteCallCenterProviderRequest &&) = default ;
    DeleteCallCenterProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCallCenterProviderRequest() = default ;
    DeleteCallCenterProviderRequest& operator=(const DeleteCallCenterProviderRequest &) = default ;
    DeleteCallCenterProviderRequest& operator=(DeleteCallCenterProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->providerId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteCallCenterProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // providerId Field Functions 
    bool hasProviderId() const { return this->providerId_ != nullptr;};
    void deleteProviderId() { this->providerId_ = nullptr;};
    inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
    inline DeleteCallCenterProviderRequest& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> providerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
