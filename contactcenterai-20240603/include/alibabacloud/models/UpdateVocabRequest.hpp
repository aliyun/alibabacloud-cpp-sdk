// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVOCABREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVOCABREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class UpdateVocabRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVocabRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(vocabularyId, vocabularyId_);
      DARABONBA_PTR_TO_JSON(wordWeightList, wordWeightList_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVocabRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(vocabularyId, vocabularyId_);
      DARABONBA_PTR_FROM_JSON(wordWeightList, wordWeightList_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    UpdateVocabRequest() = default ;
    UpdateVocabRequest(const UpdateVocabRequest &) = default ;
    UpdateVocabRequest(UpdateVocabRequest &&) = default ;
    UpdateVocabRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVocabRequest() = default ;
    UpdateVocabRequest& operator=(const UpdateVocabRequest &) = default ;
    UpdateVocabRequest& operator=(UpdateVocabRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WordWeightList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WordWeightList& obj) { 
        DARABONBA_PTR_TO_JSON(weight, weight_);
        DARABONBA_PTR_TO_JSON(word, word_);
      };
      friend void from_json(const Darabonba::Json& j, WordWeightList& obj) { 
        DARABONBA_PTR_FROM_JSON(weight, weight_);
        DARABONBA_PTR_FROM_JSON(word, word_);
      };
      WordWeightList() = default ;
      WordWeightList(const WordWeightList &) = default ;
      WordWeightList(WordWeightList &&) = default ;
      WordWeightList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WordWeightList() = default ;
      WordWeightList& operator=(const WordWeightList &) = default ;
      WordWeightList& operator=(WordWeightList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->weight_ == nullptr
        && this->word_ == nullptr; };
      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline WordWeightList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      // word Field Functions 
      bool hasWord() const { return this->word_ != nullptr;};
      void deleteWord() { this->word_ = nullptr;};
      inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
      inline WordWeightList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> weight_ {};
      // This parameter is required.
      shared_ptr<string> word_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->vocabularyId_ == nullptr && this->wordWeightList_ == nullptr && this->workspaceId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateVocabRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateVocabRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string getVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline UpdateVocabRequest& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


    // wordWeightList Field Functions 
    bool hasWordWeightList() const { return this->wordWeightList_ != nullptr;};
    void deleteWordWeightList() { this->wordWeightList_ = nullptr;};
    inline const vector<UpdateVocabRequest::WordWeightList> & getWordWeightList() const { DARABONBA_PTR_GET_CONST(wordWeightList_, vector<UpdateVocabRequest::WordWeightList>) };
    inline vector<UpdateVocabRequest::WordWeightList> getWordWeightList() { DARABONBA_PTR_GET(wordWeightList_, vector<UpdateVocabRequest::WordWeightList>) };
    inline UpdateVocabRequest& setWordWeightList(const vector<UpdateVocabRequest::WordWeightList> & wordWeightList) { DARABONBA_PTR_SET_VALUE(wordWeightList_, wordWeightList) };
    inline UpdateVocabRequest& setWordWeightList(vector<UpdateVocabRequest::WordWeightList> && wordWeightList) { DARABONBA_PTR_SET_RVALUE(wordWeightList_, wordWeightList) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateVocabRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> vocabularyId_ {};
    shared_ptr<vector<UpdateVocabRequest::WordWeightList>> wordWeightList_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
