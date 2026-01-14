// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGLOBALACCELERATORRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGLOBALACCELERATORRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetGlobalAcceleratorResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGlobalAcceleratorResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(AssociatedResourceId, associatedResourceId_);
      DARABONBA_PTR_TO_JSON(AssociatedResourceRegionId, associatedResourceRegionId_);
      DARABONBA_PTR_TO_JSON(AssociatedResourceType, associatedResourceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGlobalAcceleratorResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(AssociatedResourceId, associatedResourceId_);
      DARABONBA_PTR_FROM_JSON(AssociatedResourceRegionId, associatedResourceRegionId_);
      DARABONBA_PTR_FROM_JSON(AssociatedResourceType, associatedResourceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetGlobalAcceleratorResourcesRequest() = default ;
    GetGlobalAcceleratorResourcesRequest(const GetGlobalAcceleratorResourcesRequest &) = default ;
    GetGlobalAcceleratorResourcesRequest(GetGlobalAcceleratorResourcesRequest &&) = default ;
    GetGlobalAcceleratorResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGlobalAcceleratorResourcesRequest() = default ;
    GetGlobalAcceleratorResourcesRequest& operator=(const GetGlobalAcceleratorResourcesRequest &) = default ;
    GetGlobalAcceleratorResourcesRequest& operator=(GetGlobalAcceleratorResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->associatedResourceId_ == nullptr && this->associatedResourceRegionId_ == nullptr && this->associatedResourceType_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline GetGlobalAcceleratorResourcesRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // associatedResourceId Field Functions 
    bool hasAssociatedResourceId() const { return this->associatedResourceId_ != nullptr;};
    void deleteAssociatedResourceId() { this->associatedResourceId_ = nullptr;};
    inline string getAssociatedResourceId() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceId_, "") };
    inline GetGlobalAcceleratorResourcesRequest& setAssociatedResourceId(string associatedResourceId) { DARABONBA_PTR_SET_VALUE(associatedResourceId_, associatedResourceId) };


    // associatedResourceRegionId Field Functions 
    bool hasAssociatedResourceRegionId() const { return this->associatedResourceRegionId_ != nullptr;};
    void deleteAssociatedResourceRegionId() { this->associatedResourceRegionId_ = nullptr;};
    inline string getAssociatedResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceRegionId_, "") };
    inline GetGlobalAcceleratorResourcesRequest& setAssociatedResourceRegionId(string associatedResourceRegionId) { DARABONBA_PTR_SET_VALUE(associatedResourceRegionId_, associatedResourceRegionId) };


    // associatedResourceType Field Functions 
    bool hasAssociatedResourceType() const { return this->associatedResourceType_ != nullptr;};
    void deleteAssociatedResourceType() { this->associatedResourceType_ = nullptr;};
    inline string getAssociatedResourceType() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceType_, "") };
    inline GetGlobalAcceleratorResourcesRequest& setAssociatedResourceType(string associatedResourceType) { DARABONBA_PTR_SET_VALUE(associatedResourceType_, associatedResourceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetGlobalAcceleratorResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    shared_ptr<string> associatedResourceId_ {};
    shared_ptr<string> associatedResourceRegionId_ {};
    shared_ptr<string> associatedResourceType_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
