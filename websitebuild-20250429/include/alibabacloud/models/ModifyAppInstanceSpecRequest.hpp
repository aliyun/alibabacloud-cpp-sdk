// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ModifyAppInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeployArea, deployArea_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeployArea, deployArea_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    ModifyAppInstanceSpecRequest() = default ;
    ModifyAppInstanceSpecRequest(const ModifyAppInstanceSpecRequest &) = default ;
    ModifyAppInstanceSpecRequest(ModifyAppInstanceSpecRequest &&) = default ;
    ModifyAppInstanceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceSpecRequest() = default ;
    ModifyAppInstanceSpecRequest& operator=(const ModifyAppInstanceSpecRequest &) = default ;
    ModifyAppInstanceSpecRequest& operator=(ModifyAppInstanceSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationType_ == nullptr
        && this->bizId_ == nullptr && this->clientToken_ == nullptr && this->deployArea_ == nullptr && this->extend_ == nullptr && this->paymentType_ == nullptr
        && this->siteVersion_ == nullptr; };
    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline ModifyAppInstanceSpecRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ModifyAppInstanceSpecRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyAppInstanceSpecRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deployArea Field Functions 
    bool hasDeployArea() const { return this->deployArea_ != nullptr;};
    void deleteDeployArea() { this->deployArea_ = nullptr;};
    inline string getDeployArea() const { DARABONBA_PTR_GET_DEFAULT(deployArea_, "") };
    inline ModifyAppInstanceSpecRequest& setDeployArea(string deployArea) { DARABONBA_PTR_SET_VALUE(deployArea_, deployArea) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline ModifyAppInstanceSpecRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ModifyAppInstanceSpecRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline string getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, "") };
    inline ModifyAppInstanceSpecRequest& setSiteVersion(string siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Application type
    shared_ptr<string> applicationType_ {};
    // Business ID
    shared_ptr<string> bizId_ {};
    // Ensures idempotence of requests. Generate a unique value from your client to ensure it is unique across different requests. ClientToken supports only ASCII characters and cannot exceed 64 characters.
    shared_ptr<string> clientToken_ {};
    // Deployment area
    shared_ptr<string> deployArea_ {};
    // Extended information
    shared_ptr<string> extend_ {};
    // Payment type
    shared_ptr<string> paymentType_ {};
    // Site version
    shared_ptr<string> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
