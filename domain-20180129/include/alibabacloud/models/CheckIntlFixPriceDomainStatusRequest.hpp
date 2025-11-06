// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINTLFIXPRICEDOMAINSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKINTLFIXPRICEDOMAINSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CheckIntlFixPriceDomainStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckIntlFixPriceDomainStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, CheckIntlFixPriceDomainStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    CheckIntlFixPriceDomainStatusRequest() = default ;
    CheckIntlFixPriceDomainStatusRequest(const CheckIntlFixPriceDomainStatusRequest &) = default ;
    CheckIntlFixPriceDomainStatusRequest(CheckIntlFixPriceDomainStatusRequest &&) = default ;
    CheckIntlFixPriceDomainStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckIntlFixPriceDomainStatusRequest() = default ;
    CheckIntlFixPriceDomainStatusRequest& operator=(const CheckIntlFixPriceDomainStatusRequest &) = default ;
    CheckIntlFixPriceDomainStatusRequest& operator=(CheckIntlFixPriceDomainStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CheckIntlFixPriceDomainStatusRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
