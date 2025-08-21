// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSnatTableEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatTableEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_TO_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_TO_JSON(SnatIp, snatIp_);
      DARABONBA_PTR_TO_JSON(SnatIps, snatIps_);
      DARABONBA_PTR_TO_JSON(SourceCIDR, sourceCIDR_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnatTableEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_FROM_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_FROM_JSON(SnatIp, snatIp_);
      DARABONBA_PTR_FROM_JSON(SnatIps, snatIps_);
      DARABONBA_PTR_FROM_JSON(SourceCIDR, sourceCIDR_);
    };
    DescribeSnatTableEntriesRequest() = default ;
    DescribeSnatTableEntriesRequest(const DescribeSnatTableEntriesRequest &) = default ;
    DescribeSnatTableEntriesRequest(DescribeSnatTableEntriesRequest &&) = default ;
    DescribeSnatTableEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatTableEntriesRequest() = default ;
    DescribeSnatTableEntriesRequest& operator=(const DescribeSnatTableEntriesRequest &) = default ;
    DescribeSnatTableEntriesRequest& operator=(DescribeSnatTableEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->natGatewayId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->snatEntryId_ != nullptr && this->snatEntryName_ != nullptr && this->snatIp_ != nullptr
        && this->snatIps_ != nullptr && this->sourceCIDR_ != nullptr; };
    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeSnatTableEntriesRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSnatTableEntriesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSnatTableEntriesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // snatEntryId Field Functions 
    bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
    void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
    inline string snatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
    inline DescribeSnatTableEntriesRequest& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


    // snatEntryName Field Functions 
    bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
    void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
    inline string snatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
    inline DescribeSnatTableEntriesRequest& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


    // snatIp Field Functions 
    bool hasSnatIp() const { return this->snatIp_ != nullptr;};
    void deleteSnatIp() { this->snatIp_ = nullptr;};
    inline string snatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
    inline DescribeSnatTableEntriesRequest& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


    // snatIps Field Functions 
    bool hasSnatIps() const { return this->snatIps_ != nullptr;};
    void deleteSnatIps() { this->snatIps_ = nullptr;};
    inline const vector<string> & snatIps() const { DARABONBA_PTR_GET_CONST(snatIps_, vector<string>) };
    inline vector<string> snatIps() { DARABONBA_PTR_GET(snatIps_, vector<string>) };
    inline DescribeSnatTableEntriesRequest& setSnatIps(const vector<string> & snatIps) { DARABONBA_PTR_SET_VALUE(snatIps_, snatIps) };
    inline DescribeSnatTableEntriesRequest& setSnatIps(vector<string> && snatIps) { DARABONBA_PTR_SET_RVALUE(snatIps_, snatIps) };


    // sourceCIDR Field Functions 
    bool hasSourceCIDR() const { return this->sourceCIDR_ != nullptr;};
    void deleteSourceCIDR() { this->sourceCIDR_ = nullptr;};
    inline string sourceCIDR() const { DARABONBA_PTR_GET_DEFAULT(sourceCIDR_, "") };
    inline DescribeSnatTableEntriesRequest& setSourceCIDR(string sourceCIDR) { DARABONBA_PTR_SET_VALUE(sourceCIDR_, sourceCIDR) };


  protected:
    // The ID of the Network Address Translation (NAT) gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The page number. Pages start from page **1**.
    // 
    // Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. The maximum value is **100**.
    // 
    // Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the SNAT entry.
    std::shared_ptr<string> snatEntryId_ = nullptr;
    // The name of the SNAT entry.
    std::shared_ptr<string> snatEntryName_ = nullptr;
    // The elastic IP address (EIP) specified in the SNAT entry.
    std::shared_ptr<string> snatIp_ = nullptr;
    // The information about the EIP specified in the SNAT entry.
    std::shared_ptr<vector<string>> snatIps_ = nullptr;
    // The source CIDR block specified in the SNAT entry.
    std::shared_ptr<string> sourceCIDR_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
