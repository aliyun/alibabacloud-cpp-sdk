// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMQASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMQASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class UpdateCustomQAShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomQAShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Answers, answersShrink_);
      DARABONBA_PTR_TO_JSON(CustomQAId, customQAId_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(KeyWords, keyWordsShrink_);
      DARABONBA_PTR_TO_JSON(MajorQuestion, majorQuestion_);
      DARABONBA_PTR_TO_JSON(SupplementaryQuestions, supplementaryQuestionsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomQAShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Answers, answersShrink_);
      DARABONBA_PTR_FROM_JSON(CustomQAId, customQAId_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWordsShrink_);
      DARABONBA_PTR_FROM_JSON(MajorQuestion, majorQuestion_);
      DARABONBA_PTR_FROM_JSON(SupplementaryQuestions, supplementaryQuestionsShrink_);
    };
    UpdateCustomQAShrinkRequest() = default ;
    UpdateCustomQAShrinkRequest(const UpdateCustomQAShrinkRequest &) = default ;
    UpdateCustomQAShrinkRequest(UpdateCustomQAShrinkRequest &&) = default ;
    UpdateCustomQAShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomQAShrinkRequest() = default ;
    UpdateCustomQAShrinkRequest& operator=(const UpdateCustomQAShrinkRequest &) = default ;
    UpdateCustomQAShrinkRequest& operator=(UpdateCustomQAShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answersShrink_ == nullptr
        && this->customQAId_ == nullptr && this->hotelId_ == nullptr && this->keyWordsShrink_ == nullptr && this->majorQuestion_ == nullptr && this->supplementaryQuestionsShrink_ == nullptr; };
    // answersShrink Field Functions 
    bool hasAnswersShrink() const { return this->answersShrink_ != nullptr;};
    void deleteAnswersShrink() { this->answersShrink_ = nullptr;};
    inline string getAnswersShrink() const { DARABONBA_PTR_GET_DEFAULT(answersShrink_, "") };
    inline UpdateCustomQAShrinkRequest& setAnswersShrink(string answersShrink) { DARABONBA_PTR_SET_VALUE(answersShrink_, answersShrink) };


    // customQAId Field Functions 
    bool hasCustomQAId() const { return this->customQAId_ != nullptr;};
    void deleteCustomQAId() { this->customQAId_ = nullptr;};
    inline string getCustomQAId() const { DARABONBA_PTR_GET_DEFAULT(customQAId_, "") };
    inline UpdateCustomQAShrinkRequest& setCustomQAId(string customQAId) { DARABONBA_PTR_SET_VALUE(customQAId_, customQAId) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline UpdateCustomQAShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // keyWordsShrink Field Functions 
    bool hasKeyWordsShrink() const { return this->keyWordsShrink_ != nullptr;};
    void deleteKeyWordsShrink() { this->keyWordsShrink_ = nullptr;};
    inline string getKeyWordsShrink() const { DARABONBA_PTR_GET_DEFAULT(keyWordsShrink_, "") };
    inline UpdateCustomQAShrinkRequest& setKeyWordsShrink(string keyWordsShrink) { DARABONBA_PTR_SET_VALUE(keyWordsShrink_, keyWordsShrink) };


    // majorQuestion Field Functions 
    bool hasMajorQuestion() const { return this->majorQuestion_ != nullptr;};
    void deleteMajorQuestion() { this->majorQuestion_ = nullptr;};
    inline string getMajorQuestion() const { DARABONBA_PTR_GET_DEFAULT(majorQuestion_, "") };
    inline UpdateCustomQAShrinkRequest& setMajorQuestion(string majorQuestion) { DARABONBA_PTR_SET_VALUE(majorQuestion_, majorQuestion) };


    // supplementaryQuestionsShrink Field Functions 
    bool hasSupplementaryQuestionsShrink() const { return this->supplementaryQuestionsShrink_ != nullptr;};
    void deleteSupplementaryQuestionsShrink() { this->supplementaryQuestionsShrink_ = nullptr;};
    inline string getSupplementaryQuestionsShrink() const { DARABONBA_PTR_GET_DEFAULT(supplementaryQuestionsShrink_, "") };
    inline UpdateCustomQAShrinkRequest& setSupplementaryQuestionsShrink(string supplementaryQuestionsShrink) { DARABONBA_PTR_SET_VALUE(supplementaryQuestionsShrink_, supplementaryQuestionsShrink) };


  protected:
    shared_ptr<string> answersShrink_ {};
    // This parameter is required.
    shared_ptr<string> customQAId_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> keyWordsShrink_ {};
    shared_ptr<string> majorQuestion_ {};
    shared_ptr<string> supplementaryQuestionsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
