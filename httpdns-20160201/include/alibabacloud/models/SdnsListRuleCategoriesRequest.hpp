// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SDNSLISTRULECATEGORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SDNSLISTRULECATEGORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class SdnsListRuleCategoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SdnsListRuleCategoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, SdnsListRuleCategoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    SdnsListRuleCategoriesRequest() = default ;
    SdnsListRuleCategoriesRequest(const SdnsListRuleCategoriesRequest &) = default ;
    SdnsListRuleCategoriesRequest(SdnsListRuleCategoriesRequest &&) = default ;
    SdnsListRuleCategoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SdnsListRuleCategoriesRequest() = default ;
    SdnsListRuleCategoriesRequest& operator=(const SdnsListRuleCategoriesRequest &) = default ;
    SdnsListRuleCategoriesRequest& operator=(SdnsListRuleCategoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SdnsListRuleCategoriesRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // The domain name that is connected to HTTPDNS under the current account. This parameter is required.
    shared_ptr<string> domainName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
