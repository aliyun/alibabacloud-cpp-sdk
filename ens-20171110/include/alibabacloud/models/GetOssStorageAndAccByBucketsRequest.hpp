// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSSTORAGEANDACCBYBUCKETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSSTORAGEANDACCBYBUCKETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetOssStorageAndAccByBucketsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssStorageAndAccByBucketsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketList, bucketList_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssStorageAndAccByBucketsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketList, bucketList_);
    };
    GetOssStorageAndAccByBucketsRequest() = default ;
    GetOssStorageAndAccByBucketsRequest(const GetOssStorageAndAccByBucketsRequest &) = default ;
    GetOssStorageAndAccByBucketsRequest(GetOssStorageAndAccByBucketsRequest &&) = default ;
    GetOssStorageAndAccByBucketsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssStorageAndAccByBucketsRequest() = default ;
    GetOssStorageAndAccByBucketsRequest& operator=(const GetOssStorageAndAccByBucketsRequest &) = default ;
    GetOssStorageAndAccByBucketsRequest& operator=(GetOssStorageAndAccByBucketsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketList_ != nullptr; };
    // bucketList Field Functions 
    bool hasBucketList() const { return this->bucketList_ != nullptr;};
    void deleteBucketList() { this->bucketList_ = nullptr;};
    inline string bucketList() const { DARABONBA_PTR_GET_DEFAULT(bucketList_, "") };
    inline GetOssStorageAndAccByBucketsRequest& setBucketList(string bucketList) { DARABONBA_PTR_SET_VALUE(bucketList_, bucketList) };


  protected:
    // The information about the bucket.
    std::shared_ptr<string> bucketList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
