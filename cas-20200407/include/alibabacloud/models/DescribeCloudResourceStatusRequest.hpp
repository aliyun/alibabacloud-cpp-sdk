// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DescribeCloudResourceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
    };
    DescribeCloudResourceStatusRequest() = default ;
    DescribeCloudResourceStatusRequest(const DescribeCloudResourceStatusRequest &) = default ;
    DescribeCloudResourceStatusRequest(DescribeCloudResourceStatusRequest &&) = default ;
    DescribeCloudResourceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourceStatusRequest() = default ;
    DescribeCloudResourceStatusRequest& operator=(const DescribeCloudResourceStatusRequest &) = default ;
    DescribeCloudResourceStatusRequest& operator=(DescribeCloudResourceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secretId_ == nullptr; };
    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline DescribeCloudResourceStatusRequest& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


  protected:
    // The AccessKey secret used to access cloud resources.
    // 
    // >  You can call the [ListCloudAccess](https://help.aliyun.com/document_detail/2712219.html) operation to obtain the ID.
    std::shared_ptr<string> secretId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
