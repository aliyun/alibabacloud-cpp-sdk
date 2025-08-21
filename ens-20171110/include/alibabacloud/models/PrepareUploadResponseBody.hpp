// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREPAREUPLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREPAREUPLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PrepareUploadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrepareUploadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PrepareUploadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PrepareUploadResponseBody() = default ;
    PrepareUploadResponseBody(const PrepareUploadResponseBody &) = default ;
    PrepareUploadResponseBody(PrepareUploadResponseBody &&) = default ;
    PrepareUploadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrepareUploadResponseBody() = default ;
    PrepareUploadResponseBody& operator=(const PrepareUploadResponseBody &) = default ;
    PrepareUploadResponseBody& operator=(PrepareUploadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->endpoint_ != nullptr && this->requestId_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline PrepareUploadResponseBody& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline PrepareUploadResponseBody& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PrepareUploadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the bucket. This parameter is available only when the OSS SDK is used.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The endpoint. This parameter is available only when the OSS SDK is used.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
