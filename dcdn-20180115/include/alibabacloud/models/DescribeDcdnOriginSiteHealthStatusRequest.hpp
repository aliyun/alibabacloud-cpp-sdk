// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNORIGINSITEHEALTHSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNORIGINSITEHEALTHSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnOriginSiteHealthStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnOriginSiteHealthStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnOriginSiteHealthStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    DescribeDcdnOriginSiteHealthStatusRequest() = default ;
    DescribeDcdnOriginSiteHealthStatusRequest(const DescribeDcdnOriginSiteHealthStatusRequest &) = default ;
    DescribeDcdnOriginSiteHealthStatusRequest(DescribeDcdnOriginSiteHealthStatusRequest &&) = default ;
    DescribeDcdnOriginSiteHealthStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnOriginSiteHealthStatusRequest() = default ;
    DescribeDcdnOriginSiteHealthStatusRequest& operator=(const DescribeDcdnOriginSiteHealthStatusRequest &) = default ;
    DescribeDcdnOriginSiteHealthStatusRequest& operator=(DescribeDcdnOriginSiteHealthStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnOriginSiteHealthStatusRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // The accelerated domain name. You can specify only one domain name in each request.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
