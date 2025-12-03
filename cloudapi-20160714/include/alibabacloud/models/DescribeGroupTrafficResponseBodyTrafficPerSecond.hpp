// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPTRAFFICRESPONSEBODYTRAFFICPERSECOND_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPTRAFFICRESPONSEBODYTRAFFICPERSECOND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupTrafficResponseBodyTrafficPerSecondMonitorItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeGroupTrafficResponseBodyTrafficPerSecond : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupTrafficResponseBodyTrafficPerSecond& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupTrafficResponseBodyTrafficPerSecond& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
    };
    DescribeGroupTrafficResponseBodyTrafficPerSecond() = default ;
    DescribeGroupTrafficResponseBodyTrafficPerSecond(const DescribeGroupTrafficResponseBodyTrafficPerSecond &) = default ;
    DescribeGroupTrafficResponseBodyTrafficPerSecond(DescribeGroupTrafficResponseBodyTrafficPerSecond &&) = default ;
    DescribeGroupTrafficResponseBodyTrafficPerSecond(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupTrafficResponseBodyTrafficPerSecond() = default ;
    DescribeGroupTrafficResponseBodyTrafficPerSecond& operator=(const DescribeGroupTrafficResponseBodyTrafficPerSecond &) = default ;
    DescribeGroupTrafficResponseBodyTrafficPerSecond& operator=(DescribeGroupTrafficResponseBodyTrafficPerSecond &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorItem_ == nullptr; };
    // monitorItem Field Functions 
    bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
    void deleteMonitorItem() { this->monitorItem_ = nullptr;};
    inline const vector<Models::DescribeGroupTrafficResponseBodyTrafficPerSecondMonitorItem> & monitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<Models::DescribeGroupTrafficResponseBodyTrafficPerSecondMonitorItem>) };
    inline vector<Models::DescribeGroupTrafficResponseBodyTrafficPerSecondMonitorItem> monitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<Models::DescribeGroupTrafficResponseBodyTrafficPerSecondMonitorItem>) };
    inline DescribeGroupTrafficResponseBodyTrafficPerSecond& setMonitorItem(const vector<Models::DescribeGroupTrafficResponseBodyTrafficPerSecondMonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
    inline DescribeGroupTrafficResponseBodyTrafficPerSecond& setMonitorItem(vector<Models::DescribeGroupTrafficResponseBodyTrafficPerSecondMonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeGroupTrafficResponseBodyTrafficPerSecondMonitorItem>> monitorItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
