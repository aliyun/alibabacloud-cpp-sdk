// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMDOMAINSAMPLERATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMDOMAINSAMPLERATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DeleteCustomDomainSampleRateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomDomainSampleRateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomDomainSampleRateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
    };
    DeleteCustomDomainSampleRateRequest() = default ;
    DeleteCustomDomainSampleRateRequest(const DeleteCustomDomainSampleRateRequest &) = default ;
    DeleteCustomDomainSampleRateRequest(DeleteCustomDomainSampleRateRequest &&) = default ;
    DeleteCustomDomainSampleRateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomDomainSampleRateRequest() = default ;
    DeleteCustomDomainSampleRateRequest& operator=(const DeleteCustomDomainSampleRateRequest &) = default ;
    DeleteCustomDomainSampleRateRequest& operator=(DeleteCustomDomainSampleRateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainNames_ != nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string domainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline DeleteCustomDomainSampleRateRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


  protected:
    std::shared_ptr<string> domainNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
