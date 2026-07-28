// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteResourceControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceControlName, resourceControlName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceControlName, resourceControlName_);
    };
    DeleteResourceControlRequest() = default ;
    DeleteResourceControlRequest(const DeleteResourceControlRequest &) = default ;
    DeleteResourceControlRequest(DeleteResourceControlRequest &&) = default ;
    DeleteResourceControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceControlRequest() = default ;
    DeleteResourceControlRequest& operator=(const DeleteResourceControlRequest &) = default ;
    DeleteResourceControlRequest& operator=(DeleteResourceControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->regionId_ == nullptr && this->resourceControlName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteResourceControlRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteResourceControlRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceControlName Field Functions 
    bool hasResourceControlName() const { return this->resourceControlName_ != nullptr;};
    void deleteResourceControlName() { this->resourceControlName_ = nullptr;};
    inline string getResourceControlName() const { DARABONBA_PTR_GET_DEFAULT(resourceControlName_, "") };
    inline DeleteResourceControlRequest& setResourceControlName(string resourceControlName) { DARABONBA_PTR_SET_VALUE(resourceControlName_, resourceControlName) };


  protected:
    // The database cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The resource control name.
    // 
    // This parameter is required.
    shared_ptr<string> resourceControlName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
