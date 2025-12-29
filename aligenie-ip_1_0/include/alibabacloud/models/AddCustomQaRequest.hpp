// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMQAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMQAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class AddCustomQARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomQARequest& obj) { 
      DARABONBA_PTR_TO_JSON(Answers, answers_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(MajorQuestion, majorQuestion_);
      DARABONBA_PTR_TO_JSON(SupplementaryQuestions, supplementaryQuestions_);
    };
    friend void from_json(const Darabonba::Json& j, AddCustomQARequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Answers, answers_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(MajorQuestion, majorQuestion_);
      DARABONBA_PTR_FROM_JSON(SupplementaryQuestions, supplementaryQuestions_);
    };
    AddCustomQARequest() = default ;
    AddCustomQARequest(const AddCustomQARequest &) = default ;
    AddCustomQARequest(AddCustomQARequest &&) = default ;
    AddCustomQARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomQARequest() = default ;
    AddCustomQARequest& operator=(const AddCustomQARequest &) = default ;
    AddCustomQARequest& operator=(AddCustomQARequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answers_ == nullptr
        && this->hotelId_ == nullptr && this->keyWords_ == nullptr && this->majorQuestion_ == nullptr && this->supplementaryQuestions_ == nullptr; };
    // answers Field Functions 
    bool hasAnswers() const { return this->answers_ != nullptr;};
    void deleteAnswers() { this->answers_ = nullptr;};
    inline const vector<string> & getAnswers() const { DARABONBA_PTR_GET_CONST(answers_, vector<string>) };
    inline vector<string> getAnswers() { DARABONBA_PTR_GET(answers_, vector<string>) };
    inline AddCustomQARequest& setAnswers(const vector<string> & answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };
    inline AddCustomQARequest& setAnswers(vector<string> && answers) { DARABONBA_PTR_SET_RVALUE(answers_, answers) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline AddCustomQARequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline const vector<string> & getKeyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, vector<string>) };
    inline vector<string> getKeyWords() { DARABONBA_PTR_GET(keyWords_, vector<string>) };
    inline AddCustomQARequest& setKeyWords(const vector<string> & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
    inline AddCustomQARequest& setKeyWords(vector<string> && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


    // majorQuestion Field Functions 
    bool hasMajorQuestion() const { return this->majorQuestion_ != nullptr;};
    void deleteMajorQuestion() { this->majorQuestion_ = nullptr;};
    inline string getMajorQuestion() const { DARABONBA_PTR_GET_DEFAULT(majorQuestion_, "") };
    inline AddCustomQARequest& setMajorQuestion(string majorQuestion) { DARABONBA_PTR_SET_VALUE(majorQuestion_, majorQuestion) };


    // supplementaryQuestions Field Functions 
    bool hasSupplementaryQuestions() const { return this->supplementaryQuestions_ != nullptr;};
    void deleteSupplementaryQuestions() { this->supplementaryQuestions_ = nullptr;};
    inline const vector<string> & getSupplementaryQuestions() const { DARABONBA_PTR_GET_CONST(supplementaryQuestions_, vector<string>) };
    inline vector<string> getSupplementaryQuestions() { DARABONBA_PTR_GET(supplementaryQuestions_, vector<string>) };
    inline AddCustomQARequest& setSupplementaryQuestions(const vector<string> & supplementaryQuestions) { DARABONBA_PTR_SET_VALUE(supplementaryQuestions_, supplementaryQuestions) };
    inline AddCustomQARequest& setSupplementaryQuestions(vector<string> && supplementaryQuestions) { DARABONBA_PTR_SET_RVALUE(supplementaryQuestions_, supplementaryQuestions) };


  protected:
    shared_ptr<vector<string>> answers_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<vector<string>> keyWords_ {};
    shared_ptr<string> majorQuestion_ {};
    shared_ptr<vector<string>> supplementaryQuestions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
