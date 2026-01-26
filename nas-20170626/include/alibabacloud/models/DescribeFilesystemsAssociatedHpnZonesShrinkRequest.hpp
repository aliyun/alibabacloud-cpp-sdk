// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSASSOCIATEDHPNZONESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSASSOCIATEDHPNZONESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesystemsAssociatedHpnZonesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesystemsAssociatedHpnZonesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filesystems, filesystemsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesystemsAssociatedHpnZonesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filesystems, filesystemsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeFilesystemsAssociatedHpnZonesShrinkRequest() = default ;
    DescribeFilesystemsAssociatedHpnZonesShrinkRequest(const DescribeFilesystemsAssociatedHpnZonesShrinkRequest &) = default ;
    DescribeFilesystemsAssociatedHpnZonesShrinkRequest(DescribeFilesystemsAssociatedHpnZonesShrinkRequest &&) = default ;
    DescribeFilesystemsAssociatedHpnZonesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesystemsAssociatedHpnZonesShrinkRequest() = default ;
    DescribeFilesystemsAssociatedHpnZonesShrinkRequest& operator=(const DescribeFilesystemsAssociatedHpnZonesShrinkRequest &) = default ;
    DescribeFilesystemsAssociatedHpnZonesShrinkRequest& operator=(DescribeFilesystemsAssociatedHpnZonesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filesystemsShrink_ == nullptr
        && this->regionId_ == nullptr; };
    // filesystemsShrink Field Functions 
    bool hasFilesystemsShrink() const { return this->filesystemsShrink_ != nullptr;};
    void deleteFilesystemsShrink() { this->filesystemsShrink_ = nullptr;};
    inline string getFilesystemsShrink() const { DARABONBA_PTR_GET_DEFAULT(filesystemsShrink_, "") };
    inline DescribeFilesystemsAssociatedHpnZonesShrinkRequest& setFilesystemsShrink(string filesystemsShrink) { DARABONBA_PTR_SET_VALUE(filesystemsShrink_, filesystemsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeFilesystemsAssociatedHpnZonesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> filesystemsShrink_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
