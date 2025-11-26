// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLISTSLOT_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLISTSLOT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions.hpp>
#include <alibabacloud/models/ListIntentionsResponseBodyDataIntentListSlotTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListIntentionsResponseBodyDataIntentListSlot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentionsResponseBodyDataIntentListSlot& obj) { 
      DARABONBA_PTR_TO_JSON(FeedbackFunctions, feedbackFunctions_);
      DARABONBA_PTR_TO_JSON(FeedbackType, feedbackType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsArray, isArray_);
      DARABONBA_PTR_TO_JSON(IsEncrypt, isEncrypt_);
      DARABONBA_PTR_TO_JSON(IsInteractive, isInteractive_);
      DARABONBA_PTR_TO_JSON(IsNecessary, isNecessary_);
      DARABONBA_PTR_TO_JSON(LifeSpan, lifeSpan_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentionsResponseBodyDataIntentListSlot& obj) { 
      DARABONBA_PTR_FROM_JSON(FeedbackFunctions, feedbackFunctions_);
      DARABONBA_PTR_FROM_JSON(FeedbackType, feedbackType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsArray, isArray_);
      DARABONBA_PTR_FROM_JSON(IsEncrypt, isEncrypt_);
      DARABONBA_PTR_FROM_JSON(IsInteractive, isInteractive_);
      DARABONBA_PTR_FROM_JSON(IsNecessary, isNecessary_);
      DARABONBA_PTR_FROM_JSON(LifeSpan, lifeSpan_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListIntentionsResponseBodyDataIntentListSlot() = default ;
    ListIntentionsResponseBodyDataIntentListSlot(const ListIntentionsResponseBodyDataIntentListSlot &) = default ;
    ListIntentionsResponseBodyDataIntentListSlot(ListIntentionsResponseBodyDataIntentListSlot &&) = default ;
    ListIntentionsResponseBodyDataIntentListSlot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentionsResponseBodyDataIntentListSlot() = default ;
    ListIntentionsResponseBodyDataIntentListSlot& operator=(const ListIntentionsResponseBodyDataIntentListSlot &) = default ;
    ListIntentionsResponseBodyDataIntentListSlot& operator=(ListIntentionsResponseBodyDataIntentListSlot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feedbackFunctions_ == nullptr
        && return this->feedbackType_ == nullptr && return this->id_ == nullptr && return this->isArray_ == nullptr && return this->isEncrypt_ == nullptr && return this->isInteractive_ == nullptr
        && return this->isNecessary_ == nullptr && return this->lifeSpan_ == nullptr && return this->name_ == nullptr && return this->question_ == nullptr && return this->tags_ == nullptr
        && return this->value_ == nullptr; };
    // feedbackFunctions Field Functions 
    bool hasFeedbackFunctions() const { return this->feedbackFunctions_ != nullptr;};
    void deleteFeedbackFunctions() { this->feedbackFunctions_ = nullptr;};
    inline const vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions> & feedbackFunctions() const { DARABONBA_PTR_GET_CONST(feedbackFunctions_, vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions>) };
    inline vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions> feedbackFunctions() { DARABONBA_PTR_GET(feedbackFunctions_, vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions>) };
    inline ListIntentionsResponseBodyDataIntentListSlot& setFeedbackFunctions(const vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions> & feedbackFunctions) { DARABONBA_PTR_SET_VALUE(feedbackFunctions_, feedbackFunctions) };
    inline ListIntentionsResponseBodyDataIntentListSlot& setFeedbackFunctions(vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions> && feedbackFunctions) { DARABONBA_PTR_SET_RVALUE(feedbackFunctions_, feedbackFunctions) };


    // feedbackType Field Functions 
    bool hasFeedbackType() const { return this->feedbackType_ != nullptr;};
    void deleteFeedbackType() { this->feedbackType_ = nullptr;};
    inline string feedbackType() const { DARABONBA_PTR_GET_DEFAULT(feedbackType_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlot& setFeedbackType(string feedbackType) { DARABONBA_PTR_SET_VALUE(feedbackType_, feedbackType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlot& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isArray Field Functions 
    bool hasIsArray() const { return this->isArray_ != nullptr;};
    void deleteIsArray() { this->isArray_ = nullptr;};
    inline bool isArray() const { DARABONBA_PTR_GET_DEFAULT(isArray_, false) };
    inline ListIntentionsResponseBodyDataIntentListSlot& setIsArray(bool isArray) { DARABONBA_PTR_SET_VALUE(isArray_, isArray) };


    // isEncrypt Field Functions 
    bool hasIsEncrypt() const { return this->isEncrypt_ != nullptr;};
    void deleteIsEncrypt() { this->isEncrypt_ = nullptr;};
    inline bool isEncrypt() const { DARABONBA_PTR_GET_DEFAULT(isEncrypt_, false) };
    inline ListIntentionsResponseBodyDataIntentListSlot& setIsEncrypt(bool isEncrypt) { DARABONBA_PTR_SET_VALUE(isEncrypt_, isEncrypt) };


    // isInteractive Field Functions 
    bool hasIsInteractive() const { return this->isInteractive_ != nullptr;};
    void deleteIsInteractive() { this->isInteractive_ = nullptr;};
    inline bool isInteractive() const { DARABONBA_PTR_GET_DEFAULT(isInteractive_, false) };
    inline ListIntentionsResponseBodyDataIntentListSlot& setIsInteractive(bool isInteractive) { DARABONBA_PTR_SET_VALUE(isInteractive_, isInteractive) };


    // isNecessary Field Functions 
    bool hasIsNecessary() const { return this->isNecessary_ != nullptr;};
    void deleteIsNecessary() { this->isNecessary_ = nullptr;};
    inline bool isNecessary() const { DARABONBA_PTR_GET_DEFAULT(isNecessary_, false) };
    inline ListIntentionsResponseBodyDataIntentListSlot& setIsNecessary(bool isNecessary) { DARABONBA_PTR_SET_VALUE(isNecessary_, isNecessary) };


    // lifeSpan Field Functions 
    bool hasLifeSpan() const { return this->lifeSpan_ != nullptr;};
    void deleteLifeSpan() { this->lifeSpan_ = nullptr;};
    inline int32_t lifeSpan() const { DARABONBA_PTR_GET_DEFAULT(lifeSpan_, 0) };
    inline ListIntentionsResponseBodyDataIntentListSlot& setLifeSpan(int32_t lifeSpan) { DARABONBA_PTR_SET_VALUE(lifeSpan_, lifeSpan) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlot& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline const vector<string> & question() const { DARABONBA_PTR_GET_CONST(question_, vector<string>) };
    inline vector<string> question() { DARABONBA_PTR_GET(question_, vector<string>) };
    inline ListIntentionsResponseBodyDataIntentListSlot& setQuestion(const vector<string> & question) { DARABONBA_PTR_SET_VALUE(question_, question) };
    inline ListIntentionsResponseBodyDataIntentListSlot& setQuestion(vector<string> && question) { DARABONBA_PTR_SET_RVALUE(question_, question) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListIntentionsResponseBodyDataIntentListSlotTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListIntentionsResponseBodyDataIntentListSlotTags>) };
    inline vector<Models::ListIntentionsResponseBodyDataIntentListSlotTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListIntentionsResponseBodyDataIntentListSlotTags>) };
    inline ListIntentionsResponseBodyDataIntentListSlot& setTags(const vector<Models::ListIntentionsResponseBodyDataIntentListSlotTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIntentionsResponseBodyDataIntentListSlot& setTags(vector<Models::ListIntentionsResponseBodyDataIntentListSlotTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListIntentionsResponseBodyDataIntentListSlot& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<vector<Models::ListIntentionsResponseBodyDataIntentListSlotFeedbackFunctions>> feedbackFunctions_ = nullptr;
    std::shared_ptr<string> feedbackType_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isArray_ = nullptr;
    std::shared_ptr<bool> isEncrypt_ = nullptr;
    std::shared_ptr<bool> isInteractive_ = nullptr;
    std::shared_ptr<bool> isNecessary_ = nullptr;
    std::shared_ptr<int32_t> lifeSpan_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> question_ = nullptr;
    std::shared_ptr<vector<Models::ListIntentionsResponseBodyDataIntentListSlotTags>> tags_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
