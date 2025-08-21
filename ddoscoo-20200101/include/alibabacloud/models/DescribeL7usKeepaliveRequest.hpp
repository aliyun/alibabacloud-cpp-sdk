// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL7USKEEPALIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL7USKEEPALIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeL7UsKeepaliveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL7UsKeepaliveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL7UsKeepaliveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    DescribeL7UsKeepaliveRequest() = default ;
    DescribeL7UsKeepaliveRequest(const DescribeL7UsKeepaliveRequest &) = default ;
    DescribeL7UsKeepaliveRequest(DescribeL7UsKeepaliveRequest &&) = default ;
    DescribeL7UsKeepaliveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL7UsKeepaliveRequest() = default ;
    DescribeL7UsKeepaliveRequest& operator=(const DescribeL7UsKeepaliveRequest &) = default ;
    DescribeL7UsKeepaliveRequest& operator=(DescribeL7UsKeepaliveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeL7UsKeepaliveRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    // The domain name of the website.
    // 
    // >  A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
