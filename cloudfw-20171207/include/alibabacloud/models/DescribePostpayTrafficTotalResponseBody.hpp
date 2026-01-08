// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYTRAFFICTOTALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYTRAFFICTOTALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePostpayTrafficTotalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePostpayTrafficTotalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalAssets, totalAssets_);
      DARABONBA_PTR_TO_JSON(TotalBillTraffic, totalBillTraffic_);
      DARABONBA_PTR_TO_JSON(TotalInternetAssets, totalInternetAssets_);
      DARABONBA_PTR_TO_JSON(TotalInternetTraffic, totalInternetTraffic_);
      DARABONBA_PTR_TO_JSON(TotalNatAssets, totalNatAssets_);
      DARABONBA_PTR_TO_JSON(TotalNatTraffic, totalNatTraffic_);
      DARABONBA_PTR_TO_JSON(TotalSdlBillTraffic, totalSdlBillTraffic_);
      DARABONBA_PTR_TO_JSON(TotalSdlFreeTraffic, totalSdlFreeTraffic_);
      DARABONBA_PTR_TO_JSON(TotalTraffic, totalTraffic_);
      DARABONBA_PTR_TO_JSON(TotalVpcAssets, totalVpcAssets_);
      DARABONBA_PTR_TO_JSON(TotalVpcTraffic, totalVpcTraffic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePostpayTrafficTotalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalAssets, totalAssets_);
      DARABONBA_PTR_FROM_JSON(TotalBillTraffic, totalBillTraffic_);
      DARABONBA_PTR_FROM_JSON(TotalInternetAssets, totalInternetAssets_);
      DARABONBA_PTR_FROM_JSON(TotalInternetTraffic, totalInternetTraffic_);
      DARABONBA_PTR_FROM_JSON(TotalNatAssets, totalNatAssets_);
      DARABONBA_PTR_FROM_JSON(TotalNatTraffic, totalNatTraffic_);
      DARABONBA_PTR_FROM_JSON(TotalSdlBillTraffic, totalSdlBillTraffic_);
      DARABONBA_PTR_FROM_JSON(TotalSdlFreeTraffic, totalSdlFreeTraffic_);
      DARABONBA_PTR_FROM_JSON(TotalTraffic, totalTraffic_);
      DARABONBA_PTR_FROM_JSON(TotalVpcAssets, totalVpcAssets_);
      DARABONBA_PTR_FROM_JSON(TotalVpcTraffic, totalVpcTraffic_);
    };
    DescribePostpayTrafficTotalResponseBody() = default ;
    DescribePostpayTrafficTotalResponseBody(const DescribePostpayTrafficTotalResponseBody &) = default ;
    DescribePostpayTrafficTotalResponseBody(DescribePostpayTrafficTotalResponseBody &&) = default ;
    DescribePostpayTrafficTotalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePostpayTrafficTotalResponseBody() = default ;
    DescribePostpayTrafficTotalResponseBody& operator=(const DescribePostpayTrafficTotalResponseBody &) = default ;
    DescribePostpayTrafficTotalResponseBody& operator=(DescribePostpayTrafficTotalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalAssets_ == nullptr && this->totalBillTraffic_ == nullptr && this->totalInternetAssets_ == nullptr && this->totalInternetTraffic_ == nullptr && this->totalNatAssets_ == nullptr
        && this->totalNatTraffic_ == nullptr && this->totalSdlBillTraffic_ == nullptr && this->totalSdlFreeTraffic_ == nullptr && this->totalTraffic_ == nullptr && this->totalVpcAssets_ == nullptr
        && this->totalVpcTraffic_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePostpayTrafficTotalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalAssets Field Functions 
    bool hasTotalAssets() const { return this->totalAssets_ != nullptr;};
    void deleteTotalAssets() { this->totalAssets_ = nullptr;};
    inline int64_t getTotalAssets() const { DARABONBA_PTR_GET_DEFAULT(totalAssets_, 0L) };
    inline DescribePostpayTrafficTotalResponseBody& setTotalAssets(int64_t totalAssets) { DARABONBA_PTR_SET_VALUE(totalAssets_, totalAssets) };


    // totalBillTraffic Field Functions 
    bool hasTotalBillTraffic() const { return this->totalBillTraffic_ != nullptr;};
    void deleteTotalBillTraffic() { this->totalBillTraffic_ = nullptr;};
    inline int64_t getTotalBillTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalBillTraffic_, 0L) };
    inline DescribePostpayTrafficTotalResponseBody& setTotalBillTraffic(int64_t totalBillTraffic) { DARABONBA_PTR_SET_VALUE(totalBillTraffic_, totalBillTraffic) };


    // totalInternetAssets Field Functions 
    bool hasTotalInternetAssets() const { return this->totalInternetAssets_ != nullptr;};
    void deleteTotalInternetAssets() { this->totalInternetAssets_ = nullptr;};
    inline int64_t getTotalInternetAssets() const { DARABONBA_PTR_GET_DEFAULT(totalInternetAssets_, 0L) };
    inline DescribePostpayTrafficTotalResponseBody& setTotalInternetAssets(int64_t totalInternetAssets) { DARABONBA_PTR_SET_VALUE(totalInternetAssets_, totalInternetAssets) };


    // totalInternetTraffic Field Functions 
    bool hasTotalInternetTraffic() const { return this->totalInternetTraffic_ != nullptr;};
    void deleteTotalInternetTraffic() { this->totalInternetTraffic_ = nullptr;};
    inline int64_t getTotalInternetTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalInternetTraffic_, 0L) };
    inline DescribePostpayTrafficTotalResponseBody& setTotalInternetTraffic(int64_t totalInternetTraffic) { DARABONBA_PTR_SET_VALUE(totalInternetTraffic_, totalInternetTraffic) };


    // totalNatAssets Field Functions 
    bool hasTotalNatAssets() const { return this->totalNatAssets_ != nullptr;};
    void deleteTotalNatAssets() { this->totalNatAssets_ = nullptr;};
    inline int64_t getTotalNatAssets() const { DARABONBA_PTR_GET_DEFAULT(totalNatAssets_, 0L) };
    inline DescribePostpayTrafficTotalResponseBody& setTotalNatAssets(int64_t totalNatAssets) { DARABONBA_PTR_SET_VALUE(totalNatAssets_, totalNatAssets) };


    // totalNatTraffic Field Functions 
    bool hasTotalNatTraffic() const { return this->totalNatTraffic_ != nullptr;};
    void deleteTotalNatTraffic() { this->totalNatTraffic_ = nullptr;};
    inline int64_t getTotalNatTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalNatTraffic_, 0L) };
    inline DescribePostpayTrafficTotalResponseBody& setTotalNatTraffic(int64_t totalNatTraffic) { DARABONBA_PTR_SET_VALUE(totalNatTraffic_, totalNatTraffic) };


    // totalSdlBillTraffic Field Functions 
    bool hasTotalSdlBillTraffic() const { return this->totalSdlBillTraffic_ != nullptr;};
    void deleteTotalSdlBillTraffic() { this->totalSdlBillTraffic_ = nullptr;};
    inline int64_t getTotalSdlBillTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalSdlBillTraffic_, 0L) };
    inline DescribePostpayTrafficTotalResponseBody& setTotalSdlBillTraffic(int64_t totalSdlBillTraffic) { DARABONBA_PTR_SET_VALUE(totalSdlBillTraffic_, totalSdlBillTraffic) };


    // totalSdlFreeTraffic Field Functions 
    bool hasTotalSdlFreeTraffic() const { return this->totalSdlFreeTraffic_ != nullptr;};
    void deleteTotalSdlFreeTraffic() { this->totalSdlFreeTraffic_ = nullptr;};
    inline int64_t getTotalSdlFreeTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalSdlFreeTraffic_, 0L) };
    inline DescribePostpayTrafficTotalResponseBody& setTotalSdlFreeTraffic(int64_t totalSdlFreeTraffic) { DARABONBA_PTR_SET_VALUE(totalSdlFreeTraffic_, totalSdlFreeTraffic) };


    // totalTraffic Field Functions 
    bool hasTotalTraffic() const { return this->totalTraffic_ != nullptr;};
    void deleteTotalTraffic() { this->totalTraffic_ = nullptr;};
    inline int64_t getTotalTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalTraffic_, 0L) };
    inline DescribePostpayTrafficTotalResponseBody& setTotalTraffic(int64_t totalTraffic) { DARABONBA_PTR_SET_VALUE(totalTraffic_, totalTraffic) };


    // totalVpcAssets Field Functions 
    bool hasTotalVpcAssets() const { return this->totalVpcAssets_ != nullptr;};
    void deleteTotalVpcAssets() { this->totalVpcAssets_ = nullptr;};
    inline int64_t getTotalVpcAssets() const { DARABONBA_PTR_GET_DEFAULT(totalVpcAssets_, 0L) };
    inline DescribePostpayTrafficTotalResponseBody& setTotalVpcAssets(int64_t totalVpcAssets) { DARABONBA_PTR_SET_VALUE(totalVpcAssets_, totalVpcAssets) };


    // totalVpcTraffic Field Functions 
    bool hasTotalVpcTraffic() const { return this->totalVpcTraffic_ != nullptr;};
    void deleteTotalVpcTraffic() { this->totalVpcTraffic_ = nullptr;};
    inline int64_t getTotalVpcTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalVpcTraffic_, 0L) };
    inline DescribePostpayTrafficTotalResponseBody& setTotalVpcTraffic(int64_t totalVpcTraffic) { DARABONBA_PTR_SET_VALUE(totalVpcTraffic_, totalVpcTraffic) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of assets protected all types of firewalls.
    shared_ptr<int64_t> totalAssets_ {};
    // The volume of burstable protected traffic for which fees are generated. Unit: bytes.
    shared_ptr<int64_t> totalBillTraffic_ {};
    // The total number of assets protected by the Internet firewall.
    shared_ptr<int64_t> totalInternetAssets_ {};
    // The total traffic for the Internet firewall. If you use Cloud Firewall that uses the subscription billing method, this parameter indicates the total volume of burstable protected traffic on the Internet boundary. Unit: bytes.
    shared_ptr<int64_t> totalInternetTraffic_ {};
    // The total number of assets protected by NAT firewalls.
    shared_ptr<int64_t> totalNatAssets_ {};
    // The total traffic for NAT firewalls. If you use Cloud Firewall that uses the subscription billing method, this parameter indicates the total volume of burstable protected traffic on the NAT boundary. Unit: bytes.
    shared_ptr<int64_t> totalNatTraffic_ {};
    // Data Leak Detection Total Fee Flow.
    shared_ptr<int64_t> totalSdlBillTraffic_ {};
    // Data Leak Detection Total free usage traffic.
    shared_ptr<int64_t> totalSdlFreeTraffic_ {};
    // The total volume of traffic. If you use Cloud Firewall that uses the subscription billing method, this parameter indicates the total volume of burstable protected traffic. Unit: bytes.
    shared_ptr<int64_t> totalTraffic_ {};
    // The total number of assets protected by virtual private cloud (VPC) firewalls.
    shared_ptr<int64_t> totalVpcAssets_ {};
    // The total traffic for VPC firewalls. If you use Cloud Firewall that uses the subscription billing method, this parameter indicates the total volume of burstable protected traffic on the VPC boundary. Unit: bytes.
    shared_ptr<int64_t> totalVpcTraffic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
