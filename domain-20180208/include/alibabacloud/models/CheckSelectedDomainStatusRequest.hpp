// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSELECTEDDOMAINSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSELECTEDDOMAINSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class CheckSelectedDomainStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSelectedDomainStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSelectedDomainStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    CheckSelectedDomainStatusRequest() = default ;
    CheckSelectedDomainStatusRequest(const CheckSelectedDomainStatusRequest &) = default ;
    CheckSelectedDomainStatusRequest(CheckSelectedDomainStatusRequest &&) = default ;
    CheckSelectedDomainStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSelectedDomainStatusRequest() = default ;
    CheckSelectedDomainStatusRequest& operator=(const CheckSelectedDomainStatusRequest &) = default ;
    CheckSelectedDomainStatusRequest& operator=(CheckSelectedDomainStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CheckSelectedDomainStatusRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
