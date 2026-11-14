// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEDISTRIBUTEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEDISTRIBUTEINFORESPONSEBODY_HPP_
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
  class GetImageDistributeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageDistributeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageDistributeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetImageDistributeInfoResponseBody() = default ;
    GetImageDistributeInfoResponseBody(const GetImageDistributeInfoResponseBody &) = default ;
    GetImageDistributeInfoResponseBody(GetImageDistributeInfoResponseBody &&) = default ;
    GetImageDistributeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageDistributeInfoResponseBody() = default ;
    GetImageDistributeInfoResponseBody& operator=(const GetImageDistributeInfoResponseBody &) = default ;
    GetImageDistributeInfoResponseBody& operator=(GetImageDistributeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ImageRegionDistributeList, imageRegionDistributeList_);
        DARABONBA_PTR_TO_JSON(ImageRegionList, imageRegionList_);
        DARABONBA_PTR_TO_JSON(ImageSource, imageSource_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageRegionDistributeList, imageRegionDistributeList_);
        DARABONBA_PTR_FROM_JSON(ImageRegionList, imageRegionList_);
        DARABONBA_PTR_FROM_JSON(ImageSource, imageSource_);
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
      class ImageRegionDistributeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageRegionDistributeList& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(EcsImageId, ecsImageId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UnitImageId, unitImageId_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, ImageRegionDistributeList& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(EcsImageId, ecsImageId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UnitImageId, unitImageId_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        ImageRegionDistributeList() = default ;
        ImageRegionDistributeList(const ImageRegionDistributeList &) = default ;
        ImageRegionDistributeList(ImageRegionDistributeList &&) = default ;
        ImageRegionDistributeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageRegionDistributeList() = default ;
        ImageRegionDistributeList& operator=(const ImageRegionDistributeList &) = default ;
        ImageRegionDistributeList& operator=(ImageRegionDistributeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->ecsImageId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->imageId_ == nullptr && this->message_ == nullptr
        && this->progress_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->unitImageId_ == nullptr && this->versionId_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline ImageRegionDistributeList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // ecsImageId Field Functions 
        bool hasEcsImageId() const { return this->ecsImageId_ != nullptr;};
        void deleteEcsImageId() { this->ecsImageId_ = nullptr;};
        inline string getEcsImageId() const { DARABONBA_PTR_GET_DEFAULT(ecsImageId_, "") };
        inline ImageRegionDistributeList& setEcsImageId(string ecsImageId) { DARABONBA_PTR_SET_VALUE(ecsImageId_, ecsImageId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ImageRegionDistributeList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ImageRegionDistributeList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline ImageRegionDistributeList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline ImageRegionDistributeList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline ImageRegionDistributeList& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ImageRegionDistributeList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ImageRegionDistributeList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // unitImageId Field Functions 
        bool hasUnitImageId() const { return this->unitImageId_ != nullptr;};
        void deleteUnitImageId() { this->unitImageId_ = nullptr;};
        inline string getUnitImageId() const { DARABONBA_PTR_GET_DEFAULT(unitImageId_, "") };
        inline ImageRegionDistributeList& setUnitImageId(string unitImageId) { DARABONBA_PTR_SET_VALUE(unitImageId_, unitImageId) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline ImageRegionDistributeList& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        // The ID of the Alibaba Cloud account to which the image belongs. The account ID for a system image is 0.
        shared_ptr<int64_t> aliUid_ {};
        // The ID of the ECS image corresponding to the region.
        shared_ptr<string> ecsImageId_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The last update time.
        shared_ptr<string> gmtModified_ {};
        // The image ID.
        shared_ptr<string> imageId_ {};
        // The processing information reported by the region distribution task.
        shared_ptr<string> message_ {};
        // The distribution progress of the image in the region, expressed as a percentage.
        shared_ptr<string> progress_ {};
        // The ID of the region to which the image is distributed.
        shared_ptr<string> regionId_ {};
        // The region distribution status.
        shared_ptr<string> status_ {};
        // The logical ID of the image on the unit side, which can be different from the central image ID.
        shared_ptr<string> unitImageId_ {};
        // The image version ID.
        shared_ptr<string> versionId_ {};
      };

      virtual bool empty() const override { return this->imageRegionDistributeList_ == nullptr
        && this->imageRegionList_ == nullptr && this->imageSource_ == nullptr; };
      // imageRegionDistributeList Field Functions 
      bool hasImageRegionDistributeList() const { return this->imageRegionDistributeList_ != nullptr;};
      void deleteImageRegionDistributeList() { this->imageRegionDistributeList_ = nullptr;};
      inline const vector<Data::ImageRegionDistributeList> & getImageRegionDistributeList() const { DARABONBA_PTR_GET_CONST(imageRegionDistributeList_, vector<Data::ImageRegionDistributeList>) };
      inline vector<Data::ImageRegionDistributeList> getImageRegionDistributeList() { DARABONBA_PTR_GET(imageRegionDistributeList_, vector<Data::ImageRegionDistributeList>) };
      inline Data& setImageRegionDistributeList(const vector<Data::ImageRegionDistributeList> & imageRegionDistributeList) { DARABONBA_PTR_SET_VALUE(imageRegionDistributeList_, imageRegionDistributeList) };
      inline Data& setImageRegionDistributeList(vector<Data::ImageRegionDistributeList> && imageRegionDistributeList) { DARABONBA_PTR_SET_RVALUE(imageRegionDistributeList_, imageRegionDistributeList) };


      // imageRegionList Field Functions 
      bool hasImageRegionList() const { return this->imageRegionList_ != nullptr;};
      void deleteImageRegionList() { this->imageRegionList_ = nullptr;};
      inline const vector<string> & getImageRegionList() const { DARABONBA_PTR_GET_CONST(imageRegionList_, vector<string>) };
      inline vector<string> getImageRegionList() { DARABONBA_PTR_GET(imageRegionList_, vector<string>) };
      inline Data& setImageRegionList(const vector<string> & imageRegionList) { DARABONBA_PTR_SET_VALUE(imageRegionList_, imageRegionList) };
      inline Data& setImageRegionList(vector<string> && imageRegionList) { DARABONBA_PTR_SET_RVALUE(imageRegionList_, imageRegionList) };


      // imageSource Field Functions 
      bool hasImageSource() const { return this->imageSource_ != nullptr;};
      void deleteImageSource() { this->imageSource_ = nullptr;};
      inline string getImageSource() const { DARABONBA_PTR_GET_DEFAULT(imageSource_, "") };
      inline Data& setImageSource(string imageSource) { DARABONBA_PTR_SET_VALUE(imageSource_, imageSource) };


    protected:
      // The list of region distribution information for the image version.
      shared_ptr<vector<Data::ImageRegionDistributeList>> imageRegionDistributeList_ {};
      // The list of region IDs supported by the image.
      shared_ptr<vector<string>> imageRegionList_ {};
      // The source of the image. For example, center indicates the central image service.
      shared_ptr<string> imageSource_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetImageDistributeInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetImageDistributeInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetImageDistributeInfoResponseBody::Data) };
    inline GetImageDistributeInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetImageDistributeInfoResponseBody::Data) };
    inline GetImageDistributeInfoResponseBody& setData(const GetImageDistributeInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetImageDistributeInfoResponseBody& setData(GetImageDistributeInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetImageDistributeInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageDistributeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetImageDistributeInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The return code of the API. A value of 200 indicates success. If the call fails, the corresponding error code is returned.
    shared_ptr<string> code_ {};
    // The image information returned by the query.
    shared_ptr<GetImageDistributeInfoResponseBody::Data> data_ {};
    // The processing message returned by the API.
    shared_ptr<string> message_ {};
    // The request ID, which is used to locate and troubleshoot the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call is successful. Valid values: true: Successful. false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
