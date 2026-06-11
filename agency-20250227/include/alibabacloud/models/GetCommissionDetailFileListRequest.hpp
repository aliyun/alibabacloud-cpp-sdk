// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMISSIONDETAILFILELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMISSIONDETAILFILELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class GetCommissionDetailFileListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommissionDetailFileListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillMonth, billMonth_);
      DARABONBA_PTR_TO_JSON(OssAccessKeyId, ossAccessKeyId_);
      DARABONBA_PTR_TO_JSON(OssAccessKeySecret, ossAccessKeySecret_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OssRegion, ossRegion_);
      DARABONBA_PTR_TO_JSON(OssSecurityToken, ossSecurityToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommissionDetailFileListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillMonth, billMonth_);
      DARABONBA_PTR_FROM_JSON(OssAccessKeyId, ossAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(OssAccessKeySecret, ossAccessKeySecret_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OssRegion, ossRegion_);
      DARABONBA_PTR_FROM_JSON(OssSecurityToken, ossSecurityToken_);
    };
    GetCommissionDetailFileListRequest() = default ;
    GetCommissionDetailFileListRequest(const GetCommissionDetailFileListRequest &) = default ;
    GetCommissionDetailFileListRequest(GetCommissionDetailFileListRequest &&) = default ;
    GetCommissionDetailFileListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommissionDetailFileListRequest() = default ;
    GetCommissionDetailFileListRequest& operator=(const GetCommissionDetailFileListRequest &) = default ;
    GetCommissionDetailFileListRequest& operator=(GetCommissionDetailFileListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billMonth_ == nullptr
        && this->ossAccessKeyId_ == nullptr && this->ossAccessKeySecret_ == nullptr && this->ossBucketName_ == nullptr && this->ossEndpoint_ == nullptr && this->ossRegion_ == nullptr
        && this->ossSecurityToken_ == nullptr; };
    // billMonth Field Functions 
    bool hasBillMonth() const { return this->billMonth_ != nullptr;};
    void deleteBillMonth() { this->billMonth_ = nullptr;};
    inline string getBillMonth() const { DARABONBA_PTR_GET_DEFAULT(billMonth_, "") };
    inline GetCommissionDetailFileListRequest& setBillMonth(string billMonth) { DARABONBA_PTR_SET_VALUE(billMonth_, billMonth) };


    // ossAccessKeyId Field Functions 
    bool hasOssAccessKeyId() const { return this->ossAccessKeyId_ != nullptr;};
    void deleteOssAccessKeyId() { this->ossAccessKeyId_ = nullptr;};
    inline string getOssAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(ossAccessKeyId_, "") };
    inline GetCommissionDetailFileListRequest& setOssAccessKeyId(string ossAccessKeyId) { DARABONBA_PTR_SET_VALUE(ossAccessKeyId_, ossAccessKeyId) };


    // ossAccessKeySecret Field Functions 
    bool hasOssAccessKeySecret() const { return this->ossAccessKeySecret_ != nullptr;};
    void deleteOssAccessKeySecret() { this->ossAccessKeySecret_ = nullptr;};
    inline string getOssAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(ossAccessKeySecret_, "") };
    inline GetCommissionDetailFileListRequest& setOssAccessKeySecret(string ossAccessKeySecret) { DARABONBA_PTR_SET_VALUE(ossAccessKeySecret_, ossAccessKeySecret) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline GetCommissionDetailFileListRequest& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline GetCommissionDetailFileListRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ossRegion Field Functions 
    bool hasOssRegion() const { return this->ossRegion_ != nullptr;};
    void deleteOssRegion() { this->ossRegion_ = nullptr;};
    inline string getOssRegion() const { DARABONBA_PTR_GET_DEFAULT(ossRegion_, "") };
    inline GetCommissionDetailFileListRequest& setOssRegion(string ossRegion) { DARABONBA_PTR_SET_VALUE(ossRegion_, ossRegion) };


    // ossSecurityToken Field Functions 
    bool hasOssSecurityToken() const { return this->ossSecurityToken_ != nullptr;};
    void deleteOssSecurityToken() { this->ossSecurityToken_ = nullptr;};
    inline string getOssSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(ossSecurityToken_, "") };
    inline GetCommissionDetailFileListRequest& setOssSecurityToken(string ossSecurityToken) { DARABONBA_PTR_SET_VALUE(ossSecurityToken_, ossSecurityToken) };


  protected:
    // Billing month
    shared_ptr<string> billMonth_ {};
    // AccessKeyID used to upload files to OSS
    shared_ptr<string> ossAccessKeyId_ {};
    // AccessKeySecret used to upload files to OSS
    shared_ptr<string> ossAccessKeySecret_ {};
    // OSS bucket
    shared_ptr<string> ossBucketName_ {};
    // Edge zone of the Region where the OSS bucket for file sharing is located
    shared_ptr<string> ossEndpoint_ {};
    // Region to which the current OSS bucket belongs
    shared_ptr<string> ossRegion_ {};
    // STS token used to upload files to OSS
    shared_ptr<string> ossSecurityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
