// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOSSBUCKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOSSBUCKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOssBucketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOssBucketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOssBucketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOssBucketResponseBody() = default ;
    ListOssBucketResponseBody(const ListOssBucketResponseBody &) = default ;
    ListOssBucketResponseBody(ListOssBucketResponseBody &&) = default ;
    ListOssBucketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOssBucketResponseBody() = default ;
    ListOssBucketResponseBody& operator=(const ListOssBucketResponseBody &) = default ;
    ListOssBucketResponseBody& operator=(ListOssBucketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_TO_JSON(Support, support_);
        DARABONBA_PTR_TO_JSON(SupportConfig, supportConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_FROM_JSON(Support, support_);
        DARABONBA_PTR_FROM_JSON(SupportConfig, supportConfig_);
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
      virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->message_ == nullptr && this->regionId_ == nullptr && this->storageClass_ == nullptr && this->support_ == nullptr && this->supportConfig_ == nullptr; };
      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Data& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // storageClass Field Functions 
      bool hasStorageClass() const { return this->storageClass_ != nullptr;};
      void deleteStorageClass() { this->storageClass_ = nullptr;};
      inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
      inline Data& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


      // support Field Functions 
      bool hasSupport() const { return this->support_ != nullptr;};
      void deleteSupport() { this->support_ = nullptr;};
      inline bool getSupport() const { DARABONBA_PTR_GET_DEFAULT(support_, false) };
      inline Data& setSupport(bool support) { DARABONBA_PTR_SET_VALUE(support_, support) };


      // supportConfig Field Functions 
      bool hasSupportConfig() const { return this->supportConfig_ != nullptr;};
      void deleteSupportConfig() { this->supportConfig_ = nullptr;};
      inline string getSupportConfig() const { DARABONBA_PTR_GET_DEFAULT(supportConfig_, "") };
      inline Data& setSupportConfig(string supportConfig) { DARABONBA_PTR_SET_VALUE(supportConfig_, supportConfig) };


    protected:
      // The name of the bucket.
      shared_ptr<string> bucketName_ {};
      // The reason why the bucket cannot be checked.
      shared_ptr<string> message_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The storage class of the bucket. Valid values:
      // 
      // *   Standard (default)
      // *   IA
      // *   Archive
      // *   ColdArchive
      shared_ptr<string> storageClass_ {};
      // Indicates whether the bucket can be checked. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> support_ {};
      // Whether to support config. Valid values:
      // 
      // * true
      // * false
      shared_ptr<string> supportConfig_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListOssBucketResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListOssBucketResponseBody::Data>) };
    inline vector<ListOssBucketResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListOssBucketResponseBody::Data>) };
    inline ListOssBucketResponseBody& setData(const vector<ListOssBucketResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOssBucketResponseBody& setData(vector<ListOssBucketResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOssBucketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<ListOssBucketResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
