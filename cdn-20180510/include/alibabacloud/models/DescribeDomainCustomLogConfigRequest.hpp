// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCUSTOMLOGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCUSTOMLOGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainCustomLogConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCustomLogConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCustomLogConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    DescribeDomainCustomLogConfigRequest() = default ;
    DescribeDomainCustomLogConfigRequest(const DescribeDomainCustomLogConfigRequest &) = default ;
    DescribeDomainCustomLogConfigRequest(DescribeDomainCustomLogConfigRequest &&) = default ;
    DescribeDomainCustomLogConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCustomLogConfigRequest() = default ;
    DescribeDomainCustomLogConfigRequest& operator=(const DescribeDomainCustomLogConfigRequest &) = default ;
    DescribeDomainCustomLogConfigRequest& operator=(DescribeDomainCustomLogConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainCustomLogConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // The domain name. You can specify only one domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
