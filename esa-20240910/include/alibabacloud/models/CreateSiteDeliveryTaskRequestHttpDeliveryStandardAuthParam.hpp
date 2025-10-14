// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEDELIVERYTASKREQUESTHTTPDELIVERYSTANDARDAUTHPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEDELIVERYTASKREQUESTHTTPDELIVERYSTANDARDAUTHPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(UrlPath, urlPath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(UrlPath, urlPath_);
    };
    CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam() = default ;
    CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam(const CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam &) = default ;
    CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam(CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam &&) = default ;
    CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam() = default ;
    CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam& operator=(const CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam &) = default ;
    CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam& operator=(CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiredTime_ == nullptr
        && return this->privateKey_ == nullptr && return this->urlPath_ == nullptr; };
    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline int32_t expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0) };
    inline CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam& setExpiredTime(int32_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string privateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // urlPath Field Functions 
    bool hasUrlPath() const { return this->urlPath_ != nullptr;};
    void deleteUrlPath() { this->urlPath_ = nullptr;};
    inline string urlPath() const { DARABONBA_PTR_GET_DEFAULT(urlPath_, "") };
    inline CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam& setUrlPath(string urlPath) { DARABONBA_PTR_SET_VALUE(urlPath_, urlPath) };


  protected:
    // The validity period of the signature.
    // 
    // >  The value must be greater than 0. We recommend that you specify a value that is greater than 300.
    std::shared_ptr<int32_t> expiredTime_ = nullptr;
    // The private key.
    std::shared_ptr<string> privateKey_ = nullptr;
    // The URI path for server authentication.
    std::shared_ptr<string> urlPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
