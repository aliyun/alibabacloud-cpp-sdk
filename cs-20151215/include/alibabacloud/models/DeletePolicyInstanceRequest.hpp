// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLICYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLICYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeletePolicyInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolicyInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instance_name, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolicyInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instance_name, instanceName_);
    };
    DeletePolicyInstanceRequest() = default ;
    DeletePolicyInstanceRequest(const DeletePolicyInstanceRequest &) = default ;
    DeletePolicyInstanceRequest(DeletePolicyInstanceRequest &&) = default ;
    DeletePolicyInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolicyInstanceRequest() = default ;
    DeletePolicyInstanceRequest& operator=(const DeletePolicyInstanceRequest &) = default ;
    DeletePolicyInstanceRequest& operator=(DeletePolicyInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceName_ != nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DeletePolicyInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // The ID of the policy instance.
    std::shared_ptr<string> instanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
