// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMLINEREQUEST_HPP_
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
  class UpdateCustomLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpSegment, ipSegment_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LineId, lineId_);
      DARABONBA_PTR_TO_JSON(LineName, lineName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpSegment, ipSegment_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LineId, lineId_);
      DARABONBA_PTR_FROM_JSON(LineName, lineName_);
    };
    UpdateCustomLineRequest() = default ;
    UpdateCustomLineRequest(const UpdateCustomLineRequest &) = default ;
    UpdateCustomLineRequest(UpdateCustomLineRequest &&) = default ;
    UpdateCustomLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomLineRequest() = default ;
    UpdateCustomLineRequest& operator=(const UpdateCustomLineRequest &) = default ;
    UpdateCustomLineRequest& operator=(UpdateCustomLineRequest &&) = default ;
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

    virtual bool empty() const override { return this->ipSegment_ == nullptr
        && this->lang_ == nullptr && this->lineId_ == nullptr && this->lineName_ == nullptr; };
    // ipSegment Field Functions 
    bool hasIpSegment() const { return this->ipSegment_ != nullptr;};
    void deleteIpSegment() { this->ipSegment_ = nullptr;};
    inline const vector<UpdateCustomLineRequest::IpSegment> & getIpSegment() const { DARABONBA_PTR_GET_CONST(ipSegment_, vector<UpdateCustomLineRequest::IpSegment>) };
    inline vector<UpdateCustomLineRequest::IpSegment> getIpSegment() { DARABONBA_PTR_GET(ipSegment_, vector<UpdateCustomLineRequest::IpSegment>) };
    inline UpdateCustomLineRequest& setIpSegment(const vector<UpdateCustomLineRequest::IpSegment> & ipSegment) { DARABONBA_PTR_SET_VALUE(ipSegment_, ipSegment) };
    inline UpdateCustomLineRequest& setIpSegment(vector<UpdateCustomLineRequest::IpSegment> && ipSegment) { DARABONBA_PTR_SET_RVALUE(ipSegment_, ipSegment) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateCustomLineRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lineId Field Functions 
    bool hasLineId() const { return this->lineId_ != nullptr;};
    void deleteLineId() { this->lineId_ = nullptr;};
    inline int64_t getLineId() const { DARABONBA_PTR_GET_DEFAULT(lineId_, 0L) };
    inline UpdateCustomLineRequest& setLineId(int64_t lineId) { DARABONBA_PTR_SET_VALUE(lineId_, lineId) };


    // lineName Field Functions 
    bool hasLineName() const { return this->lineName_ != nullptr;};
    void deleteLineName() { this->lineName_ = nullptr;};
    inline string getLineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
    inline UpdateCustomLineRequest& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


  protected:
    // The CIDR blocks. Separate IP addresses with a hyphen (-). Enter a CIDR block in each row. You can enter 1 to 50 CIDR blocks at a time. If a CIDR block contains only one IP address, enter the IP address in the format of IP1-IP1. Different CIDR blocks cannot be overlapped.
    shared_ptr<vector<UpdateCustomLineRequest::IpSegment>> ipSegment_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The unique ID of the custom line. You can call the [DescribeCustomLines](https://www.alibabacloud.com/help/en/dns/api-alidns-2015-01-09-describecustomlines?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the unique ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> lineId_ {};
    // The name of the custom line. The name must be 1 to 20 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    shared_ptr<string> lineName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
