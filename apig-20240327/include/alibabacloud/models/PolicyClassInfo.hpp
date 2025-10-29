// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLICYCLASSINFO_HPP_
#define ALIBABACLOUD_MODELS_POLICYCLASSINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class PolicyClassInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PolicyClassInfo& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(attachableResourceTypes, attachableResourceTypes_);
      DARABONBA_PTR_TO_JSON(classId, classId_);
      DARABONBA_PTR_TO_JSON(configExample, configExample_);
      DARABONBA_PTR_TO_JSON(deprecated, deprecated_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(enableLog, enableLog_);
      DARABONBA_PTR_TO_JSON(executePriority, executePriority_);
      DARABONBA_PTR_TO_JSON(executeStage, executeStage_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, PolicyClassInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(attachableResourceTypes, attachableResourceTypes_);
      DARABONBA_PTR_FROM_JSON(classId, classId_);
      DARABONBA_PTR_FROM_JSON(configExample, configExample_);
      DARABONBA_PTR_FROM_JSON(deprecated, deprecated_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(enableLog, enableLog_);
      DARABONBA_PTR_FROM_JSON(executePriority, executePriority_);
      DARABONBA_PTR_FROM_JSON(executeStage, executeStage_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    PolicyClassInfo() = default ;
    PolicyClassInfo(const PolicyClassInfo &) = default ;
    PolicyClassInfo(PolicyClassInfo &&) = default ;
    PolicyClassInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PolicyClassInfo() = default ;
    PolicyClassInfo& operator=(const PolicyClassInfo &) = default ;
    PolicyClassInfo& operator=(PolicyClassInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->attachableResourceTypes_ == nullptr && return this->classId_ == nullptr && return this->configExample_ == nullptr && return this->deprecated_ == nullptr && return this->description_ == nullptr
        && return this->direction_ == nullptr && return this->enableLog_ == nullptr && return this->executePriority_ == nullptr && return this->executeStage_ == nullptr && return this->name_ == nullptr
        && return this->type_ == nullptr && return this->version_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PolicyClassInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // attachableResourceTypes Field Functions 
    bool hasAttachableResourceTypes() const { return this->attachableResourceTypes_ != nullptr;};
    void deleteAttachableResourceTypes() { this->attachableResourceTypes_ = nullptr;};
    inline const vector<string> & attachableResourceTypes() const { DARABONBA_PTR_GET_CONST(attachableResourceTypes_, vector<string>) };
    inline vector<string> attachableResourceTypes() { DARABONBA_PTR_GET(attachableResourceTypes_, vector<string>) };
    inline PolicyClassInfo& setAttachableResourceTypes(const vector<string> & attachableResourceTypes) { DARABONBA_PTR_SET_VALUE(attachableResourceTypes_, attachableResourceTypes) };
    inline PolicyClassInfo& setAttachableResourceTypes(vector<string> && attachableResourceTypes) { DARABONBA_PTR_SET_RVALUE(attachableResourceTypes_, attachableResourceTypes) };


    // classId Field Functions 
    bool hasClassId() const { return this->classId_ != nullptr;};
    void deleteClassId() { this->classId_ = nullptr;};
    inline string classId() const { DARABONBA_PTR_GET_DEFAULT(classId_, "") };
    inline PolicyClassInfo& setClassId(string classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


    // configExample Field Functions 
    bool hasConfigExample() const { return this->configExample_ != nullptr;};
    void deleteConfigExample() { this->configExample_ = nullptr;};
    inline string configExample() const { DARABONBA_PTR_GET_DEFAULT(configExample_, "") };
    inline PolicyClassInfo& setConfigExample(string configExample) { DARABONBA_PTR_SET_VALUE(configExample_, configExample) };


    // deprecated Field Functions 
    bool hasDeprecated() const { return this->deprecated_ != nullptr;};
    void deleteDeprecated() { this->deprecated_ = nullptr;};
    inline bool deprecated() const { DARABONBA_PTR_GET_DEFAULT(deprecated_, false) };
    inline PolicyClassInfo& setDeprecated(bool deprecated) { DARABONBA_PTR_SET_VALUE(deprecated_, deprecated) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PolicyClassInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline PolicyClassInfo& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // enableLog Field Functions 
    bool hasEnableLog() const { return this->enableLog_ != nullptr;};
    void deleteEnableLog() { this->enableLog_ = nullptr;};
    inline bool enableLog() const { DARABONBA_PTR_GET_DEFAULT(enableLog_, false) };
    inline PolicyClassInfo& setEnableLog(bool enableLog) { DARABONBA_PTR_SET_VALUE(enableLog_, enableLog) };


    // executePriority Field Functions 
    bool hasExecutePriority() const { return this->executePriority_ != nullptr;};
    void deleteExecutePriority() { this->executePriority_ = nullptr;};
    inline string executePriority() const { DARABONBA_PTR_GET_DEFAULT(executePriority_, "") };
    inline PolicyClassInfo& setExecutePriority(string executePriority) { DARABONBA_PTR_SET_VALUE(executePriority_, executePriority) };


    // executeStage Field Functions 
    bool hasExecuteStage() const { return this->executeStage_ != nullptr;};
    void deleteExecuteStage() { this->executeStage_ = nullptr;};
    inline string executeStage() const { DARABONBA_PTR_GET_DEFAULT(executeStage_, "") };
    inline PolicyClassInfo& setExecuteStage(string executeStage) { DARABONBA_PTR_SET_VALUE(executeStage_, executeStage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PolicyClassInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PolicyClassInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline PolicyClassInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> alias_ = nullptr;
    std::shared_ptr<vector<string>> attachableResourceTypes_ = nullptr;
    std::shared_ptr<string> classId_ = nullptr;
    std::shared_ptr<string> configExample_ = nullptr;
    std::shared_ptr<bool> deprecated_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<bool> enableLog_ = nullptr;
    std::shared_ptr<string> executePriority_ = nullptr;
    std::shared_ptr<string> executeStage_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
