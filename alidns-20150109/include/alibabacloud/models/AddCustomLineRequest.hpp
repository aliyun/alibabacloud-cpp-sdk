// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class IpSegment : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpSegment& obj) { 
        DARABONBA_PTR_TO_JSON(EndIp, endIp_);
        DARABONBA_PTR_TO_JSON(StartIp, startIp_);
      };
      friend void from_json(const Darabonba::Json& j, IpSegment& obj) { 
        DARABONBA_PTR_FROM_JSON(EndIp, endIp_);
        DARABONBA_PTR_FROM_JSON(StartIp, startIp_);
      };
      IpSegment() = default ;
      IpSegment(const IpSegment &) = default ;
      IpSegment(IpSegment &&) = default ;
      IpSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpSegment() = default ;
      IpSegment& operator=(const IpSegment &) = default ;
      IpSegment& operator=(IpSegment &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endIp_ == nullptr
        && this->startIp_ == nullptr; };
      // endIp Field Functions 
      bool hasEndIp() const { return this->endIp_ != nullptr;};
      void deleteEndIp() { this->endIp_ = nullptr;};
      inline string getEndIp() const { DARABONBA_PTR_GET_DEFAULT(endIp_, "") };
      inline IpSegment& setEndIp(string endIp) { DARABONBA_PTR_SET_VALUE(endIp_, endIp) };


      // startIp Field Functions 
      bool hasStartIp() const { return this->startIp_ != nullptr;};
      void deleteStartIp() { this->startIp_ = nullptr;};
      inline string getStartIp() const { DARABONBA_PTR_GET_DEFAULT(startIp_, "") };
      inline IpSegment& setStartIp(string startIp) { DARABONBA_PTR_SET_VALUE(startIp_, startIp) };


    protected:
      // The end IP address of the CIDR block.
      shared_ptr<string> endIp_ {};
      // The start IP address of the CIDR block.
      shared_ptr<string> startIp_ {};
    };

    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->ipSegment_ == nullptr && this->lang_ == nullptr && this->lineName_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddCustomLineRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ipSegment Field Functions 
    bool hasIpSegment() const { return this->ipSegment_ != nullptr;};
    void deleteIpSegment() { this->ipSegment_ = nullptr;};
    inline const vector<AddCustomLineRequest::IpSegment> & getIpSegment() const { DARABONBA_PTR_GET_CONST(ipSegment_, vector<AddCustomLineRequest::IpSegment>) };
    inline vector<AddCustomLineRequest::IpSegment> getIpSegment() { DARABONBA_PTR_GET(ipSegment_, vector<AddCustomLineRequest::IpSegment>) };
    inline AddCustomLineRequest& setIpSegment(const vector<AddCustomLineRequest::IpSegment> & ipSegment) { DARABONBA_PTR_SET_VALUE(ipSegment_, ipSegment) };
    inline AddCustomLineRequest& setIpSegment(vector<AddCustomLineRequest::IpSegment> && ipSegment) { DARABONBA_PTR_SET_RVALUE(ipSegment_, ipSegment) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddCustomLineRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lineName Field Functions 
    bool hasLineName() const { return this->lineName_ != nullptr;};
    void deleteLineName() { this->lineName_ = nullptr;};
    inline string getLineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
    inline AddCustomLineRequest& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


  protected:
    // The domain name. You can call the [DescribeDomains](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomains?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The CIDR blocks.
    // 
    // This parameter is required.
    shared_ptr<vector<AddCustomLineRequest::IpSegment>> ipSegment_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The name of the custom line.
    // 
    // This parameter is required.
    shared_ptr<string> lineName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
