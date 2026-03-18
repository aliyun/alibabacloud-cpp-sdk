// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICRESPONSEBODY_HPP_
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
  class DescribeTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowList, flowList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowList, flowList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTrafficResponseBody() = default ;
    DescribeTrafficResponseBody(const DescribeTrafficResponseBody &) = default ;
    DescribeTrafficResponseBody(DescribeTrafficResponseBody &&) = default ;
    DescribeTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficResponseBody() = default ;
    DescribeTrafficResponseBody& operator=(const DescribeTrafficResponseBody &) = default ;
    DescribeTrafficResponseBody& operator=(DescribeTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FlowList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlowList& obj) { 
        DARABONBA_PTR_TO_JSON(AttackBps, attackBps_);
        DARABONBA_PTR_TO_JSON(AttackPps, attackPps_);
        DARABONBA_PTR_TO_JSON(FlowType, flowType_);
        DARABONBA_PTR_TO_JSON(Kbps, kbps_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Pps, pps_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, FlowList& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackBps, attackBps_);
        DARABONBA_PTR_FROM_JSON(AttackPps, attackPps_);
        DARABONBA_PTR_FROM_JSON(FlowType, flowType_);
        DARABONBA_PTR_FROM_JSON(Kbps, kbps_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Pps, pps_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      FlowList() = default ;
      FlowList(const FlowList &) = default ;
      FlowList(FlowList &&) = default ;
      FlowList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlowList() = default ;
      FlowList& operator=(const FlowList &) = default ;
      FlowList& operator=(FlowList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackBps_ == nullptr
        && this->attackPps_ == nullptr && this->flowType_ == nullptr && this->kbps_ == nullptr && this->name_ == nullptr && this->pps_ == nullptr
        && this->time_ == nullptr; };
      // attackBps Field Functions 
      bool hasAttackBps() const { return this->attackBps_ != nullptr;};
      void deleteAttackBps() { this->attackBps_ = nullptr;};
      inline int64_t getAttackBps() const { DARABONBA_PTR_GET_DEFAULT(attackBps_, 0L) };
      inline FlowList& setAttackBps(int64_t attackBps) { DARABONBA_PTR_SET_VALUE(attackBps_, attackBps) };


      // attackPps Field Functions 
      bool hasAttackPps() const { return this->attackPps_ != nullptr;};
      void deleteAttackPps() { this->attackPps_ = nullptr;};
      inline int64_t getAttackPps() const { DARABONBA_PTR_GET_DEFAULT(attackPps_, 0L) };
      inline FlowList& setAttackPps(int64_t attackPps) { DARABONBA_PTR_SET_VALUE(attackPps_, attackPps) };


      // flowType Field Functions 
      bool hasFlowType() const { return this->flowType_ != nullptr;};
      void deleteFlowType() { this->flowType_ = nullptr;};
      inline string getFlowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
      inline FlowList& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


      // kbps Field Functions 
      bool hasKbps() const { return this->kbps_ != nullptr;};
      void deleteKbps() { this->kbps_ = nullptr;};
      inline int32_t getKbps() const { DARABONBA_PTR_GET_DEFAULT(kbps_, 0) };
      inline FlowList& setKbps(int32_t kbps) { DARABONBA_PTR_SET_VALUE(kbps_, kbps) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FlowList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pps Field Functions 
      bool hasPps() const { return this->pps_ != nullptr;};
      void deletePps() { this->pps_ = nullptr;};
      inline int32_t getPps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0) };
      inline FlowList& setPps(int32_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int32_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0) };
      inline FlowList& setTime(int32_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The bandwidth of attack traffic. Unit: bit/s.
      // 
      // >  This parameter is returned only if attack traffic exists.
      shared_ptr<int64_t> attackBps_ {};
      // The packet forwarding rate of attack traffic. Unit: packets per second.
      // 
      // >  This parameter is returned only if attack traffic exists.
      shared_ptr<int64_t> attackPps_ {};
      // The type of the traffic statistics. Valid values:
      // 
      // *   **max**: the peak traffic within the specified interval
      // *   **avg**: the average traffic within the specified interval
      shared_ptr<string> flowType_ {};
      // The bandwidth of the total traffic. Unit: Kbit/s.
      shared_ptr<int32_t> kbps_ {};
      // The ID of the traffic statistics.
      shared_ptr<string> name_ {};
      // The packet forwarding rate of the total traffic. Unit: packets per second.
      shared_ptr<int32_t> pps_ {};
      // The time when the traffic statistics are calculated. This value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int32_t> time_ {};
    };

    virtual bool empty() const override { return this->flowList_ == nullptr
        && this->requestId_ == nullptr; };
    // flowList Field Functions 
    bool hasFlowList() const { return this->flowList_ != nullptr;};
    void deleteFlowList() { this->flowList_ = nullptr;};
    inline const vector<DescribeTrafficResponseBody::FlowList> & getFlowList() const { DARABONBA_PTR_GET_CONST(flowList_, vector<DescribeTrafficResponseBody::FlowList>) };
    inline vector<DescribeTrafficResponseBody::FlowList> getFlowList() { DARABONBA_PTR_GET(flowList_, vector<DescribeTrafficResponseBody::FlowList>) };
    inline DescribeTrafficResponseBody& setFlowList(const vector<DescribeTrafficResponseBody::FlowList> & flowList) { DARABONBA_PTR_SET_VALUE(flowList_, flowList) };
    inline DescribeTrafficResponseBody& setFlowList(vector<DescribeTrafficResponseBody::FlowList> && flowList) { DARABONBA_PTR_SET_RVALUE(flowList_, flowList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried traffic statistics.
    shared_ptr<vector<DescribeTrafficResponseBody::FlowList>> flowList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
