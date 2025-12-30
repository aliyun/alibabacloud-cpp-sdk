// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class UpdateCustomLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DnsCategory, dnsCategory_);
      DARABONBA_PTR_TO_JSON(Ipv4s, ipv4s_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LineId, lineId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsCategory, dnsCategory_);
      DARABONBA_PTR_FROM_JSON(Ipv4s, ipv4s_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LineId, lineId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
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
    virtual bool empty() const override { return this->dnsCategory_ == nullptr
        && this->ipv4s_ == nullptr && this->lang_ == nullptr && this->lineId_ == nullptr && this->name_ == nullptr; };
    // dnsCategory Field Functions 
    bool hasDnsCategory() const { return this->dnsCategory_ != nullptr;};
    void deleteDnsCategory() { this->dnsCategory_ = nullptr;};
    inline string getDnsCategory() const { DARABONBA_PTR_GET_DEFAULT(dnsCategory_, "") };
    inline UpdateCustomLineRequest& setDnsCategory(string dnsCategory) { DARABONBA_PTR_SET_VALUE(dnsCategory_, dnsCategory) };


    // ipv4s Field Functions 
    bool hasIpv4s() const { return this->ipv4s_ != nullptr;};
    void deleteIpv4s() { this->ipv4s_ = nullptr;};
    inline const vector<string> & getIpv4s() const { DARABONBA_PTR_GET_CONST(ipv4s_, vector<string>) };
    inline vector<string> getIpv4s() { DARABONBA_PTR_GET(ipv4s_, vector<string>) };
    inline UpdateCustomLineRequest& setIpv4s(const vector<string> & ipv4s) { DARABONBA_PTR_SET_VALUE(ipv4s_, ipv4s) };
    inline UpdateCustomLineRequest& setIpv4s(vector<string> && ipv4s) { DARABONBA_PTR_SET_RVALUE(ipv4s_, ipv4s) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateCustomLineRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lineId Field Functions 
    bool hasLineId() const { return this->lineId_ != nullptr;};
    void deleteLineId() { this->lineId_ = nullptr;};
    inline string getLineId() const { DARABONBA_PTR_GET_DEFAULT(lineId_, "") };
    inline UpdateCustomLineRequest& setLineId(string lineId) { DARABONBA_PTR_SET_VALUE(lineId_, lineId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCustomLineRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> dnsCategory_ {};
    // The IPv4 CIDR blocks.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> ipv4s_ {};
    // The language.
    shared_ptr<string> lang_ {};
    // The unique ID of the custom line.
    // 
    // This parameter is required.
    shared_ptr<string> lineId_ {};
    // The name of the custom line.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
