// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOBJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOBJECTSRESPONSEBODY_HPP_
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
  class ListObjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListObjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(CommonPrefixes, commonPrefixes_);
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(ContinuationToken, continuationToken_);
      DARABONBA_PTR_TO_JSON(Delimiter, delimiter_);
      DARABONBA_PTR_TO_JSON(EncodingType, encodingType_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(KeyCount, keyCount_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(MaxKeys, maxKeys_);
      DARABONBA_PTR_TO_JSON(NextContinuationToken, nextContinuationToken_);
      DARABONBA_PTR_TO_JSON(NextMarker, nextMarker_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListObjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(CommonPrefixes, commonPrefixes_);
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(ContinuationToken, continuationToken_);
      DARABONBA_PTR_FROM_JSON(Delimiter, delimiter_);
      DARABONBA_PTR_FROM_JSON(EncodingType, encodingType_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(KeyCount, keyCount_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(MaxKeys, maxKeys_);
      DARABONBA_PTR_FROM_JSON(NextContinuationToken, nextContinuationToken_);
      DARABONBA_PTR_FROM_JSON(NextMarker, nextMarker_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListObjectsResponseBody() = default ;
    ListObjectsResponseBody(const ListObjectsResponseBody &) = default ;
    ListObjectsResponseBody(ListObjectsResponseBody &&) = default ;
    ListObjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListObjectsResponseBody() = default ;
    ListObjectsResponseBody& operator=(const ListObjectsResponseBody &) = default ;
    ListObjectsResponseBody& operator=(ListObjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Contents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contents& obj) { 
        DARABONBA_PTR_TO_JSON(ETag, ETag_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, Contents& obj) { 
        DARABONBA_PTR_FROM_JSON(ETag, ETag_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      Contents() = default ;
      Contents(const Contents &) = default ;
      Contents(Contents &&) = default ;
      Contents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contents() = default ;
      Contents& operator=(const Contents &) = default ;
      Contents& operator=(Contents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ETag_ == nullptr
        && this->key_ == nullptr && this->lastModified_ == nullptr && this->size_ == nullptr; };
      // ETag Field Functions 
      bool hasETag() const { return this->ETag_ != nullptr;};
      void deleteETag() { this->ETag_ = nullptr;};
      inline string getETag() const { DARABONBA_PTR_GET_DEFAULT(ETag_, "") };
      inline Contents& setETag(string ETag) { DARABONBA_PTR_SET_VALUE(ETag_, ETag) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Contents& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline Contents& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Contents& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The entity tag (ETag). When an object is created, an ETag is created to identify the content of the object.
      // 
      // *   For an object that is created by calling the PutObject operation, the ETag value of the object is the MD5 hash of the object content.
      // *   For an object that is not created by calling the PutObject operation, the ETag value of the object is the UUID of the object content.
      // *   The ETag of an object can be used to check whether the object content is modified. However, we recommend that you use the MD5 hash of an object rather than the ETag value of the object to verify data integrity.
      shared_ptr<string> ETag_ {};
      // The name of the object.
      shared_ptr<string> key_ {};
      // The time when the object was last modified.
      shared_ptr<string> lastModified_ {};
      // The size of the returned object. Unit: bytes.
      shared_ptr<int64_t> size_ {};
    };

    virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->commonPrefixes_ == nullptr && this->contents_ == nullptr && this->continuationToken_ == nullptr && this->delimiter_ == nullptr && this->encodingType_ == nullptr
        && this->isTruncated_ == nullptr && this->keyCount_ == nullptr && this->marker_ == nullptr && this->maxKeys_ == nullptr && this->nextContinuationToken_ == nullptr
        && this->nextMarker_ == nullptr && this->prefix_ == nullptr && this->requestId_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ListObjectsResponseBody& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // commonPrefixes Field Functions 
    bool hasCommonPrefixes() const { return this->commonPrefixes_ != nullptr;};
    void deleteCommonPrefixes() { this->commonPrefixes_ = nullptr;};
    inline const vector<string> & getCommonPrefixes() const { DARABONBA_PTR_GET_CONST(commonPrefixes_, vector<string>) };
    inline vector<string> getCommonPrefixes() { DARABONBA_PTR_GET(commonPrefixes_, vector<string>) };
    inline ListObjectsResponseBody& setCommonPrefixes(const vector<string> & commonPrefixes) { DARABONBA_PTR_SET_VALUE(commonPrefixes_, commonPrefixes) };
    inline ListObjectsResponseBody& setCommonPrefixes(vector<string> && commonPrefixes) { DARABONBA_PTR_SET_RVALUE(commonPrefixes_, commonPrefixes) };


    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<ListObjectsResponseBody::Contents> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<ListObjectsResponseBody::Contents>) };
    inline vector<ListObjectsResponseBody::Contents> getContents() { DARABONBA_PTR_GET(contents_, vector<ListObjectsResponseBody::Contents>) };
    inline ListObjectsResponseBody& setContents(const vector<ListObjectsResponseBody::Contents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline ListObjectsResponseBody& setContents(vector<ListObjectsResponseBody::Contents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // continuationToken Field Functions 
    bool hasContinuationToken() const { return this->continuationToken_ != nullptr;};
    void deleteContinuationToken() { this->continuationToken_ = nullptr;};
    inline string getContinuationToken() const { DARABONBA_PTR_GET_DEFAULT(continuationToken_, "") };
    inline ListObjectsResponseBody& setContinuationToken(string continuationToken) { DARABONBA_PTR_SET_VALUE(continuationToken_, continuationToken) };


    // delimiter Field Functions 
    bool hasDelimiter() const { return this->delimiter_ != nullptr;};
    void deleteDelimiter() { this->delimiter_ = nullptr;};
    inline string getDelimiter() const { DARABONBA_PTR_GET_DEFAULT(delimiter_, "") };
    inline ListObjectsResponseBody& setDelimiter(string delimiter) { DARABONBA_PTR_SET_VALUE(delimiter_, delimiter) };


    // encodingType Field Functions 
    bool hasEncodingType() const { return this->encodingType_ != nullptr;};
    void deleteEncodingType() { this->encodingType_ = nullptr;};
    inline string getEncodingType() const { DARABONBA_PTR_GET_DEFAULT(encodingType_, "") };
    inline ListObjectsResponseBody& setEncodingType(string encodingType) { DARABONBA_PTR_SET_VALUE(encodingType_, encodingType) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListObjectsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // keyCount Field Functions 
    bool hasKeyCount() const { return this->keyCount_ != nullptr;};
    void deleteKeyCount() { this->keyCount_ = nullptr;};
    inline int64_t getKeyCount() const { DARABONBA_PTR_GET_DEFAULT(keyCount_, 0L) };
    inline ListObjectsResponseBody& setKeyCount(int64_t keyCount) { DARABONBA_PTR_SET_VALUE(keyCount_, keyCount) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListObjectsResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxKeys Field Functions 
    bool hasMaxKeys() const { return this->maxKeys_ != nullptr;};
    void deleteMaxKeys() { this->maxKeys_ = nullptr;};
    inline int64_t getMaxKeys() const { DARABONBA_PTR_GET_DEFAULT(maxKeys_, 0L) };
    inline ListObjectsResponseBody& setMaxKeys(int64_t maxKeys) { DARABONBA_PTR_SET_VALUE(maxKeys_, maxKeys) };


    // nextContinuationToken Field Functions 
    bool hasNextContinuationToken() const { return this->nextContinuationToken_ != nullptr;};
    void deleteNextContinuationToken() { this->nextContinuationToken_ = nullptr;};
    inline string getNextContinuationToken() const { DARABONBA_PTR_GET_DEFAULT(nextContinuationToken_, "") };
    inline ListObjectsResponseBody& setNextContinuationToken(string nextContinuationToken) { DARABONBA_PTR_SET_VALUE(nextContinuationToken_, nextContinuationToken) };


    // nextMarker Field Functions 
    bool hasNextMarker() const { return this->nextMarker_ != nullptr;};
    void deleteNextMarker() { this->nextMarker_ = nullptr;};
    inline string getNextMarker() const { DARABONBA_PTR_GET_DEFAULT(nextMarker_, "") };
    inline ListObjectsResponseBody& setNextMarker(string nextMarker) { DARABONBA_PTR_SET_VALUE(nextMarker_, nextMarker) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ListObjectsResponseBody& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListObjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the bucket.
    shared_ptr<string> bucketName_ {};
    // If the delimiter parameter is specified in the request, the response contains CommonPrefixes. Objects whose names contain the same string from the prefix to the next occurrence of the delimiter are grouped as a single result element in CommonPrefixes.
    shared_ptr<vector<string>> commonPrefixes_ {};
    // The list of object metadata.
    shared_ptr<vector<ListObjectsResponseBody::Contents>> contents_ {};
    // The token used in this list operation.
    shared_ptr<string> continuationToken_ {};
    // The character used to group objects by name.
    shared_ptr<string> delimiter_ {};
    // The encoding type of the object names in the response.
    shared_ptr<string> encodingType_ {};
    // Indicates whether the listed objects are truncated. Valid values:
    // 
    // *   **false**
    // *   **true**
    shared_ptr<bool> isTruncated_ {};
    // The number of keys returned for this request.
    shared_ptr<int64_t> keyCount_ {};
    // The position from which the list operation starts.
    shared_ptr<string> marker_ {};
    // The maximum number of objects returned.
    shared_ptr<int64_t> maxKeys_ {};
    // The token used in the next list operation.
    shared_ptr<string> nextContinuationToken_ {};
    // The position from which the next list operation starts.
    shared_ptr<string> nextMarker_ {};
    // The prefix contained in the names of returned objects.
    shared_ptr<string> prefix_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
