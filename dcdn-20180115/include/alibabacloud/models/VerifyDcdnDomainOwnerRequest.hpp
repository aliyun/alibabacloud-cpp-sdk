// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYDCDNDOMAINOWNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYDCDNDOMAINOWNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class VerifyDcdnDomainOwnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyDcdnDomainOwnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyDcdnDomainOwnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
    };
    VerifyDcdnDomainOwnerRequest() = default ;
    VerifyDcdnDomainOwnerRequest(const VerifyDcdnDomainOwnerRequest &) = default ;
    VerifyDcdnDomainOwnerRequest(VerifyDcdnDomainOwnerRequest &&) = default ;
    VerifyDcdnDomainOwnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyDcdnDomainOwnerRequest() = default ;
    VerifyDcdnDomainOwnerRequest& operator=(const VerifyDcdnDomainOwnerRequest &) = default ;
    VerifyDcdnDomainOwnerRequest& operator=(VerifyDcdnDomainOwnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->verifyType_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline VerifyDcdnDomainOwnerRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // verifyType Field Functions 
    bool hasVerifyType() const { return this->verifyType_ != nullptr;};
    void deleteVerifyType() { this->verifyType_ = nullptr;};
    inline string getVerifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
    inline VerifyDcdnDomainOwnerRequest& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


  protected:
    // The domain name of which you want to verify the ownership. You can specify only one domain name in each call.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The verification method. Valid values:
    // 
    // *   **dnsCheck**: by DNS record
    // *   **fileCheck**: by verification file
    // 
    // This parameter is required.
    shared_ptr<string> verifyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
