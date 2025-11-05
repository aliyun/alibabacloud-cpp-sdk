// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYDOMAINOWNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYDOMAINOWNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class VerifyDomainOwnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyDomainOwnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyDomainOwnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
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
        && return this->verifyType_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline VerifyDomainOwnerRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // verifyType Field Functions 
    bool hasVerifyType() const { return this->verifyType_ != nullptr;};
    void deleteVerifyType() { this->verifyType_ = nullptr;};
    inline string verifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
    inline VerifyDomainOwnerRequest& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


  protected:
    // The domain name of which you want to verify the ownership. You can specify only one domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The verification method. Valid values:
    // 
    // *   **dnsCheck**: by DNS record
    // *   **fileCheck**: by verification file
    // 
    // This parameter is required.
    std::shared_ptr<string> verifyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
