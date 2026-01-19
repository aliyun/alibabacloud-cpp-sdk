// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARECOPYRULEVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPARECOPYRULEVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CompareCopyRuleVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareCopyRuleVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateType, createType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(SourceRuleId, sourceRuleId_);
      DARABONBA_PTR_TO_JSON(SourceRuleIds, sourceRuleIds_);
      DARABONBA_PTR_TO_JSON(TargetEventCode, targetEventCode_);
    };
    friend void from_json(const Darabonba::Json& j, CompareCopyRuleVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateType, createType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(SourceRuleId, sourceRuleId_);
      DARABONBA_PTR_FROM_JSON(SourceRuleIds, sourceRuleIds_);
      DARABONBA_PTR_FROM_JSON(TargetEventCode, targetEventCode_);
    };
    CompareCopyRuleVariableRequest() = default ;
    CompareCopyRuleVariableRequest(const CompareCopyRuleVariableRequest &) = default ;
    CompareCopyRuleVariableRequest(CompareCopyRuleVariableRequest &&) = default ;
    CompareCopyRuleVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareCopyRuleVariableRequest() = default ;
    CompareCopyRuleVariableRequest& operator=(const CompareCopyRuleVariableRequest &) = default ;
    CompareCopyRuleVariableRequest& operator=(CompareCopyRuleVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createType_ == nullptr
        && this->lang_ == nullptr && this->regId_ == nullptr && this->sourceRuleId_ == nullptr && this->sourceRuleIds_ == nullptr && this->targetEventCode_ == nullptr; };
    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline CompareCopyRuleVariableRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CompareCopyRuleVariableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CompareCopyRuleVariableRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sourceRuleId Field Functions 
    bool hasSourceRuleId() const { return this->sourceRuleId_ != nullptr;};
    void deleteSourceRuleId() { this->sourceRuleId_ = nullptr;};
    inline string getSourceRuleId() const { DARABONBA_PTR_GET_DEFAULT(sourceRuleId_, "") };
    inline CompareCopyRuleVariableRequest& setSourceRuleId(string sourceRuleId) { DARABONBA_PTR_SET_VALUE(sourceRuleId_, sourceRuleId) };


    // sourceRuleIds Field Functions 
    bool hasSourceRuleIds() const { return this->sourceRuleIds_ != nullptr;};
    void deleteSourceRuleIds() { this->sourceRuleIds_ = nullptr;};
    inline string getSourceRuleIds() const { DARABONBA_PTR_GET_DEFAULT(sourceRuleIds_, "") };
    inline CompareCopyRuleVariableRequest& setSourceRuleIds(string sourceRuleIds) { DARABONBA_PTR_SET_VALUE(sourceRuleIds_, sourceRuleIds) };


    // targetEventCode Field Functions 
    bool hasTargetEventCode() const { return this->targetEventCode_ != nullptr;};
    void deleteTargetEventCode() { this->targetEventCode_ = nullptr;};
    inline string getTargetEventCode() const { DARABONBA_PTR_GET_DEFAULT(targetEventCode_, "") };
    inline CompareCopyRuleVariableRequest& setTargetEventCode(string targetEventCode) { DARABONBA_PTR_SET_VALUE(targetEventCode_, targetEventCode) };


  protected:
    // Creation type
    shared_ptr<string> createType_ {};
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Region code.
    shared_ptr<string> regId_ {};
    // Original policy ruleId.
    shared_ptr<string> sourceRuleId_ {};
    // Original policy ruleIds.
    shared_ptr<string> sourceRuleIds_ {};
    // Target event eventCode.
    shared_ptr<string> targetEventCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
