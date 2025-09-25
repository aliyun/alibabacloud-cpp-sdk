// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEINTENTIONREQUESTHIERARCHICALINTENTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEINTENTIONREQUESTHIERARCHICALINTENTIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RecognizeIntentionRequestHierarchicalIntentionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIntentionRequestHierarchicalIntentionList& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(intention, intention_);
      DARABONBA_PTR_TO_JSON(intentionCode, intentionCode_);
      DARABONBA_PTR_TO_JSON(intentionScript, intentionScript_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIntentionRequestHierarchicalIntentionList& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(intention, intention_);
      DARABONBA_PTR_FROM_JSON(intentionCode, intentionCode_);
      DARABONBA_PTR_FROM_JSON(intentionScript, intentionScript_);
    };
    RecognizeIntentionRequestHierarchicalIntentionList() = default ;
    RecognizeIntentionRequestHierarchicalIntentionList(const RecognizeIntentionRequestHierarchicalIntentionList &) = default ;
    RecognizeIntentionRequestHierarchicalIntentionList(RecognizeIntentionRequestHierarchicalIntentionList &&) = default ;
    RecognizeIntentionRequestHierarchicalIntentionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIntentionRequestHierarchicalIntentionList() = default ;
    RecognizeIntentionRequestHierarchicalIntentionList& operator=(const RecognizeIntentionRequestHierarchicalIntentionList &) = default ;
    RecognizeIntentionRequestHierarchicalIntentionList& operator=(RecognizeIntentionRequestHierarchicalIntentionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->intention_ != nullptr && this->intentionCode_ != nullptr && this->intentionScript_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RecognizeIntentionRequestHierarchicalIntentionList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // intention Field Functions 
    bool hasIntention() const { return this->intention_ != nullptr;};
    void deleteIntention() { this->intention_ = nullptr;};
    inline string intention() const { DARABONBA_PTR_GET_DEFAULT(intention_, "") };
    inline RecognizeIntentionRequestHierarchicalIntentionList& setIntention(string intention) { DARABONBA_PTR_SET_VALUE(intention_, intention) };


    // intentionCode Field Functions 
    bool hasIntentionCode() const { return this->intentionCode_ != nullptr;};
    void deleteIntentionCode() { this->intentionCode_ = nullptr;};
    inline string intentionCode() const { DARABONBA_PTR_GET_DEFAULT(intentionCode_, "") };
    inline RecognizeIntentionRequestHierarchicalIntentionList& setIntentionCode(string intentionCode) { DARABONBA_PTR_SET_VALUE(intentionCode_, intentionCode) };


    // intentionScript Field Functions 
    bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
    void deleteIntentionScript() { this->intentionScript_ = nullptr;};
    inline string intentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
    inline RecognizeIntentionRequestHierarchicalIntentionList& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


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
