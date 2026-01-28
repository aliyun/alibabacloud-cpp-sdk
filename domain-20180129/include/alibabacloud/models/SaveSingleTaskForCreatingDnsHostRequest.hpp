// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORCREATINGDNSHOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORCREATINGDNSHOSTREQUEST_HPP_
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
  class SaveSingleTaskForCreatingDnsHostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForCreatingDnsHostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DnsName, dnsName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForCreatingDnsHostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsName, dnsName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveSingleTaskForCreatingDnsHostRequest() = default ;
    SaveSingleTaskForCreatingDnsHostRequest(const SaveSingleTaskForCreatingDnsHostRequest &) = default ;
    SaveSingleTaskForCreatingDnsHostRequest(SaveSingleTaskForCreatingDnsHostRequest &&) = default ;
    SaveSingleTaskForCreatingDnsHostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForCreatingDnsHostRequest() = default ;
    SaveSingleTaskForCreatingDnsHostRequest& operator=(const SaveSingleTaskForCreatingDnsHostRequest &) = default ;
    SaveSingleTaskForCreatingDnsHostRequest& operator=(SaveSingleTaskForCreatingDnsHostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsName_ == nullptr
        && this->instanceId_ == nullptr && this->ip_ == nullptr && this->lang_ == nullptr && this->userClientIp_ == nullptr; };
    // dnsName Field Functions 
    bool hasDnsName() const { return this->dnsName_ != nullptr;};
    void deleteDnsName() { this->dnsName_ = nullptr;};
    inline string getDnsName() const { DARABONBA_PTR_GET_DEFAULT(dnsName_, "") };
    inline SaveSingleTaskForCreatingDnsHostRequest& setDnsName(string dnsName) { DARABONBA_PTR_SET_VALUE(dnsName_, dnsName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveSingleTaskForCreatingDnsHostRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline const vector<string> & getIp() const { DARABONBA_PTR_GET_CONST(ip_, vector<string>) };
    inline vector<string> getIp() { DARABONBA_PTR_GET(ip_, vector<string>) };
    inline SaveSingleTaskForCreatingDnsHostRequest& setIp(const vector<string> & ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };
    inline SaveSingleTaskForCreatingDnsHostRequest& setIp(vector<string> && ip) { DARABONBA_PTR_SET_RVALUE(ip_, ip) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveSingleTaskForCreatingDnsHostRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveSingleTaskForCreatingDnsHostRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> dnsName_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> ip_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
