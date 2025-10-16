// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDRIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDRIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteDriveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDriveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DriveId, driveId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDriveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DriveId, driveId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteDriveRequest() = default ;
    DeleteDriveRequest(const DeleteDriveRequest &) = default ;
    DeleteDriveRequest(DeleteDriveRequest &&) = default ;
    DeleteDriveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDriveRequest() = default ;
    DeleteDriveRequest& operator=(const DeleteDriveRequest &) = default ;
    DeleteDriveRequest& operator=(DeleteDriveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->driveId_ == nullptr
        && return this->regionId_ == nullptr; };
    // driveId Field Functions 
    bool hasDriveId() const { return this->driveId_ != nullptr;};
    void deleteDriveId() { this->driveId_ = nullptr;};
    inline string driveId() const { DARABONBA_PTR_GET_DEFAULT(driveId_, "") };
    inline DeleteDriveRequest& setDriveId(string driveId) { DARABONBA_PTR_SET_VALUE(driveId_, driveId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDriveRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> driveId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
