// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCPFSACCESSPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCPFSACCESSPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyCpfsAccessPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCpfsAccessPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCpfsAccessPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyCpfsAccessPointRequest() = default ;
    ModifyCpfsAccessPointRequest(const ModifyCpfsAccessPointRequest &) = default ;
    ModifyCpfsAccessPointRequest(ModifyCpfsAccessPointRequest &&) = default ;
    ModifyCpfsAccessPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCpfsAccessPointRequest() = default ;
    ModifyCpfsAccessPointRequest& operator=(const ModifyCpfsAccessPointRequest &) = default ;
    ModifyCpfsAccessPointRequest& operator=(ModifyCpfsAccessPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->description_ == nullptr && this->fileSystemId_ == nullptr && this->regionId_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline ModifyCpfsAccessPointRequest& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyCpfsAccessPointRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyCpfsAccessPointRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCpfsAccessPointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> accessPointId_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
