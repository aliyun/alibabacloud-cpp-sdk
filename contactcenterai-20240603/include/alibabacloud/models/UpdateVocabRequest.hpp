// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVOCABREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVOCABREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateVocabRequestWordWeightList.hpp>
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
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->vocabularyId_ != nullptr && this->wordWeightList_ != nullptr && this->workspaceId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateVocabRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateVocabRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string vocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline UpdateVocabRequest& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


    // wordWeightList Field Functions 
    bool hasWordWeightList() const { return this->wordWeightList_ != nullptr;};
    void deleteWordWeightList() { this->wordWeightList_ = nullptr;};
    inline const vector<UpdateVocabRequestWordWeightList> & wordWeightList() const { DARABONBA_PTR_GET_CONST(wordWeightList_, vector<UpdateVocabRequestWordWeightList>) };
    inline vector<UpdateVocabRequestWordWeightList> wordWeightList() { DARABONBA_PTR_GET(wordWeightList_, vector<UpdateVocabRequestWordWeightList>) };
    inline UpdateVocabRequest& setWordWeightList(const vector<UpdateVocabRequestWordWeightList> & wordWeightList) { DARABONBA_PTR_SET_VALUE(wordWeightList_, wordWeightList) };
    inline UpdateVocabRequest& setWordWeightList(vector<UpdateVocabRequestWordWeightList> && wordWeightList) { DARABONBA_PTR_SET_RVALUE(wordWeightList_, wordWeightList) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateVocabRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vocabularyId_ = nullptr;
    std::shared_ptr<vector<UpdateVocabRequestWordWeightList>> wordWeightList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
