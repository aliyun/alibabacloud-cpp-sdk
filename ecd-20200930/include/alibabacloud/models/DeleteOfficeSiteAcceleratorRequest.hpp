// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOFFICESITEACCELERATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOFFICESITEACCELERATORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteOfficeSiteAcceleratorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOfficeSiteAcceleratorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOfficeSiteAcceleratorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteOfficeSiteAcceleratorRequest() = default ;
    DeleteOfficeSiteAcceleratorRequest(const DeleteOfficeSiteAcceleratorRequest &) = default ;
    DeleteOfficeSiteAcceleratorRequest(DeleteOfficeSiteAcceleratorRequest &&) = default ;
    DeleteOfficeSiteAcceleratorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOfficeSiteAcceleratorRequest() = default ;
    DeleteOfficeSiteAcceleratorRequest& operator=(const DeleteOfficeSiteAcceleratorRequest &) = default ;
    DeleteOfficeSiteAcceleratorRequest& operator=(DeleteOfficeSiteAcceleratorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->officeSiteId_ == nullptr
        && this->regionId_ == nullptr; };
    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DeleteOfficeSiteAcceleratorRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteOfficeSiteAcceleratorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
