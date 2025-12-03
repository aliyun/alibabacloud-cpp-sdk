// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESLBCONNECTRESPONSEBODYINSTANCESLBCONNECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESLBCONNECTRESPONSEBODYINSTANCESLBCONNECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceSlbConnectResponseBodyInstanceSlbConnectMonitorItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
    };
    DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect() = default ;
    DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect(const DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect &) = default ;
    DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect(DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect &&) = default ;
    DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect() = default ;
    DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect& operator=(const DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect &) = default ;
    DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect& operator=(DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorItem_ == nullptr; };
    // monitorItem Field Functions 
    bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
    void deleteMonitorItem() { this->monitorItem_ = nullptr;};
    inline const vector<Models::DescribeInstanceSlbConnectResponseBodyInstanceSlbConnectMonitorItem> & monitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<Models::DescribeInstanceSlbConnectResponseBodyInstanceSlbConnectMonitorItem>) };
    inline vector<Models::DescribeInstanceSlbConnectResponseBodyInstanceSlbConnectMonitorItem> monitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<Models::DescribeInstanceSlbConnectResponseBodyInstanceSlbConnectMonitorItem>) };
    inline DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect& setMonitorItem(const vector<Models::DescribeInstanceSlbConnectResponseBodyInstanceSlbConnectMonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
    inline DescribeInstanceSlbConnectResponseBodyInstanceSlbConnect& setMonitorItem(vector<Models::DescribeInstanceSlbConnectResponseBodyInstanceSlbConnectMonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceSlbConnectResponseBodyInstanceSlbConnectMonitorItem>> monitorItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
