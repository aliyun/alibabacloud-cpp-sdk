// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETDROPTRAFFICTRENDRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETDROPTRAFFICTRENDRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetDropTrafficTrendResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetDropTrafficTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AclDrop, aclDrop_);
      DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
      DARABONBA_PTR_TO_JSON(DropRatio, dropRatio_);
      DARABONBA_PTR_TO_JSON(DropRing, dropRing_);
      DARABONBA_PTR_TO_JSON(DropRingRatio, dropRingRatio_);
      DARABONBA_PTR_TO_JSON(DropSession, dropSession_);
      DARABONBA_PTR_TO_JSON(IpsDrop, ipsDrop_);
      DARABONBA_PTR_TO_JSON(RingDataTime, ringDataTime_);
      DARABONBA_PTR_TO_JSON(RingTime, ringTime_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(TotalSession, totalSession_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetDropTrafficTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AclDrop, aclDrop_);
      DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
      DARABONBA_PTR_FROM_JSON(DropRatio, dropRatio_);
      DARABONBA_PTR_FROM_JSON(DropRing, dropRing_);
      DARABONBA_PTR_FROM_JSON(DropRingRatio, dropRingRatio_);
      DARABONBA_PTR_FROM_JSON(DropSession, dropSession_);
      DARABONBA_PTR_FROM_JSON(IpsDrop, ipsDrop_);
      DARABONBA_PTR_FROM_JSON(RingDataTime, ringDataTime_);
      DARABONBA_PTR_FROM_JSON(RingTime, ringTime_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(TotalSession, totalSession_);
    };
    DescribeInternetDropTrafficTrendResponseBodyDataList() = default ;
    DescribeInternetDropTrafficTrendResponseBodyDataList(const DescribeInternetDropTrafficTrendResponseBodyDataList &) = default ;
    DescribeInternetDropTrafficTrendResponseBodyDataList(DescribeInternetDropTrafficTrendResponseBodyDataList &&) = default ;
    DescribeInternetDropTrafficTrendResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetDropTrafficTrendResponseBodyDataList() = default ;
    DescribeInternetDropTrafficTrendResponseBodyDataList& operator=(const DescribeInternetDropTrafficTrendResponseBodyDataList &) = default ;
    DescribeInternetDropTrafficTrendResponseBodyDataList& operator=(DescribeInternetDropTrafficTrendResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclDrop_ == nullptr
        && return this->dataTime_ == nullptr && return this->dropRatio_ == nullptr && return this->dropRing_ == nullptr && return this->dropRingRatio_ == nullptr && return this->dropSession_ == nullptr
        && return this->ipsDrop_ == nullptr && return this->ringDataTime_ == nullptr && return this->ringTime_ == nullptr && return this->time_ == nullptr && return this->totalSession_ == nullptr; };
    // aclDrop Field Functions 
    bool hasAclDrop() const { return this->aclDrop_ != nullptr;};
    void deleteAclDrop() { this->aclDrop_ = nullptr;};
    inline int64_t aclDrop() const { DARABONBA_PTR_GET_DEFAULT(aclDrop_, 0L) };
    inline DescribeInternetDropTrafficTrendResponseBodyDataList& setAclDrop(int64_t aclDrop) { DARABONBA_PTR_SET_VALUE(aclDrop_, aclDrop) };


    // dataTime Field Functions 
    bool hasDataTime() const { return this->dataTime_ != nullptr;};
    void deleteDataTime() { this->dataTime_ = nullptr;};
    inline string dataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
    inline DescribeInternetDropTrafficTrendResponseBodyDataList& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


    // dropRatio Field Functions 
    bool hasDropRatio() const { return this->dropRatio_ != nullptr;};
    void deleteDropRatio() { this->dropRatio_ = nullptr;};
    inline string dropRatio() const { DARABONBA_PTR_GET_DEFAULT(dropRatio_, "") };
    inline DescribeInternetDropTrafficTrendResponseBodyDataList& setDropRatio(string dropRatio) { DARABONBA_PTR_SET_VALUE(dropRatio_, dropRatio) };


    // dropRing Field Functions 
    bool hasDropRing() const { return this->dropRing_ != nullptr;};
    void deleteDropRing() { this->dropRing_ = nullptr;};
    inline int64_t dropRing() const { DARABONBA_PTR_GET_DEFAULT(dropRing_, 0L) };
    inline DescribeInternetDropTrafficTrendResponseBodyDataList& setDropRing(int64_t dropRing) { DARABONBA_PTR_SET_VALUE(dropRing_, dropRing) };


    // dropRingRatio Field Functions 
    bool hasDropRingRatio() const { return this->dropRingRatio_ != nullptr;};
    void deleteDropRingRatio() { this->dropRingRatio_ = nullptr;};
    inline string dropRingRatio() const { DARABONBA_PTR_GET_DEFAULT(dropRingRatio_, "") };
    inline DescribeInternetDropTrafficTrendResponseBodyDataList& setDropRingRatio(string dropRingRatio) { DARABONBA_PTR_SET_VALUE(dropRingRatio_, dropRingRatio) };


    // dropSession Field Functions 
    bool hasDropSession() const { return this->dropSession_ != nullptr;};
    void deleteDropSession() { this->dropSession_ = nullptr;};
    inline int64_t dropSession() const { DARABONBA_PTR_GET_DEFAULT(dropSession_, 0L) };
    inline DescribeInternetDropTrafficTrendResponseBodyDataList& setDropSession(int64_t dropSession) { DARABONBA_PTR_SET_VALUE(dropSession_, dropSession) };


    // ipsDrop Field Functions 
    bool hasIpsDrop() const { return this->ipsDrop_ != nullptr;};
    void deleteIpsDrop() { this->ipsDrop_ = nullptr;};
    inline int64_t ipsDrop() const { DARABONBA_PTR_GET_DEFAULT(ipsDrop_, 0L) };
    inline DescribeInternetDropTrafficTrendResponseBodyDataList& setIpsDrop(int64_t ipsDrop) { DARABONBA_PTR_SET_VALUE(ipsDrop_, ipsDrop) };


    // ringDataTime Field Functions 
    bool hasRingDataTime() const { return this->ringDataTime_ != nullptr;};
    void deleteRingDataTime() { this->ringDataTime_ = nullptr;};
    inline string ringDataTime() const { DARABONBA_PTR_GET_DEFAULT(ringDataTime_, "") };
    inline DescribeInternetDropTrafficTrendResponseBodyDataList& setRingDataTime(string ringDataTime) { DARABONBA_PTR_SET_VALUE(ringDataTime_, ringDataTime) };


    // ringTime Field Functions 
    bool hasRingTime() const { return this->ringTime_ != nullptr;};
    void deleteRingTime() { this->ringTime_ = nullptr;};
    inline int64_t ringTime() const { DARABONBA_PTR_GET_DEFAULT(ringTime_, 0L) };
    inline DescribeInternetDropTrafficTrendResponseBodyDataList& setRingTime(int64_t ringTime) { DARABONBA_PTR_SET_VALUE(ringTime_, ringTime) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeInternetDropTrafficTrendResponseBodyDataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // totalSession Field Functions 
    bool hasTotalSession() const { return this->totalSession_ != nullptr;};
    void deleteTotalSession() { this->totalSession_ = nullptr;};
    inline int64_t totalSession() const { DARABONBA_PTR_GET_DEFAULT(totalSession_, 0L) };
    inline DescribeInternetDropTrafficTrendResponseBodyDataList& setTotalSession(int64_t totalSession) { DARABONBA_PTR_SET_VALUE(totalSession_, totalSession) };


  protected:
    std::shared_ptr<int64_t> aclDrop_ = nullptr;
    std::shared_ptr<string> dataTime_ = nullptr;
    std::shared_ptr<string> dropRatio_ = nullptr;
    std::shared_ptr<int64_t> dropRing_ = nullptr;
    std::shared_ptr<string> dropRingRatio_ = nullptr;
    std::shared_ptr<int64_t> dropSession_ = nullptr;
    std::shared_ptr<int64_t> ipsDrop_ = nullptr;
    std::shared_ptr<string> ringDataTime_ = nullptr;
    std::shared_ptr<int64_t> ringTime_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<int64_t> totalSession_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
