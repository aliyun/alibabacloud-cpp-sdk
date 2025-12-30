// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMAVAILABLEALERTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMAVAILABLEALERTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAvailableAlertGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAvailableAlertGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAvailableAlertGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeDnsGtmAvailableAlertGroupRequest() = default ;
    DescribeDnsGtmAvailableAlertGroupRequest(const DescribeDnsGtmAvailableAlertGroupRequest &) = default ;
    DescribeDnsGtmAvailableAlertGroupRequest(DescribeDnsGtmAvailableAlertGroupRequest &&) = default ;
    DescribeDnsGtmAvailableAlertGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAvailableAlertGroupRequest() = default ;
    DescribeDnsGtmAvailableAlertGroupRequest& operator=(const DescribeDnsGtmAvailableAlertGroupRequest &) = default ;
    DescribeDnsGtmAvailableAlertGroupRequest& operator=(DescribeDnsGtmAvailableAlertGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDnsGtmAvailableAlertGroupRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The language to return some response parameters. Default value: en. Valid values: en, zh, and ja.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
