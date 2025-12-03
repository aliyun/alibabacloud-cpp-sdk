// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEQPSRESPONSEBODYINSTANCEQPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEQPSRESPONSEBODYINSTANCEQPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceQpsResponseBodyInstanceQpsMonitorItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceQpsResponseBodyInstanceQps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceQpsResponseBodyInstanceQps& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceQpsResponseBodyInstanceQps& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
    };
    DescribeInstanceQpsResponseBodyInstanceQps() = default ;
    DescribeInstanceQpsResponseBodyInstanceQps(const DescribeInstanceQpsResponseBodyInstanceQps &) = default ;
    DescribeInstanceQpsResponseBodyInstanceQps(DescribeInstanceQpsResponseBodyInstanceQps &&) = default ;
    DescribeInstanceQpsResponseBodyInstanceQps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceQpsResponseBodyInstanceQps() = default ;
    DescribeInstanceQpsResponseBodyInstanceQps& operator=(const DescribeInstanceQpsResponseBodyInstanceQps &) = default ;
    DescribeInstanceQpsResponseBodyInstanceQps& operator=(DescribeInstanceQpsResponseBodyInstanceQps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorItem_ == nullptr; };
    // monitorItem Field Functions 
    bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
    void deleteMonitorItem() { this->monitorItem_ = nullptr;};
    inline const vector<Models::DescribeInstanceQpsResponseBodyInstanceQpsMonitorItem> & monitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<Models::DescribeInstanceQpsResponseBodyInstanceQpsMonitorItem>) };
    inline vector<Models::DescribeInstanceQpsResponseBodyInstanceQpsMonitorItem> monitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<Models::DescribeInstanceQpsResponseBodyInstanceQpsMonitorItem>) };
    inline DescribeInstanceQpsResponseBodyInstanceQps& setMonitorItem(const vector<Models::DescribeInstanceQpsResponseBodyInstanceQpsMonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
    inline DescribeInstanceQpsResponseBodyInstanceQps& setMonitorItem(vector<Models::DescribeInstanceQpsResponseBodyInstanceQpsMonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceQpsResponseBodyInstanceQpsMonitorItem>> monitorItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
