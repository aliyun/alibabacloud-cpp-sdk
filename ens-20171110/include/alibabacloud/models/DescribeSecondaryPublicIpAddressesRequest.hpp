// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECONDARYPUBLICIPADDRESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECONDARYPUBLICIPADDRESSESREQUEST_HPP_
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
  class DescribeSecondaryPublicIpAddressesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecondaryPublicIpAddressesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecondaryPublicIpAddress, secondaryPublicIpAddress_);
      DARABONBA_PTR_TO_JSON(SecondaryPublicIpId, secondaryPublicIpId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecondaryPublicIpAddressesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecondaryPublicIpAddress, secondaryPublicIpAddress_);
      DARABONBA_PTR_FROM_JSON(SecondaryPublicIpId, secondaryPublicIpId_);
    };
    DescribeSecondaryPublicIpAddressesRequest() = default ;
    DescribeSecondaryPublicIpAddressesRequest(const DescribeSecondaryPublicIpAddressesRequest &) = default ;
    DescribeSecondaryPublicIpAddressesRequest(DescribeSecondaryPublicIpAddressesRequest &&) = default ;
    DescribeSecondaryPublicIpAddressesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecondaryPublicIpAddressesRequest() = default ;
    DescribeSecondaryPublicIpAddressesRequest& operator=(const DescribeSecondaryPublicIpAddressesRequest &) = default ;
    DescribeSecondaryPublicIpAddressesRequest& operator=(DescribeSecondaryPublicIpAddressesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && this->ensRegionIds_ == nullptr && this->isp_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->secondaryPublicIpAddress_ == nullptr
        && this->secondaryPublicIpId_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeSecondaryPublicIpAddressesRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline const vector<string> & getEnsRegionIds() const { DARABONBA_PTR_GET_CONST(ensRegionIds_, vector<string>) };
    inline vector<string> getEnsRegionIds() { DARABONBA_PTR_GET(ensRegionIds_, vector<string>) };
    inline DescribeSecondaryPublicIpAddressesRequest& setEnsRegionIds(const vector<string> & ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };
    inline DescribeSecondaryPublicIpAddressesRequest& setEnsRegionIds(vector<string> && ensRegionIds) { DARABONBA_PTR_SET_RVALUE(ensRegionIds_, ensRegionIds) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeSecondaryPublicIpAddressesRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSecondaryPublicIpAddressesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSecondaryPublicIpAddressesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // secondaryPublicIpAddress Field Functions 
    bool hasSecondaryPublicIpAddress() const { return this->secondaryPublicIpAddress_ != nullptr;};
    void deleteSecondaryPublicIpAddress() { this->secondaryPublicIpAddress_ = nullptr;};
    inline string getSecondaryPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(secondaryPublicIpAddress_, "") };
    inline DescribeSecondaryPublicIpAddressesRequest& setSecondaryPublicIpAddress(string secondaryPublicIpAddress) { DARABONBA_PTR_SET_VALUE(secondaryPublicIpAddress_, secondaryPublicIpAddress) };


    // secondaryPublicIpId Field Functions 
    bool hasSecondaryPublicIpId() const { return this->secondaryPublicIpId_ != nullptr;};
    void deleteSecondaryPublicIpId() { this->secondaryPublicIpId_ = nullptr;};
    inline string getSecondaryPublicIpId() const { DARABONBA_PTR_GET_DEFAULT(secondaryPublicIpId_, "") };
    inline DescribeSecondaryPublicIpAddressesRequest& setSecondaryPublicIpId(string secondaryPublicIpId) { DARABONBA_PTR_SET_VALUE(secondaryPublicIpId_, secondaryPublicIpId) };


  protected:
    // The ID of the edge node.
    shared_ptr<string> ensRegionId_ {};
    shared_ptr<vector<string>> ensRegionIds_ {};
    // The Internet service provider. Valid values:
    // 
    // *   cmcc: China Mobile.
    // *   unicom: China Unicom.
    // *   telecom: China Telecom.
    shared_ptr<string> isp_ {};
    // The number of the page to return. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The secondary IP address.
    shared_ptr<string> secondaryPublicIpAddress_ {};
    // The ID of the secondary public IP address.
    shared_ptr<string> secondaryPublicIpId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
