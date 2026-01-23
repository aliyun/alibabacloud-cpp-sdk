// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETNETWORKBLACKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETNETWORKBLACKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class SetNetworkBlacklistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetNetworkBlacklistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainBlacklist, domainBlacklist_);
      DARABONBA_PTR_TO_JSON(IpBlacklist, ipBlacklist_);
    };
    friend void from_json(const Darabonba::Json& j, SetNetworkBlacklistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainBlacklist, domainBlacklist_);
      DARABONBA_PTR_FROM_JSON(IpBlacklist, ipBlacklist_);
    };
    SetNetworkBlacklistRequest() = default ;
    SetNetworkBlacklistRequest(const SetNetworkBlacklistRequest &) = default ;
    SetNetworkBlacklistRequest(SetNetworkBlacklistRequest &&) = default ;
    SetNetworkBlacklistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetNetworkBlacklistRequest() = default ;
    SetNetworkBlacklistRequest& operator=(const SetNetworkBlacklistRequest &) = default ;
    SetNetworkBlacklistRequest& operator=(SetNetworkBlacklistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainBlacklist_ == nullptr
        && this->ipBlacklist_ == nullptr; };
    // domainBlacklist Field Functions 
    bool hasDomainBlacklist() const { return this->domainBlacklist_ != nullptr;};
    void deleteDomainBlacklist() { this->domainBlacklist_ = nullptr;};
    inline const vector<string> & getDomainBlacklist() const { DARABONBA_PTR_GET_CONST(domainBlacklist_, vector<string>) };
    inline vector<string> getDomainBlacklist() { DARABONBA_PTR_GET(domainBlacklist_, vector<string>) };
    inline SetNetworkBlacklistRequest& setDomainBlacklist(const vector<string> & domainBlacklist) { DARABONBA_PTR_SET_VALUE(domainBlacklist_, domainBlacklist) };
    inline SetNetworkBlacklistRequest& setDomainBlacklist(vector<string> && domainBlacklist) { DARABONBA_PTR_SET_RVALUE(domainBlacklist_, domainBlacklist) };


    // ipBlacklist Field Functions 
    bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
    void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
    inline const vector<string> & getIpBlacklist() const { DARABONBA_PTR_GET_CONST(ipBlacklist_, vector<string>) };
    inline vector<string> getIpBlacklist() { DARABONBA_PTR_GET(ipBlacklist_, vector<string>) };
    inline SetNetworkBlacklistRequest& setIpBlacklist(const vector<string> & ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };
    inline SetNetworkBlacklistRequest& setIpBlacklist(vector<string> && ipBlacklist) { DARABONBA_PTR_SET_RVALUE(ipBlacklist_, ipBlacklist) };


  protected:
    shared_ptr<vector<string>> domainBlacklist_ {};
    shared_ptr<vector<string>> ipBlacklist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
