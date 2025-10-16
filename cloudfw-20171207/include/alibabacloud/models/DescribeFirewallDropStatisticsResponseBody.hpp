// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLDROPSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLDROPSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeFirewallDropStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallDropStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclDropCnt, aclDropCnt_);
      DARABONBA_PTR_TO_JSON(IpsDropCnt, ipsDropCnt_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalDropCnt, totalDropCnt_);
      DARABONBA_PTR_TO_JSON(VulnDropCnt, vulnDropCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallDropStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclDropCnt, aclDropCnt_);
      DARABONBA_PTR_FROM_JSON(IpsDropCnt, ipsDropCnt_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalDropCnt, totalDropCnt_);
      DARABONBA_PTR_FROM_JSON(VulnDropCnt, vulnDropCnt_);
    };
    DescribeFirewallDropStatisticsResponseBody() = default ;
    DescribeFirewallDropStatisticsResponseBody(const DescribeFirewallDropStatisticsResponseBody &) = default ;
    DescribeFirewallDropStatisticsResponseBody(DescribeFirewallDropStatisticsResponseBody &&) = default ;
    DescribeFirewallDropStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallDropStatisticsResponseBody() = default ;
    DescribeFirewallDropStatisticsResponseBody& operator=(const DescribeFirewallDropStatisticsResponseBody &) = default ;
    DescribeFirewallDropStatisticsResponseBody& operator=(DescribeFirewallDropStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclDropCnt_ == nullptr
        && return this->ipsDropCnt_ == nullptr && return this->requestId_ == nullptr && return this->totalDropCnt_ == nullptr && return this->vulnDropCnt_ == nullptr; };
    // aclDropCnt Field Functions 
    bool hasAclDropCnt() const { return this->aclDropCnt_ != nullptr;};
    void deleteAclDropCnt() { this->aclDropCnt_ = nullptr;};
    inline int64_t aclDropCnt() const { DARABONBA_PTR_GET_DEFAULT(aclDropCnt_, 0L) };
    inline DescribeFirewallDropStatisticsResponseBody& setAclDropCnt(int64_t aclDropCnt) { DARABONBA_PTR_SET_VALUE(aclDropCnt_, aclDropCnt) };


    // ipsDropCnt Field Functions 
    bool hasIpsDropCnt() const { return this->ipsDropCnt_ != nullptr;};
    void deleteIpsDropCnt() { this->ipsDropCnt_ = nullptr;};
    inline int64_t ipsDropCnt() const { DARABONBA_PTR_GET_DEFAULT(ipsDropCnt_, 0L) };
    inline DescribeFirewallDropStatisticsResponseBody& setIpsDropCnt(int64_t ipsDropCnt) { DARABONBA_PTR_SET_VALUE(ipsDropCnt_, ipsDropCnt) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFirewallDropStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalDropCnt Field Functions 
    bool hasTotalDropCnt() const { return this->totalDropCnt_ != nullptr;};
    void deleteTotalDropCnt() { this->totalDropCnt_ = nullptr;};
    inline int64_t totalDropCnt() const { DARABONBA_PTR_GET_DEFAULT(totalDropCnt_, 0L) };
    inline DescribeFirewallDropStatisticsResponseBody& setTotalDropCnt(int64_t totalDropCnt) { DARABONBA_PTR_SET_VALUE(totalDropCnt_, totalDropCnt) };


    // vulnDropCnt Field Functions 
    bool hasVulnDropCnt() const { return this->vulnDropCnt_ != nullptr;};
    void deleteVulnDropCnt() { this->vulnDropCnt_ = nullptr;};
    inline int64_t vulnDropCnt() const { DARABONBA_PTR_GET_DEFAULT(vulnDropCnt_, 0L) };
    inline DescribeFirewallDropStatisticsResponseBody& setVulnDropCnt(int64_t vulnDropCnt) { DARABONBA_PTR_SET_VALUE(vulnDropCnt_, vulnDropCnt) };


  protected:
    std::shared_ptr<int64_t> aclDropCnt_ = nullptr;
    std::shared_ptr<int64_t> ipsDropCnt_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalDropCnt_ = nullptr;
    std::shared_ptr<int64_t> vulnDropCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
