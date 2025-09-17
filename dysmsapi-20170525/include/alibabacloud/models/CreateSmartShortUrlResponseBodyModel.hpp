// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMARTSHORTURLRESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_CREATESMARTSHORTURLRESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateSmartShortUrlResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmartShortUrlResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ShortName, shortName_);
      DARABONBA_PTR_TO_JSON(ShortUrl, shortUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmartShortUrlResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ShortName, shortName_);
      DARABONBA_PTR_FROM_JSON(ShortUrl, shortUrl_);
    };
    CreateSmartShortUrlResponseBodyModel() = default ;
    CreateSmartShortUrlResponseBodyModel(const CreateSmartShortUrlResponseBodyModel &) = default ;
    CreateSmartShortUrlResponseBodyModel(CreateSmartShortUrlResponseBodyModel &&) = default ;
    CreateSmartShortUrlResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmartShortUrlResponseBodyModel() = default ;
    CreateSmartShortUrlResponseBodyModel& operator=(const CreateSmartShortUrlResponseBodyModel &) = default ;
    CreateSmartShortUrlResponseBodyModel& operator=(CreateSmartShortUrlResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->expiration_ != nullptr && this->phoneNumber_ != nullptr && this->shortName_ != nullptr && this->shortUrl_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateSmartShortUrlResponseBodyModel& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline int64_t expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, 0L) };
    inline CreateSmartShortUrlResponseBodyModel& setExpiration(int64_t expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline CreateSmartShortUrlResponseBodyModel& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // shortName Field Functions 
    bool hasShortName() const { return this->shortName_ != nullptr;};
    void deleteShortName() { this->shortName_ = nullptr;};
    inline string shortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
    inline CreateSmartShortUrlResponseBodyModel& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


    // shortUrl Field Functions 
    bool hasShortUrl() const { return this->shortUrl_ != nullptr;};
    void deleteShortUrl() { this->shortUrl_ = nullptr;};
    inline string shortUrl() const { DARABONBA_PTR_GET_DEFAULT(shortUrl_, "") };
    inline CreateSmartShortUrlResponseBodyModel& setShortUrl(string shortUrl) { DARABONBA_PTR_SET_VALUE(shortUrl_, shortUrl) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int64_t> expiration_ = nullptr;
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> shortName_ = nullptr;
    std::shared_ptr<string> shortUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
