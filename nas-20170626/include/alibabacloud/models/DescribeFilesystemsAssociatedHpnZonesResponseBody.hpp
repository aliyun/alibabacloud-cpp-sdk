// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSASSOCIATEDHPNZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSASSOCIATEDHPNZONESRESPONSEBODY_HPP_
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
  class DescribeFilesystemsAssociatedHpnZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesystemsAssociatedHpnZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Filesystems, filesystems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesystemsAssociatedHpnZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Filesystems, filesystems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFilesystemsAssociatedHpnZonesResponseBody() = default ;
    DescribeFilesystemsAssociatedHpnZonesResponseBody(const DescribeFilesystemsAssociatedHpnZonesResponseBody &) = default ;
    DescribeFilesystemsAssociatedHpnZonesResponseBody(DescribeFilesystemsAssociatedHpnZonesResponseBody &&) = default ;
    DescribeFilesystemsAssociatedHpnZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesystemsAssociatedHpnZonesResponseBody() = default ;
    DescribeFilesystemsAssociatedHpnZonesResponseBody& operator=(const DescribeFilesystemsAssociatedHpnZonesResponseBody &) = default ;
    DescribeFilesystemsAssociatedHpnZonesResponseBody& operator=(DescribeFilesystemsAssociatedHpnZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filesystems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filesystems& obj) { 
        DARABONBA_PTR_TO_JSON(AssociatedHpnZones, associatedHpnZones_);
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Filesystems& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociatedHpnZones, associatedHpnZones_);
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
      virtual bool empty() const override { return this->associatedHpnZones_ == nullptr
        && this->fileSystemId_ == nullptr && this->zoneId_ == nullptr; };
      // associatedHpnZones Field Functions 
      bool hasAssociatedHpnZones() const { return this->associatedHpnZones_ != nullptr;};
      void deleteAssociatedHpnZones() { this->associatedHpnZones_ = nullptr;};
      inline const vector<string> & getAssociatedHpnZones() const { DARABONBA_PTR_GET_CONST(associatedHpnZones_, vector<string>) };
      inline vector<string> getAssociatedHpnZones() { DARABONBA_PTR_GET(associatedHpnZones_, vector<string>) };
      inline Filesystems& setAssociatedHpnZones(const vector<string> & associatedHpnZones) { DARABONBA_PTR_SET_VALUE(associatedHpnZones_, associatedHpnZones) };
      inline Filesystems& setAssociatedHpnZones(vector<string> && associatedHpnZones) { DARABONBA_PTR_SET_RVALUE(associatedHpnZones_, associatedHpnZones) };


      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline Filesystems& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Filesystems& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<vector<string>> associatedHpnZones_ {};
      shared_ptr<string> fileSystemId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->filesystems_ == nullptr
        && this->requestId_ == nullptr; };
    // filesystems Field Functions 
    bool hasFilesystems() const { return this->filesystems_ != nullptr;};
    void deleteFilesystems() { this->filesystems_ = nullptr;};
    inline const vector<DescribeFilesystemsAssociatedHpnZonesResponseBody::Filesystems> & getFilesystems() const { DARABONBA_PTR_GET_CONST(filesystems_, vector<DescribeFilesystemsAssociatedHpnZonesResponseBody::Filesystems>) };
    inline vector<DescribeFilesystemsAssociatedHpnZonesResponseBody::Filesystems> getFilesystems() { DARABONBA_PTR_GET(filesystems_, vector<DescribeFilesystemsAssociatedHpnZonesResponseBody::Filesystems>) };
    inline DescribeFilesystemsAssociatedHpnZonesResponseBody& setFilesystems(const vector<DescribeFilesystemsAssociatedHpnZonesResponseBody::Filesystems> & filesystems) { DARABONBA_PTR_SET_VALUE(filesystems_, filesystems) };
    inline DescribeFilesystemsAssociatedHpnZonesResponseBody& setFilesystems(vector<DescribeFilesystemsAssociatedHpnZonesResponseBody::Filesystems> && filesystems) { DARABONBA_PTR_SET_RVALUE(filesystems_, filesystems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFilesystemsAssociatedHpnZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeFilesystemsAssociatedHpnZonesResponseBody::Filesystems>> filesystems_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
