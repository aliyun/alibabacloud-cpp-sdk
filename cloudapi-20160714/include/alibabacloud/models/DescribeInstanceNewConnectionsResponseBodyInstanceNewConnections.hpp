// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCENEWCONNECTIONSRESPONSEBODYINSTANCENEWCONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCENEWCONNECTIONSRESPONSEBODYINSTANCENEWCONNECTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceNewConnectionsResponseBodyInstanceNewConnectionsMonitorItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
    };
    DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections() = default ;
    DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections(const DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections &) = default ;
    DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections(DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections &&) = default ;
    DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections() = default ;
    DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections& operator=(const DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections &) = default ;
    DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections& operator=(DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorItem_ == nullptr; };
    // monitorItem Field Functions 
    bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
    void deleteMonitorItem() { this->monitorItem_ = nullptr;};
    inline const vector<Models::DescribeInstanceNewConnectionsResponseBodyInstanceNewConnectionsMonitorItem> & monitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<Models::DescribeInstanceNewConnectionsResponseBodyInstanceNewConnectionsMonitorItem>) };
    inline vector<Models::DescribeInstanceNewConnectionsResponseBodyInstanceNewConnectionsMonitorItem> monitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<Models::DescribeInstanceNewConnectionsResponseBodyInstanceNewConnectionsMonitorItem>) };
    inline DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections& setMonitorItem(const vector<Models::DescribeInstanceNewConnectionsResponseBodyInstanceNewConnectionsMonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
    inline DescribeInstanceNewConnectionsResponseBodyInstanceNewConnections& setMonitorItem(vector<Models::DescribeInstanceNewConnectionsResponseBodyInstanceNewConnectionsMonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceNewConnectionsResponseBodyInstanceNewConnectionsMonitorItem>> monitorItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
