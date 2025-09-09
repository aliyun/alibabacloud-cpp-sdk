// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSFERDOMAINSRESPONSEBODYDOMAINTRANSFERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSFERDOMAINSRESPONSEBODYDOMAINTRANSFERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeTransferDomainsResponseBodyDomainTransfers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransferDomainsResponseBodyDomainTransfers& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTransfer, domainTransfer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransferDomainsResponseBodyDomainTransfers& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTransfer, domainTransfer_);
    };
    DescribeTransferDomainsResponseBodyDomainTransfers() = default ;
    DescribeTransferDomainsResponseBodyDomainTransfers(const DescribeTransferDomainsResponseBodyDomainTransfers &) = default ;
    DescribeTransferDomainsResponseBodyDomainTransfers(DescribeTransferDomainsResponseBodyDomainTransfers &&) = default ;
    DescribeTransferDomainsResponseBodyDomainTransfers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransferDomainsResponseBodyDomainTransfers() = default ;
    DescribeTransferDomainsResponseBodyDomainTransfers& operator=(const DescribeTransferDomainsResponseBodyDomainTransfers &) = default ;
    DescribeTransferDomainsResponseBodyDomainTransfers& operator=(DescribeTransferDomainsResponseBodyDomainTransfers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainTransfer_ != nullptr; };
    // domainTransfer Field Functions 
    bool hasDomainTransfer() const { return this->domainTransfer_ != nullptr;};
    void deleteDomainTransfer() { this->domainTransfer_ = nullptr;};
    inline const vector<Models::DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer> & domainTransfer() const { DARABONBA_PTR_GET_CONST(domainTransfer_, vector<Models::DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer>) };
    inline vector<Models::DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer> domainTransfer() { DARABONBA_PTR_GET(domainTransfer_, vector<Models::DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer>) };
    inline DescribeTransferDomainsResponseBodyDomainTransfers& setDomainTransfer(const vector<Models::DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer> & domainTransfer) { DARABONBA_PTR_SET_VALUE(domainTransfer_, domainTransfer) };
    inline DescribeTransferDomainsResponseBodyDomainTransfers& setDomainTransfer(vector<Models::DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer> && domainTransfer) { DARABONBA_PTR_SET_RVALUE(domainTransfer_, domainTransfer) };


  protected:
    std::shared_ptr<vector<Models::DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer>> domainTransfer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
