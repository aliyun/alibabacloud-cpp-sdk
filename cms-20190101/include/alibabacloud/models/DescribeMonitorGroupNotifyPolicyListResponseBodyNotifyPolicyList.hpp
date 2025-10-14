// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPNOTIFYPOLICYLISTRESPONSEBODYNOTIFYPOLICYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPNOTIFYPOLICYLISTRESPONSEBODYNOTIFYPOLICYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList& obj) { 
      DARABONBA_PTR_TO_JSON(NotifyPolicy, notifyPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList& obj) { 
      DARABONBA_PTR_FROM_JSON(NotifyPolicy, notifyPolicy_);
    };
    DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList() = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList(const DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList &) = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList(DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList &&) = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList() = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList& operator=(const DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList &) = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList& operator=(DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notifyPolicy_ == nullptr; };
    // notifyPolicy Field Functions 
    bool hasNotifyPolicy() const { return this->notifyPolicy_ != nullptr;};
    void deleteNotifyPolicy() { this->notifyPolicy_ = nullptr;};
    inline const vector<Models::DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy> & notifyPolicy() const { DARABONBA_PTR_GET_CONST(notifyPolicy_, vector<Models::DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy>) };
    inline vector<Models::DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy> notifyPolicy() { DARABONBA_PTR_GET(notifyPolicy_, vector<Models::DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy>) };
    inline DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList& setNotifyPolicy(const vector<Models::DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy> & notifyPolicy) { DARABONBA_PTR_SET_VALUE(notifyPolicy_, notifyPolicy) };
    inline DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList& setNotifyPolicy(vector<Models::DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy> && notifyPolicy) { DARABONBA_PTR_SET_RVALUE(notifyPolicy_, notifyPolicy) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyListNotifyPolicy>> notifyPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
