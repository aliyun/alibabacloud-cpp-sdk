// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYVSDOMAINOWNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYVSDOMAINOWNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class VerifyVsDomainOwnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyVsDomainOwnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyVsDomainOwnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
    };
    VerifyVsDomainOwnerRequest() = default ;
    VerifyVsDomainOwnerRequest(const VerifyVsDomainOwnerRequest &) = default ;
    VerifyVsDomainOwnerRequest(VerifyVsDomainOwnerRequest &&) = default ;
    VerifyVsDomainOwnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyVsDomainOwnerRequest() = default ;
    VerifyVsDomainOwnerRequest& operator=(const VerifyVsDomainOwnerRequest &) = default ;
    VerifyVsDomainOwnerRequest& operator=(VerifyVsDomainOwnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->ownerId_ != nullptr && this->verifyType_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline VerifyVsDomainOwnerRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline VerifyVsDomainOwnerRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // verifyType Field Functions 
    bool hasVerifyType() const { return this->verifyType_ != nullptr;};
    void deleteVerifyType() { this->verifyType_ = nullptr;};
    inline string verifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
    inline VerifyVsDomainOwnerRequest& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> verifyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
