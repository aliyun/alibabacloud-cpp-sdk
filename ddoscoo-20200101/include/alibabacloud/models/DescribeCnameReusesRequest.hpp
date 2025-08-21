// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECNAMEREUSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECNAMEREUSESREQUEST_HPP_
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
  class DescribeCnameReusesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCnameReusesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCnameReusesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeCnameReusesRequest() = default ;
    DescribeCnameReusesRequest(const DescribeCnameReusesRequest &) = default ;
    DescribeCnameReusesRequest(DescribeCnameReusesRequest &&) = default ;
    DescribeCnameReusesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCnameReusesRequest() = default ;
    DescribeCnameReusesRequest& operator=(const DescribeCnameReusesRequest &) = default ;
    DescribeCnameReusesRequest& operator=(DescribeCnameReusesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domains_ != nullptr
        && this->resourceGroupId_ != nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> domains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline DescribeCnameReusesRequest& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeCnameReusesRequest& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCnameReusesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The domain names of the websites. You can specify the domain names of up to 200 websites.
    // 
    // >  A forwarding rule must be configured for a domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> domains_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
