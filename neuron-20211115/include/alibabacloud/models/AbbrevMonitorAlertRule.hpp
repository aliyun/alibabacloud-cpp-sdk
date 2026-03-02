// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABBREVMONITORALERTRULE_HPP_
#define ALIBABACLOUD_MODELS_ABBREVMONITORALERTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class AbbrevMonitorAlertRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbbrevMonitorAlertRule& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(triggerContent, triggerContent_);
      DARABONBA_PTR_TO_JSON(triggerRule, triggerRule_);
    };
    friend void from_json(const Darabonba::Json& j, AbbrevMonitorAlertRule& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(triggerContent, triggerContent_);
      DARABONBA_PTR_FROM_JSON(triggerRule, triggerRule_);
    };
    AbbrevMonitorAlertRule() = default ;
    AbbrevMonitorAlertRule(const AbbrevMonitorAlertRule &) = default ;
    AbbrevMonitorAlertRule(AbbrevMonitorAlertRule &&) = default ;
    AbbrevMonitorAlertRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbbrevMonitorAlertRule() = default ;
    AbbrevMonitorAlertRule& operator=(const AbbrevMonitorAlertRule &) = default ;
    AbbrevMonitorAlertRule& operator=(AbbrevMonitorAlertRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->triggerContent_ == nullptr && this->triggerRule_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline AbbrevMonitorAlertRule& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AbbrevMonitorAlertRule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AbbrevMonitorAlertRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // triggerContent Field Functions 
    bool hasTriggerContent() const { return this->triggerContent_ != nullptr;};
    void deleteTriggerContent() { this->triggerContent_ = nullptr;};
    inline string getTriggerContent() const { DARABONBA_PTR_GET_DEFAULT(triggerContent_, "") };
    inline AbbrevMonitorAlertRule& setTriggerContent(string triggerContent) { DARABONBA_PTR_SET_VALUE(triggerContent_, triggerContent) };


    // triggerRule Field Functions 
    bool hasTriggerRule() const { return this->triggerRule_ != nullptr;};
    void deleteTriggerRule() { this->triggerRule_ = nullptr;};
    inline string getTriggerRule() const { DARABONBA_PTR_GET_DEFAULT(triggerRule_, "") };
    inline AbbrevMonitorAlertRule& setTriggerRule(string triggerRule) { DARABONBA_PTR_SET_VALUE(triggerRule_, triggerRule) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> triggerContent_ {};
    shared_ptr<string> triggerRule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
