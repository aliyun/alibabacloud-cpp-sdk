// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDROPTRAFFICTRENDRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDROPTRAFFICTRENDRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallDropTrafficTrendResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDropTrafficTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AclDrop, aclDrop_);
      DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
      DARABONBA_PTR_TO_JSON(DropSession, dropSession_);
      DARABONBA_PTR_TO_JSON(IpsDrop, ipsDrop_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(TotalSession, totalSession_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDropTrafficTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AclDrop, aclDrop_);
      DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
      DARABONBA_PTR_FROM_JSON(DropSession, dropSession_);
      DARABONBA_PTR_FROM_JSON(IpsDrop, ipsDrop_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(TotalSession, totalSession_);
    };
    DescribeVpcFirewallDropTrafficTrendResponseBodyDataList() = default ;
    DescribeVpcFirewallDropTrafficTrendResponseBodyDataList(const DescribeVpcFirewallDropTrafficTrendResponseBodyDataList &) = default ;
    DescribeVpcFirewallDropTrafficTrendResponseBodyDataList(DescribeVpcFirewallDropTrafficTrendResponseBodyDataList &&) = default ;
    DescribeVpcFirewallDropTrafficTrendResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDropTrafficTrendResponseBodyDataList() = default ;
    DescribeVpcFirewallDropTrafficTrendResponseBodyDataList& operator=(const DescribeVpcFirewallDropTrafficTrendResponseBodyDataList &) = default ;
    DescribeVpcFirewallDropTrafficTrendResponseBodyDataList& operator=(DescribeVpcFirewallDropTrafficTrendResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclDrop_ == nullptr
        && return this->dataTime_ == nullptr && return this->dropSession_ == nullptr && return this->ipsDrop_ == nullptr && return this->time_ == nullptr && return this->totalSession_ == nullptr; };
    // aclDrop Field Functions 
    bool hasAclDrop() const { return this->aclDrop_ != nullptr;};
    void deleteAclDrop() { this->aclDrop_ = nullptr;};
    inline int64_t aclDrop() const { DARABONBA_PTR_GET_DEFAULT(aclDrop_, 0L) };
    inline DescribeVpcFirewallDropTrafficTrendResponseBodyDataList& setAclDrop(int64_t aclDrop) { DARABONBA_PTR_SET_VALUE(aclDrop_, aclDrop) };


    // dataTime Field Functions 
    bool hasDataTime() const { return this->dataTime_ != nullptr;};
    void deleteDataTime() { this->dataTime_ = nullptr;};
    inline string dataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
    inline DescribeVpcFirewallDropTrafficTrendResponseBodyDataList& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


    // dropSession Field Functions 
    bool hasDropSession() const { return this->dropSession_ != nullptr;};
    void deleteDropSession() { this->dropSession_ = nullptr;};
    inline int64_t dropSession() const { DARABONBA_PTR_GET_DEFAULT(dropSession_, 0L) };
    inline DescribeVpcFirewallDropTrafficTrendResponseBodyDataList& setDropSession(int64_t dropSession) { DARABONBA_PTR_SET_VALUE(dropSession_, dropSession) };


    // ipsDrop Field Functions 
    bool hasIpsDrop() const { return this->ipsDrop_ != nullptr;};
    void deleteIpsDrop() { this->ipsDrop_ = nullptr;};
    inline int64_t ipsDrop() const { DARABONBA_PTR_GET_DEFAULT(ipsDrop_, 0L) };
    inline DescribeVpcFirewallDropTrafficTrendResponseBodyDataList& setIpsDrop(int64_t ipsDrop) { DARABONBA_PTR_SET_VALUE(ipsDrop_, ipsDrop) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeVpcFirewallDropTrafficTrendResponseBodyDataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // totalSession Field Functions 
    bool hasTotalSession() const { return this->totalSession_ != nullptr;};
    void deleteTotalSession() { this->totalSession_ = nullptr;};
    inline int64_t totalSession() const { DARABONBA_PTR_GET_DEFAULT(totalSession_, 0L) };
    inline DescribeVpcFirewallDropTrafficTrendResponseBodyDataList& setTotalSession(int64_t totalSession) { DARABONBA_PTR_SET_VALUE(totalSession_, totalSession) };


  protected:
    std::shared_ptr<int64_t> aclDrop_ = nullptr;
    std::shared_ptr<string> dataTime_ = nullptr;
    std::shared_ptr<int64_t> dropSession_ = nullptr;
    std::shared_ptr<int64_t> ipsDrop_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<int64_t> totalSession_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
