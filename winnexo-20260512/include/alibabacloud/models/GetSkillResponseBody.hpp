// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(arguments, arguments_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(detailLogic, detailLogic_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(executeMode, executeMode_);
      DARABONBA_PTR_TO_JSON(globalAccess, globalAccess_);
      DARABONBA_PTR_TO_JSON(hasDraftChanges, hasDraftChanges_);
      DARABONBA_PTR_TO_JSON(inputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(inputConfigFormatted, inputConfigFormatted_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(skillCode, skillCode_);
      DARABONBA_PTR_TO_JSON(skillFiles, skillFiles_);
      DARABONBA_PTR_TO_JSON(skillHubDefinitionId, skillHubDefinitionId_);
      DARABONBA_PTR_TO_JSON(skillMdSummary, skillMdSummary_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(updatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(versionCount, versionCount_);
      DARABONBA_PTR_TO_JSON(versionNumber, versionNumber_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(arguments, arguments_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(detailLogic, detailLogic_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(executeMode, executeMode_);
      DARABONBA_PTR_FROM_JSON(globalAccess, globalAccess_);
      DARABONBA_PTR_FROM_JSON(hasDraftChanges, hasDraftChanges_);
      DARABONBA_PTR_FROM_JSON(inputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(inputConfigFormatted, inputConfigFormatted_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(skillCode, skillCode_);
      DARABONBA_PTR_FROM_JSON(skillFiles, skillFiles_);
      DARABONBA_PTR_FROM_JSON(skillHubDefinitionId, skillHubDefinitionId_);
      DARABONBA_PTR_FROM_JSON(skillMdSummary, skillMdSummary_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(updatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(versionCount, versionCount_);
      DARABONBA_PTR_FROM_JSON(versionNumber, versionNumber_);
    };
    GetSkillResponseBody() = default ;
    GetSkillResponseBody(const GetSkillResponseBody &) = default ;
    GetSkillResponseBody(GetSkillResponseBody &&) = default ;
    GetSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillResponseBody() = default ;
    GetSkillResponseBody& operator=(const GetSkillResponseBody &) = default ;
    GetSkillResponseBody& operator=(GetSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Arguments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Arguments& obj) { 
        DARABONBA_PTR_TO_JSON(default, default_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(enum, enum_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(required, required_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Arguments& obj) { 
        DARABONBA_PTR_FROM_JSON(default, default_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(enum, enum_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(required, required_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Arguments() = default ;
      Arguments(const Arguments &) = default ;
      Arguments(Arguments &&) = default ;
      Arguments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Arguments() = default ;
      Arguments& operator=(const Arguments &) = default ;
      Arguments& operator=(Arguments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->default_ == nullptr
        && this->description_ == nullptr && this->enum_ == nullptr && this->name_ == nullptr && this->required_ == nullptr && this->type_ == nullptr; };
      // default Field Functions 
      bool hasDefault() const { return this->default_ != nullptr;};
      void deleteDefault() { this->default_ = nullptr;};
      inline string getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, "") };
      inline Arguments& setDefault(string _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Arguments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enum Field Functions 
      bool hasEnum() const { return this->enum_ != nullptr;};
      void deleteEnum() { this->enum_ = nullptr;};
      inline const vector<string> & getEnum() const { DARABONBA_PTR_GET_CONST(enum_, vector<string>) };
      inline vector<string> getEnum() { DARABONBA_PTR_GET(enum_, vector<string>) };
      inline Arguments& setEnum(const vector<string> & _enum) { DARABONBA_PTR_SET_VALUE(enum_, _enum) };
      inline Arguments& setEnum(vector<string> && _enum) { DARABONBA_PTR_SET_RVALUE(enum_, _enum) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Arguments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // required Field Functions 
      bool hasRequired() const { return this->required_ != nullptr;};
      void deleteRequired() { this->required_ = nullptr;};
      inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
      inline Arguments& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Arguments& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The default value.
      shared_ptr<string> default_ {};
      // The parameter description.
      shared_ptr<string> description_ {};
      // The list of valid values, which is available when the options are limited.
      shared_ptr<vector<string>> enum_ {};
      // The parameter name, which corresponds to the key in runSkill.arguments.
      shared_ptr<string> name_ {};
      // Indicates whether the parameter is required.
      shared_ptr<bool> required_ {};
      // The parameter type. Valid values: string, number, boolean, and array.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->arguments_ == nullptr
        && this->code_ == nullptr && this->createdTime_ == nullptr && this->description_ == nullptr && this->detailLogic_ == nullptr && this->displayName_ == nullptr
        && this->executeMode_ == nullptr && this->globalAccess_ == nullptr && this->hasDraftChanges_ == nullptr && this->inputConfig_ == nullptr && this->inputConfigFormatted_ == nullptr
        && this->message_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->skillCode_ == nullptr && this->skillFiles_ == nullptr
        && this->skillHubDefinitionId_ == nullptr && this->skillMdSummary_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->updatedTime_ == nullptr && this->versionCount_ == nullptr && this->versionNumber_ == nullptr; };
    // arguments Field Functions 
    bool hasArguments() const { return this->arguments_ != nullptr;};
    void deleteArguments() { this->arguments_ = nullptr;};
    inline const vector<GetSkillResponseBody::Arguments> & getArguments() const { DARABONBA_PTR_GET_CONST(arguments_, vector<GetSkillResponseBody::Arguments>) };
    inline vector<GetSkillResponseBody::Arguments> getArguments() { DARABONBA_PTR_GET(arguments_, vector<GetSkillResponseBody::Arguments>) };
    inline GetSkillResponseBody& setArguments(const vector<GetSkillResponseBody::Arguments> & arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };
    inline GetSkillResponseBody& setArguments(vector<GetSkillResponseBody::Arguments> && arguments) { DARABONBA_PTR_SET_RVALUE(arguments_, arguments) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSkillResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline GetSkillResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSkillResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detailLogic Field Functions 
    bool hasDetailLogic() const { return this->detailLogic_ != nullptr;};
    void deleteDetailLogic() { this->detailLogic_ = nullptr;};
    inline string getDetailLogic() const { DARABONBA_PTR_GET_DEFAULT(detailLogic_, "") };
    inline GetSkillResponseBody& setDetailLogic(string detailLogic) { DARABONBA_PTR_SET_VALUE(detailLogic_, detailLogic) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetSkillResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // executeMode Field Functions 
    bool hasExecuteMode() const { return this->executeMode_ != nullptr;};
    void deleteExecuteMode() { this->executeMode_ = nullptr;};
    inline string getExecuteMode() const { DARABONBA_PTR_GET_DEFAULT(executeMode_, "") };
    inline GetSkillResponseBody& setExecuteMode(string executeMode) { DARABONBA_PTR_SET_VALUE(executeMode_, executeMode) };


    // globalAccess Field Functions 
    bool hasGlobalAccess() const { return this->globalAccess_ != nullptr;};
    void deleteGlobalAccess() { this->globalAccess_ = nullptr;};
    inline bool getGlobalAccess() const { DARABONBA_PTR_GET_DEFAULT(globalAccess_, false) };
    inline GetSkillResponseBody& setGlobalAccess(bool globalAccess) { DARABONBA_PTR_SET_VALUE(globalAccess_, globalAccess) };


    // hasDraftChanges Field Functions 
    bool hasHasDraftChanges() const { return this->hasDraftChanges_ != nullptr;};
    void deleteHasDraftChanges() { this->hasDraftChanges_ = nullptr;};
    inline bool getHasDraftChanges() const { DARABONBA_PTR_GET_DEFAULT(hasDraftChanges_, false) };
    inline GetSkillResponseBody& setHasDraftChanges(bool hasDraftChanges) { DARABONBA_PTR_SET_VALUE(hasDraftChanges_, hasDraftChanges) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline string getInputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
    inline GetSkillResponseBody& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


    // inputConfigFormatted Field Functions 
    bool hasInputConfigFormatted() const { return this->inputConfigFormatted_ != nullptr;};
    void deleteInputConfigFormatted() { this->inputConfigFormatted_ = nullptr;};
    inline const vector<Darabonba::Json> & getInputConfigFormatted() const { DARABONBA_PTR_GET_CONST(inputConfigFormatted_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getInputConfigFormatted() { DARABONBA_PTR_GET(inputConfigFormatted_, vector<Darabonba::Json>) };
    inline GetSkillResponseBody& setInputConfigFormatted(const vector<Darabonba::Json> & inputConfigFormatted) { DARABONBA_PTR_SET_VALUE(inputConfigFormatted_, inputConfigFormatted) };
    inline GetSkillResponseBody& setInputConfigFormatted(vector<Darabonba::Json> && inputConfigFormatted) { DARABONBA_PTR_SET_RVALUE(inputConfigFormatted_, inputConfigFormatted) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSkillResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSkillResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillCode Field Functions 
    bool hasSkillCode() const { return this->skillCode_ != nullptr;};
    void deleteSkillCode() { this->skillCode_ = nullptr;};
    inline string getSkillCode() const { DARABONBA_PTR_GET_DEFAULT(skillCode_, "") };
    inline GetSkillResponseBody& setSkillCode(string skillCode) { DARABONBA_PTR_SET_VALUE(skillCode_, skillCode) };


    // skillFiles Field Functions 
    bool hasSkillFiles() const { return this->skillFiles_ != nullptr;};
    void deleteSkillFiles() { this->skillFiles_ = nullptr;};
    inline const vector<Darabonba::Json> & getSkillFiles() const { DARABONBA_PTR_GET_CONST(skillFiles_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getSkillFiles() { DARABONBA_PTR_GET(skillFiles_, vector<Darabonba::Json>) };
    inline GetSkillResponseBody& setSkillFiles(const vector<Darabonba::Json> & skillFiles) { DARABONBA_PTR_SET_VALUE(skillFiles_, skillFiles) };
    inline GetSkillResponseBody& setSkillFiles(vector<Darabonba::Json> && skillFiles) { DARABONBA_PTR_SET_RVALUE(skillFiles_, skillFiles) };


    // skillHubDefinitionId Field Functions 
    bool hasSkillHubDefinitionId() const { return this->skillHubDefinitionId_ != nullptr;};
    void deleteSkillHubDefinitionId() { this->skillHubDefinitionId_ = nullptr;};
    inline int64_t getSkillHubDefinitionId() const { DARABONBA_PTR_GET_DEFAULT(skillHubDefinitionId_, 0L) };
    inline GetSkillResponseBody& setSkillHubDefinitionId(int64_t skillHubDefinitionId) { DARABONBA_PTR_SET_VALUE(skillHubDefinitionId_, skillHubDefinitionId) };


    // skillMdSummary Field Functions 
    bool hasSkillMdSummary() const { return this->skillMdSummary_ != nullptr;};
    void deleteSkillMdSummary() { this->skillMdSummary_ = nullptr;};
    inline string getSkillMdSummary() const { DARABONBA_PTR_GET_DEFAULT(skillMdSummary_, "") };
    inline GetSkillResponseBody& setSkillMdSummary(string skillMdSummary) { DARABONBA_PTR_SET_VALUE(skillMdSummary_, skillMdSummary) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetSkillResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSkillResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline GetSkillResponseBody& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetSkillResponseBody& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
    inline GetSkillResponseBody& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // versionCount Field Functions 
    bool hasVersionCount() const { return this->versionCount_ != nullptr;};
    void deleteVersionCount() { this->versionCount_ = nullptr;};
    inline int64_t getVersionCount() const { DARABONBA_PTR_GET_DEFAULT(versionCount_, 0L) };
    inline GetSkillResponseBody& setVersionCount(int64_t versionCount) { DARABONBA_PTR_SET_VALUE(versionCount_, versionCount) };


    // versionNumber Field Functions 
    bool hasVersionNumber() const { return this->versionNumber_ != nullptr;};
    void deleteVersionNumber() { this->versionNumber_ = nullptr;};
    inline string getVersionNumber() const { DARABONBA_PTR_GET_DEFAULT(versionNumber_, "") };
    inline GetSkillResponseBody& setVersionNumber(string versionNumber) { DARABONBA_PTR_SET_VALUE(versionNumber_, versionNumber) };


  protected:
    // The simplified parameter schema that describes what needs to be passed in runSkill.arguments. This is automatically extracted from inputConfigFormatted.
    shared_ptr<vector<GetSkillResponseBody::Arguments>> arguments_ {};
    // The response status code.
    shared_ptr<string> code_ {};
    // The creation time in ISO 8601 format.
    shared_ptr<string> createdTime_ {};
    // The skill description, which has been resolved through internationalization (i18n).
    shared_ptr<string> description_ {};
    // The detailed logic of the skill.
    shared_ptr<string> detailLogic_ {};
    // The display name.
    shared_ptr<string> displayName_ {};
    // The execution mode.
    shared_ptr<string> executeMode_ {};
    // Indicates whether the skill is globally accessible.
    shared_ptr<bool> globalAccess_ {};
    // Indicates whether unpublished draft changes exist.
    shared_ptr<bool> hasDraftChanges_ {};
    // The raw input parameter configuration.
    shared_ptr<string> inputConfig_ {};
    // The structured input parameter schema array.
    shared_ptr<vector<Darabonba::Json>> inputConfigFormatted_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The skill name, which has been resolved through internationalization (i18n).
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The skill code, which is globally unique.
    shared_ptr<string> skillCode_ {};
    // The nested tree of skill files. This is returned only when includeSkillFiles is set to True.
    shared_ptr<vector<Darabonba::Json>> skillFiles_ {};
    // The skill definition ID.
    shared_ptr<int64_t> skillHubDefinitionId_ {};
    // The SKILL.md summary, which is generated by a large language model (LLM).
    shared_ptr<string> skillMdSummary_ {};
    // The source type. Valid values: BUILTIN and CUSTOM.
    shared_ptr<string> sourceType_ {};
    // The skill status. Valid values: ACTIVE and DRAFT.
    shared_ptr<string> status_ {};
    // The tag list, which has been resolved through internationalization (i18n).
    shared_ptr<vector<string>> tags_ {};
    // The modification time in ISO 8601 format.
    shared_ptr<string> updatedTime_ {};
    // The total number of versions.
    shared_ptr<int64_t> versionCount_ {};
    // The version number.
    shared_ptr<string> versionNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
