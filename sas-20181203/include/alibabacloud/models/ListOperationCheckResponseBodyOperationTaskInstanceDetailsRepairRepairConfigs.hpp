// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONCHECKRESPONSEBODYOPERATIONTASKINSTANCEDETAILSREPAIRREPAIRCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONCHECKRESPONSEBODYOPERATIONTASKINSTANCEDETAILSREPAIRREPAIRCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(TypeDefine, typeDefine_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(TypeDefine, typeDefine_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs() = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs(const ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs &) = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs(ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs &&) = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs() = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs& operator=(const ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs &) = default ;
    ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs& operator=(ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowId_ == nullptr
        && return this->name_ == nullptr && return this->showName_ == nullptr && return this->typeDefine_ == nullptr && return this->value_ == nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // typeDefine Field Functions 
    bool hasTypeDefine() const { return this->typeDefine_ != nullptr;};
    void deleteTypeDefine() { this->typeDefine_ = nullptr;};
    inline string typeDefine() const { DARABONBA_PTR_GET_DEFAULT(typeDefine_, "") };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs& setTypeDefine(string typeDefine) { DARABONBA_PTR_SET_VALUE(typeDefine_, typeDefine) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListOperationCheckResponseBodyOperationTaskInstanceDetailsRepairRepairConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // ID of the repair process during the repair operation.
    std::shared_ptr<string> flowId_ = nullptr;
    // Name of the repair parameter.
    std::shared_ptr<string> name_ = nullptr;
    // Display name.
    std::shared_ptr<string> showName_ = nullptr;
    // JSON string for the custom configuration type of the check item.
    std::shared_ptr<string> typeDefine_ = nullptr;
    // Real-time value of the parameter for the instance.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
