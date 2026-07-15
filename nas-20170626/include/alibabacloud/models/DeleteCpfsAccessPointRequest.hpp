// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECPFSACCESSPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECPFSACCESSPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DeleteCpfsAccessPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCpfsAccessPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCpfsAccessPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteCpfsAccessPointRequest() = default ;
    DeleteCpfsAccessPointRequest(const DeleteCpfsAccessPointRequest &) = default ;
    DeleteCpfsAccessPointRequest(DeleteCpfsAccessPointRequest &&) = default ;
    DeleteCpfsAccessPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCpfsAccessPointRequest() = default ;
    DeleteCpfsAccessPointRequest& operator=(const DeleteCpfsAccessPointRequest &) = default ;
    DeleteCpfsAccessPointRequest& operator=(DeleteCpfsAccessPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->fileSystemId_ == nullptr && this->regionId_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline DeleteCpfsAccessPointRequest& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DeleteCpfsAccessPointRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCpfsAccessPointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> accessPointId_ {};
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
