// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEBASEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEBASEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListImageBaseInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageBaseInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageBaseInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListImageBaseInfoResponseBody() = default ;
    ListImageBaseInfoResponseBody(const ListImageBaseInfoResponseBody &) = default ;
    ListImageBaseInfoResponseBody(ListImageBaseInfoResponseBody &&) = default ;
    ListImageBaseInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageBaseInfoResponseBody() = default ;
    ListImageBaseInfoResponseBody& operator=(const ListImageBaseInfoResponseBody &) = default ;
    ListImageBaseInfoResponseBody& operator=(ListImageBaseInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Distro, distro_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ImageType, imageType_);
        DARABONBA_PTR_TO_JSON(LatestVersionId, latestVersionId_);
        DARABONBA_PTR_TO_JSON(OnlineVersionId, onlineVersionId_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(PackageType, packageType_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Distro, distro_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
        DARABONBA_PTR_FROM_JSON(LatestVersionId, latestVersionId_);
        DARABONBA_PTR_FROM_JSON(OnlineVersionId, onlineVersionId_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->bizType_ == nullptr && this->description_ == nullptr && this->distro_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->imageId_ == nullptr && this->imageName_ == nullptr && this->imageType_ == nullptr && this->latestVersionId_ == nullptr && this->onlineVersionId_ == nullptr
        && this->osType_ == nullptr && this->packageType_ == nullptr && this->productType_ == nullptr && this->protocolType_ == nullptr && this->status_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
      inline Data& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // distro Field Functions 
      bool hasDistro() const { return this->distro_ != nullptr;};
      void deleteDistro() { this->distro_ = nullptr;};
      inline string getDistro() const { DARABONBA_PTR_GET_DEFAULT(distro_, "") };
      inline Data& setDistro(string distro) { DARABONBA_PTR_SET_VALUE(distro_, distro) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Data& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline Data& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // imageType Field Functions 
      bool hasImageType() const { return this->imageType_ != nullptr;};
      void deleteImageType() { this->imageType_ = nullptr;};
      inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
      inline Data& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


      // latestVersionId Field Functions 
      bool hasLatestVersionId() const { return this->latestVersionId_ != nullptr;};
      void deleteLatestVersionId() { this->latestVersionId_ = nullptr;};
      inline string getLatestVersionId() const { DARABONBA_PTR_GET_DEFAULT(latestVersionId_, "") };
      inline Data& setLatestVersionId(string latestVersionId) { DARABONBA_PTR_SET_VALUE(latestVersionId_, latestVersionId) };


      // onlineVersionId Field Functions 
      bool hasOnlineVersionId() const { return this->onlineVersionId_ != nullptr;};
      void deleteOnlineVersionId() { this->onlineVersionId_ = nullptr;};
      inline string getOnlineVersionId() const { DARABONBA_PTR_GET_DEFAULT(onlineVersionId_, "") };
      inline Data& setOnlineVersionId(string onlineVersionId) { DARABONBA_PTR_SET_VALUE(onlineVersionId_, onlineVersionId) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Data& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // packageType Field Functions 
      bool hasPackageType() const { return this->packageType_ != nullptr;};
      void deletePackageType() { this->packageType_ = nullptr;};
      inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
      inline Data& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Data& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Data& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the Alibaba Cloud account to which the image belongs. A value of 0 indicates a system image.
      shared_ptr<int64_t> aliUid_ {};
      // The business line code of the image, which corresponds to the BizType request parameter.
      shared_ptr<int32_t> bizType_ {};
      // The description of the image.
      shared_ptr<string> description_ {};
      // The distribution name of the image operating system.
      shared_ptr<string> distro_ {};
      // The time when the image was created. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> gmtCreate_ {};
      // The time when the image was last updated. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> gmtModified_ {};
      // The image ID. The ID of a custom image is generated by the system.
      shared_ptr<string> imageId_ {};
      // The image name.
      shared_ptr<string> imageName_ {};
      // The image type. A value of System indicates a system image, User indicates a custom image, Shared indicates a shared image, and Community indicates a community image.
      shared_ptr<string> imageType_ {};
      // The ID of the latest sub-version of the image.
      shared_ptr<string> latestVersionId_ {};
      // The ID of the sub-version currently used to read the main image information for this image.
      shared_ptr<string> onlineVersionId_ {};
      // The image operating system type. A value of Windows indicates the Windows operating system, Linux indicates the Linux operating system, Android indicates the Android operating system, and Unknown indicates an unknown operating system.
      shared_ptr<string> osType_ {};
      // The image package type. A value of Ecs indicates an ECS image, Vhd indicates a VHD image, Container indicates a container image, Ecs_Container indicates an ECS and container composite image, and K8s_Node indicates a Kubernetes node image.
      shared_ptr<string> packageType_ {};
      // The product type to which the image belongs. Examples: CloudDesktop (WUYING Workspace), CloudApp (WUYING Cloud App), and WuyingServer (WUYING Workstation).
      shared_ptr<string> productType_ {};
      // The image protocol type. A value of ASP indicates the Alibaba Cloud self-developed ASP protocol, and HDX indicates the HDX protocol.
      shared_ptr<string> protocolType_ {};
      // The image status. A value of INIT indicates initialization, CREATING indicates creating, AVAILABLE indicates available, and CREATE_FAILED indicates creation failed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListImageBaseInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListImageBaseInfoResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListImageBaseInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListImageBaseInfoResponseBody::Data>) };
    inline vector<ListImageBaseInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListImageBaseInfoResponseBody::Data>) };
    inline ListImageBaseInfoResponseBody& setData(const vector<ListImageBaseInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListImageBaseInfoResponseBody& setData(vector<ListImageBaseInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListImageBaseInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListImageBaseInfoResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListImageBaseInfoResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageBaseInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListImageBaseInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result code of the request.
    shared_ptr<string> code_ {};
    // The total number of images that meet the query conditions.
    shared_ptr<int32_t> count_ {};
    // The list of basic image information on the current page.
    shared_ptr<vector<ListImageBaseInfoResponseBody::Data>> data_ {};
    // The result message of the request.
    shared_ptr<string> message_ {};
    // The page number returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID, which is used to locate and troubleshoot the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. A value of true indicates success, and a value of false indicates failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
