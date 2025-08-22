// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODYDISPATCHRULENOTIFYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODYDISPATCHRULENOTIFYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules& obj) { 
      DARABONBA_PTR_TO_JSON(NotifyChannels, notifyChannels_);
      DARABONBA_PTR_TO_JSON(NotifyObjects, notifyObjects_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(NotifyChannels, notifyChannels_);
      DARABONBA_PTR_FROM_JSON(NotifyObjects, notifyObjects_);
    };
    DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules() = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules(const DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules &) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules(DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules &&) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules() = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules& operator=(const DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules &) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules& operator=(DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notifyChannels_ != nullptr
        && this->notifyObjects_ != nullptr; };
    // notifyChannels Field Functions 
    bool hasNotifyChannels() const { return this->notifyChannels_ != nullptr;};
    void deleteNotifyChannels() { this->notifyChannels_ = nullptr;};
    inline const vector<string> & notifyChannels() const { DARABONBA_PTR_GET_CONST(notifyChannels_, vector<string>) };
    inline vector<string> notifyChannels() { DARABONBA_PTR_GET(notifyChannels_, vector<string>) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules& setNotifyChannels(const vector<string> & notifyChannels) { DARABONBA_PTR_SET_VALUE(notifyChannels_, notifyChannels) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules& setNotifyChannels(vector<string> && notifyChannels) { DARABONBA_PTR_SET_RVALUE(notifyChannels_, notifyChannels) };


    // notifyObjects Field Functions 
    bool hasNotifyObjects() const { return this->notifyObjects_ != nullptr;};
    void deleteNotifyObjects() { this->notifyObjects_ = nullptr;};
    inline const vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects> & notifyObjects() const { DARABONBA_PTR_GET_CONST(notifyObjects_, vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects>) };
    inline vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects> notifyObjects() { DARABONBA_PTR_GET(notifyObjects_, vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects>) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules& setNotifyObjects(const vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects> & notifyObjects) { DARABONBA_PTR_SET_VALUE(notifyObjects_, notifyObjects) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules& setNotifyObjects(vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects> && notifyObjects) { DARABONBA_PTR_SET_RVALUE(notifyObjects_, notifyObjects) };


  protected:
    // The notification method Array.
    std::shared_ptr<vector<string>> notifyChannels_ = nullptr;
    // The collection of alert contacts.
    std::shared_ptr<vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects>> notifyObjects_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
