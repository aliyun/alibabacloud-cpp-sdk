// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddCustomLineRequestIpSegment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddCustomLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(IpSegment, ipSegment_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LineName, lineName_);
    };
    friend void from_json(const Darabonba::Json& j, AddCustomLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(IpSegment, ipSegment_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LineName, lineName_);
    };
    AddCustomLineRequest() = default ;
    AddCustomLineRequest(const AddCustomLineRequest &) = default ;
    AddCustomLineRequest(AddCustomLineRequest &&) = default ;
    AddCustomLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomLineRequest() = default ;
    AddCustomLineRequest& operator=(const AddCustomLineRequest &) = default ;
    AddCustomLineRequest& operator=(AddCustomLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->ipSegment_ != nullptr && this->lang_ != nullptr && this->lineName_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddCustomLineRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ipSegment Field Functions 
    bool hasIpSegment() const { return this->ipSegment_ != nullptr;};
    void deleteIpSegment() { this->ipSegment_ = nullptr;};
    inline const vector<AddCustomLineRequestIpSegment> & ipSegment() const { DARABONBA_PTR_GET_CONST(ipSegment_, vector<AddCustomLineRequestIpSegment>) };
    inline vector<AddCustomLineRequestIpSegment> ipSegment() { DARABONBA_PTR_GET(ipSegment_, vector<AddCustomLineRequestIpSegment>) };
    inline AddCustomLineRequest& setIpSegment(const vector<AddCustomLineRequestIpSegment> & ipSegment) { DARABONBA_PTR_SET_VALUE(ipSegment_, ipSegment) };
    inline AddCustomLineRequest& setIpSegment(vector<AddCustomLineRequestIpSegment> && ipSegment) { DARABONBA_PTR_SET_RVALUE(ipSegment_, ipSegment) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddCustomLineRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lineName Field Functions 
    bool hasLineName() const { return this->lineName_ != nullptr;};
    void deleteLineName() { this->lineName_ = nullptr;};
    inline string lineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
    inline AddCustomLineRequest& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


  protected:
    // The domain name. You can call the [DescribeDomains](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomains?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The CIDR blocks.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddCustomLineRequestIpSegment>> ipSegment_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the custom line.
    // 
    // This parameter is required.
    std::shared_ptr<string> lineName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
