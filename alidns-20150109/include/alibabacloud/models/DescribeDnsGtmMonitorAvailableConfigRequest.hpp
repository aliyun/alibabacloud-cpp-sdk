// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmMonitorAvailableConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmMonitorAvailableConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmMonitorAvailableConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeDnsGtmMonitorAvailableConfigRequest() = default ;
    DescribeDnsGtmMonitorAvailableConfigRequest(const DescribeDnsGtmMonitorAvailableConfigRequest &) = default ;
    DescribeDnsGtmMonitorAvailableConfigRequest(DescribeDnsGtmMonitorAvailableConfigRequest &&) = default ;
    DescribeDnsGtmMonitorAvailableConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmMonitorAvailableConfigRequest() = default ;
    DescribeDnsGtmMonitorAvailableConfigRequest& operator=(const DescribeDnsGtmMonitorAvailableConfigRequest &) = default ;
    DescribeDnsGtmMonitorAvailableConfigRequest& operator=(DescribeDnsGtmMonitorAvailableConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDnsGtmMonitorAvailableConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The language of the values of specific response parameters. Default value: en. Valid values: en, zh, and ja.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
