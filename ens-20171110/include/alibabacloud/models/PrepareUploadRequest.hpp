// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREPAREUPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREPAREUPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PrepareUploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrepareUploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
    };
    friend void from_json(const Darabonba::Json& j, PrepareUploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
    };
    PrepareUploadRequest() = default ;
    PrepareUploadRequest(const PrepareUploadRequest &) = default ;
    PrepareUploadRequest(PrepareUploadRequest &&) = default ;
    PrepareUploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrepareUploadRequest() = default ;
    PrepareUploadRequest& operator=(const PrepareUploadRequest &) = default ;
    PrepareUploadRequest& operator=(PrepareUploadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->clientIp_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline PrepareUploadRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline PrepareUploadRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


  protected:
    // The name of the bucket.
    // 
    // This parameter is required.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The specified IP address. This parameter is applicable to scenarios where the user IP address is inconsistent with the operation calling IP address, such as the scenario where the server obtains authorization and sends the authorization to the client.
    std::shared_ptr<string> clientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
