// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDOMAINBACKUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDOMAINBACKUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddDomainBackupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDomainBackupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
    };
    friend void from_json(const Darabonba::Json& j, AddDomainBackupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
    };
    AddDomainBackupRequest() = default ;
    AddDomainBackupRequest(const AddDomainBackupRequest &) = default ;
    AddDomainBackupRequest(AddDomainBackupRequest &&) = default ;
    AddDomainBackupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDomainBackupRequest() = default ;
    AddDomainBackupRequest& operator=(const AddDomainBackupRequest &) = default ;
    AddDomainBackupRequest& operator=(AddDomainBackupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->lang_ == nullptr && return this->periodType_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddDomainBackupRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddDomainBackupRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string periodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline AddDomainBackupRequest& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


  protected:
    // The domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    std::shared_ptr<string> lang_ = nullptr;
    // The backup cycle. Valid values:
    // 
    // *   DAY: backs up data on a daily basis.
    // *   HOUR: backs up data on an hourly basis.
    // 
    // This parameter is required.
    std::shared_ptr<string> periodType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
