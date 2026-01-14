// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class AssociateResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(AssociatedMode, associatedMode_);
      DARABONBA_PTR_TO_JSON(AssociatedResourceId, associatedResourceId_);
      DARABONBA_PTR_TO_JSON(AssociatedResourceRegionId, associatedResourceRegionId_);
      DARABONBA_PTR_TO_JSON(AssociatedResourceType, associatedResourceType_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(AssociatedMode, associatedMode_);
      DARABONBA_PTR_FROM_JSON(AssociatedResourceId, associatedResourceId_);
      DARABONBA_PTR_FROM_JSON(AssociatedResourceRegionId, associatedResourceRegionId_);
      DARABONBA_PTR_FROM_JSON(AssociatedResourceType, associatedResourceType_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AssociateResourcesRequest() = default ;
    AssociateResourcesRequest(const AssociateResourcesRequest &) = default ;
    AssociateResourcesRequest(AssociateResourcesRequest &&) = default ;
    AssociateResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateResourcesRequest() = default ;
    AssociateResourcesRequest& operator=(const AssociateResourcesRequest &) = default ;
    AssociateResourcesRequest& operator=(AssociateResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->associatedMode_ == nullptr && this->associatedResourceId_ == nullptr && this->associatedResourceRegionId_ == nullptr && this->associatedResourceType_ == nullptr && this->dryRun_ == nullptr
        && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline AssociateResourcesRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // associatedMode Field Functions 
    bool hasAssociatedMode() const { return this->associatedMode_ != nullptr;};
    void deleteAssociatedMode() { this->associatedMode_ = nullptr;};
    inline string getAssociatedMode() const { DARABONBA_PTR_GET_DEFAULT(associatedMode_, "") };
    inline AssociateResourcesRequest& setAssociatedMode(string associatedMode) { DARABONBA_PTR_SET_VALUE(associatedMode_, associatedMode) };


    // associatedResourceId Field Functions 
    bool hasAssociatedResourceId() const { return this->associatedResourceId_ != nullptr;};
    void deleteAssociatedResourceId() { this->associatedResourceId_ = nullptr;};
    inline string getAssociatedResourceId() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceId_, "") };
    inline AssociateResourcesRequest& setAssociatedResourceId(string associatedResourceId) { DARABONBA_PTR_SET_VALUE(associatedResourceId_, associatedResourceId) };


    // associatedResourceRegionId Field Functions 
    bool hasAssociatedResourceRegionId() const { return this->associatedResourceRegionId_ != nullptr;};
    void deleteAssociatedResourceRegionId() { this->associatedResourceRegionId_ = nullptr;};
    inline string getAssociatedResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceRegionId_, "") };
    inline AssociateResourcesRequest& setAssociatedResourceRegionId(string associatedResourceRegionId) { DARABONBA_PTR_SET_VALUE(associatedResourceRegionId_, associatedResourceRegionId) };


    // associatedResourceType Field Functions 
    bool hasAssociatedResourceType() const { return this->associatedResourceType_ != nullptr;};
    void deleteAssociatedResourceType() { this->associatedResourceType_ = nullptr;};
    inline string getAssociatedResourceType() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceType_, "") };
    inline AssociateResourcesRequest& setAssociatedResourceType(string associatedResourceType) { DARABONBA_PTR_SET_VALUE(associatedResourceType_, associatedResourceType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AssociateResourcesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociateResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    shared_ptr<string> associatedMode_ {};
    shared_ptr<string> associatedResourceId_ {};
    // This parameter is required.
    shared_ptr<string> associatedResourceRegionId_ {};
    // This parameter is required.
    shared_ptr<string> associatedResourceType_ {};
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
