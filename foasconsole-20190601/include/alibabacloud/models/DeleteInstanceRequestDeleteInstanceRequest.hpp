// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEREQUESTDELETEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEREQUESTDELETEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DeleteInstanceRequestDeleteInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceRequestDeleteInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceRequestDeleteInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DeleteInstanceRequestDeleteInstanceRequest() = default ;
    DeleteInstanceRequestDeleteInstanceRequest(const DeleteInstanceRequestDeleteInstanceRequest &) = default ;
    DeleteInstanceRequestDeleteInstanceRequest(DeleteInstanceRequestDeleteInstanceRequest &&) = default ;
    DeleteInstanceRequestDeleteInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceRequestDeleteInstanceRequest() = default ;
    DeleteInstanceRequestDeleteInstanceRequest& operator=(const DeleteInstanceRequestDeleteInstanceRequest &) = default ;
    DeleteInstanceRequestDeleteInstanceRequest& operator=(DeleteInstanceRequestDeleteInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->region_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteInstanceRequestDeleteInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DeleteInstanceRequestDeleteInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
