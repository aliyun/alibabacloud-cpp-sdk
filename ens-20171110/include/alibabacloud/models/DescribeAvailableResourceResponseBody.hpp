// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportResources, supportResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportResources, supportResources_);
    };
    DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody(DescribeAvailableResourceResponseBody &&) = default ;
    DescribeAvailableResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody& operator=(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody& operator=(DescribeAvailableResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SupportResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportResources& obj) { 
        DARABONBA_PTR_TO_JSON(SupportResource, supportResource_);
      };
      friend void from_json(const Darabonba::Json& j, SupportResources& obj) { 
        DARABONBA_PTR_FROM_JSON(SupportResource, supportResource_);
      };
      SupportResources() = default ;
      SupportResources(const SupportResources &) = default ;
      SupportResources(SupportResources &&) = default ;
      SupportResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportResources() = default ;
      SupportResources& operator=(const SupportResources &) = default ;
      SupportResources& operator=(SupportResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportResource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportResource& obj) { 
          DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
          DARABONBA_PTR_TO_JSON(SupportResourcesCount, supportResourcesCount_);
          DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
        };
        friend void from_json(const Darabonba::Json& j, SupportResource& obj) { 
          DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
          DARABONBA_PTR_FROM_JSON(SupportResourcesCount, supportResourcesCount_);
          DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
        };
        SupportResource() = default ;
        SupportResource(const SupportResource &) = default ;
        SupportResource(SupportResource &&) = default ;
        SupportResource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportResource() = default ;
        SupportResource& operator=(const SupportResource &) = default ;
        SupportResource& operator=(SupportResource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataDiskSize_ == nullptr
        && this->ensRegionId_ == nullptr && this->instanceSpec_ == nullptr && this->supportResourcesCount_ == nullptr && this->systemDiskSize_ == nullptr; };
        // dataDiskSize Field Functions 
        bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
        void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
        inline string getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, "") };
        inline SupportResource& setDataDiskSize(string dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline SupportResource& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // instanceSpec Field Functions 
        bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
        void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
        inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
        inline SupportResource& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


        // supportResourcesCount Field Functions 
        bool hasSupportResourcesCount() const { return this->supportResourcesCount_ != nullptr;};
        void deleteSupportResourcesCount() { this->supportResourcesCount_ = nullptr;};
        inline string getSupportResourcesCount() const { DARABONBA_PTR_GET_DEFAULT(supportResourcesCount_, "") };
        inline SupportResource& setSupportResourcesCount(string supportResourcesCount) { DARABONBA_PTR_SET_VALUE(supportResourcesCount_, supportResourcesCount) };


        // systemDiskSize Field Functions 
        bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
        void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
        inline string getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, "") };
        inline SupportResource& setSystemDiskSize(string systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      protected:
        // The size of the data disk. Unit: GB.
        shared_ptr<string> dataDiskSize_ {};
        // The ID of the edge node.
        shared_ptr<string> ensRegionId_ {};
        // The specifications of the resource plan.
        shared_ptr<string> instanceSpec_ {};
        // The number of resources that you can purchase.
        shared_ptr<string> supportResourcesCount_ {};
        // The size of the system disk. Unit: GiB.
        shared_ptr<string> systemDiskSize_ {};
      };

      virtual bool empty() const override { return this->supportResource_ == nullptr; };
      // supportResource Field Functions 
      bool hasSupportResource() const { return this->supportResource_ != nullptr;};
      void deleteSupportResource() { this->supportResource_ = nullptr;};
      inline const vector<SupportResources::SupportResource> & getSupportResource() const { DARABONBA_PTR_GET_CONST(supportResource_, vector<SupportResources::SupportResource>) };
      inline vector<SupportResources::SupportResource> getSupportResource() { DARABONBA_PTR_GET(supportResource_, vector<SupportResources::SupportResource>) };
      inline SupportResources& setSupportResource(const vector<SupportResources::SupportResource> & supportResource) { DARABONBA_PTR_SET_VALUE(supportResource_, supportResource) };
      inline SupportResources& setSupportResource(vector<SupportResources::SupportResource> && supportResource) { DARABONBA_PTR_SET_RVALUE(supportResource_, supportResource) };


    protected:
      shared_ptr<vector<SupportResources::SupportResource>> supportResource_ {};
    };

    class Images : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Images& obj) { 
        DARABONBA_PTR_TO_JSON(Image, image_);
      };
      friend void from_json(const Darabonba::Json& j, Images& obj) { 
        DARABONBA_PTR_FROM_JSON(Image, image_);
      };
      Images() = default ;
      Images(const Images &) = default ;
      Images(Images &&) = default ;
      Images(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Images() = default ;
      Images& operator=(const Images &) = default ;
      Images& operator=(Images &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Image : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Image& obj) { 
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        };
        friend void from_json(const Darabonba::Json& j, Image& obj) { 
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        };
        Image() = default ;
        Image(const Image &) = default ;
        Image(Image &&) = default ;
        Image(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Image() = default ;
        Image& operator=(const Image &) = default ;
        Image& operator=(Image &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->imageId_ == nullptr
        && this->imageName_ == nullptr; };
        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline Image& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // imageName Field Functions 
        bool hasImageName() const { return this->imageName_ != nullptr;};
        void deleteImageName() { this->imageName_ = nullptr;};
        inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
        inline Image& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      protected:
        // The ID of the image.
        shared_ptr<string> imageId_ {};
        // The name of the image.
        shared_ptr<string> imageName_ {};
      };

      virtual bool empty() const override { return this->image_ == nullptr; };
      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline const vector<Images::Image> & getImage() const { DARABONBA_PTR_GET_CONST(image_, vector<Images::Image>) };
      inline vector<Images::Image> getImage() { DARABONBA_PTR_GET(image_, vector<Images::Image>) };
      inline Images& setImage(const vector<Images::Image> & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
      inline Images& setImage(vector<Images::Image> && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    protected:
      shared_ptr<vector<Images::Image>> image_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->images_ == nullptr && this->requestId_ == nullptr && this->supportResources_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeAvailableResourceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const DescribeAvailableResourceResponseBody::Images & getImages() const { DARABONBA_PTR_GET_CONST(images_, DescribeAvailableResourceResponseBody::Images) };
    inline DescribeAvailableResourceResponseBody::Images getImages() { DARABONBA_PTR_GET(images_, DescribeAvailableResourceResponseBody::Images) };
    inline DescribeAvailableResourceResponseBody& setImages(const DescribeAvailableResourceResponseBody::Images & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline DescribeAvailableResourceResponseBody& setImages(DescribeAvailableResourceResponseBody::Images && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportResources Field Functions 
    bool hasSupportResources() const { return this->supportResources_ != nullptr;};
    void deleteSupportResources() { this->supportResources_ = nullptr;};
    inline const DescribeAvailableResourceResponseBody::SupportResources & getSupportResources() const { DARABONBA_PTR_GET_CONST(supportResources_, DescribeAvailableResourceResponseBody::SupportResources) };
    inline DescribeAvailableResourceResponseBody::SupportResources getSupportResources() { DARABONBA_PTR_GET(supportResources_, DescribeAvailableResourceResponseBody::SupportResources) };
    inline DescribeAvailableResourceResponseBody& setSupportResources(const DescribeAvailableResourceResponseBody::SupportResources & supportResources) { DARABONBA_PTR_SET_VALUE(supportResources_, supportResources) };
    inline DescribeAvailableResourceResponseBody& setSupportResources(DescribeAvailableResourceResponseBody::SupportResources && supportResources) { DARABONBA_PTR_SET_RVALUE(supportResources_, supportResources) };


  protected:
    // The returned service code. 0 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The details of the images.
    shared_ptr<DescribeAvailableResourceResponseBody::Images> images_ {};
    // The ID of the request. This is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The specifications of resources that you can purchase.
    shared_ptr<DescribeAvailableResourceResponseBody::SupportResources> supportResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
