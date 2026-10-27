// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTCODEPACKAGEOSSRAMAUTHORIZEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTCODEPACKAGEOSSRAMAUTHORIZEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetAgentCodePackageOssRamAuthorizeUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentCodePackageOssRamAuthorizeUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ossBucketName, ossBucketName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentCodePackageOssRamAuthorizeUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ossBucketName, ossBucketName_);
    };
    GetAgentCodePackageOssRamAuthorizeUrlRequest() = default ;
    GetAgentCodePackageOssRamAuthorizeUrlRequest(const GetAgentCodePackageOssRamAuthorizeUrlRequest &) = default ;
    GetAgentCodePackageOssRamAuthorizeUrlRequest(GetAgentCodePackageOssRamAuthorizeUrlRequest &&) = default ;
    GetAgentCodePackageOssRamAuthorizeUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentCodePackageOssRamAuthorizeUrlRequest() = default ;
    GetAgentCodePackageOssRamAuthorizeUrlRequest& operator=(const GetAgentCodePackageOssRamAuthorizeUrlRequest &) = default ;
    GetAgentCodePackageOssRamAuthorizeUrlRequest& operator=(GetAgentCodePackageOssRamAuthorizeUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossBucketName_ == nullptr; };
    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline GetAgentCodePackageOssRamAuthorizeUrlRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


  protected:
    // The name of the source OSS bucket.
    // 
    // This parameter is required.
    shared_ptr<string> ossBucketName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
