// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENIMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENIMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeEniMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEniMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEniMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorData, monitorData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEniMonitorDataResponseBody() = default ;
    DescribeEniMonitorDataResponseBody(const DescribeEniMonitorDataResponseBody &) = default ;
    DescribeEniMonitorDataResponseBody(DescribeEniMonitorDataResponseBody &&) = default ;
    DescribeEniMonitorDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEniMonitorDataResponseBody() = default ;
    DescribeEniMonitorDataResponseBody& operator=(const DescribeEniMonitorDataResponseBody &) = default ;
    DescribeEniMonitorDataResponseBody& operator=(DescribeEniMonitorDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MonitorData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorData& obj) { 
        DARABONBA_PTR_TO_JSON(EniMonitorData, eniMonitorData_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorData& obj) { 
        DARABONBA_PTR_FROM_JSON(EniMonitorData, eniMonitorData_);
      };
      MonitorData() = default ;
      MonitorData(const MonitorData &) = default ;
      MonitorData(MonitorData &&) = default ;
      MonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitorData() = default ;
      MonitorData& operator=(const MonitorData &) = default ;
      MonitorData& operator=(MonitorData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EniMonitorData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EniMonitorData& obj) { 
          DARABONBA_PTR_TO_JSON(DropPacketRx, dropPacketRx_);
          DARABONBA_PTR_TO_JSON(DropPacketTx, dropPacketTx_);
          DARABONBA_PTR_TO_JSON(EniId, eniId_);
          DARABONBA_PTR_TO_JSON(IntranetRx, intranetRx_);
          DARABONBA_PTR_TO_JSON(IntranetTx, intranetTx_);
          DARABONBA_PTR_TO_JSON(PacketRx, packetRx_);
          DARABONBA_PTR_TO_JSON(PacketTx, packetTx_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, EniMonitorData& obj) { 
          DARABONBA_PTR_FROM_JSON(DropPacketRx, dropPacketRx_);
          DARABONBA_PTR_FROM_JSON(DropPacketTx, dropPacketTx_);
          DARABONBA_PTR_FROM_JSON(EniId, eniId_);
          DARABONBA_PTR_FROM_JSON(IntranetRx, intranetRx_);
          DARABONBA_PTR_FROM_JSON(IntranetTx, intranetTx_);
          DARABONBA_PTR_FROM_JSON(PacketRx, packetRx_);
          DARABONBA_PTR_FROM_JSON(PacketTx, packetTx_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        EniMonitorData() = default ;
        EniMonitorData(const EniMonitorData &) = default ;
        EniMonitorData(EniMonitorData &&) = default ;
        EniMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EniMonitorData() = default ;
        EniMonitorData& operator=(const EniMonitorData &) = default ;
        EniMonitorData& operator=(EniMonitorData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dropPacketRx_ == nullptr
        && this->dropPacketTx_ == nullptr && this->eniId_ == nullptr && this->intranetRx_ == nullptr && this->intranetTx_ == nullptr && this->packetRx_ == nullptr
        && this->packetTx_ == nullptr && this->timeStamp_ == nullptr; };
        // dropPacketRx Field Functions 
        bool hasDropPacketRx() const { return this->dropPacketRx_ != nullptr;};
        void deleteDropPacketRx() { this->dropPacketRx_ = nullptr;};
        inline string getDropPacketRx() const { DARABONBA_PTR_GET_DEFAULT(dropPacketRx_, "") };
        inline EniMonitorData& setDropPacketRx(string dropPacketRx) { DARABONBA_PTR_SET_VALUE(dropPacketRx_, dropPacketRx) };


        // dropPacketTx Field Functions 
        bool hasDropPacketTx() const { return this->dropPacketTx_ != nullptr;};
        void deleteDropPacketTx() { this->dropPacketTx_ = nullptr;};
        inline string getDropPacketTx() const { DARABONBA_PTR_GET_DEFAULT(dropPacketTx_, "") };
        inline EniMonitorData& setDropPacketTx(string dropPacketTx) { DARABONBA_PTR_SET_VALUE(dropPacketTx_, dropPacketTx) };


        // eniId Field Functions 
        bool hasEniId() const { return this->eniId_ != nullptr;};
        void deleteEniId() { this->eniId_ = nullptr;};
        inline string getEniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
        inline EniMonitorData& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


        // intranetRx Field Functions 
        bool hasIntranetRx() const { return this->intranetRx_ != nullptr;};
        void deleteIntranetRx() { this->intranetRx_ = nullptr;};
        inline string getIntranetRx() const { DARABONBA_PTR_GET_DEFAULT(intranetRx_, "") };
        inline EniMonitorData& setIntranetRx(string intranetRx) { DARABONBA_PTR_SET_VALUE(intranetRx_, intranetRx) };


        // intranetTx Field Functions 
        bool hasIntranetTx() const { return this->intranetTx_ != nullptr;};
        void deleteIntranetTx() { this->intranetTx_ = nullptr;};
        inline string getIntranetTx() const { DARABONBA_PTR_GET_DEFAULT(intranetTx_, "") };
        inline EniMonitorData& setIntranetTx(string intranetTx) { DARABONBA_PTR_SET_VALUE(intranetTx_, intranetTx) };


        // packetRx Field Functions 
        bool hasPacketRx() const { return this->packetRx_ != nullptr;};
        void deletePacketRx() { this->packetRx_ = nullptr;};
        inline string getPacketRx() const { DARABONBA_PTR_GET_DEFAULT(packetRx_, "") };
        inline EniMonitorData& setPacketRx(string packetRx) { DARABONBA_PTR_SET_VALUE(packetRx_, packetRx) };


        // packetTx Field Functions 
        bool hasPacketTx() const { return this->packetTx_ != nullptr;};
        void deletePacketTx() { this->packetTx_ = nullptr;};
        inline string getPacketTx() const { DARABONBA_PTR_GET_DEFAULT(packetTx_, "") };
        inline EniMonitorData& setPacketTx(string packetTx) { DARABONBA_PTR_SET_VALUE(packetTx_, packetTx) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline EniMonitorData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The number of received packets that were dropped by the secondary ENI over the internal network.
        shared_ptr<string> dropPacketRx_ {};
        // The number of sent packets that were dropped by the secondary ENI over the internal network.
        shared_ptr<string> dropPacketTx_ {};
        // The ID of the secondary ENI.
        shared_ptr<string> eniId_ {};
        // The average rate at which the secondary ENI received data over the internal network. Unit: Kbit/s.
        shared_ptr<string> intranetRx_ {};
        // The average rate at which the secondary ENI sent data over the internal network. Unit: Kbit/s.
        shared_ptr<string> intranetTx_ {};
        // The number of packets received by the secondary ENI over the internal network.
        shared_ptr<string> packetRx_ {};
        // The number of packets sent by the secondary ENI over the internal network.
        shared_ptr<string> packetTx_ {};
        // The timestamp of the monitoring data. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->eniMonitorData_ == nullptr; };
      // eniMonitorData Field Functions 
      bool hasEniMonitorData() const { return this->eniMonitorData_ != nullptr;};
      void deleteEniMonitorData() { this->eniMonitorData_ = nullptr;};
      inline const vector<MonitorData::EniMonitorData> & getEniMonitorData() const { DARABONBA_PTR_GET_CONST(eniMonitorData_, vector<MonitorData::EniMonitorData>) };
      inline vector<MonitorData::EniMonitorData> getEniMonitorData() { DARABONBA_PTR_GET(eniMonitorData_, vector<MonitorData::EniMonitorData>) };
      inline MonitorData& setEniMonitorData(const vector<MonitorData::EniMonitorData> & eniMonitorData) { DARABONBA_PTR_SET_VALUE(eniMonitorData_, eniMonitorData) };
      inline MonitorData& setEniMonitorData(vector<MonitorData::EniMonitorData> && eniMonitorData) { DARABONBA_PTR_SET_RVALUE(eniMonitorData_, eniMonitorData) };


    protected:
      shared_ptr<vector<MonitorData::EniMonitorData>> eniMonitorData_ {};
    };

    virtual bool empty() const override { return this->monitorData_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // monitorData Field Functions 
    bool hasMonitorData() const { return this->monitorData_ != nullptr;};
    void deleteMonitorData() { this->monitorData_ = nullptr;};
    inline const DescribeEniMonitorDataResponseBody::MonitorData & getMonitorData() const { DARABONBA_PTR_GET_CONST(monitorData_, DescribeEniMonitorDataResponseBody::MonitorData) };
    inline DescribeEniMonitorDataResponseBody::MonitorData getMonitorData() { DARABONBA_PTR_GET(monitorData_, DescribeEniMonitorDataResponseBody::MonitorData) };
    inline DescribeEniMonitorDataResponseBody& setMonitorData(const DescribeEniMonitorDataResponseBody::MonitorData & monitorData) { DARABONBA_PTR_SET_VALUE(monitorData_, monitorData) };
    inline DescribeEniMonitorDataResponseBody& setMonitorData(DescribeEniMonitorDataResponseBody::MonitorData && monitorData) { DARABONBA_PTR_SET_RVALUE(monitorData_, monitorData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEniMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEniMonitorDataResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The monitoring data of the secondary ENI.
    shared_ptr<DescribeEniMonitorDataResponseBody::MonitorData> monitorData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
