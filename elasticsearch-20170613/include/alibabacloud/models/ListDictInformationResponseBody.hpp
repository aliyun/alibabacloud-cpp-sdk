// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDICTINFORMATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDICTINFORMATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDictInformationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDictInformationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDictInformationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDictInformationResponseBody() = default ;
    ListDictInformationResponseBody(const ListDictInformationResponseBody &) = default ;
    ListDictInformationResponseBody(ListDictInformationResponseBody &&) = default ;
    ListDictInformationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDictInformationResponseBody() = default ;
    ListDictInformationResponseBody& operator=(const ListDictInformationResponseBody &) = default ;
    ListDictInformationResponseBody& operator=(ListDictInformationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(ossObject, ossObject_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(ossObject, ossObject_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OssObject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssObject& obj) { 
          DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(etag, etag_);
          DARABONBA_PTR_TO_JSON(key, key_);
        };
        friend void from_json(const Darabonba::Json& j, OssObject& obj) { 
          DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(etag, etag_);
          DARABONBA_PTR_FROM_JSON(key, key_);
        };
        OssObject() = default ;
        OssObject(const OssObject &) = default ;
        OssObject(OssObject &&) = default ;
        OssObject(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssObject() = default ;
        OssObject& operator=(const OssObject &) = default ;
        OssObject& operator=(OssObject &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->etag_ == nullptr && this->key_ == nullptr; };
        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline OssObject& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // etag Field Functions 
        bool hasEtag() const { return this->etag_ != nullptr;};
        void deleteEtag() { this->etag_ = nullptr;};
        inline string getEtag() const { DARABONBA_PTR_GET_DEFAULT(etag_, "") };
        inline OssObject& setEtag(string etag) { DARABONBA_PTR_SET_VALUE(etag_, etag) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline OssObject& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        shared_ptr<string> bucketName_ {};
        shared_ptr<string> etag_ {};
        shared_ptr<string> key_ {};
      };

      virtual bool empty() const override { return this->fileSize_ == nullptr
        && this->ossObject_ == nullptr && this->type_ == nullptr; };
      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline Result& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // ossObject Field Functions 
      bool hasOssObject() const { return this->ossObject_ != nullptr;};
      void deleteOssObject() { this->ossObject_ = nullptr;};
      inline const Result::OssObject & getOssObject() const { DARABONBA_PTR_GET_CONST(ossObject_, Result::OssObject) };
      inline Result::OssObject getOssObject() { DARABONBA_PTR_GET(ossObject_, Result::OssObject) };
      inline Result& setOssObject(const Result::OssObject & ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };
      inline Result& setOssObject(Result::OssObject && ossObject) { DARABONBA_PTR_SET_RVALUE(ossObject_, ossObject) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<int64_t> fileSize_ {};
      shared_ptr<Result::OssObject> ossObject_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDictInformationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListDictInformationResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListDictInformationResponseBody::Result) };
    inline ListDictInformationResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListDictInformationResponseBody::Result) };
    inline ListDictInformationResponseBody& setResult(const ListDictInformationResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDictInformationResponseBody& setResult(ListDictInformationResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<ListDictInformationResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
