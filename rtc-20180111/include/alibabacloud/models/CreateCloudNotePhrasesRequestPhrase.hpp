// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDNOTEPHRASESREQUESTPHRASE_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDNOTEPHRASESREQUESTPHRASE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCloudNotePhrasesRequestPhraseWordWeights.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateCloudNotePhrasesRequestPhrase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudNotePhrasesRequestPhrase& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WordWeights, wordWeights_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudNotePhrasesRequestPhrase& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WordWeights, wordWeights_);
    };
    CreateCloudNotePhrasesRequestPhrase() = default ;
    CreateCloudNotePhrasesRequestPhrase(const CreateCloudNotePhrasesRequestPhrase &) = default ;
    CreateCloudNotePhrasesRequestPhrase(CreateCloudNotePhrasesRequestPhrase &&) = default ;
    CreateCloudNotePhrasesRequestPhrase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudNotePhrasesRequestPhrase() = default ;
    CreateCloudNotePhrasesRequestPhrase& operator=(const CreateCloudNotePhrasesRequestPhrase &) = default ;
    CreateCloudNotePhrasesRequestPhrase& operator=(CreateCloudNotePhrasesRequestPhrase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->wordWeights_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCloudNotePhrasesRequestPhrase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCloudNotePhrasesRequestPhrase& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // wordWeights Field Functions 
    bool hasWordWeights() const { return this->wordWeights_ != nullptr;};
    void deleteWordWeights() { this->wordWeights_ = nullptr;};
    inline const vector<Models::CreateCloudNotePhrasesRequestPhraseWordWeights> & wordWeights() const { DARABONBA_PTR_GET_CONST(wordWeights_, vector<Models::CreateCloudNotePhrasesRequestPhraseWordWeights>) };
    inline vector<Models::CreateCloudNotePhrasesRequestPhraseWordWeights> wordWeights() { DARABONBA_PTR_GET(wordWeights_, vector<Models::CreateCloudNotePhrasesRequestPhraseWordWeights>) };
    inline CreateCloudNotePhrasesRequestPhrase& setWordWeights(const vector<Models::CreateCloudNotePhrasesRequestPhraseWordWeights> & wordWeights) { DARABONBA_PTR_SET_VALUE(wordWeights_, wordWeights) };
    inline CreateCloudNotePhrasesRequestPhrase& setWordWeights(vector<Models::CreateCloudNotePhrasesRequestPhraseWordWeights> && wordWeights) { DARABONBA_PTR_SET_RVALUE(wordWeights_, wordWeights) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateCloudNotePhrasesRequestPhraseWordWeights>> wordWeights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
