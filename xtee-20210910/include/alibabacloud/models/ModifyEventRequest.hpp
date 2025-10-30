// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ModifyEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(bizVersion, bizVersion_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(inputFieldsStr, inputFieldsStr_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(templateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(bizVersion, bizVersion_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(inputFieldsStr, inputFieldsStr_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(templateType, templateType_);
    };
    ModifyEventRequest() = default ;
    ModifyEventRequest(const ModifyEventRequest &) = default ;
    ModifyEventRequest(ModifyEventRequest &&) = default ;
    ModifyEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEventRequest() = default ;
    ModifyEventRequest& operator=(const ModifyEventRequest &) = default ;
    ModifyEventRequest& operator=(ModifyEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->bizVersion_ == nullptr && return this->createType_ == nullptr && return this->eventCode_ == nullptr && return this->eventName_ == nullptr && return this->inputFieldsStr_ == nullptr
        && return this->memo_ == nullptr && return this->regId_ == nullptr && return this->templateType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyEventRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // bizVersion Field Functions 
    bool hasBizVersion() const { return this->bizVersion_ != nullptr;};
    void deleteBizVersion() { this->bizVersion_ = nullptr;};
    inline int32_t bizVersion() const { DARABONBA_PTR_GET_DEFAULT(bizVersion_, 0) };
    inline ModifyEventRequest& setBizVersion(int32_t bizVersion) { DARABONBA_PTR_SET_VALUE(bizVersion_, bizVersion) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline ModifyEventRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline ModifyEventRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline ModifyEventRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // inputFieldsStr Field Functions 
    bool hasInputFieldsStr() const { return this->inputFieldsStr_ != nullptr;};
    void deleteInputFieldsStr() { this->inputFieldsStr_ = nullptr;};
    inline string inputFieldsStr() const { DARABONBA_PTR_GET_DEFAULT(inputFieldsStr_, "") };
    inline ModifyEventRequest& setInputFieldsStr(string inputFieldsStr) { DARABONBA_PTR_SET_VALUE(inputFieldsStr_, inputFieldsStr) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline ModifyEventRequest& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ModifyEventRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline ModifyEventRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Version number (latest).
    std::shared_ptr<int32_t> bizVersion_ = nullptr;
    // Creation type
    std::shared_ptr<string> createType_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Input parameters, JSON string.
    std::shared_ptr<string> inputFieldsStr_ = nullptr;
    // Memo.
    std::shared_ptr<string> memo_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Template type
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
