// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEINTENTIONREQUESTINTENTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEINTENTIONREQUESTINTENTIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RecognizeIntentionRequestIntentionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIntentionRequestIntentionList& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(intention, intention_);
      DARABONBA_PTR_TO_JSON(intentionCode, intentionCode_);
      DARABONBA_PTR_TO_JSON(intentionScript, intentionScript_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIntentionRequestIntentionList& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(intention, intention_);
      DARABONBA_PTR_FROM_JSON(intentionCode, intentionCode_);
      DARABONBA_PTR_FROM_JSON(intentionScript, intentionScript_);
    };
    RecognizeIntentionRequestIntentionList() = default ;
    RecognizeIntentionRequestIntentionList(const RecognizeIntentionRequestIntentionList &) = default ;
    RecognizeIntentionRequestIntentionList(RecognizeIntentionRequestIntentionList &&) = default ;
    RecognizeIntentionRequestIntentionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIntentionRequestIntentionList() = default ;
    RecognizeIntentionRequestIntentionList& operator=(const RecognizeIntentionRequestIntentionList &) = default ;
    RecognizeIntentionRequestIntentionList& operator=(RecognizeIntentionRequestIntentionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->intention_ == nullptr && return this->intentionCode_ == nullptr && return this->intentionScript_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RecognizeIntentionRequestIntentionList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // intention Field Functions 
    bool hasIntention() const { return this->intention_ != nullptr;};
    void deleteIntention() { this->intention_ = nullptr;};
    inline string intention() const { DARABONBA_PTR_GET_DEFAULT(intention_, "") };
    inline RecognizeIntentionRequestIntentionList& setIntention(string intention) { DARABONBA_PTR_SET_VALUE(intention_, intention) };


    // intentionCode Field Functions 
    bool hasIntentionCode() const { return this->intentionCode_ != nullptr;};
    void deleteIntentionCode() { this->intentionCode_ = nullptr;};
    inline string intentionCode() const { DARABONBA_PTR_GET_DEFAULT(intentionCode_, "") };
    inline RecognizeIntentionRequestIntentionList& setIntentionCode(string intentionCode) { DARABONBA_PTR_SET_VALUE(intentionCode_, intentionCode) };


    // intentionScript Field Functions 
    bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
    void deleteIntentionScript() { this->intentionScript_ = nullptr;};
    inline string intentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
    inline RecognizeIntentionRequestIntentionList& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> intention_ = nullptr;
    std::shared_ptr<string> intentionCode_ = nullptr;
    std::shared_ptr<string> intentionScript_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
