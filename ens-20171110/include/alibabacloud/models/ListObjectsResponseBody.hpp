// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOBJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOBJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListObjectsResponseBodyContents.hpp>
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
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->commonPrefixes_ == nullptr && return this->contents_ == nullptr && return this->continuationToken_ == nullptr && return this->delimiter_ == nullptr && return this->encodingType_ == nullptr
        && return this->isTruncated_ == nullptr && return this->keyCount_ == nullptr && return this->marker_ == nullptr && return this->maxKeys_ == nullptr && return this->nextContinuationToken_ == nullptr
        && return this->nextMarker_ == nullptr && return this->prefix_ == nullptr && return this->requestId_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ListObjectsResponseBody& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // commonPrefixes Field Functions 
    bool hasCommonPrefixes() const { return this->commonPrefixes_ != nullptr;};
    void deleteCommonPrefixes() { this->commonPrefixes_ = nullptr;};
    inline const vector<string> & commonPrefixes() const { DARABONBA_PTR_GET_CONST(commonPrefixes_, vector<string>) };
    inline vector<string> commonPrefixes() { DARABONBA_PTR_GET(commonPrefixes_, vector<string>) };
    inline ListObjectsResponseBody& setCommonPrefixes(const vector<string> & commonPrefixes) { DARABONBA_PTR_SET_VALUE(commonPrefixes_, commonPrefixes) };
    inline ListObjectsResponseBody& setCommonPrefixes(vector<string> && commonPrefixes) { DARABONBA_PTR_SET_RVALUE(commonPrefixes_, commonPrefixes) };


    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<ListObjectsResponseBodyContents> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<ListObjectsResponseBodyContents>) };
    inline vector<ListObjectsResponseBodyContents> contents() { DARABONBA_PTR_GET(contents_, vector<ListObjectsResponseBodyContents>) };
    inline ListObjectsResponseBody& setContents(const vector<ListObjectsResponseBodyContents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline ListObjectsResponseBody& setContents(vector<ListObjectsResponseBodyContents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // continuationToken Field Functions 
    bool hasContinuationToken() const { return this->continuationToken_ != nullptr;};
    void deleteContinuationToken() { this->continuationToken_ = nullptr;};
    inline string continuationToken() const { DARABONBA_PTR_GET_DEFAULT(continuationToken_, "") };
    inline ListObjectsResponseBody& setContinuationToken(string continuationToken) { DARABONBA_PTR_SET_VALUE(continuationToken_, continuationToken) };


    // delimiter Field Functions 
    bool hasDelimiter() const { return this->delimiter_ != nullptr;};
    void deleteDelimiter() { this->delimiter_ = nullptr;};
    inline string delimiter() const { DARABONBA_PTR_GET_DEFAULT(delimiter_, "") };
    inline ListObjectsResponseBody& setDelimiter(string delimiter) { DARABONBA_PTR_SET_VALUE(delimiter_, delimiter) };


    // encodingType Field Functions 
    bool hasEncodingType() const { return this->encodingType_ != nullptr;};
    void deleteEncodingType() { this->encodingType_ = nullptr;};
    inline string encodingType() const { DARABONBA_PTR_GET_DEFAULT(encodingType_, "") };
    inline ListObjectsResponseBody& setEncodingType(string encodingType) { DARABONBA_PTR_SET_VALUE(encodingType_, encodingType) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool isTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListObjectsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // keyCount Field Functions 
    bool hasKeyCount() const { return this->keyCount_ != nullptr;};
    void deleteKeyCount() { this->keyCount_ = nullptr;};
    inline int64_t keyCount() const { DARABONBA_PTR_GET_DEFAULT(keyCount_, 0L) };
    inline ListObjectsResponseBody& setKeyCount(int64_t keyCount) { DARABONBA_PTR_SET_VALUE(keyCount_, keyCount) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListObjectsResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxKeys Field Functions 
    bool hasMaxKeys() const { return this->maxKeys_ != nullptr;};
    void deleteMaxKeys() { this->maxKeys_ = nullptr;};
    inline int64_t maxKeys() const { DARABONBA_PTR_GET_DEFAULT(maxKeys_, 0L) };
    inline ListObjectsResponseBody& setMaxKeys(int64_t maxKeys) { DARABONBA_PTR_SET_VALUE(maxKeys_, maxKeys) };


    // nextContinuationToken Field Functions 
    bool hasNextContinuationToken() const { return this->nextContinuationToken_ != nullptr;};
    void deleteNextContinuationToken() { this->nextContinuationToken_ = nullptr;};
    inline string nextContinuationToken() const { DARABONBA_PTR_GET_DEFAULT(nextContinuationToken_, "") };
    inline ListObjectsResponseBody& setNextContinuationToken(string nextContinuationToken) { DARABONBA_PTR_SET_VALUE(nextContinuationToken_, nextContinuationToken) };


    // nextMarker Field Functions 
    bool hasNextMarker() const { return this->nextMarker_ != nullptr;};
    void deleteNextMarker() { this->nextMarker_ = nullptr;};
    inline string nextMarker() const { DARABONBA_PTR_GET_DEFAULT(nextMarker_, "") };
    inline ListObjectsResponseBody& setNextMarker(string nextMarker) { DARABONBA_PTR_SET_VALUE(nextMarker_, nextMarker) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ListObjectsResponseBody& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListObjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // If the delimiter parameter is specified in the request, the response contains CommonPrefixes. Objects whose names contain the same string from the prefix to the next occurrence of the delimiter are grouped as a single result element in CommonPrefixes.
    std::shared_ptr<vector<string>> commonPrefixes_ = nullptr;
    // The list of object metadata.
    std::shared_ptr<vector<ListObjectsResponseBodyContents>> contents_ = nullptr;
    // The token used in this list operation.
    std::shared_ptr<string> continuationToken_ = nullptr;
    // The character used to group objects by name.
    std::shared_ptr<string> delimiter_ = nullptr;
    // The encoding type of the object names in the response.
    std::shared_ptr<string> encodingType_ = nullptr;
    // Indicates whether the listed objects are truncated. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> isTruncated_ = nullptr;
    // The number of keys returned for this request.
    std::shared_ptr<int64_t> keyCount_ = nullptr;
    // The position from which the list operation starts.
    std::shared_ptr<string> marker_ = nullptr;
    // The maximum number of objects returned.
    std::shared_ptr<int64_t> maxKeys_ = nullptr;
    // The token used in the next list operation.
    std::shared_ptr<string> nextContinuationToken_ = nullptr;
    // The position from which the next list operation starts.
    std::shared_ptr<string> nextMarker_ = nullptr;
    // The prefix contained in the names of returned objects.
    std::shared_ptr<string> prefix_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
