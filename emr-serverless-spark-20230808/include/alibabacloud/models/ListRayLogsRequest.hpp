// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRAYLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRAYLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListRayLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRayLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(delimiter, delimiter_);
      DARABONBA_PTR_TO_JSON(marker, marker_);
      DARABONBA_PTR_TO_JSON(maxKeys, maxKeys_);
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
    };
    friend void from_json(const Darabonba::Json& j, ListRayLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(delimiter, delimiter_);
      DARABONBA_PTR_FROM_JSON(marker, marker_);
      DARABONBA_PTR_FROM_JSON(maxKeys, maxKeys_);
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
    };
    ListRayLogsRequest() = default ;
    ListRayLogsRequest(const ListRayLogsRequest &) = default ;
    ListRayLogsRequest(ListRayLogsRequest &&) = default ;
    ListRayLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRayLogsRequest() = default ;
    ListRayLogsRequest& operator=(const ListRayLogsRequest &) = default ;
    ListRayLogsRequest& operator=(ListRayLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->delimiter_ == nullptr && this->marker_ == nullptr && this->maxKeys_ == nullptr && this->prefix_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ListRayLogsRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // delimiter Field Functions 
    bool hasDelimiter() const { return this->delimiter_ != nullptr;};
    void deleteDelimiter() { this->delimiter_ = nullptr;};
    inline string getDelimiter() const { DARABONBA_PTR_GET_DEFAULT(delimiter_, "") };
    inline ListRayLogsRequest& setDelimiter(string delimiter) { DARABONBA_PTR_SET_VALUE(delimiter_, delimiter) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListRayLogsRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxKeys Field Functions 
    bool hasMaxKeys() const { return this->maxKeys_ != nullptr;};
    void deleteMaxKeys() { this->maxKeys_ = nullptr;};
    inline int64_t getMaxKeys() const { DARABONBA_PTR_GET_DEFAULT(maxKeys_, 0L) };
    inline ListRayLogsRequest& setMaxKeys(int64_t maxKeys) { DARABONBA_PTR_SET_VALUE(maxKeys_, maxKeys) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline ListRayLogsRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


  protected:
    // The bucket name.
    shared_ptr<string> bucketName_ {};
    // The character used to group object names. All objects whose names contain the specified prefix and between which the delimiter character appears for the first time are grouped as a set of elements (CommonPrefixes).
    shared_ptr<string> delimiter_ {};
    // The marker after which the returned objects are listed in alphabetical order.
    shared_ptr<string> marker_ {};
    // The maximum number of objects to return. If the listing cannot be completed in a single request due to the max-keys setting, a NextMarker element is included in the response as the marker for the next listing request.
    // 
    // Valid values: greater than 0 and less than 1000.
    // 
    // Default value: 100.
    shared_ptr<int64_t> maxKeys_ {};
    // The prefix that the keys of the returned files must start with.
    shared_ptr<string> prefix_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
