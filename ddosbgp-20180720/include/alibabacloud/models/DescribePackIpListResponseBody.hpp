// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPACKIPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPACKIPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribePackIpListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePackIpListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePackIpListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribePackIpListResponseBody() = default ;
    DescribePackIpListResponseBody(const DescribePackIpListResponseBody &) = default ;
    DescribePackIpListResponseBody(DescribePackIpListResponseBody &&) = default ;
    DescribePackIpListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePackIpListResponseBody() = default ;
    DescribePackIpListResponseBody& operator=(const DescribePackIpListResponseBody &) = default ;
    DescribePackIpListResponseBody& operator=(DescribePackIpListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpList& obj) { 
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_TO_JSON(NsmExpireAt, nsmExpireAt_);
        DARABONBA_PTR_TO_JSON(NsmStartAt, nsmStartAt_);
        DARABONBA_PTR_TO_JSON(NsmStatus, nsmStatus_);
        DARABONBA_PTR_TO_JSON(Product, product_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, IpList& obj) { 
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_FROM_JSON(NsmExpireAt, nsmExpireAt_);
        DARABONBA_PTR_FROM_JSON(NsmStartAt, nsmStartAt_);
        DARABONBA_PTR_FROM_JSON(NsmStatus, nsmStatus_);
        DARABONBA_PTR_FROM_JSON(Product, product_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      IpList() = default ;
      IpList(const IpList &) = default ;
      IpList(IpList &&) = default ;
      IpList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpList() = default ;
      IpList& operator=(const IpList &) = default ;
      IpList& operator=(IpList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ip_ == nullptr
        && this->memberUid_ == nullptr && this->nsmExpireAt_ == nullptr && this->nsmStartAt_ == nullptr && this->nsmStatus_ == nullptr && this->product_ == nullptr
        && this->region_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr; };
      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline IpList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
      inline IpList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // nsmExpireAt Field Functions 
      bool hasNsmExpireAt() const { return this->nsmExpireAt_ != nullptr;};
      void deleteNsmExpireAt() { this->nsmExpireAt_ = nullptr;};
      inline int64_t getNsmExpireAt() const { DARABONBA_PTR_GET_DEFAULT(nsmExpireAt_, 0L) };
      inline IpList& setNsmExpireAt(int64_t nsmExpireAt) { DARABONBA_PTR_SET_VALUE(nsmExpireAt_, nsmExpireAt) };


      // nsmStartAt Field Functions 
      bool hasNsmStartAt() const { return this->nsmStartAt_ != nullptr;};
      void deleteNsmStartAt() { this->nsmStartAt_ = nullptr;};
      inline int64_t getNsmStartAt() const { DARABONBA_PTR_GET_DEFAULT(nsmStartAt_, 0L) };
      inline IpList& setNsmStartAt(int64_t nsmStartAt) { DARABONBA_PTR_SET_VALUE(nsmStartAt_, nsmStartAt) };


      // nsmStatus Field Functions 
      bool hasNsmStatus() const { return this->nsmStatus_ != nullptr;};
      void deleteNsmStatus() { this->nsmStatus_ = nullptr;};
      inline int32_t getNsmStatus() const { DARABONBA_PTR_GET_DEFAULT(nsmStatus_, 0) };
      inline IpList& setNsmStatus(int32_t nsmStatus) { DARABONBA_PTR_SET_VALUE(nsmStatus_, nsmStatus) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline IpList& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline IpList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline IpList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IpList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The IP address.
      shared_ptr<string> ip_ {};
      // The ID of the member.
      shared_ptr<string> memberUid_ {};
      // The time when the near-origin traffic diversion feature was disabled.
      shared_ptr<int64_t> nsmExpireAt_ {};
      // The time when the near-origin traffic diversion feature was enabled.
      shared_ptr<int64_t> nsmStartAt_ {};
      // The status of the near-origin traffic diversion feature. Valid values:
      // 
      // *   **1**: The near-origin traffic diversion feature is enabled.
      // *   **0**: The near-origin traffic diversion feature is disabled.
      shared_ptr<int32_t> nsmStatus_ {};
      // The type of the cloud asset to which the IP address belongs. Valid values:
      // 
      // *   **ECS**: an ECS instance.
      // *   **SLB**: a CLB (formerly SLB) instance.
      // *   **EIP**: an EIP. If the IP address belongs to an ALB instance, the value EIP is returned.
      // *   **WAF**: a WAF instance.
      shared_ptr<string> product_ {};
      // The region to which the protected IP address belongs.
      // 
      // >  If the protected IP address is in the same region as the instance, this parameter is not returned.
      shared_ptr<string> region_ {};
      // The description of the cloud asset to which the IP address belongs. The asset can be an ECS instance or an SLB instance.
      // 
      // >  If no descriptions are provided for the asset, this parameter is not returned.
      shared_ptr<string> remark_ {};
      // The status of the IP address. Valid values:
      // 
      // *   **normal**: The IP address is not under attack.
      // *   **hole_begin**: Blackhole filtering is triggered for the IP address.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->ipList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePackIpListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<DescribePackIpListResponseBody::IpList> & getIpList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<DescribePackIpListResponseBody::IpList>) };
    inline vector<DescribePackIpListResponseBody::IpList> getIpList() { DARABONBA_PTR_GET(ipList_, vector<DescribePackIpListResponseBody::IpList>) };
    inline DescribePackIpListResponseBody& setIpList(const vector<DescribePackIpListResponseBody::IpList> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline DescribePackIpListResponseBody& setIpList(vector<DescribePackIpListResponseBody::IpList> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePackIpListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePackIpListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribePackIpListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code of the request.
    // 
    // For more information about status codes, see [Common parameters](https://help.aliyun.com/document_detail/118841.html).
    shared_ptr<string> code_ {};
    // The IP addresses that are protected by the instance.
    shared_ptr<vector<DescribePackIpListResponseBody::IpList>> ipList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The call is successful.
    // *   **false**: The call fails.
    shared_ptr<bool> success_ {};
    // The number of protected IP addresses.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
