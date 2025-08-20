// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVOCABRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTVOCABRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVocabResponseBodyDataWordWeightList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class ListVocabResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVocabResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(audioModelCode, audioModelCode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(vocabularyId, vocabularyId_);
      DARABONBA_PTR_TO_JSON(wordWeightList, wordWeightList_);
    };
    friend void from_json(const Darabonba::Json& j, ListVocabResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(audioModelCode, audioModelCode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(vocabularyId, vocabularyId_);
      DARABONBA_PTR_FROM_JSON(wordWeightList, wordWeightList_);
    };
    ListVocabResponseBodyData() = default ;
    ListVocabResponseBodyData(const ListVocabResponseBodyData &) = default ;
    ListVocabResponseBodyData(ListVocabResponseBodyData &&) = default ;
    ListVocabResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVocabResponseBodyData() = default ;
    ListVocabResponseBodyData& operator=(const ListVocabResponseBodyData &) = default ;
    ListVocabResponseBodyData& operator=(ListVocabResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioModelCode_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->vocabularyId_ != nullptr && this->wordWeightList_ != nullptr; };
    // audioModelCode Field Functions 
    bool hasAudioModelCode() const { return this->audioModelCode_ != nullptr;};
    void deleteAudioModelCode() { this->audioModelCode_ = nullptr;};
    inline string audioModelCode() const { DARABONBA_PTR_GET_DEFAULT(audioModelCode_, "") };
    inline ListVocabResponseBodyData& setAudioModelCode(string audioModelCode) { DARABONBA_PTR_SET_VALUE(audioModelCode_, audioModelCode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListVocabResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListVocabResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string vocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline ListVocabResponseBodyData& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


    // wordWeightList Field Functions 
    bool hasWordWeightList() const { return this->wordWeightList_ != nullptr;};
    void deleteWordWeightList() { this->wordWeightList_ = nullptr;};
    inline const vector<Models::ListVocabResponseBodyDataWordWeightList> & wordWeightList() const { DARABONBA_PTR_GET_CONST(wordWeightList_, vector<Models::ListVocabResponseBodyDataWordWeightList>) };
    inline vector<Models::ListVocabResponseBodyDataWordWeightList> wordWeightList() { DARABONBA_PTR_GET(wordWeightList_, vector<Models::ListVocabResponseBodyDataWordWeightList>) };
    inline ListVocabResponseBodyData& setWordWeightList(const vector<Models::ListVocabResponseBodyDataWordWeightList> & wordWeightList) { DARABONBA_PTR_SET_VALUE(wordWeightList_, wordWeightList) };
    inline ListVocabResponseBodyData& setWordWeightList(vector<Models::ListVocabResponseBodyDataWordWeightList> && wordWeightList) { DARABONBA_PTR_SET_RVALUE(wordWeightList_, wordWeightList) };


  protected:
    std::shared_ptr<string> audioModelCode_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> vocabularyId_ = nullptr;
    std::shared_ptr<vector<Models::ListVocabResponseBodyDataWordWeightList>> wordWeightList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
