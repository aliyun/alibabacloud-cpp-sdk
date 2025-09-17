// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERSIONDATAINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONVERSIONDATAINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class ConversionDataIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConversionDataIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversionRate, conversionRate_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReportTime, reportTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ConversionDataIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversionRate, conversionRate_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReportTime, reportTime_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ConversionDataIntlRequest() = default ;
    ConversionDataIntlRequest(const ConversionDataIntlRequest &) = default ;
    ConversionDataIntlRequest(ConversionDataIntlRequest &&) = default ;
    ConversionDataIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConversionDataIntlRequest() = default ;
    ConversionDataIntlRequest& operator=(const ConversionDataIntlRequest &) = default ;
    ConversionDataIntlRequest& operator=(ConversionDataIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conversionRate_ != nullptr
        && this->ownerId_ != nullptr && this->reportTime_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // conversionRate Field Functions 
    bool hasConversionRate() const { return this->conversionRate_ != nullptr;};
    void deleteConversionRate() { this->conversionRate_ = nullptr;};
    inline string conversionRate() const { DARABONBA_PTR_GET_DEFAULT(conversionRate_, "") };
    inline ConversionDataIntlRequest& setConversionRate(string conversionRate) { DARABONBA_PTR_SET_VALUE(conversionRate_, conversionRate) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ConversionDataIntlRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // reportTime Field Functions 
    bool hasReportTime() const { return this->reportTime_ != nullptr;};
    void deleteReportTime() { this->reportTime_ = nullptr;};
    inline int64_t reportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, 0L) };
    inline ConversionDataIntlRequest& setReportTime(int64_t reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ConversionDataIntlRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ConversionDataIntlRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The conversion rate.
    // 
    // > The value of this parameter is a double, and ranges from 0 to 1.
    // 
    // This parameter is required.
    std::shared_ptr<string> conversionRate_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The time point at which the conversion rate is monitored. The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // > If you do not specify this parameter, the current timestamp is used by default.
    std::shared_ptr<int64_t> reportTime_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
