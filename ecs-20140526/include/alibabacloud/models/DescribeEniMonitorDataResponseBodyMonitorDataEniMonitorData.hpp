// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENIMONITORDATARESPONSEBODYMONITORDATAENIMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENIMONITORDATARESPONSEBODYMONITORDATAENIMONITORDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(DropPacketRx, dropPacketRx_);
      DARABONBA_PTR_TO_JSON(DropPacketTx, dropPacketTx_);
      DARABONBA_PTR_TO_JSON(EniId, eniId_);
      DARABONBA_PTR_TO_JSON(IntranetRx, intranetRx_);
      DARABONBA_PTR_TO_JSON(IntranetTx, intranetTx_);
      DARABONBA_PTR_TO_JSON(PacketRx, packetRx_);
      DARABONBA_PTR_TO_JSON(PacketTx, packetTx_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(DropPacketRx, dropPacketRx_);
      DARABONBA_PTR_FROM_JSON(DropPacketTx, dropPacketTx_);
      DARABONBA_PTR_FROM_JSON(EniId, eniId_);
      DARABONBA_PTR_FROM_JSON(IntranetRx, intranetRx_);
      DARABONBA_PTR_FROM_JSON(IntranetTx, intranetTx_);
      DARABONBA_PTR_FROM_JSON(PacketRx, packetRx_);
      DARABONBA_PTR_FROM_JSON(PacketTx, packetTx_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData() = default ;
    DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData(const DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData &) = default ;
    DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData(DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData &&) = default ;
    DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData() = default ;
    DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData& operator=(const DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData &) = default ;
    DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData& operator=(DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dropPacketRx_ == nullptr
        && return this->dropPacketTx_ == nullptr && return this->eniId_ == nullptr && return this->intranetRx_ == nullptr && return this->intranetTx_ == nullptr && return this->packetRx_ == nullptr
        && return this->packetTx_ == nullptr && return this->timeStamp_ == nullptr; };
    // dropPacketRx Field Functions 
    bool hasDropPacketRx() const { return this->dropPacketRx_ != nullptr;};
    void deleteDropPacketRx() { this->dropPacketRx_ = nullptr;};
    inline string dropPacketRx() const { DARABONBA_PTR_GET_DEFAULT(dropPacketRx_, "") };
    inline DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData& setDropPacketRx(string dropPacketRx) { DARABONBA_PTR_SET_VALUE(dropPacketRx_, dropPacketRx) };


    // dropPacketTx Field Functions 
    bool hasDropPacketTx() const { return this->dropPacketTx_ != nullptr;};
    void deleteDropPacketTx() { this->dropPacketTx_ = nullptr;};
    inline string dropPacketTx() const { DARABONBA_PTR_GET_DEFAULT(dropPacketTx_, "") };
    inline DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData& setDropPacketTx(string dropPacketTx) { DARABONBA_PTR_SET_VALUE(dropPacketTx_, dropPacketTx) };


    // eniId Field Functions 
    bool hasEniId() const { return this->eniId_ != nullptr;};
    void deleteEniId() { this->eniId_ = nullptr;};
    inline string eniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
    inline DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


    // intranetRx Field Functions 
    bool hasIntranetRx() const { return this->intranetRx_ != nullptr;};
    void deleteIntranetRx() { this->intranetRx_ = nullptr;};
    inline string intranetRx() const { DARABONBA_PTR_GET_DEFAULT(intranetRx_, "") };
    inline DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData& setIntranetRx(string intranetRx) { DARABONBA_PTR_SET_VALUE(intranetRx_, intranetRx) };


    // intranetTx Field Functions 
    bool hasIntranetTx() const { return this->intranetTx_ != nullptr;};
    void deleteIntranetTx() { this->intranetTx_ = nullptr;};
    inline string intranetTx() const { DARABONBA_PTR_GET_DEFAULT(intranetTx_, "") };
    inline DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData& setIntranetTx(string intranetTx) { DARABONBA_PTR_SET_VALUE(intranetTx_, intranetTx) };


    // packetRx Field Functions 
    bool hasPacketRx() const { return this->packetRx_ != nullptr;};
    void deletePacketRx() { this->packetRx_ = nullptr;};
    inline string packetRx() const { DARABONBA_PTR_GET_DEFAULT(packetRx_, "") };
    inline DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData& setPacketRx(string packetRx) { DARABONBA_PTR_SET_VALUE(packetRx_, packetRx) };


    // packetTx Field Functions 
    bool hasPacketTx() const { return this->packetTx_ != nullptr;};
    void deletePacketTx() { this->packetTx_ = nullptr;};
    inline string packetTx() const { DARABONBA_PTR_GET_DEFAULT(packetTx_, "") };
    inline DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData& setPacketTx(string packetTx) { DARABONBA_PTR_SET_VALUE(packetTx_, packetTx) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The number of received packets that were dropped by the secondary ENI over the internal network.
    std::shared_ptr<string> dropPacketRx_ = nullptr;
    // The number of sent packets that were dropped by the secondary ENI over the internal network.
    std::shared_ptr<string> dropPacketTx_ = nullptr;
    // The ID of the secondary ENI.
    std::shared_ptr<string> eniId_ = nullptr;
    // The average rate at which the secondary ENI received data over the internal network. Unit: Kbit/s.
    std::shared_ptr<string> intranetRx_ = nullptr;
    // The average rate at which the secondary ENI sent data over the internal network. Unit: Kbit/s.
    std::shared_ptr<string> intranetTx_ = nullptr;
    // The number of packets received by the secondary ENI over the internal network.
    std::shared_ptr<string> packetRx_ = nullptr;
    // The number of packets sent by the secondary ENI over the internal network.
    std::shared_ptr<string> packetTx_ = nullptr;
    // The timestamp of the monitoring data. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
