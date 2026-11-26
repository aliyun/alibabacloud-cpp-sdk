// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AICOACHSCRIPTHOTWORDITEM_HPP_
#define ALIBABACLOUD_MODELS_AICOACHSCRIPTHOTWORDITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class AICoachScriptHotWordItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AICoachScriptHotWordItem& obj) { 
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(hotWord, hotWord_);
      DARABONBA_PTR_TO_JSON(hotWordId, hotWordId_);
      DARABONBA_PTR_TO_JSON(modifierId, modifierId_);
      DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
      DARABONBA_PTR_TO_JSON(scriptRecordId, scriptRecordId_);
    };
    friend void from_json(const Darabonba::Json& j, AICoachScriptHotWordItem& obj) { 
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(hotWord, hotWord_);
      DARABONBA_PTR_FROM_JSON(hotWordId, hotWordId_);
      DARABONBA_PTR_FROM_JSON(modifierId, modifierId_);
      DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
      DARABONBA_PTR_FROM_JSON(scriptRecordId, scriptRecordId_);
    };
    AICoachScriptHotWordItem() = default ;
    AICoachScriptHotWordItem(const AICoachScriptHotWordItem &) = default ;
    AICoachScriptHotWordItem(AICoachScriptHotWordItem &&) = default ;
    AICoachScriptHotWordItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AICoachScriptHotWordItem() = default ;
    AICoachScriptHotWordItem& operator=(const AICoachScriptHotWordItem &) = default ;
    AICoachScriptHotWordItem& operator=(AICoachScriptHotWordItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->creatorName_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->hotWord_ == nullptr
        && this->hotWordId_ == nullptr && this->modifierId_ == nullptr && this->modifierName_ == nullptr && this->scriptRecordId_ == nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline AICoachScriptHotWordItem& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline AICoachScriptHotWordItem& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AICoachScriptHotWordItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline AICoachScriptHotWordItem& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline AICoachScriptHotWordItem& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // hotWord Field Functions 
    bool hasHotWord() const { return this->hotWord_ != nullptr;};
    void deleteHotWord() { this->hotWord_ = nullptr;};
    inline string getHotWord() const { DARABONBA_PTR_GET_DEFAULT(hotWord_, "") };
    inline AICoachScriptHotWordItem& setHotWord(string hotWord) { DARABONBA_PTR_SET_VALUE(hotWord_, hotWord) };


    // hotWordId Field Functions 
    bool hasHotWordId() const { return this->hotWordId_ != nullptr;};
    void deleteHotWordId() { this->hotWordId_ = nullptr;};
    inline string getHotWordId() const { DARABONBA_PTR_GET_DEFAULT(hotWordId_, "") };
    inline AICoachScriptHotWordItem& setHotWordId(string hotWordId) { DARABONBA_PTR_SET_VALUE(hotWordId_, hotWordId) };


    // modifierId Field Functions 
    bool hasModifierId() const { return this->modifierId_ != nullptr;};
    void deleteModifierId() { this->modifierId_ = nullptr;};
    inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
    inline AICoachScriptHotWordItem& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


    // modifierName Field Functions 
    bool hasModifierName() const { return this->modifierName_ != nullptr;};
    void deleteModifierName() { this->modifierName_ = nullptr;};
    inline string getModifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
    inline AICoachScriptHotWordItem& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


    // scriptRecordId Field Functions 
    bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
    void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
    inline string getScriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
    inline AICoachScriptHotWordItem& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


  protected:
    shared_ptr<string> creatorId_ {};
    shared_ptr<string> creatorName_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> hotWord_ {};
    shared_ptr<string> hotWordId_ {};
    shared_ptr<string> modifierId_ {};
    shared_ptr<string> modifierName_ {};
    shared_ptr<string> scriptRecordId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
