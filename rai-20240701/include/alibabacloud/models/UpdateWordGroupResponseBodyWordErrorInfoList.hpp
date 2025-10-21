// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORDGROUPRESPONSEBODYWORDERRORINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORDGROUPRESPONSEBODYWORDERRORINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdateWordGroupResponseBodyWordErrorInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWordGroupResponseBodyWordErrorInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ErrorStatus, errorStatus_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWordGroupResponseBodyWordErrorInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorStatus, errorStatus_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    UpdateWordGroupResponseBodyWordErrorInfoList() = default ;
    UpdateWordGroupResponseBodyWordErrorInfoList(const UpdateWordGroupResponseBodyWordErrorInfoList &) = default ;
    UpdateWordGroupResponseBodyWordErrorInfoList(UpdateWordGroupResponseBodyWordErrorInfoList &&) = default ;
    UpdateWordGroupResponseBodyWordErrorInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWordGroupResponseBodyWordErrorInfoList() = default ;
    UpdateWordGroupResponseBodyWordErrorInfoList& operator=(const UpdateWordGroupResponseBodyWordErrorInfoList &) = default ;
    UpdateWordGroupResponseBodyWordErrorInfoList& operator=(UpdateWordGroupResponseBodyWordErrorInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->errorStatus_ == nullptr && return this->index_ == nullptr && return this->label_ == nullptr && return this->word_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UpdateWordGroupResponseBodyWordErrorInfoList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // errorStatus Field Functions 
    bool hasErrorStatus() const { return this->errorStatus_ != nullptr;};
    void deleteErrorStatus() { this->errorStatus_ = nullptr;};
    inline int32_t errorStatus() const { DARABONBA_PTR_GET_DEFAULT(errorStatus_, 0) };
    inline UpdateWordGroupResponseBodyWordErrorInfoList& setErrorStatus(int32_t errorStatus) { DARABONBA_PTR_SET_VALUE(errorStatus_, errorStatus) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline UpdateWordGroupResponseBodyWordErrorInfoList& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline UpdateWordGroupResponseBodyWordErrorInfoList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline UpdateWordGroupResponseBodyWordErrorInfoList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    // Error message description.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // Error status information.
    std::shared_ptr<int32_t> errorStatus_ = nullptr;
    // Position of the error information in the array.
    std::shared_ptr<int64_t> index_ = nullptr;
    // Label.
    std::shared_ptr<string> label_ = nullptr;
    // Keyword.
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
