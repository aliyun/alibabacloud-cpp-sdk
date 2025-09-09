// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRESSPOOLAVAILABLECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRESSPOOLAVAILABLECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAddressPoolAvailableConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAddressPoolAvailableConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAddressPoolAvailableConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeDnsGtmAddressPoolAvailableConfigRequest() = default ;
    DescribeDnsGtmAddressPoolAvailableConfigRequest(const DescribeDnsGtmAddressPoolAvailableConfigRequest &) = default ;
    DescribeDnsGtmAddressPoolAvailableConfigRequest(DescribeDnsGtmAddressPoolAvailableConfigRequest &&) = default ;
    DescribeDnsGtmAddressPoolAvailableConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAddressPoolAvailableConfigRequest() = default ;
    DescribeDnsGtmAddressPoolAvailableConfigRequest& operator=(const DescribeDnsGtmAddressPoolAvailableConfigRequest &) = default ;
    DescribeDnsGtmAddressPoolAvailableConfigRequest& operator=(DescribeDnsGtmAddressPoolAvailableConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->lang_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDnsGtmAddressPoolAvailableConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDnsGtmAddressPoolAvailableConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The language to return some response parameters. Default value: en. Valid values: en, zh, and ja.
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
