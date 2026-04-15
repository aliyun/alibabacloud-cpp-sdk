// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELLMACCESSPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELLMACCESSPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class DeleteLlmAccessProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLlmAccessProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLlmAccessProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteLlmAccessProfileRequest() = default ;
    DeleteLlmAccessProfileRequest(const DeleteLlmAccessProfileRequest &) = default ;
    DeleteLlmAccessProfileRequest(DeleteLlmAccessProfileRequest &&) = default ;
    DeleteLlmAccessProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLlmAccessProfileRequest() = default ;
    DeleteLlmAccessProfileRequest& operator=(const DeleteLlmAccessProfileRequest &) = default ;
    DeleteLlmAccessProfileRequest& operator=(DeleteLlmAccessProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessProfileId_ == nullptr
        && this->instanceId_ == nullptr; };
    // accessProfileId Field Functions 
    bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
    void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
    inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
    inline DeleteLlmAccessProfileRequest& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteLlmAccessProfileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> accessProfileId_ {};
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
