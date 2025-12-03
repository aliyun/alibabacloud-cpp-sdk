// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHTTPCODERESPONSEBODYINSTANCEHTTPCODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHTTPCODERESPONSEBODYINSTANCEHTTPCODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceHttpCodeResponseBodyInstanceHttpCodeMonitorItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceHttpCodeResponseBodyInstanceHttpCode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceHttpCodeResponseBodyInstanceHttpCode& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceHttpCodeResponseBodyInstanceHttpCode& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
    };
    DescribeInstanceHttpCodeResponseBodyInstanceHttpCode() = default ;
    DescribeInstanceHttpCodeResponseBodyInstanceHttpCode(const DescribeInstanceHttpCodeResponseBodyInstanceHttpCode &) = default ;
    DescribeInstanceHttpCodeResponseBodyInstanceHttpCode(DescribeInstanceHttpCodeResponseBodyInstanceHttpCode &&) = default ;
    DescribeInstanceHttpCodeResponseBodyInstanceHttpCode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceHttpCodeResponseBodyInstanceHttpCode() = default ;
    DescribeInstanceHttpCodeResponseBodyInstanceHttpCode& operator=(const DescribeInstanceHttpCodeResponseBodyInstanceHttpCode &) = default ;
    DescribeInstanceHttpCodeResponseBodyInstanceHttpCode& operator=(DescribeInstanceHttpCodeResponseBodyInstanceHttpCode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorItem_ == nullptr; };
    // monitorItem Field Functions 
    bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
    void deleteMonitorItem() { this->monitorItem_ = nullptr;};
    inline const vector<Models::DescribeInstanceHttpCodeResponseBodyInstanceHttpCodeMonitorItem> & monitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<Models::DescribeInstanceHttpCodeResponseBodyInstanceHttpCodeMonitorItem>) };
    inline vector<Models::DescribeInstanceHttpCodeResponseBodyInstanceHttpCodeMonitorItem> monitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<Models::DescribeInstanceHttpCodeResponseBodyInstanceHttpCodeMonitorItem>) };
    inline DescribeInstanceHttpCodeResponseBodyInstanceHttpCode& setMonitorItem(const vector<Models::DescribeInstanceHttpCodeResponseBodyInstanceHttpCodeMonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
    inline DescribeInstanceHttpCodeResponseBodyInstanceHttpCode& setMonitorItem(vector<Models::DescribeInstanceHttpCodeResponseBodyInstanceHttpCodeMonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceHttpCodeResponseBodyInstanceHttpCodeMonitorItem>> monitorItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
