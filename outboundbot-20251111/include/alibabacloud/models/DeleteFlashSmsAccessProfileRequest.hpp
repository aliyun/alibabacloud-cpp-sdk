// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFLASHSMSACCESSPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFLASHSMSACCESSPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class DeleteFlashSmsAccessProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFlashSmsAccessProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFlashSmsAccessProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteFlashSmsAccessProfileRequest() = default ;
    DeleteFlashSmsAccessProfileRequest(const DeleteFlashSmsAccessProfileRequest &) = default ;
    DeleteFlashSmsAccessProfileRequest(DeleteFlashSmsAccessProfileRequest &&) = default ;
    DeleteFlashSmsAccessProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFlashSmsAccessProfileRequest() = default ;
    DeleteFlashSmsAccessProfileRequest& operator=(const DeleteFlashSmsAccessProfileRequest &) = default ;
    DeleteFlashSmsAccessProfileRequest& operator=(DeleteFlashSmsAccessProfileRequest &&) = default ;
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
    inline DeleteFlashSmsAccessProfileRequest& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteFlashSmsAccessProfileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The flash message configuration ID.
    shared_ptr<string> accessProfileId_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
