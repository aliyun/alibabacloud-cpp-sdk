// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDROPPACKETRESPONSEBODYINSTANCEDROPPACKET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDROPPACKETRESPONSEBODYINSTANCEDROPPACKET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceDropPacketResponseBodyInstanceDropPacketMonitorItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceDropPacketResponseBodyInstanceDropPacket : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDropPacketResponseBodyInstanceDropPacket& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDropPacketResponseBodyInstanceDropPacket& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
    };
    DescribeInstanceDropPacketResponseBodyInstanceDropPacket() = default ;
    DescribeInstanceDropPacketResponseBodyInstanceDropPacket(const DescribeInstanceDropPacketResponseBodyInstanceDropPacket &) = default ;
    DescribeInstanceDropPacketResponseBodyInstanceDropPacket(DescribeInstanceDropPacketResponseBodyInstanceDropPacket &&) = default ;
    DescribeInstanceDropPacketResponseBodyInstanceDropPacket(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDropPacketResponseBodyInstanceDropPacket() = default ;
    DescribeInstanceDropPacketResponseBodyInstanceDropPacket& operator=(const DescribeInstanceDropPacketResponseBodyInstanceDropPacket &) = default ;
    DescribeInstanceDropPacketResponseBodyInstanceDropPacket& operator=(DescribeInstanceDropPacketResponseBodyInstanceDropPacket &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorItem_ == nullptr; };
    // monitorItem Field Functions 
    bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
    void deleteMonitorItem() { this->monitorItem_ = nullptr;};
    inline const vector<Models::DescribeInstanceDropPacketResponseBodyInstanceDropPacketMonitorItem> & monitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<Models::DescribeInstanceDropPacketResponseBodyInstanceDropPacketMonitorItem>) };
    inline vector<Models::DescribeInstanceDropPacketResponseBodyInstanceDropPacketMonitorItem> monitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<Models::DescribeInstanceDropPacketResponseBodyInstanceDropPacketMonitorItem>) };
    inline DescribeInstanceDropPacketResponseBodyInstanceDropPacket& setMonitorItem(const vector<Models::DescribeInstanceDropPacketResponseBodyInstanceDropPacketMonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
    inline DescribeInstanceDropPacketResponseBodyInstanceDropPacket& setMonitorItem(vector<Models::DescribeInstanceDropPacketResponseBodyInstanceDropPacketMonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceDropPacketResponseBodyInstanceDropPacketMonitorItem>> monitorItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
