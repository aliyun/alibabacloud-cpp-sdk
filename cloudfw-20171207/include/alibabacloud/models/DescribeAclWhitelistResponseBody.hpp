// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainGroupUseDns, domainGroupUseDns_);
      DARABONBA_PTR_TO_JSON(NatDomainGroupUseDns, natDomainGroupUseDns_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportMessageType, supportMessageType_);
      DARABONBA_PTR_TO_JSON(VpcDomainGroupUseDns, vpcDomainGroupUseDns_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainGroupUseDns, domainGroupUseDns_);
      DARABONBA_PTR_FROM_JSON(NatDomainGroupUseDns, natDomainGroupUseDns_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportMessageType, supportMessageType_);
      DARABONBA_PTR_FROM_JSON(VpcDomainGroupUseDns, vpcDomainGroupUseDns_);
    };
    DescribeAclWhitelistResponseBody() = default ;
    DescribeAclWhitelistResponseBody(const DescribeAclWhitelistResponseBody &) = default ;
    DescribeAclWhitelistResponseBody(DescribeAclWhitelistResponseBody &&) = default ;
    DescribeAclWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclWhitelistResponseBody() = default ;
    DescribeAclWhitelistResponseBody& operator=(const DescribeAclWhitelistResponseBody &) = default ;
    DescribeAclWhitelistResponseBody& operator=(DescribeAclWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainGroupUseDns_ == nullptr
        && return this->natDomainGroupUseDns_ == nullptr && return this->requestId_ == nullptr && return this->supportMessageType_ == nullptr && return this->vpcDomainGroupUseDns_ == nullptr; };
    // domainGroupUseDns Field Functions 
    bool hasDomainGroupUseDns() const { return this->domainGroupUseDns_ != nullptr;};
    void deleteDomainGroupUseDns() { this->domainGroupUseDns_ = nullptr;};
    inline bool domainGroupUseDns() const { DARABONBA_PTR_GET_DEFAULT(domainGroupUseDns_, false) };
    inline DescribeAclWhitelistResponseBody& setDomainGroupUseDns(bool domainGroupUseDns) { DARABONBA_PTR_SET_VALUE(domainGroupUseDns_, domainGroupUseDns) };


    // natDomainGroupUseDns Field Functions 
    bool hasNatDomainGroupUseDns() const { return this->natDomainGroupUseDns_ != nullptr;};
    void deleteNatDomainGroupUseDns() { this->natDomainGroupUseDns_ = nullptr;};
    inline bool natDomainGroupUseDns() const { DARABONBA_PTR_GET_DEFAULT(natDomainGroupUseDns_, false) };
    inline DescribeAclWhitelistResponseBody& setNatDomainGroupUseDns(bool natDomainGroupUseDns) { DARABONBA_PTR_SET_VALUE(natDomainGroupUseDns_, natDomainGroupUseDns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportMessageType Field Functions 
    bool hasSupportMessageType() const { return this->supportMessageType_ != nullptr;};
    void deleteSupportMessageType() { this->supportMessageType_ = nullptr;};
    inline bool supportMessageType() const { DARABONBA_PTR_GET_DEFAULT(supportMessageType_, false) };
    inline DescribeAclWhitelistResponseBody& setSupportMessageType(bool supportMessageType) { DARABONBA_PTR_SET_VALUE(supportMessageType_, supportMessageType) };


    // vpcDomainGroupUseDns Field Functions 
    bool hasVpcDomainGroupUseDns() const { return this->vpcDomainGroupUseDns_ != nullptr;};
    void deleteVpcDomainGroupUseDns() { this->vpcDomainGroupUseDns_ = nullptr;};
    inline bool vpcDomainGroupUseDns() const { DARABONBA_PTR_GET_DEFAULT(vpcDomainGroupUseDns_, false) };
    inline DescribeAclWhitelistResponseBody& setVpcDomainGroupUseDns(bool vpcDomainGroupUseDns) { DARABONBA_PTR_SET_VALUE(vpcDomainGroupUseDns_, vpcDomainGroupUseDns) };


  protected:
    std::shared_ptr<bool> domainGroupUseDns_ = nullptr;
    std::shared_ptr<bool> natDomainGroupUseDns_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> supportMessageType_ = nullptr;
    std::shared_ptr<bool> vpcDomainGroupUseDns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
