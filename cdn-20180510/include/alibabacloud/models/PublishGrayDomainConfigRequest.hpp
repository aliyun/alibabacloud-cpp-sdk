// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHGRAYDOMAINCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHGRAYDOMAINCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class PublishGrayDomainConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishGrayDomainConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomCountryId, customCountryId_);
      DARABONBA_PTR_TO_JSON(CustomPercent, customPercent_);
      DARABONBA_PTR_TO_JSON(CustomProvinceId, customProvinceId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PublishMode, publishMode_);
    };
    friend void from_json(const Darabonba::Json& j, PublishGrayDomainConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomCountryId, customCountryId_);
      DARABONBA_PTR_FROM_JSON(CustomPercent, customPercent_);
      DARABONBA_PTR_FROM_JSON(CustomProvinceId, customProvinceId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PublishMode, publishMode_);
    };
    PublishGrayDomainConfigRequest() = default ;
    PublishGrayDomainConfigRequest(const PublishGrayDomainConfigRequest &) = default ;
    PublishGrayDomainConfigRequest(PublishGrayDomainConfigRequest &&) = default ;
    PublishGrayDomainConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishGrayDomainConfigRequest() = default ;
    PublishGrayDomainConfigRequest& operator=(const PublishGrayDomainConfigRequest &) = default ;
    PublishGrayDomainConfigRequest& operator=(PublishGrayDomainConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customCountryId_ == nullptr
        && return this->customPercent_ == nullptr && return this->customProvinceId_ == nullptr && return this->domainName_ == nullptr && return this->publishMode_ == nullptr; };
    // customCountryId Field Functions 
    bool hasCustomCountryId() const { return this->customCountryId_ != nullptr;};
    void deleteCustomCountryId() { this->customCountryId_ = nullptr;};
    inline int32_t customCountryId() const { DARABONBA_PTR_GET_DEFAULT(customCountryId_, 0) };
    inline PublishGrayDomainConfigRequest& setCustomCountryId(int32_t customCountryId) { DARABONBA_PTR_SET_VALUE(customCountryId_, customCountryId) };


    // customPercent Field Functions 
    bool hasCustomPercent() const { return this->customPercent_ != nullptr;};
    void deleteCustomPercent() { this->customPercent_ = nullptr;};
    inline int32_t customPercent() const { DARABONBA_PTR_GET_DEFAULT(customPercent_, 0) };
    inline PublishGrayDomainConfigRequest& setCustomPercent(int32_t customPercent) { DARABONBA_PTR_SET_VALUE(customPercent_, customPercent) };


    // customProvinceId Field Functions 
    bool hasCustomProvinceId() const { return this->customProvinceId_ != nullptr;};
    void deleteCustomProvinceId() { this->customProvinceId_ = nullptr;};
    inline int32_t customProvinceId() const { DARABONBA_PTR_GET_DEFAULT(customProvinceId_, 0) };
    inline PublishGrayDomainConfigRequest& setCustomProvinceId(int32_t customProvinceId) { DARABONBA_PTR_SET_VALUE(customProvinceId_, customProvinceId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline PublishGrayDomainConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // publishMode Field Functions 
    bool hasPublishMode() const { return this->publishMode_ != nullptr;};
    void deletePublishMode() { this->publishMode_ = nullptr;};
    inline string publishMode() const { DARABONBA_PTR_GET_DEFAULT(publishMode_, "") };
    inline PublishGrayDomainConfigRequest& setPublishMode(string publishMode) { DARABONBA_PTR_SET_VALUE(publishMode_, publishMode) };


  protected:
    std::shared_ptr<int32_t> customCountryId_ = nullptr;
    std::shared_ptr<int32_t> customPercent_ = nullptr;
    std::shared_ptr<int32_t> customProvinceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> publishMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
