// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSMODEREQUEST_HPP_
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
  class DescribeWebAccessModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAccessModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAccessModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
    };
    DescribeWebAccessModeRequest() = default ;
    DescribeWebAccessModeRequest(const DescribeWebAccessModeRequest &) = default ;
    DescribeWebAccessModeRequest(DescribeWebAccessModeRequest &&) = default ;
    DescribeWebAccessModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAccessModeRequest() = default ;
    DescribeWebAccessModeRequest& operator=(const DescribeWebAccessModeRequest &) = default ;
    DescribeWebAccessModeRequest& operator=(DescribeWebAccessModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domains_ != nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> domains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline DescribeWebAccessModeRequest& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeWebAccessModeRequest& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


  protected:
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for a domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> domains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
