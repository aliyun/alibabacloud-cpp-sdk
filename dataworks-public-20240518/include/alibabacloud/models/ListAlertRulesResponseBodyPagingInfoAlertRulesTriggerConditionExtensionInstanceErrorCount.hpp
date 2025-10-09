// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODYPAGINGINFOALERTRULESTRIGGERCONDITIONEXTENSIONINSTANCEERRORCOUNT_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODYPAGINGINFOALERTRULESTRIGGERCONDITIONEXTENSIONINSTANCEERRORCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount() = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount(const ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount &) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount(ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount &&) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount() = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount& operator=(const ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount &) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount& operator=(ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionInstanceErrorCount& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The maximum number of instances on which an error occurs. Valid values: [1,10000].
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
