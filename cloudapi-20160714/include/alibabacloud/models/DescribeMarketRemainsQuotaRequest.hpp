// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMARKETREMAINSQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMARKETREMAINSQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeMarketRemainsQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMarketRemainsQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMarketRemainsQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeMarketRemainsQuotaRequest() = default ;
    DescribeMarketRemainsQuotaRequest(const DescribeMarketRemainsQuotaRequest &) = default ;
    DescribeMarketRemainsQuotaRequest(DescribeMarketRemainsQuotaRequest &&) = default ;
    DescribeMarketRemainsQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMarketRemainsQuotaRequest() = default ;
    DescribeMarketRemainsQuotaRequest& operator=(const DescribeMarketRemainsQuotaRequest &) = default ;
    DescribeMarketRemainsQuotaRequest& operator=(DescribeMarketRemainsQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->securityToken_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeMarketRemainsQuotaRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeMarketRemainsQuotaRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The custom domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
