// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVCUINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVCUINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class DeleteVCUInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVCUInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVCUInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    DeleteVCUInstanceRequest() = default ;
    DeleteVCUInstanceRequest(const DeleteVCUInstanceRequest &) = default ;
    DeleteVCUInstanceRequest(DeleteVCUInstanceRequest &&) = default ;
    DeleteVCUInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVCUInstanceRequest() = default ;
    DeleteVCUInstanceRequest& operator=(const DeleteVCUInstanceRequest &) = default ;
    DeleteVCUInstanceRequest& operator=(DeleteVCUInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DeleteVCUInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
