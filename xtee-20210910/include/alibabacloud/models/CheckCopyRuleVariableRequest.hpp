// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCOPYRULEVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKCOPYRULEVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CheckCopyRuleVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCopyRuleVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateType, createType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(SourceRuleId, sourceRuleId_);
      DARABONBA_PTR_TO_JSON(SourceRuleIds, sourceRuleIds_);
      DARABONBA_PTR_TO_JSON(TargetEventCode, targetEventCode_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCopyRuleVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateType, createType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(SourceRuleId, sourceRuleId_);
      DARABONBA_PTR_FROM_JSON(SourceRuleIds, sourceRuleIds_);
      DARABONBA_PTR_FROM_JSON(TargetEventCode, targetEventCode_);
    };
    CheckCopyRuleVariableRequest() = default ;
    CheckCopyRuleVariableRequest(const CheckCopyRuleVariableRequest &) = default ;
    CheckCopyRuleVariableRequest(CheckCopyRuleVariableRequest &&) = default ;
    CheckCopyRuleVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCopyRuleVariableRequest() = default ;
    CheckCopyRuleVariableRequest& operator=(const CheckCopyRuleVariableRequest &) = default ;
    CheckCopyRuleVariableRequest& operator=(CheckCopyRuleVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createType_ != nullptr
        && this->lang_ != nullptr && this->regId_ != nullptr && this->sourceRuleId_ != nullptr && this->sourceRuleIds_ != nullptr && this->targetEventCode_ != nullptr; };
    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline CheckCopyRuleVariableRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CheckCopyRuleVariableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CheckCopyRuleVariableRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sourceRuleId Field Functions 
    bool hasSourceRuleId() const { return this->sourceRuleId_ != nullptr;};
    void deleteSourceRuleId() { this->sourceRuleId_ = nullptr;};
    inline string sourceRuleId() const { DARABONBA_PTR_GET_DEFAULT(sourceRuleId_, "") };
    inline CheckCopyRuleVariableRequest& setSourceRuleId(string sourceRuleId) { DARABONBA_PTR_SET_VALUE(sourceRuleId_, sourceRuleId) };


    // sourceRuleIds Field Functions 
    bool hasSourceRuleIds() const { return this->sourceRuleIds_ != nullptr;};
    void deleteSourceRuleIds() { this->sourceRuleIds_ = nullptr;};
    inline string sourceRuleIds() const { DARABONBA_PTR_GET_DEFAULT(sourceRuleIds_, "") };
    inline CheckCopyRuleVariableRequest& setSourceRuleIds(string sourceRuleIds) { DARABONBA_PTR_SET_VALUE(sourceRuleIds_, sourceRuleIds) };


    // targetEventCode Field Functions 
    bool hasTargetEventCode() const { return this->targetEventCode_ != nullptr;};
    void deleteTargetEventCode() { this->targetEventCode_ = nullptr;};
    inline string targetEventCode() const { DARABONBA_PTR_GET_DEFAULT(targetEventCode_, "") };
    inline CheckCopyRuleVariableRequest& setTargetEventCode(string targetEventCode) { DARABONBA_PTR_SET_VALUE(targetEventCode_, targetEventCode) };


  protected:
    // Creation type
    std::shared_ptr<string> createType_ = nullptr;
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Source policy ID
    std::shared_ptr<string> sourceRuleId_ = nullptr;
    // Source policy IDs
    std::shared_ptr<string> sourceRuleIds_ = nullptr;
    // Target event
    std::shared_ptr<string> targetEventCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
