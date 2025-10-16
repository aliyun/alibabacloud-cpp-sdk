// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETNASDEFAULTMOUNTTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETNASDEFAULTMOUNTTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ResetNASDefaultMountTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetNASDefaultMountTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetNASDefaultMountTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ResetNASDefaultMountTargetRequest() = default ;
    ResetNASDefaultMountTargetRequest(const ResetNASDefaultMountTargetRequest &) = default ;
    ResetNASDefaultMountTargetRequest(ResetNASDefaultMountTargetRequest &&) = default ;
    ResetNASDefaultMountTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetNASDefaultMountTargetRequest() = default ;
    ResetNASDefaultMountTargetRequest& operator=(const ResetNASDefaultMountTargetRequest &) = default ;
    ResetNASDefaultMountTargetRequest& operator=(ResetNASDefaultMountTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->regionId_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ResetNASDefaultMountTargetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetNASDefaultMountTargetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the NAS file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
