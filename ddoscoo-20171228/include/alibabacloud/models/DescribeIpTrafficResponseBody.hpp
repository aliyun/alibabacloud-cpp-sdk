// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPTRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPTRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeIpTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvgInBps, avgInBps_);
      DARABONBA_PTR_TO_JSON(AvgOutBps, avgOutBps_);
      DARABONBA_PTR_TO_JSON(IpTrafficPoints, ipTrafficPoints_);
      DARABONBA_PTR_TO_JSON(MaxInBps, maxInBps_);
      DARABONBA_PTR_TO_JSON(MaxOutBps, maxOutBps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgInBps, avgInBps_);
      DARABONBA_PTR_FROM_JSON(AvgOutBps, avgOutBps_);
      DARABONBA_PTR_FROM_JSON(IpTrafficPoints, ipTrafficPoints_);
      DARABONBA_PTR_FROM_JSON(MaxInBps, maxInBps_);
      DARABONBA_PTR_FROM_JSON(MaxOutBps, maxOutBps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIpTrafficResponseBody() = default ;
    DescribeIpTrafficResponseBody(const DescribeIpTrafficResponseBody &) = default ;
    DescribeIpTrafficResponseBody(DescribeIpTrafficResponseBody &&) = default ;
    DescribeIpTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpTrafficResponseBody() = default ;
    DescribeIpTrafficResponseBody& operator=(const DescribeIpTrafficResponseBody &) = default ;
    DescribeIpTrafficResponseBody& operator=(DescribeIpTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpTrafficPoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpTrafficPoints& obj) { 
        DARABONBA_PTR_TO_JSON(ActConns, actConns_);
        DARABONBA_PTR_TO_JSON(Cps, cps_);
        DARABONBA_PTR_TO_JSON(InactConns, inactConns_);
        DARABONBA_PTR_TO_JSON(MaxInbps, maxInbps_);
        DARABONBA_PTR_TO_JSON(MaxOutbps, maxOutbps_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, IpTrafficPoints& obj) { 
        DARABONBA_PTR_FROM_JSON(ActConns, actConns_);
        DARABONBA_PTR_FROM_JSON(Cps, cps_);
        DARABONBA_PTR_FROM_JSON(InactConns, inactConns_);
        DARABONBA_PTR_FROM_JSON(MaxInbps, maxInbps_);
        DARABONBA_PTR_FROM_JSON(MaxOutbps, maxOutbps_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      IpTrafficPoints() = default ;
      IpTrafficPoints(const IpTrafficPoints &) = default ;
      IpTrafficPoints(IpTrafficPoints &&) = default ;
      IpTrafficPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpTrafficPoints() = default ;
      IpTrafficPoints& operator=(const IpTrafficPoints &) = default ;
      IpTrafficPoints& operator=(IpTrafficPoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actConns_ == nullptr
        && this->cps_ == nullptr && this->inactConns_ == nullptr && this->maxInbps_ == nullptr && this->maxOutbps_ == nullptr && this->time_ == nullptr; };
      // actConns Field Functions 
      bool hasActConns() const { return this->actConns_ != nullptr;};
      void deleteActConns() { this->actConns_ = nullptr;};
      inline int32_t getActConns() const { DARABONBA_PTR_GET_DEFAULT(actConns_, 0) };
      inline IpTrafficPoints& setActConns(int32_t actConns) { DARABONBA_PTR_SET_VALUE(actConns_, actConns) };


      // cps Field Functions 
      bool hasCps() const { return this->cps_ != nullptr;};
      void deleteCps() { this->cps_ = nullptr;};
      inline int32_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
      inline IpTrafficPoints& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


      // inactConns Field Functions 
      bool hasInactConns() const { return this->inactConns_ != nullptr;};
      void deleteInactConns() { this->inactConns_ = nullptr;};
      inline int32_t getInactConns() const { DARABONBA_PTR_GET_DEFAULT(inactConns_, 0) };
      inline IpTrafficPoints& setInactConns(int32_t inactConns) { DARABONBA_PTR_SET_VALUE(inactConns_, inactConns) };


      // maxInbps Field Functions 
      bool hasMaxInbps() const { return this->maxInbps_ != nullptr;};
      void deleteMaxInbps() { this->maxInbps_ = nullptr;};
      inline int64_t getMaxInbps() const { DARABONBA_PTR_GET_DEFAULT(maxInbps_, 0L) };
      inline IpTrafficPoints& setMaxInbps(int64_t maxInbps) { DARABONBA_PTR_SET_VALUE(maxInbps_, maxInbps) };


      // maxOutbps Field Functions 
      bool hasMaxOutbps() const { return this->maxOutbps_ != nullptr;};
      void deleteMaxOutbps() { this->maxOutbps_ = nullptr;};
      inline int64_t getMaxOutbps() const { DARABONBA_PTR_GET_DEFAULT(maxOutbps_, 0L) };
      inline IpTrafficPoints& setMaxOutbps(int64_t maxOutbps) { DARABONBA_PTR_SET_VALUE(maxOutbps_, maxOutbps) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline IpTrafficPoints& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      shared_ptr<int32_t> actConns_ {};
      shared_ptr<int32_t> cps_ {};
      shared_ptr<int32_t> inactConns_ {};
      shared_ptr<int64_t> maxInbps_ {};
      shared_ptr<int64_t> maxOutbps_ {};
      shared_ptr<int64_t> time_ {};
    };

    virtual bool empty() const override { return this->avgInBps_ == nullptr
        && this->avgOutBps_ == nullptr && this->ipTrafficPoints_ == nullptr && this->maxInBps_ == nullptr && this->maxOutBps_ == nullptr && this->requestId_ == nullptr; };
    // avgInBps Field Functions 
    bool hasAvgInBps() const { return this->avgInBps_ != nullptr;};
    void deleteAvgInBps() { this->avgInBps_ = nullptr;};
    inline int64_t getAvgInBps() const { DARABONBA_PTR_GET_DEFAULT(avgInBps_, 0L) };
    inline DescribeIpTrafficResponseBody& setAvgInBps(int64_t avgInBps) { DARABONBA_PTR_SET_VALUE(avgInBps_, avgInBps) };


    // avgOutBps Field Functions 
    bool hasAvgOutBps() const { return this->avgOutBps_ != nullptr;};
    void deleteAvgOutBps() { this->avgOutBps_ = nullptr;};
    inline int64_t getAvgOutBps() const { DARABONBA_PTR_GET_DEFAULT(avgOutBps_, 0L) };
    inline DescribeIpTrafficResponseBody& setAvgOutBps(int64_t avgOutBps) { DARABONBA_PTR_SET_VALUE(avgOutBps_, avgOutBps) };


    // ipTrafficPoints Field Functions 
    bool hasIpTrafficPoints() const { return this->ipTrafficPoints_ != nullptr;};
    void deleteIpTrafficPoints() { this->ipTrafficPoints_ = nullptr;};
    inline const vector<DescribeIpTrafficResponseBody::IpTrafficPoints> & getIpTrafficPoints() const { DARABONBA_PTR_GET_CONST(ipTrafficPoints_, vector<DescribeIpTrafficResponseBody::IpTrafficPoints>) };
    inline vector<DescribeIpTrafficResponseBody::IpTrafficPoints> getIpTrafficPoints() { DARABONBA_PTR_GET(ipTrafficPoints_, vector<DescribeIpTrafficResponseBody::IpTrafficPoints>) };
    inline DescribeIpTrafficResponseBody& setIpTrafficPoints(const vector<DescribeIpTrafficResponseBody::IpTrafficPoints> & ipTrafficPoints) { DARABONBA_PTR_SET_VALUE(ipTrafficPoints_, ipTrafficPoints) };
    inline DescribeIpTrafficResponseBody& setIpTrafficPoints(vector<DescribeIpTrafficResponseBody::IpTrafficPoints> && ipTrafficPoints) { DARABONBA_PTR_SET_RVALUE(ipTrafficPoints_, ipTrafficPoints) };


    // maxInBps Field Functions 
    bool hasMaxInBps() const { return this->maxInBps_ != nullptr;};
    void deleteMaxInBps() { this->maxInBps_ = nullptr;};
    inline int64_t getMaxInBps() const { DARABONBA_PTR_GET_DEFAULT(maxInBps_, 0L) };
    inline DescribeIpTrafficResponseBody& setMaxInBps(int64_t maxInBps) { DARABONBA_PTR_SET_VALUE(maxInBps_, maxInBps) };


    // maxOutBps Field Functions 
    bool hasMaxOutBps() const { return this->maxOutBps_ != nullptr;};
    void deleteMaxOutBps() { this->maxOutBps_ = nullptr;};
    inline int64_t getMaxOutBps() const { DARABONBA_PTR_GET_DEFAULT(maxOutBps_, 0L) };
    inline DescribeIpTrafficResponseBody& setMaxOutBps(int64_t maxOutBps) { DARABONBA_PTR_SET_VALUE(maxOutBps_, maxOutBps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> avgInBps_ {};
    shared_ptr<int64_t> avgOutBps_ {};
    shared_ptr<vector<DescribeIpTrafficResponseBody::IpTrafficPoints>> ipTrafficPoints_ {};
    shared_ptr<int64_t> maxInBps_ {};
    shared_ptr<int64_t> maxOutBps_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
