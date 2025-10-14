// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOBJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOBJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListObjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListObjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(ContinuationToken, continuationToken_);
      DARABONBA_PTR_TO_JSON(EncodingType, encodingType_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(MaxKeys, maxKeys_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(StartAfter, startAfter_);
    };
    friend void from_json(const Darabonba::Json& j, ListObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(ContinuationToken, continuationToken_);
      DARABONBA_PTR_FROM_JSON(EncodingType, encodingType_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(MaxKeys, maxKeys_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(StartAfter, startAfter_);
    };
    ListObjectsRequest() = default ;
    ListObjectsRequest(const ListObjectsRequest &) = default ;
    ListObjectsRequest(ListObjectsRequest &&) = default ;
    ListObjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListObjectsRequest() = default ;
    ListObjectsRequest& operator=(const ListObjectsRequest &) = default ;
    ListObjectsRequest& operator=(ListObjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->continuationToken_ == nullptr && return this->encodingType_ == nullptr && return this->marker_ == nullptr && return this->maxKeys_ == nullptr && return this->prefix_ == nullptr
        && return this->startAfter_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ListObjectsRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // continuationToken Field Functions 
    bool hasContinuationToken() const { return this->continuationToken_ != nullptr;};
    void deleteContinuationToken() { this->continuationToken_ = nullptr;};
    inline string continuationToken() const { DARABONBA_PTR_GET_DEFAULT(continuationToken_, "") };
    inline ListObjectsRequest& setContinuationToken(string continuationToken) { DARABONBA_PTR_SET_VALUE(continuationToken_, continuationToken) };


    // encodingType Field Functions 
    bool hasEncodingType() const { return this->encodingType_ != nullptr;};
    void deleteEncodingType() { this->encodingType_ = nullptr;};
    inline string encodingType() const { DARABONBA_PTR_GET_DEFAULT(encodingType_, "") };
    inline ListObjectsRequest& setEncodingType(string encodingType) { DARABONBA_PTR_SET_VALUE(encodingType_, encodingType) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListObjectsRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxKeys Field Functions 
    bool hasMaxKeys() const { return this->maxKeys_ != nullptr;};
    void deleteMaxKeys() { this->maxKeys_ = nullptr;};
    inline int64_t maxKeys() const { DARABONBA_PTR_GET_DEFAULT(maxKeys_, 0L) };
    inline ListObjectsRequest& setMaxKeys(int64_t maxKeys) { DARABONBA_PTR_SET_VALUE(maxKeys_, maxKeys) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ListObjectsRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // startAfter Field Functions 
    bool hasStartAfter() const { return this->startAfter_ != nullptr;};
    void deleteStartAfter() { this->startAfter_ = nullptr;};
    inline string startAfter() const { DARABONBA_PTR_GET_DEFAULT(startAfter_, "") };
    inline ListObjectsRequest& setStartAfter(string startAfter) { DARABONBA_PTR_SET_VALUE(startAfter_, startAfter) };


  protected:
    // The name of the bucket.
    // 
    // This parameter is required.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The token used in this list operation. If the number of objects exceeds the value of MaxKeys, the NextContinuationToken is included in the response as the token for the next list operation.
    std::shared_ptr<string> continuationToken_ = nullptr;
    // The encoding type of the object names in the response. Only URL encoding is supported.
    std::shared_ptr<string> encodingType_ = nullptr;
    // The position from which the list operation starts. If this parameter is specified, objects whose names are alphabetically greater than value of Marker are returned. The Marker parameter is used to list the returned objects by page, and its value must be smaller than 1,024 bytes in length.
    // 
    // Even if the value specified for Marker does not exist in the list during a conditional query, the list starts from the object whose name is alphabetically greater than the value of Marker.
    std::shared_ptr<string> marker_ = nullptr;
    // The maximum number of objects to return. Valid values: 0 to 1000. Default value: 100.
    std::shared_ptr<int64_t> maxKeys_ = nullptr;
    // The prefix that must be included in the names of objects you want to list. If you specify a prefix to query objects, the returned object names contain the prefix.
    // 
    // The value of the parameter must be less than 1,000 bytes in length.
    std::shared_ptr<string> prefix_ = nullptr;
    // The position from which the list operation starts. If this parameter is specified, objects whose names are alphabetically greater than the value of StartAfter are returned. The StartAfter parameter is used to list the returned objects by page, and its value must be less than 1,000 bytes in length. Even if the value specified for StartAfter does not exist in the list during a conditional query, the list starts from the object whose name is alphabetically greater than the value of StartAfter.
    std::shared_ptr<string> startAfter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
