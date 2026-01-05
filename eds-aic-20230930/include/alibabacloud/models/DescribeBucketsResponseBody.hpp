// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUCKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUCKETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeBucketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBucketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBucketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBucketsResponseBody() = default ;
    DescribeBucketsResponseBody(const DescribeBucketsResponseBody &) = default ;
    DescribeBucketsResponseBody(DescribeBucketsResponseBody &&) = default ;
    DescribeBucketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBucketsResponseBody() = default ;
    DescribeBucketsResponseBody& operator=(const DescribeBucketsResponseBody &) = default ;
    DescribeBucketsResponseBody& operator=(DescribeBucketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(ExtranetEndpoint, extranetEndpoint_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(IntranetEndpoint, intranetEndpoint_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(OssObjectList, ossObjectList_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(ExtranetEndpoint, extranetEndpoint_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(IntranetEndpoint, intranetEndpoint_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(OssObjectList, ossObjectList_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
      class OssObjectList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssObjectList& obj) { 
          DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(ETag, ETag_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(RestoreInfo, restoreInfo_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, OssObjectList& obj) { 
          DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(ETag, ETag_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(RestoreInfo, restoreInfo_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        OssObjectList() = default ;
        OssObjectList(const OssObjectList &) = default ;
        OssObjectList(OssObjectList &&) = default ;
        OssObjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssObjectList() = default ;
        OssObjectList& operator=(const OssObjectList &) = default ;
        OssObjectList& operator=(OssObjectList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Owner : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Owner& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(Id, id_);
          };
          friend void from_json(const Darabonba::Json& j, Owner& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
          };
          Owner() = default ;
          Owner(const Owner &) = default ;
          Owner(Owner &&) = default ;
          Owner(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Owner() = default ;
          Owner& operator=(const Owner &) = default ;
          Owner& operator=(Owner &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayName_ == nullptr
        && this->id_ == nullptr; };
          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline Owner& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Owner& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        protected:
          shared_ptr<string> displayName_ {};
          shared_ptr<string> id_ {};
        };

        virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->ETag_ == nullptr && this->key_ == nullptr && this->lastModified_ == nullptr && this->owner_ == nullptr && this->restoreInfo_ == nullptr
        && this->size_ == nullptr && this->storageClass_ == nullptr && this->type_ == nullptr; };
        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline OssObjectList& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // ETag Field Functions 
        bool hasETag() const { return this->ETag_ != nullptr;};
        void deleteETag() { this->ETag_ = nullptr;};
        inline string getETag() const { DARABONBA_PTR_GET_DEFAULT(ETag_, "") };
        inline OssObjectList& setETag(string ETag) { DARABONBA_PTR_SET_VALUE(ETag_, ETag) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline OssObjectList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // lastModified Field Functions 
        bool hasLastModified() const { return this->lastModified_ != nullptr;};
        void deleteLastModified() { this->lastModified_ = nullptr;};
        inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
        inline OssObjectList& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline const OssObjectList::Owner & getOwner() const { DARABONBA_PTR_GET_CONST(owner_, OssObjectList::Owner) };
        inline OssObjectList::Owner getOwner() { DARABONBA_PTR_GET(owner_, OssObjectList::Owner) };
        inline OssObjectList& setOwner(const OssObjectList::Owner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
        inline OssObjectList& setOwner(OssObjectList::Owner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


        // restoreInfo Field Functions 
        bool hasRestoreInfo() const { return this->restoreInfo_ != nullptr;};
        void deleteRestoreInfo() { this->restoreInfo_ = nullptr;};
        inline string getRestoreInfo() const { DARABONBA_PTR_GET_DEFAULT(restoreInfo_, "") };
        inline OssObjectList& setRestoreInfo(string restoreInfo) { DARABONBA_PTR_SET_VALUE(restoreInfo_, restoreInfo) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline OssObjectList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // storageClass Field Functions 
        bool hasStorageClass() const { return this->storageClass_ != nullptr;};
        void deleteStorageClass() { this->storageClass_ = nullptr;};
        inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
        inline OssObjectList& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline OssObjectList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> bucketName_ {};
        shared_ptr<string> ETag_ {};
        shared_ptr<string> key_ {};
        shared_ptr<string> lastModified_ {};
        shared_ptr<OssObjectList::Owner> owner_ {};
        shared_ptr<string> restoreInfo_ {};
        shared_ptr<int64_t> size_ {};
        shared_ptr<string> storageClass_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->extranetEndpoint_ == nullptr && this->gmtCreated_ == nullptr && this->intranetEndpoint_ == nullptr && this->location_ == nullptr && this->ossObjectList_ == nullptr
        && this->regionId_ == nullptr; };
      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Data& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // extranetEndpoint Field Functions 
      bool hasExtranetEndpoint() const { return this->extranetEndpoint_ != nullptr;};
      void deleteExtranetEndpoint() { this->extranetEndpoint_ = nullptr;};
      inline string getExtranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(extranetEndpoint_, "") };
      inline Data& setExtranetEndpoint(string extranetEndpoint) { DARABONBA_PTR_SET_VALUE(extranetEndpoint_, extranetEndpoint) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Data& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // intranetEndpoint Field Functions 
      bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
      void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
      inline string getIntranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
      inline Data& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline Data& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // ossObjectList Field Functions 
      bool hasOssObjectList() const { return this->ossObjectList_ != nullptr;};
      void deleteOssObjectList() { this->ossObjectList_ = nullptr;};
      inline const vector<Data::OssObjectList> & getOssObjectList() const { DARABONBA_PTR_GET_CONST(ossObjectList_, vector<Data::OssObjectList>) };
      inline vector<Data::OssObjectList> getOssObjectList() { DARABONBA_PTR_GET(ossObjectList_, vector<Data::OssObjectList>) };
      inline Data& setOssObjectList(const vector<Data::OssObjectList> & ossObjectList) { DARABONBA_PTR_SET_VALUE(ossObjectList_, ossObjectList) };
      inline Data& setOssObjectList(vector<Data::OssObjectList> && ossObjectList) { DARABONBA_PTR_SET_RVALUE(ossObjectList_, ossObjectList) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      shared_ptr<string> bucketName_ {};
      shared_ptr<string> extranetEndpoint_ {};
      shared_ptr<string> gmtCreated_ {};
      shared_ptr<string> intranetEndpoint_ {};
      shared_ptr<string> location_ {};
      shared_ptr<vector<Data::OssObjectList>> ossObjectList_ {};
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeBucketsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeBucketsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeBucketsResponseBody::Data>) };
    inline vector<DescribeBucketsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeBucketsResponseBody::Data>) };
    inline DescribeBucketsResponseBody& setData(const vector<DescribeBucketsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeBucketsResponseBody& setData(vector<DescribeBucketsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeBucketsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBucketsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBucketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBucketsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<DescribeBucketsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
