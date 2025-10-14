// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateCustomLineRequestIpSegment.hpp>
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
    virtual bool empty() const override { return this->ipSegment_ == nullptr
        && return this->lang_ == nullptr && return this->lineId_ == nullptr && return this->lineName_ == nullptr; };
    // ipSegment Field Functions 
    bool hasIpSegment() const { return this->ipSegment_ != nullptr;};
    void deleteIpSegment() { this->ipSegment_ = nullptr;};
    inline const vector<UpdateCustomLineRequestIpSegment> & ipSegment() const { DARABONBA_PTR_GET_CONST(ipSegment_, vector<UpdateCustomLineRequestIpSegment>) };
    inline vector<UpdateCustomLineRequestIpSegment> ipSegment() { DARABONBA_PTR_GET(ipSegment_, vector<UpdateCustomLineRequestIpSegment>) };
    inline UpdateCustomLineRequest& setIpSegment(const vector<UpdateCustomLineRequestIpSegment> & ipSegment) { DARABONBA_PTR_SET_VALUE(ipSegment_, ipSegment) };
    inline UpdateCustomLineRequest& setIpSegment(vector<UpdateCustomLineRequestIpSegment> && ipSegment) { DARABONBA_PTR_SET_RVALUE(ipSegment_, ipSegment) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateCustomLineRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lineId Field Functions 
    bool hasLineId() const { return this->lineId_ != nullptr;};
    void deleteLineId() { this->lineId_ = nullptr;};
    inline int64_t lineId() const { DARABONBA_PTR_GET_DEFAULT(lineId_, 0L) };
    inline UpdateCustomLineRequest& setLineId(int64_t lineId) { DARABONBA_PTR_SET_VALUE(lineId_, lineId) };


    // lineName Field Functions 
    bool hasLineName() const { return this->lineName_ != nullptr;};
    void deleteLineName() { this->lineName_ = nullptr;};
    inline string lineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
    inline UpdateCustomLineRequest& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


  protected:
    // The CIDR blocks. Separate IP addresses with a hyphen (-). Enter a CIDR block in each row. You can enter 1 to 50 CIDR blocks at a time. If a CIDR block contains only one IP address, enter the IP address in the format of IP1-IP1. Different CIDR blocks cannot be overlapped.
    std::shared_ptr<vector<UpdateCustomLineRequestIpSegment>> ipSegment_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The unique ID of the custom line. You can call the [DescribeCustomLines](https://www.alibabacloud.com/help/en/dns/api-alidns-2015-01-09-describecustomlines?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the unique ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> lineId_ = nullptr;
    // The name of the custom line. The name must be 1 to 20 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    std::shared_ptr<string> lineName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
