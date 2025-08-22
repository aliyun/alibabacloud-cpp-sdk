// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODYDISPATCHRULENOTIFYRULESNOTIFYOBJECTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODYDISPATCHRULENOTIFYRULESNOTIFYOBJECTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyObjectId, notifyObjectId_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyObjectId, notifyObjectId_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
    };
    DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects() = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects(const DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects &) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects(DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects &&) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects() = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects& operator=(const DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects &) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects& operator=(DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->notifyObjectId_ != nullptr && this->notifyType_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyObjectId Field Functions 
    bool hasNotifyObjectId() const { return this->notifyObjectId_ != nullptr;};
    void deleteNotifyObjectId() { this->notifyObjectId_ = nullptr;};
    inline string notifyObjectId() const { DARABONBA_PTR_GET_DEFAULT(notifyObjectId_, "") };
    inline DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects& setNotifyObjectId(string notifyObjectId) { DARABONBA_PTR_SET_VALUE(notifyObjectId_, notifyObjectId) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline DescribeDispatchRuleResponseBodyDispatchRuleNotifyRulesNotifyObjects& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


  protected:
    // The name of the contact or contact group.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the contact or contact group.
    std::shared_ptr<string> notifyObjectId_ = nullptr;
    // The type of the alert contact. Valid values:
    // 
    // - `CONTACT`: contact
    // - `CONTACT_GROUP`: contact group
    std::shared_ptr<string> notifyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
