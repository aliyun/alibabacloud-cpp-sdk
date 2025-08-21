// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGWEBIPSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGWEBIPSETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigWebIpSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigWebIpSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlackList, blackList_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigWebIpSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackList, blackList_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    ConfigWebIpSetRequest() = default ;
    ConfigWebIpSetRequest(const ConfigWebIpSetRequest &) = default ;
    ConfigWebIpSetRequest(ConfigWebIpSetRequest &&) = default ;
    ConfigWebIpSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigWebIpSetRequest() = default ;
    ConfigWebIpSetRequest& operator=(const ConfigWebIpSetRequest &) = default ;
    ConfigWebIpSetRequest& operator=(ConfigWebIpSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blackList_ != nullptr
        && this->domain_ != nullptr && this->resourceGroupId_ != nullptr && this->whiteList_ != nullptr; };
    // blackList Field Functions 
    bool hasBlackList() const { return this->blackList_ != nullptr;};
    void deleteBlackList() { this->blackList_ = nullptr;};
    inline const vector<string> & blackList() const { DARABONBA_PTR_GET_CONST(blackList_, vector<string>) };
    inline vector<string> blackList() { DARABONBA_PTR_GET(blackList_, vector<string>) };
    inline ConfigWebIpSetRequest& setBlackList(const vector<string> & blackList) { DARABONBA_PTR_SET_VALUE(blackList_, blackList) };
    inline ConfigWebIpSetRequest& setBlackList(vector<string> && blackList) { DARABONBA_PTR_SET_RVALUE(blackList_, blackList) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ConfigWebIpSetRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigWebIpSetRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & whiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> whiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline ConfigWebIpSetRequest& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline ConfigWebIpSetRequest& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    // The IP addresses and CIDR blocks in the blacklist. You can add up to 200 IP addresses or CIDR blocks to the blacklist.
    std::shared_ptr<vector<string>> blackList_ = nullptr;
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The IP addresses and CIDR blocks in the whitelist. You can add up to 200 IP addresses or CIDR blocks to the whitelist.
    std::shared_ptr<vector<string>> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
