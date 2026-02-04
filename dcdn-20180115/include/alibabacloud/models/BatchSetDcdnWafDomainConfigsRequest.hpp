// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETDCDNWAFDOMAINCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETDCDNWAFDOMAINCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchSetDcdnWafDomainConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetDcdnWafDomainConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIpTag, clientIpTag_);
      DARABONBA_PTR_TO_JSON(DefenseStatus, defenseStatus_);
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetDcdnWafDomainConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIpTag, clientIpTag_);
      DARABONBA_PTR_FROM_JSON(DefenseStatus, defenseStatus_);
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
    };
    BatchSetDcdnWafDomainConfigsRequest() = default ;
    BatchSetDcdnWafDomainConfigsRequest(const BatchSetDcdnWafDomainConfigsRequest &) = default ;
    BatchSetDcdnWafDomainConfigsRequest(BatchSetDcdnWafDomainConfigsRequest &&) = default ;
    BatchSetDcdnWafDomainConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetDcdnWafDomainConfigsRequest() = default ;
    BatchSetDcdnWafDomainConfigsRequest& operator=(const BatchSetDcdnWafDomainConfigsRequest &) = default ;
    BatchSetDcdnWafDomainConfigsRequest& operator=(BatchSetDcdnWafDomainConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIpTag_ == nullptr
        && this->defenseStatus_ == nullptr && this->domainNames_ == nullptr; };
    // clientIpTag Field Functions 
    bool hasClientIpTag() const { return this->clientIpTag_ != nullptr;};
    void deleteClientIpTag() { this->clientIpTag_ = nullptr;};
    inline string getClientIpTag() const { DARABONBA_PTR_GET_DEFAULT(clientIpTag_, "") };
    inline BatchSetDcdnWafDomainConfigsRequest& setClientIpTag(string clientIpTag) { DARABONBA_PTR_SET_VALUE(clientIpTag_, clientIpTag) };


    // defenseStatus Field Functions 
    bool hasDefenseStatus() const { return this->defenseStatus_ != nullptr;};
    void deleteDefenseStatus() { this->defenseStatus_ = nullptr;};
    inline string getDefenseStatus() const { DARABONBA_PTR_GET_DEFAULT(defenseStatus_, "") };
    inline BatchSetDcdnWafDomainConfigsRequest& setDefenseStatus(string defenseStatus) { DARABONBA_PTR_SET_VALUE(defenseStatus_, defenseStatus) };


    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string getDomainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline BatchSetDcdnWafDomainConfigsRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


  protected:
    // Specifies the header that records the IP address to be obtained. If the default header is selected, the value of this parameter is empty. If a custom header is selected, the value of this parameter is the value specified by the user. Separate multiple values with commas (,). You can specify a maximum of five values.
    shared_ptr<string> clientIpTag_ {};
    // The protection status of the domain name. Valid values: on, off, and empty string.
    // 
    // *   When you add a domain name, the value of this parameter is **on**, and the value of ClientIpTag takes effect, which is empty if the default header is selected and is the value specified by the user if a custom header is selected.
    // *   When you delete a domain name, the value of this parameter is **off**, and the value of ClientIpTag does not take effect.
    // *   When you only modify the value of ClientIpTag, the value of DefenseStatus is an empty string.
    shared_ptr<string> defenseStatus_ {};
    // The protected domain names for which you want to change the protection status. You can specify up to 50 domain names. Separate multiple domain names with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> domainNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
