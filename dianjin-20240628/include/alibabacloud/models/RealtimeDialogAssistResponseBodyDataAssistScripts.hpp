// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTRESPONSEBODYDATAASSISTSCRIPTS_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTRESPONSEBODYDATAASSISTSCRIPTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealtimeDialogAssistResponseBodyDataAssistScripts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealtimeDialogAssistResponseBodyDataAssistScripts& obj) { 
      DARABONBA_PTR_TO_JSON(assistScript, assistScript_);
      DARABONBA_PTR_TO_JSON(intentCode, intentCode_);
      DARABONBA_PTR_TO_JSON(intentLabels, intentLabels_);
      DARABONBA_PTR_TO_JSON(intentName, intentName_);
      DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
    };
    friend void from_json(const Darabonba::Json& j, RealtimeDialogAssistResponseBodyDataAssistScripts& obj) { 
      DARABONBA_PTR_FROM_JSON(assistScript, assistScript_);
      DARABONBA_PTR_FROM_JSON(intentCode, intentCode_);
      DARABONBA_PTR_FROM_JSON(intentLabels, intentLabels_);
      DARABONBA_PTR_FROM_JSON(intentName, intentName_);
      DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
    };
    RealtimeDialogAssistResponseBodyDataAssistScripts() = default ;
    RealtimeDialogAssistResponseBodyDataAssistScripts(const RealtimeDialogAssistResponseBodyDataAssistScripts &) = default ;
    RealtimeDialogAssistResponseBodyDataAssistScripts(RealtimeDialogAssistResponseBodyDataAssistScripts &&) = default ;
    RealtimeDialogAssistResponseBodyDataAssistScripts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealtimeDialogAssistResponseBodyDataAssistScripts() = default ;
    RealtimeDialogAssistResponseBodyDataAssistScripts& operator=(const RealtimeDialogAssistResponseBodyDataAssistScripts &) = default ;
    RealtimeDialogAssistResponseBodyDataAssistScripts& operator=(RealtimeDialogAssistResponseBodyDataAssistScripts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assistScript_ != nullptr
        && this->intentCode_ != nullptr && this->intentLabels_ != nullptr && this->intentName_ != nullptr && this->isDefault_ != nullptr; };
    // assistScript Field Functions 
    bool hasAssistScript() const { return this->assistScript_ != nullptr;};
    void deleteAssistScript() { this->assistScript_ = nullptr;};
    inline string assistScript() const { DARABONBA_PTR_GET_DEFAULT(assistScript_, "") };
    inline RealtimeDialogAssistResponseBodyDataAssistScripts& setAssistScript(string assistScript) { DARABONBA_PTR_SET_VALUE(assistScript_, assistScript) };


    // intentCode Field Functions 
    bool hasIntentCode() const { return this->intentCode_ != nullptr;};
    void deleteIntentCode() { this->intentCode_ = nullptr;};
    inline string intentCode() const { DARABONBA_PTR_GET_DEFAULT(intentCode_, "") };
    inline RealtimeDialogAssistResponseBodyDataAssistScripts& setIntentCode(string intentCode) { DARABONBA_PTR_SET_VALUE(intentCode_, intentCode) };


    // intentLabels Field Functions 
    bool hasIntentLabels() const { return this->intentLabels_ != nullptr;};
    void deleteIntentLabels() { this->intentLabels_ = nullptr;};
    inline string intentLabels() const { DARABONBA_PTR_GET_DEFAULT(intentLabels_, "") };
    inline RealtimeDialogAssistResponseBodyDataAssistScripts& setIntentLabels(string intentLabels) { DARABONBA_PTR_SET_VALUE(intentLabels_, intentLabels) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string intentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline RealtimeDialogAssistResponseBodyDataAssistScripts& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline RealtimeDialogAssistResponseBodyDataAssistScripts& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


  protected:
    std::shared_ptr<string> assistScript_ = nullptr;
    std::shared_ptr<string> intentCode_ = nullptr;
    std::shared_ptr<string> intentLabels_ = nullptr;
    std::shared_ptr<string> intentName_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
