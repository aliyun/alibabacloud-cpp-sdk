// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPILATENCYDATARESPONSEBODYCALLLATENCYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPILATENCYDATARESPONSEBODYCALLLATENCYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiLatencyDataResponseBodyCallLatencysMonitorItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiLatencyDataResponseBodyCallLatencys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiLatencyDataResponseBodyCallLatencys& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiLatencyDataResponseBodyCallLatencys& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
    };
    DescribeApiLatencyDataResponseBodyCallLatencys() = default ;
    DescribeApiLatencyDataResponseBodyCallLatencys(const DescribeApiLatencyDataResponseBodyCallLatencys &) = default ;
    DescribeApiLatencyDataResponseBodyCallLatencys(DescribeApiLatencyDataResponseBodyCallLatencys &&) = default ;
    DescribeApiLatencyDataResponseBodyCallLatencys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiLatencyDataResponseBodyCallLatencys() = default ;
    DescribeApiLatencyDataResponseBodyCallLatencys& operator=(const DescribeApiLatencyDataResponseBodyCallLatencys &) = default ;
    DescribeApiLatencyDataResponseBodyCallLatencys& operator=(DescribeApiLatencyDataResponseBodyCallLatencys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorItem_ == nullptr; };
    // monitorItem Field Functions 
    bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
    void deleteMonitorItem() { this->monitorItem_ = nullptr;};
    inline const vector<Models::DescribeApiLatencyDataResponseBodyCallLatencysMonitorItem> & monitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<Models::DescribeApiLatencyDataResponseBodyCallLatencysMonitorItem>) };
    inline vector<Models::DescribeApiLatencyDataResponseBodyCallLatencysMonitorItem> monitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<Models::DescribeApiLatencyDataResponseBodyCallLatencysMonitorItem>) };
    inline DescribeApiLatencyDataResponseBodyCallLatencys& setMonitorItem(const vector<Models::DescribeApiLatencyDataResponseBodyCallLatencysMonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
    inline DescribeApiLatencyDataResponseBodyCallLatencys& setMonitorItem(vector<Models::DescribeApiLatencyDataResponseBodyCallLatencysMonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiLatencyDataResponseBodyCallLatencysMonitorItem>> monitorItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
