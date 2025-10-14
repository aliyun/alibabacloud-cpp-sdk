// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSSTORAGEANDACCBYBUCKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSSTORAGEANDACCBYBUCKETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOssStorageAndAccByBucketsResponseBodyBucketList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetOssStorageAndAccByBucketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssStorageAndAccByBucketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BucketList, bucketList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssStorageAndAccByBucketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketList, bucketList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOssStorageAndAccByBucketsResponseBody() = default ;
    GetOssStorageAndAccByBucketsResponseBody(const GetOssStorageAndAccByBucketsResponseBody &) = default ;
    GetOssStorageAndAccByBucketsResponseBody(GetOssStorageAndAccByBucketsResponseBody &&) = default ;
    GetOssStorageAndAccByBucketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssStorageAndAccByBucketsResponseBody() = default ;
    GetOssStorageAndAccByBucketsResponseBody& operator=(const GetOssStorageAndAccByBucketsResponseBody &) = default ;
    GetOssStorageAndAccByBucketsResponseBody& operator=(GetOssStorageAndAccByBucketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketList_ == nullptr
        && return this->requestId_ == nullptr; };
    // bucketList Field Functions 
    bool hasBucketList() const { return this->bucketList_ != nullptr;};
    void deleteBucketList() { this->bucketList_ = nullptr;};
    inline const vector<GetOssStorageAndAccByBucketsResponseBodyBucketList> & bucketList() const { DARABONBA_PTR_GET_CONST(bucketList_, vector<GetOssStorageAndAccByBucketsResponseBodyBucketList>) };
    inline vector<GetOssStorageAndAccByBucketsResponseBodyBucketList> bucketList() { DARABONBA_PTR_GET(bucketList_, vector<GetOssStorageAndAccByBucketsResponseBodyBucketList>) };
    inline GetOssStorageAndAccByBucketsResponseBody& setBucketList(const vector<GetOssStorageAndAccByBucketsResponseBodyBucketList> & bucketList) { DARABONBA_PTR_SET_VALUE(bucketList_, bucketList) };
    inline GetOssStorageAndAccByBucketsResponseBody& setBucketList(vector<GetOssStorageAndAccByBucketsResponseBodyBucketList> && bucketList) { DARABONBA_PTR_SET_RVALUE(bucketList_, bucketList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssStorageAndAccByBucketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the bucket.
    std::shared_ptr<vector<GetOssStorageAndAccByBucketsResponseBodyBucketList>> bucketList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
