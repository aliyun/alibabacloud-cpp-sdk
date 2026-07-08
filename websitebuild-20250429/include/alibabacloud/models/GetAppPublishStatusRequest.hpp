// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPPUBLISHSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPPUBLISHSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppPublishStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppPublishStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DeployOrderId, deployOrderId_);
      DARABONBA_PTR_TO_JSON(WebsiteDomain, websiteDomain_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppPublishStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DeployOrderId, deployOrderId_);
      DARABONBA_PTR_FROM_JSON(WebsiteDomain, websiteDomain_);
    };
    GetAppPublishStatusRequest() = default ;
    GetAppPublishStatusRequest(const GetAppPublishStatusRequest &) = default ;
    GetAppPublishStatusRequest(GetAppPublishStatusRequest &&) = default ;
    GetAppPublishStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppPublishStatusRequest() = default ;
    GetAppPublishStatusRequest& operator=(const GetAppPublishStatusRequest &) = default ;
    GetAppPublishStatusRequest& operator=(GetAppPublishStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->deployOrderId_ == nullptr && this->websiteDomain_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetAppPublishStatusRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // deployOrderId Field Functions 
    bool hasDeployOrderId() const { return this->deployOrderId_ != nullptr;};
    void deleteDeployOrderId() { this->deployOrderId_ = nullptr;};
    inline int64_t getDeployOrderId() const { DARABONBA_PTR_GET_DEFAULT(deployOrderId_, 0L) };
    inline GetAppPublishStatusRequest& setDeployOrderId(int64_t deployOrderId) { DARABONBA_PTR_SET_VALUE(deployOrderId_, deployOrderId) };


    // websiteDomain Field Functions 
    bool hasWebsiteDomain() const { return this->websiteDomain_ != nullptr;};
    void deleteWebsiteDomain() { this->websiteDomain_ = nullptr;};
    inline string getWebsiteDomain() const { DARABONBA_PTR_GET_DEFAULT(websiteDomain_, "") };
    inline GetAppPublishStatusRequest& setWebsiteDomain(string websiteDomain) { DARABONBA_PTR_SET_VALUE(websiteDomain_, websiteDomain) };


  protected:
    // The business ID.
    shared_ptr<string> bizId_ {};
    // The deployment order ID.
    shared_ptr<int64_t> deployOrderId_ {};
    // The website domain name.
    shared_ptr<string> websiteDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
