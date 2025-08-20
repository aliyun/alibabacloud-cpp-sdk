// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVOCABRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVOCABRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVocabResponseBodyDataWordWeightList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class GetVocabResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVocabResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(audioModelCode, audioModelCode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(vocabularyId, vocabularyId_);
      DARABONBA_PTR_TO_JSON(wordWeightList, wordWeightList_);
    };
    friend void from_json(const Darabonba::Json& j, GetVocabResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(audioModelCode, audioModelCode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(vocabularyId, vocabularyId_);
      DARABONBA_PTR_FROM_JSON(wordWeightList, wordWeightList_);
    };
    GetVocabResponseBodyData() = default ;
    GetVocabResponseBodyData(const GetVocabResponseBodyData &) = default ;
    GetVocabResponseBodyData(GetVocabResponseBodyData &&) = default ;
    GetVocabResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVocabResponseBodyData() = default ;
    GetVocabResponseBodyData& operator=(const GetVocabResponseBodyData &) = default ;
    GetVocabResponseBodyData& operator=(GetVocabResponseBodyData &&) = default ;
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
    inline GetVocabResponseBodyData& setAudioModelCode(string audioModelCode) { DARABONBA_PTR_SET_VALUE(audioModelCode_, audioModelCode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetVocabResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetVocabResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string vocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline GetVocabResponseBodyData& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


    // wordWeightList Field Functions 
    bool hasWordWeightList() const { return this->wordWeightList_ != nullptr;};
    void deleteWordWeightList() { this->wordWeightList_ = nullptr;};
    inline const vector<Models::GetVocabResponseBodyDataWordWeightList> & wordWeightList() const { DARABONBA_PTR_GET_CONST(wordWeightList_, vector<Models::GetVocabResponseBodyDataWordWeightList>) };
    inline vector<Models::GetVocabResponseBodyDataWordWeightList> wordWeightList() { DARABONBA_PTR_GET(wordWeightList_, vector<Models::GetVocabResponseBodyDataWordWeightList>) };
    inline GetVocabResponseBodyData& setWordWeightList(const vector<Models::GetVocabResponseBodyDataWordWeightList> & wordWeightList) { DARABONBA_PTR_SET_VALUE(wordWeightList_, wordWeightList) };
    inline GetVocabResponseBodyData& setWordWeightList(vector<Models::GetVocabResponseBodyDataWordWeightList> && wordWeightList) { DARABONBA_PTR_SET_RVALUE(wordWeightList_, wordWeightList) };


  protected:
    std::shared_ptr<string> audioModelCode_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> vocabularyId_ = nullptr;
    std::shared_ptr<vector<Models::GetVocabResponseBodyDataWordWeightList>> wordWeightList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
