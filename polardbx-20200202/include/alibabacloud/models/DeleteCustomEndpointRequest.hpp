// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DeleteCustomEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomEndpointId, customEndpointId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomEndpointId, customEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteCustomEndpointRequest() = default ;
    DeleteCustomEndpointRequest(const DeleteCustomEndpointRequest &) = default ;
    DeleteCustomEndpointRequest(DeleteCustomEndpointRequest &&) = default ;
    DeleteCustomEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomEndpointRequest() = default ;
    DeleteCustomEndpointRequest& operator=(const DeleteCustomEndpointRequest &) = default ;
    DeleteCustomEndpointRequest& operator=(DeleteCustomEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customEndpointId_ == nullptr
        && return this->DBInstanceName_ == nullptr && return this->regionId_ == nullptr; };
    // customEndpointId Field Functions 
    bool hasCustomEndpointId() const { return this->customEndpointId_ != nullptr;};
    void deleteCustomEndpointId() { this->customEndpointId_ = nullptr;};
    inline string customEndpointId() const { DARABONBA_PTR_GET_DEFAULT(customEndpointId_, "") };
    inline DeleteCustomEndpointRequest& setCustomEndpointId(string customEndpointId) { DARABONBA_PTR_SET_VALUE(customEndpointId_, customEndpointId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DeleteCustomEndpointRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCustomEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> customEndpointId_ = nullptr;
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
