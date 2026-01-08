// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETDROPTRAFFICTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETDROPTRAFFICTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetDropTrafficTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetDropTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(DropSessionMax, dropSessionMax_);
      DARABONBA_PTR_TO_JSON(RatioAverage, ratioAverage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RingRatioAverage, ringRatioAverage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetDropTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(DropSessionMax, dropSessionMax_);
      DARABONBA_PTR_FROM_JSON(RatioAverage, ratioAverage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RingRatioAverage, ringRatioAverage_);
    };
    DescribeInternetDropTrafficTrendResponseBody() = default ;
    DescribeInternetDropTrafficTrendResponseBody(const DescribeInternetDropTrafficTrendResponseBody &) = default ;
    DescribeInternetDropTrafficTrendResponseBody(DescribeInternetDropTrafficTrendResponseBody &&) = default ;
    DescribeInternetDropTrafficTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetDropTrafficTrendResponseBody() = default ;
    DescribeInternetDropTrafficTrendResponseBody& operator=(const DescribeInternetDropTrafficTrendResponseBody &) = default ;
    DescribeInternetDropTrafficTrendResponseBody& operator=(DescribeInternetDropTrafficTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
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
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclDrop_ == nullptr
        && this->dataTime_ == nullptr && this->dropRatio_ == nullptr && this->dropRing_ == nullptr && this->dropRingRatio_ == nullptr && this->dropSession_ == nullptr
        && this->ipsDrop_ == nullptr && this->ringDataTime_ == nullptr && this->ringTime_ == nullptr && this->time_ == nullptr && this->totalSession_ == nullptr; };
      // aclDrop Field Functions 
      bool hasAclDrop() const { return this->aclDrop_ != nullptr;};
      void deleteAclDrop() { this->aclDrop_ = nullptr;};
      inline int64_t getAclDrop() const { DARABONBA_PTR_GET_DEFAULT(aclDrop_, 0L) };
      inline DataList& setAclDrop(int64_t aclDrop) { DARABONBA_PTR_SET_VALUE(aclDrop_, aclDrop) };


      // dataTime Field Functions 
      bool hasDataTime() const { return this->dataTime_ != nullptr;};
      void deleteDataTime() { this->dataTime_ = nullptr;};
      inline string getDataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
      inline DataList& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


      // dropRatio Field Functions 
      bool hasDropRatio() const { return this->dropRatio_ != nullptr;};
      void deleteDropRatio() { this->dropRatio_ = nullptr;};
      inline string getDropRatio() const { DARABONBA_PTR_GET_DEFAULT(dropRatio_, "") };
      inline DataList& setDropRatio(string dropRatio) { DARABONBA_PTR_SET_VALUE(dropRatio_, dropRatio) };


      // dropRing Field Functions 
      bool hasDropRing() const { return this->dropRing_ != nullptr;};
      void deleteDropRing() { this->dropRing_ = nullptr;};
      inline int64_t getDropRing() const { DARABONBA_PTR_GET_DEFAULT(dropRing_, 0L) };
      inline DataList& setDropRing(int64_t dropRing) { DARABONBA_PTR_SET_VALUE(dropRing_, dropRing) };


      // dropRingRatio Field Functions 
      bool hasDropRingRatio() const { return this->dropRingRatio_ != nullptr;};
      void deleteDropRingRatio() { this->dropRingRatio_ = nullptr;};
      inline string getDropRingRatio() const { DARABONBA_PTR_GET_DEFAULT(dropRingRatio_, "") };
      inline DataList& setDropRingRatio(string dropRingRatio) { DARABONBA_PTR_SET_VALUE(dropRingRatio_, dropRingRatio) };


      // dropSession Field Functions 
      bool hasDropSession() const { return this->dropSession_ != nullptr;};
      void deleteDropSession() { this->dropSession_ = nullptr;};
      inline int64_t getDropSession() const { DARABONBA_PTR_GET_DEFAULT(dropSession_, 0L) };
      inline DataList& setDropSession(int64_t dropSession) { DARABONBA_PTR_SET_VALUE(dropSession_, dropSession) };


      // ipsDrop Field Functions 
      bool hasIpsDrop() const { return this->ipsDrop_ != nullptr;};
      void deleteIpsDrop() { this->ipsDrop_ = nullptr;};
      inline int64_t getIpsDrop() const { DARABONBA_PTR_GET_DEFAULT(ipsDrop_, 0L) };
      inline DataList& setIpsDrop(int64_t ipsDrop) { DARABONBA_PTR_SET_VALUE(ipsDrop_, ipsDrop) };


      // ringDataTime Field Functions 
      bool hasRingDataTime() const { return this->ringDataTime_ != nullptr;};
      void deleteRingDataTime() { this->ringDataTime_ = nullptr;};
      inline string getRingDataTime() const { DARABONBA_PTR_GET_DEFAULT(ringDataTime_, "") };
      inline DataList& setRingDataTime(string ringDataTime) { DARABONBA_PTR_SET_VALUE(ringDataTime_, ringDataTime) };


      // ringTime Field Functions 
      bool hasRingTime() const { return this->ringTime_ != nullptr;};
      void deleteRingTime() { this->ringTime_ = nullptr;};
      inline int64_t getRingTime() const { DARABONBA_PTR_GET_DEFAULT(ringTime_, 0L) };
      inline DataList& setRingTime(int64_t ringTime) { DARABONBA_PTR_SET_VALUE(ringTime_, ringTime) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline DataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // totalSession Field Functions 
      bool hasTotalSession() const { return this->totalSession_ != nullptr;};
      void deleteTotalSession() { this->totalSession_ = nullptr;};
      inline int64_t getTotalSession() const { DARABONBA_PTR_GET_DEFAULT(totalSession_, 0L) };
      inline DataList& setTotalSession(int64_t totalSession) { DARABONBA_PTR_SET_VALUE(totalSession_, totalSession) };


    protected:
      shared_ptr<int64_t> aclDrop_ {};
      shared_ptr<string> dataTime_ {};
      shared_ptr<string> dropRatio_ {};
      shared_ptr<int64_t> dropRing_ {};
      shared_ptr<string> dropRingRatio_ {};
      shared_ptr<int64_t> dropSession_ {};
      shared_ptr<int64_t> ipsDrop_ {};
      shared_ptr<string> ringDataTime_ {};
      shared_ptr<int64_t> ringTime_ {};
      shared_ptr<int64_t> time_ {};
      shared_ptr<int64_t> totalSession_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->dropSessionMax_ == nullptr && this->ratioAverage_ == nullptr && this->requestId_ == nullptr && this->ringRatioAverage_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeInternetDropTrafficTrendResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInternetDropTrafficTrendResponseBody::DataList>) };
    inline vector<DescribeInternetDropTrafficTrendResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInternetDropTrafficTrendResponseBody::DataList>) };
    inline DescribeInternetDropTrafficTrendResponseBody& setDataList(const vector<DescribeInternetDropTrafficTrendResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInternetDropTrafficTrendResponseBody& setDataList(vector<DescribeInternetDropTrafficTrendResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // dropSessionMax Field Functions 
    bool hasDropSessionMax() const { return this->dropSessionMax_ != nullptr;};
    void deleteDropSessionMax() { this->dropSessionMax_ = nullptr;};
    inline int64_t getDropSessionMax() const { DARABONBA_PTR_GET_DEFAULT(dropSessionMax_, 0L) };
    inline DescribeInternetDropTrafficTrendResponseBody& setDropSessionMax(int64_t dropSessionMax) { DARABONBA_PTR_SET_VALUE(dropSessionMax_, dropSessionMax) };


    // ratioAverage Field Functions 
    bool hasRatioAverage() const { return this->ratioAverage_ != nullptr;};
    void deleteRatioAverage() { this->ratioAverage_ = nullptr;};
    inline string getRatioAverage() const { DARABONBA_PTR_GET_DEFAULT(ratioAverage_, "") };
    inline DescribeInternetDropTrafficTrendResponseBody& setRatioAverage(string ratioAverage) { DARABONBA_PTR_SET_VALUE(ratioAverage_, ratioAverage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetDropTrafficTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ringRatioAverage Field Functions 
    bool hasRingRatioAverage() const { return this->ringRatioAverage_ != nullptr;};
    void deleteRingRatioAverage() { this->ringRatioAverage_ = nullptr;};
    inline string getRingRatioAverage() const { DARABONBA_PTR_GET_DEFAULT(ringRatioAverage_, "") };
    inline DescribeInternetDropTrafficTrendResponseBody& setRingRatioAverage(string ringRatioAverage) { DARABONBA_PTR_SET_VALUE(ringRatioAverage_, ringRatioAverage) };


  protected:
    shared_ptr<vector<DescribeInternetDropTrafficTrendResponseBody::DataList>> dataList_ {};
    shared_ptr<int64_t> dropSessionMax_ {};
    shared_ptr<string> ratioAverage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> ringRatioAverage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
