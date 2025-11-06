// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORMODIFYINGDNSHOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORMODIFYINGDNSHOSTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForModifyingDnsHostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForModifyingDnsHostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DnsName, dnsName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForModifyingDnsHostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsName, dnsName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveSingleTaskForModifyingDnsHostRequest() = default ;
    SaveSingleTaskForModifyingDnsHostRequest(const SaveSingleTaskForModifyingDnsHostRequest &) = default ;
    SaveSingleTaskForModifyingDnsHostRequest(SaveSingleTaskForModifyingDnsHostRequest &&) = default ;
    SaveSingleTaskForModifyingDnsHostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForModifyingDnsHostRequest() = default ;
    SaveSingleTaskForModifyingDnsHostRequest& operator=(const SaveSingleTaskForModifyingDnsHostRequest &) = default ;
    SaveSingleTaskForModifyingDnsHostRequest& operator=(SaveSingleTaskForModifyingDnsHostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsName_ == nullptr
        && return this->instanceId_ == nullptr && return this->ip_ == nullptr && return this->lang_ == nullptr && return this->userClientIp_ == nullptr; };
    // dnsName Field Functions 
    bool hasDnsName() const { return this->dnsName_ != nullptr;};
    void deleteDnsName() { this->dnsName_ = nullptr;};
    inline string dnsName() const { DARABONBA_PTR_GET_DEFAULT(dnsName_, "") };
    inline SaveSingleTaskForModifyingDnsHostRequest& setDnsName(string dnsName) { DARABONBA_PTR_SET_VALUE(dnsName_, dnsName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveSingleTaskForModifyingDnsHostRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline const vector<string> & ip() const { DARABONBA_PTR_GET_CONST(ip_, vector<string>) };
    inline vector<string> ip() { DARABONBA_PTR_GET(ip_, vector<string>) };
    inline SaveSingleTaskForModifyingDnsHostRequest& setIp(const vector<string> & ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };
    inline SaveSingleTaskForModifyingDnsHostRequest& setIp(vector<string> && ip) { DARABONBA_PTR_SET_RVALUE(ip_, ip) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveSingleTaskForModifyingDnsHostRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveSingleTaskForModifyingDnsHostRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dnsName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> ip_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
