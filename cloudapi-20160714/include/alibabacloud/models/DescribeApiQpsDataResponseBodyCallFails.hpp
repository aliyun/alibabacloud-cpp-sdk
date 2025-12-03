// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIQPSDATARESPONSEBODYCALLFAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIQPSDATARESPONSEBODYCALLFAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiQpsDataResponseBodyCallFailsMonitorItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiQpsDataResponseBodyCallFails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiQpsDataResponseBodyCallFails& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiQpsDataResponseBodyCallFails& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
    };
    DescribeApiQpsDataResponseBodyCallFails() = default ;
    DescribeApiQpsDataResponseBodyCallFails(const DescribeApiQpsDataResponseBodyCallFails &) = default ;
    DescribeApiQpsDataResponseBodyCallFails(DescribeApiQpsDataResponseBodyCallFails &&) = default ;
    DescribeApiQpsDataResponseBodyCallFails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiQpsDataResponseBodyCallFails() = default ;
    DescribeApiQpsDataResponseBodyCallFails& operator=(const DescribeApiQpsDataResponseBodyCallFails &) = default ;
    DescribeApiQpsDataResponseBodyCallFails& operator=(DescribeApiQpsDataResponseBodyCallFails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorItem_ == nullptr; };
    // monitorItem Field Functions 
    bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
    void deleteMonitorItem() { this->monitorItem_ = nullptr;};
    inline const vector<Models::DescribeApiQpsDataResponseBodyCallFailsMonitorItem> & monitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<Models::DescribeApiQpsDataResponseBodyCallFailsMonitorItem>) };
    inline vector<Models::DescribeApiQpsDataResponseBodyCallFailsMonitorItem> monitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<Models::DescribeApiQpsDataResponseBodyCallFailsMonitorItem>) };
    inline DescribeApiQpsDataResponseBodyCallFails& setMonitorItem(const vector<Models::DescribeApiQpsDataResponseBodyCallFailsMonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
    inline DescribeApiQpsDataResponseBodyCallFails& setMonitorItem(vector<Models::DescribeApiQpsDataResponseBodyCallFailsMonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiQpsDataResponseBodyCallFailsMonitorItem>> monitorItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
