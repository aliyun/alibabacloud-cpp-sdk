// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLICYINFO_HPP_
#define ALIBABACLOUD_MODELS_POLICYINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Attachment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class PolicyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PolicyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(attachments, attachments_);
      DARABONBA_PTR_TO_JSON(classAlias, classAlias_);
      DARABONBA_PTR_TO_JSON(className, className_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(executePriority, executePriority_);
      DARABONBA_PTR_TO_JSON(executeStage, executeStage_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PolicyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(classAlias, classAlias_);
      DARABONBA_PTR_FROM_JSON(className, className_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(executePriority, executePriority_);
      DARABONBA_PTR_FROM_JSON(executeStage, executeStage_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PolicyInfo() = default ;
    PolicyInfo(const PolicyInfo &) = default ;
    PolicyInfo(PolicyInfo &&) = default ;
    PolicyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PolicyInfo() = default ;
    PolicyInfo& operator=(const PolicyInfo &) = default ;
    PolicyInfo& operator=(PolicyInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachments_ == nullptr
        && return this->classAlias_ == nullptr && return this->className_ == nullptr && return this->config_ == nullptr && return this->direction_ == nullptr && return this->executePriority_ == nullptr
        && return this->executeStage_ == nullptr && return this->name_ == nullptr && return this->policyId_ == nullptr && return this->type_ == nullptr; };
    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<Attachment> & attachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<Attachment>) };
    inline vector<Attachment> attachments() { DARABONBA_PTR_GET(attachments_, vector<Attachment>) };
    inline PolicyInfo& setAttachments(const vector<Attachment> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline PolicyInfo& setAttachments(vector<Attachment> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // classAlias Field Functions 
    bool hasClassAlias() const { return this->classAlias_ != nullptr;};
    void deleteClassAlias() { this->classAlias_ = nullptr;};
    inline string classAlias() const { DARABONBA_PTR_GET_DEFAULT(classAlias_, "") };
    inline PolicyInfo& setClassAlias(string classAlias) { DARABONBA_PTR_SET_VALUE(classAlias_, classAlias) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline PolicyInfo& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline PolicyInfo& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline PolicyInfo& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // executePriority Field Functions 
    bool hasExecutePriority() const { return this->executePriority_ != nullptr;};
    void deleteExecutePriority() { this->executePriority_ = nullptr;};
    inline string executePriority() const { DARABONBA_PTR_GET_DEFAULT(executePriority_, "") };
    inline PolicyInfo& setExecutePriority(string executePriority) { DARABONBA_PTR_SET_VALUE(executePriority_, executePriority) };


    // executeStage Field Functions 
    bool hasExecuteStage() const { return this->executeStage_ != nullptr;};
    void deleteExecuteStage() { this->executeStage_ = nullptr;};
    inline string executeStage() const { DARABONBA_PTR_GET_DEFAULT(executeStage_, "") };
    inline PolicyInfo& setExecuteStage(string executeStage) { DARABONBA_PTR_SET_VALUE(executeStage_, executeStage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PolicyInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline PolicyInfo& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PolicyInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Attachment>> attachments_ = nullptr;
    std::shared_ptr<string> classAlias_ = nullptr;
    std::shared_ptr<string> className_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<string> executePriority_ = nullptr;
    std::shared_ptr<string> executeStage_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
