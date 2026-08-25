// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOFTWARELIBVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESOFTWARELIBVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateSoftwarelibVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSoftwarelibVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PublisherType, publisherType_);
      DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
      DARABONBA_PTR_TO_JSON(SoftwareName, softwareName_);
      DARABONBA_PTR_TO_JSON(SoftwarePkgName, softwarePkgName_);
      DARABONBA_PTR_TO_JSON(SoftwarePkgSize, softwarePkgSize_);
      DARABONBA_PTR_TO_JSON(SoftwareUrl, softwareUrl_);
      DARABONBA_PTR_TO_JSON(SoftwareVersion, softwareVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSoftwarelibVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PublisherType, publisherType_);
      DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
      DARABONBA_PTR_FROM_JSON(SoftwareName, softwareName_);
      DARABONBA_PTR_FROM_JSON(SoftwarePkgName, softwarePkgName_);
      DARABONBA_PTR_FROM_JSON(SoftwarePkgSize, softwarePkgSize_);
      DARABONBA_PTR_FROM_JSON(SoftwareUrl, softwareUrl_);
      DARABONBA_PTR_FROM_JSON(SoftwareVersion, softwareVersion_);
    };
    CreateSoftwarelibVersionRequest() = default ;
    CreateSoftwarelibVersionRequest(const CreateSoftwarelibVersionRequest &) = default ;
    CreateSoftwarelibVersionRequest(CreateSoftwarelibVersionRequest &&) = default ;
    CreateSoftwarelibVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSoftwarelibVersionRequest() = default ;
    CreateSoftwarelibVersionRequest& operator=(const CreateSoftwarelibVersionRequest &) = default ;
    CreateSoftwarelibVersionRequest& operator=(CreateSoftwarelibVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->md5_ == nullptr
        && this->os_ == nullptr && this->publisherType_ == nullptr && this->softwareId_ == nullptr && this->softwareName_ == nullptr && this->softwarePkgName_ == nullptr
        && this->softwarePkgSize_ == nullptr && this->softwareUrl_ == nullptr && this->softwareVersion_ == nullptr; };
    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline CreateSoftwarelibVersionRequest& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline CreateSoftwarelibVersionRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // publisherType Field Functions 
    bool hasPublisherType() const { return this->publisherType_ != nullptr;};
    void deletePublisherType() { this->publisherType_ = nullptr;};
    inline string getPublisherType() const { DARABONBA_PTR_GET_DEFAULT(publisherType_, "") };
    inline CreateSoftwarelibVersionRequest& setPublisherType(string publisherType) { DARABONBA_PTR_SET_VALUE(publisherType_, publisherType) };


    // softwareId Field Functions 
    bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
    void deleteSoftwareId() { this->softwareId_ = nullptr;};
    inline string getSoftwareId() const { DARABONBA_PTR_GET_DEFAULT(softwareId_, "") };
    inline CreateSoftwarelibVersionRequest& setSoftwareId(string softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };


    // softwareName Field Functions 
    bool hasSoftwareName() const { return this->softwareName_ != nullptr;};
    void deleteSoftwareName() { this->softwareName_ = nullptr;};
    inline string getSoftwareName() const { DARABONBA_PTR_GET_DEFAULT(softwareName_, "") };
    inline CreateSoftwarelibVersionRequest& setSoftwareName(string softwareName) { DARABONBA_PTR_SET_VALUE(softwareName_, softwareName) };


    // softwarePkgName Field Functions 
    bool hasSoftwarePkgName() const { return this->softwarePkgName_ != nullptr;};
    void deleteSoftwarePkgName() { this->softwarePkgName_ = nullptr;};
    inline string getSoftwarePkgName() const { DARABONBA_PTR_GET_DEFAULT(softwarePkgName_, "") };
    inline CreateSoftwarelibVersionRequest& setSoftwarePkgName(string softwarePkgName) { DARABONBA_PTR_SET_VALUE(softwarePkgName_, softwarePkgName) };


    // softwarePkgSize Field Functions 
    bool hasSoftwarePkgSize() const { return this->softwarePkgSize_ != nullptr;};
    void deleteSoftwarePkgSize() { this->softwarePkgSize_ = nullptr;};
    inline int64_t getSoftwarePkgSize() const { DARABONBA_PTR_GET_DEFAULT(softwarePkgSize_, 0L) };
    inline CreateSoftwarelibVersionRequest& setSoftwarePkgSize(int64_t softwarePkgSize) { DARABONBA_PTR_SET_VALUE(softwarePkgSize_, softwarePkgSize) };


    // softwareUrl Field Functions 
    bool hasSoftwareUrl() const { return this->softwareUrl_ != nullptr;};
    void deleteSoftwareUrl() { this->softwareUrl_ = nullptr;};
    inline string getSoftwareUrl() const { DARABONBA_PTR_GET_DEFAULT(softwareUrl_, "") };
    inline CreateSoftwarelibVersionRequest& setSoftwareUrl(string softwareUrl) { DARABONBA_PTR_SET_VALUE(softwareUrl_, softwareUrl) };


    // softwareVersion Field Functions 
    bool hasSoftwareVersion() const { return this->softwareVersion_ != nullptr;};
    void deleteSoftwareVersion() { this->softwareVersion_ = nullptr;};
    inline string getSoftwareVersion() const { DARABONBA_PTR_GET_DEFAULT(softwareVersion_, "") };
    inline CreateSoftwarelibVersionRequest& setSoftwareVersion(string softwareVersion) { DARABONBA_PTR_SET_VALUE(softwareVersion_, softwareVersion) };


  protected:
    // The MD5 value of the software package. The value can be up to 64 characters in length.
    shared_ptr<string> md5_ {};
    // The operating system to which the software package applies. Valid values:
    // - **Windows**: Windows.
    // - **Mac(Apple)**: macOS with Apple silicon.
    // - **Mac(Intel)**: macOS with Intel processors.
    shared_ptr<string> os_ {};
    // The software publisher type. Valid values:
    // - **local**: local upload.
    // - **thirdparty**: third-party link.
    shared_ptr<string> publisherType_ {};
    // The software ID in the software library. The value can be up to 64 characters in length. You can call [ListSoftwarelibSoftware](~~ListSoftwarelibSoftware~~) to obtain the value.
    // 
    // This parameter is required.
    shared_ptr<string> softwareId_ {};
    // The software name. The value can be up to 128 characters in length.
    shared_ptr<string> softwareName_ {};
    // The file name of the software package. The value can be up to 128 characters in length.
    shared_ptr<string> softwarePkgName_ {};
    // The size of the software package.
    shared_ptr<int64_t> softwarePkgSize_ {};
    // The download URL of the software package. If the publisher type is local, the value is the relative path of the software package in the OSS bucket. If the publisher type is thirdparty, the value is a third-party download URL.
    shared_ptr<string> softwareUrl_ {};
    // The software version number. The value can be up to 64 characters in length. The combination of operating system and version number must be unique within the same software. If a duplicate exists, a ResourceDuplicated error is returned.
    shared_ptr<string> softwareVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
