// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainCnameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCnameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCnameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    DescribeDomainCnameRequest() = default ;
    DescribeDomainCnameRequest(const DescribeDomainCnameRequest &) = default ;
    DescribeDomainCnameRequest(DescribeDomainCnameRequest &&) = default ;
    DescribeDomainCnameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCnameRequest() = default ;
    DescribeDomainCnameRequest& operator=(const DescribeDomainCnameRequest &) = default ;
    DescribeDomainCnameRequest& operator=(DescribeDomainCnameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainCnameRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // The accelerated domain name that you want to query. Separate multiple domain names with commas (,). This parameter cannot be left empty.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
