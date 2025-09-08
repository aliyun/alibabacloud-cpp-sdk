// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPOSEANDPLAYBOOKRESPONSEBODYDATARESPONSEDATAPLAYBOOKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPOSEANDPLAYBOOKRESPONSEBODYDATARESPONSEDATAPLAYBOOKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& obj) { 
      DARABONBA_PTR_TO_JSON(Available, available_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OpCode, opCode_);
      DARABONBA_PTR_TO_JSON(OpLevel, opLevel_);
      DARABONBA_PTR_TO_JSON(ParamConfig, paramConfig_);
      DARABONBA_PTR_TO_JSON(TaskConfig, taskConfig_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(WafPlaybook, wafPlaybook_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& obj) { 
      DARABONBA_PTR_FROM_JSON(Available, available_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OpCode, opCode_);
      DARABONBA_PTR_FROM_JSON(OpLevel, opLevel_);
      DARABONBA_PTR_FROM_JSON(ParamConfig, paramConfig_);
      DARABONBA_PTR_FROM_JSON(TaskConfig, taskConfig_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(WafPlaybook, wafPlaybook_);
    };
    DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList() = default ;
    DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList(const DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList &) = default ;
    DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList(DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList &&) = default ;
    DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList() = default ;
    DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& operator=(const DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList &) = default ;
    DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& operator=(DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->available_ != nullptr
        && this->description_ != nullptr && this->displayName_ != nullptr && this->name_ != nullptr && this->opCode_ != nullptr && this->opLevel_ != nullptr
        && this->paramConfig_ != nullptr && this->taskConfig_ != nullptr && this->uuid_ != nullptr && this->wafPlaybook_ != nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline string available() const { DARABONBA_PTR_GET_DEFAULT(available_, "") };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& setAvailable(string available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // opCode Field Functions 
    bool hasOpCode() const { return this->opCode_ != nullptr;};
    void deleteOpCode() { this->opCode_ = nullptr;};
    inline string opCode() const { DARABONBA_PTR_GET_DEFAULT(opCode_, "") };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& setOpCode(string opCode) { DARABONBA_PTR_SET_VALUE(opCode_, opCode) };


    // opLevel Field Functions 
    bool hasOpLevel() const { return this->opLevel_ != nullptr;};
    void deleteOpLevel() { this->opLevel_ = nullptr;};
    inline string opLevel() const { DARABONBA_PTR_GET_DEFAULT(opLevel_, "") };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& setOpLevel(string opLevel) { DARABONBA_PTR_SET_VALUE(opLevel_, opLevel) };


    // paramConfig Field Functions 
    bool hasParamConfig() const { return this->paramConfig_ != nullptr;};
    void deleteParamConfig() { this->paramConfig_ = nullptr;};
    inline const vector<Darabonba::Json> & paramConfig() const { DARABONBA_PTR_GET_CONST(paramConfig_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> paramConfig() { DARABONBA_PTR_GET(paramConfig_, vector<Darabonba::Json>) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& setParamConfig(const vector<Darabonba::Json> & paramConfig) { DARABONBA_PTR_SET_VALUE(paramConfig_, paramConfig) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& setParamConfig(vector<Darabonba::Json> && paramConfig) { DARABONBA_PTR_SET_RVALUE(paramConfig_, paramConfig) };


    // taskConfig Field Functions 
    bool hasTaskConfig() const { return this->taskConfig_ != nullptr;};
    void deleteTaskConfig() { this->taskConfig_ = nullptr;};
    inline string taskConfig() const { DARABONBA_PTR_GET_DEFAULT(taskConfig_, "") };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& setTaskConfig(string taskConfig) { DARABONBA_PTR_SET_VALUE(taskConfig_, taskConfig) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // wafPlaybook Field Functions 
    bool hasWafPlaybook() const { return this->wafPlaybook_ != nullptr;};
    void deleteWafPlaybook() { this->wafPlaybook_ = nullptr;};
    inline bool wafPlaybook() const { DARABONBA_PTR_GET_DEFAULT(wafPlaybook_, false) };
    inline DescribeDisposeAndPlaybookResponseBodyDataResponseDataPlaybookList& setWafPlaybook(bool wafPlaybook) { DARABONBA_PTR_SET_VALUE(wafPlaybook_, wafPlaybook) };


  protected:
    std::shared_ptr<string> available_ = nullptr;
    // The playbook description.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the playbook.
    std::shared_ptr<string> displayName_ = nullptr;
    // The playbook name, which is the unique identifier of the playbook.
    std::shared_ptr<string> name_ = nullptr;
    // The opcode of the playbook, which corresponds to the opcode of the playbook recommended for entity handling.
    std::shared_ptr<string> opCode_ = nullptr;
    // Indicates whether quick event handling is selected by default. Valid values:
    // 
    // *   2: Quick event handling is selected.
    // *   1: Quick event handling is displayed but not selected.
    std::shared_ptr<string> opLevel_ = nullptr;
    // The playbook parameters and the corresponding properties.
    std::shared_ptr<vector<Darabonba::Json>> paramConfig_ = nullptr;
    // The opcode configuration.
    std::shared_ptr<string> taskConfig_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
    // Indicates whether the playbook is intended for Web Application Firewall (WAF). Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> wafPlaybook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
