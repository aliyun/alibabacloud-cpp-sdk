// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMQASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMQASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class AddCustomQAShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomQAShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Answers, answersShrink_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(KeyWords, keyWordsShrink_);
      DARABONBA_PTR_TO_JSON(MajorQuestion, majorQuestion_);
      DARABONBA_PTR_TO_JSON(SupplementaryQuestions, supplementaryQuestionsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddCustomQAShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Answers, answersShrink_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWordsShrink_);
      DARABONBA_PTR_FROM_JSON(MajorQuestion, majorQuestion_);
      DARABONBA_PTR_FROM_JSON(SupplementaryQuestions, supplementaryQuestionsShrink_);
    };
    AddCustomQAShrinkRequest() = default ;
    AddCustomQAShrinkRequest(const AddCustomQAShrinkRequest &) = default ;
    AddCustomQAShrinkRequest(AddCustomQAShrinkRequest &&) = default ;
    AddCustomQAShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomQAShrinkRequest() = default ;
    AddCustomQAShrinkRequest& operator=(const AddCustomQAShrinkRequest &) = default ;
    AddCustomQAShrinkRequest& operator=(AddCustomQAShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answersShrink_ == nullptr
        && this->hotelId_ == nullptr && this->keyWordsShrink_ == nullptr && this->majorQuestion_ == nullptr && this->supplementaryQuestionsShrink_ == nullptr; };
    // answersShrink Field Functions 
    bool hasAnswersShrink() const { return this->answersShrink_ != nullptr;};
    void deleteAnswersShrink() { this->answersShrink_ = nullptr;};
    inline string getAnswersShrink() const { DARABONBA_PTR_GET_DEFAULT(answersShrink_, "") };
    inline AddCustomQAShrinkRequest& setAnswersShrink(string answersShrink) { DARABONBA_PTR_SET_VALUE(answersShrink_, answersShrink) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline AddCustomQAShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // keyWordsShrink Field Functions 
    bool hasKeyWordsShrink() const { return this->keyWordsShrink_ != nullptr;};
    void deleteKeyWordsShrink() { this->keyWordsShrink_ = nullptr;};
    inline string getKeyWordsShrink() const { DARABONBA_PTR_GET_DEFAULT(keyWordsShrink_, "") };
    inline AddCustomQAShrinkRequest& setKeyWordsShrink(string keyWordsShrink) { DARABONBA_PTR_SET_VALUE(keyWordsShrink_, keyWordsShrink) };


    // majorQuestion Field Functions 
    bool hasMajorQuestion() const { return this->majorQuestion_ != nullptr;};
    void deleteMajorQuestion() { this->majorQuestion_ = nullptr;};
    inline string getMajorQuestion() const { DARABONBA_PTR_GET_DEFAULT(majorQuestion_, "") };
    inline AddCustomQAShrinkRequest& setMajorQuestion(string majorQuestion) { DARABONBA_PTR_SET_VALUE(majorQuestion_, majorQuestion) };


    // supplementaryQuestionsShrink Field Functions 
    bool hasSupplementaryQuestionsShrink() const { return this->supplementaryQuestionsShrink_ != nullptr;};
    void deleteSupplementaryQuestionsShrink() { this->supplementaryQuestionsShrink_ = nullptr;};
    inline string getSupplementaryQuestionsShrink() const { DARABONBA_PTR_GET_DEFAULT(supplementaryQuestionsShrink_, "") };
    inline AddCustomQAShrinkRequest& setSupplementaryQuestionsShrink(string supplementaryQuestionsShrink) { DARABONBA_PTR_SET_VALUE(supplementaryQuestionsShrink_, supplementaryQuestionsShrink) };


  protected:
    shared_ptr<string> answersShrink_ {};
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
