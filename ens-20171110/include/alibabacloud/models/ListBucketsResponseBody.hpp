// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUCKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBUCKETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBucketsResponseBodyBucketInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListBucketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBucketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BucketInfos, bucketInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBucketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketInfos, bucketInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBucketsResponseBody() = default ;
    ListBucketsResponseBody(const ListBucketsResponseBody &) = default ;
    ListBucketsResponseBody(ListBucketsResponseBody &&) = default ;
    ListBucketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBucketsResponseBody() = default ;
    ListBucketsResponseBody& operator=(const ListBucketsResponseBody &) = default ;
    ListBucketsResponseBody& operator=(ListBucketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketInfos_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // bucketInfos Field Functions 
    bool hasBucketInfos() const { return this->bucketInfos_ != nullptr;};
    void deleteBucketInfos() { this->bucketInfos_ = nullptr;};
    inline const vector<ListBucketsResponseBodyBucketInfos> & bucketInfos() const { DARABONBA_PTR_GET_CONST(bucketInfos_, vector<ListBucketsResponseBodyBucketInfos>) };
    inline vector<ListBucketsResponseBodyBucketInfos> bucketInfos() { DARABONBA_PTR_GET(bucketInfos_, vector<ListBucketsResponseBodyBucketInfos>) };
    inline ListBucketsResponseBody& setBucketInfos(const vector<ListBucketsResponseBodyBucketInfos> & bucketInfos) { DARABONBA_PTR_SET_VALUE(bucketInfos_, bucketInfos) };
    inline ListBucketsResponseBody& setBucketInfos(vector<ListBucketsResponseBodyBucketInfos> && bucketInfos) { DARABONBA_PTR_SET_RVALUE(bucketInfos_, bucketInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBucketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListBucketsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of bucket information.
    std::shared_ptr<vector<ListBucketsResponseBodyBucketInfos>> bucketInfos_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of buckets that match the conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
