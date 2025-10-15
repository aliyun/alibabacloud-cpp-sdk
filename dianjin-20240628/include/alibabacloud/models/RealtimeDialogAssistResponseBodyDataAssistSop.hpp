// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTRESPONSEBODYDATAASSISTSOP_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGASSISTRESPONSEBODYDATAASSISTSOP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealtimeDialogAssistResponseBodyDataAssistSop : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealtimeDialogAssistResponseBodyDataAssistSop& obj) { 
      DARABONBA_PTR_TO_JSON(assistSop, assistSop_);
      DARABONBA_PTR_TO_JSON(intentCode, intentCode_);
      DARABONBA_PTR_TO_JSON(intentName, intentName_);
      DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
    };
    friend void from_json(const Darabonba::Json& j, RealtimeDialogAssistResponseBodyDataAssistSop& obj) { 
      DARABONBA_PTR_FROM_JSON(assistSop, assistSop_);
      DARABONBA_PTR_FROM_JSON(intentCode, intentCode_);
      DARABONBA_PTR_FROM_JSON(intentName, intentName_);
      DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
    };
    RealtimeDialogAssistResponseBodyDataAssistSop() = default ;
    RealtimeDialogAssistResponseBodyDataAssistSop(const RealtimeDialogAssistResponseBodyDataAssistSop &) = default ;
    RealtimeDialogAssistResponseBodyDataAssistSop(RealtimeDialogAssistResponseBodyDataAssistSop &&) = default ;
    RealtimeDialogAssistResponseBodyDataAssistSop(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealtimeDialogAssistResponseBodyDataAssistSop() = default ;
    RealtimeDialogAssistResponseBodyDataAssistSop& operator=(const RealtimeDialogAssistResponseBodyDataAssistSop &) = default ;
    RealtimeDialogAssistResponseBodyDataAssistSop& operator=(RealtimeDialogAssistResponseBodyDataAssistSop &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assistSop_ == nullptr
        && return this->intentCode_ == nullptr && return this->intentName_ == nullptr && return this->isDefault_ == nullptr; };
    // assistSop Field Functions 
    bool hasAssistSop() const { return this->assistSop_ != nullptr;};
    void deleteAssistSop() { this->assistSop_ = nullptr;};
    inline string assistSop() const { DARABONBA_PTR_GET_DEFAULT(assistSop_, "") };
    inline RealtimeDialogAssistResponseBodyDataAssistSop& setAssistSop(string assistSop) { DARABONBA_PTR_SET_VALUE(assistSop_, assistSop) };


    // intentCode Field Functions 
    bool hasIntentCode() const { return this->intentCode_ != nullptr;};
    void deleteIntentCode() { this->intentCode_ = nullptr;};
    inline string intentCode() const { DARABONBA_PTR_GET_DEFAULT(intentCode_, "") };
    inline RealtimeDialogAssistResponseBodyDataAssistSop& setIntentCode(string intentCode) { DARABONBA_PTR_SET_VALUE(intentCode_, intentCode) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string intentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline RealtimeDialogAssistResponseBodyDataAssistSop& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline RealtimeDialogAssistResponseBodyDataAssistSop& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


  protected:
    std::shared_ptr<string> assistSop_ = nullptr;
    std::shared_ptr<string> intentCode_ = nullptr;
    std::shared_ptr<string> intentName_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
