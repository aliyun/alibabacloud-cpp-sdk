// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYDOMAINOWNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYDOMAINOWNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class VerifyDomainOwnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyDomainOwnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyDomainOwnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
    };
    VerifyDomainOwnerRequest() = default ;
    VerifyDomainOwnerRequest(const VerifyDomainOwnerRequest &) = default ;
    VerifyDomainOwnerRequest(VerifyDomainOwnerRequest &&) = default ;
    VerifyDomainOwnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyDomainOwnerRequest() = default ;
    VerifyDomainOwnerRequest& operator=(const VerifyDomainOwnerRequest &) = default ;
    VerifyDomainOwnerRequest& operator=(VerifyDomainOwnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->instanceId_ == nullptr && return this->protocol_ == nullptr && return this->verifyType_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline VerifyDomainOwnerRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline VerifyDomainOwnerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline VerifyDomainOwnerRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // verifyType Field Functions 
    bool hasVerifyType() const { return this->verifyType_ != nullptr;};
    void deleteVerifyType() { this->verifyType_ = nullptr;};
    inline string verifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
    inline VerifyDomainOwnerRequest& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


  protected:
    // The domain name of which you want to verify the ownership.
    // 
    // You can specify this parameter to check whether a domain name is added to WAF. Fuzzy match is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The protocol type that is used for file verification. Specify this parameter when you set VerifyType to fileCheck. Valid values:
    // 
    // *   **HTTP**
    // *   **HTTPS**
    std::shared_ptr<string> protocol_ = nullptr;
    // The verification method. Valid values:
    // 
    // *   **dnsCheck**: DNS verification
    // *   **fileCheck**: file verification
    // 
    // This parameter is required.
    std::shared_ptr<string> verifyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
