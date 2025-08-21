// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUCKETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBUCKETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBucketInfoResponseBodyBucketInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetBucketInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBucketInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BucketInfo, bucketInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBucketInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketInfo, bucketInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBucketInfoResponseBody() = default ;
    GetBucketInfoResponseBody(const GetBucketInfoResponseBody &) = default ;
    GetBucketInfoResponseBody(GetBucketInfoResponseBody &&) = default ;
    GetBucketInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBucketInfoResponseBody() = default ;
    GetBucketInfoResponseBody& operator=(const GetBucketInfoResponseBody &) = default ;
    GetBucketInfoResponseBody& operator=(GetBucketInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // bucketInfo Field Functions 
    bool hasBucketInfo() const { return this->bucketInfo_ != nullptr;};
    void deleteBucketInfo() { this->bucketInfo_ = nullptr;};
    inline const GetBucketInfoResponseBodyBucketInfo & bucketInfo() const { DARABONBA_PTR_GET_CONST(bucketInfo_, GetBucketInfoResponseBodyBucketInfo) };
    inline GetBucketInfoResponseBodyBucketInfo bucketInfo() { DARABONBA_PTR_GET(bucketInfo_, GetBucketInfoResponseBodyBucketInfo) };
    inline GetBucketInfoResponseBody& setBucketInfo(const GetBucketInfoResponseBodyBucketInfo & bucketInfo) { DARABONBA_PTR_SET_VALUE(bucketInfo_, bucketInfo) };
    inline GetBucketInfoResponseBody& setBucketInfo(GetBucketInfoResponseBodyBucketInfo && bucketInfo) { DARABONBA_PTR_SET_RVALUE(bucketInfo_, bucketInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBucketInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of bucket information.
    std::shared_ptr<GetBucketInfoResponseBodyBucketInfo> bucketInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
