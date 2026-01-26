// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSASSOCIATEDHPNZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSASSOCIATEDHPNZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesystemsAssociatedHpnZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesystemsAssociatedHpnZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filesystems, filesystems_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesystemsAssociatedHpnZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filesystems, filesystems_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeFilesystemsAssociatedHpnZonesRequest() = default ;
    DescribeFilesystemsAssociatedHpnZonesRequest(const DescribeFilesystemsAssociatedHpnZonesRequest &) = default ;
    DescribeFilesystemsAssociatedHpnZonesRequest(DescribeFilesystemsAssociatedHpnZonesRequest &&) = default ;
    DescribeFilesystemsAssociatedHpnZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesystemsAssociatedHpnZonesRequest() = default ;
    DescribeFilesystemsAssociatedHpnZonesRequest& operator=(const DescribeFilesystemsAssociatedHpnZonesRequest &) = default ;
    DescribeFilesystemsAssociatedHpnZonesRequest& operator=(DescribeFilesystemsAssociatedHpnZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filesystems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filesystems& obj) { 
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      };
      friend void from_json(const Darabonba::Json& j, Filesystems& obj) { 
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      };
      Filesystems() = default ;
      Filesystems(const Filesystems &) = default ;
      Filesystems(Filesystems &&) = default ;
      Filesystems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filesystems() = default ;
      Filesystems& operator=(const Filesystems &) = default ;
      Filesystems& operator=(Filesystems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileSystemId_ == nullptr; };
      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline Filesystems& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    protected:
      shared_ptr<string> fileSystemId_ {};
    };

    virtual bool empty() const override { return this->filesystems_ == nullptr
        && this->regionId_ == nullptr; };
    // filesystems Field Functions 
    bool hasFilesystems() const { return this->filesystems_ != nullptr;};
    void deleteFilesystems() { this->filesystems_ = nullptr;};
    inline const vector<DescribeFilesystemsAssociatedHpnZonesRequest::Filesystems> & getFilesystems() const { DARABONBA_PTR_GET_CONST(filesystems_, vector<DescribeFilesystemsAssociatedHpnZonesRequest::Filesystems>) };
    inline vector<DescribeFilesystemsAssociatedHpnZonesRequest::Filesystems> getFilesystems() { DARABONBA_PTR_GET(filesystems_, vector<DescribeFilesystemsAssociatedHpnZonesRequest::Filesystems>) };
    inline DescribeFilesystemsAssociatedHpnZonesRequest& setFilesystems(const vector<DescribeFilesystemsAssociatedHpnZonesRequest::Filesystems> & filesystems) { DARABONBA_PTR_SET_VALUE(filesystems_, filesystems) };
    inline DescribeFilesystemsAssociatedHpnZonesRequest& setFilesystems(vector<DescribeFilesystemsAssociatedHpnZonesRequest::Filesystems> && filesystems) { DARABONBA_PTR_SET_RVALUE(filesystems_, filesystems) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeFilesystemsAssociatedHpnZonesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<vector<DescribeFilesystemsAssociatedHpnZonesRequest::Filesystems>> filesystems_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
