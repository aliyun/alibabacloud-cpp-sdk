// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPQPSRESPONSEBODYGROUPQPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPQPSRESPONSEBODYGROUPQPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupQpsResponseBodyGroupQpsMonitorItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeGroupQpsResponseBodyGroupQps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupQpsResponseBodyGroupQps& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupQpsResponseBodyGroupQps& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
    };
    DescribeGroupQpsResponseBodyGroupQps() = default ;
    DescribeGroupQpsResponseBodyGroupQps(const DescribeGroupQpsResponseBodyGroupQps &) = default ;
    DescribeGroupQpsResponseBodyGroupQps(DescribeGroupQpsResponseBodyGroupQps &&) = default ;
    DescribeGroupQpsResponseBodyGroupQps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupQpsResponseBodyGroupQps() = default ;
    DescribeGroupQpsResponseBodyGroupQps& operator=(const DescribeGroupQpsResponseBodyGroupQps &) = default ;
    DescribeGroupQpsResponseBodyGroupQps& operator=(DescribeGroupQpsResponseBodyGroupQps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorItem_ == nullptr; };
    // monitorItem Field Functions 
    bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
    void deleteMonitorItem() { this->monitorItem_ = nullptr;};
    inline const vector<Models::DescribeGroupQpsResponseBodyGroupQpsMonitorItem> & monitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<Models::DescribeGroupQpsResponseBodyGroupQpsMonitorItem>) };
    inline vector<Models::DescribeGroupQpsResponseBodyGroupQpsMonitorItem> monitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<Models::DescribeGroupQpsResponseBodyGroupQpsMonitorItem>) };
    inline DescribeGroupQpsResponseBodyGroupQps& setMonitorItem(const vector<Models::DescribeGroupQpsResponseBodyGroupQpsMonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
    inline DescribeGroupQpsResponseBodyGroupQps& setMonitorItem(vector<Models::DescribeGroupQpsResponseBodyGroupQpsMonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeGroupQpsResponseBodyGroupQpsMonitorItem>> monitorItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
