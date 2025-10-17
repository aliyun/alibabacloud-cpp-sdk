// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDNOTEPHRASESREQUESTPHRASE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDNOTEPHRASESREQUESTPHRASE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCloudNotePhrasesRequestPhraseWordWeights.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyCloudNotePhrasesRequestPhrase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudNotePhrasesRequestPhrase& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WordWeights, wordWeights_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudNotePhrasesRequestPhrase& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WordWeights, wordWeights_);
    };
    ModifyCloudNotePhrasesRequestPhrase() = default ;
    ModifyCloudNotePhrasesRequestPhrase(const ModifyCloudNotePhrasesRequestPhrase &) = default ;
    ModifyCloudNotePhrasesRequestPhrase(ModifyCloudNotePhrasesRequestPhrase &&) = default ;
    ModifyCloudNotePhrasesRequestPhrase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudNotePhrasesRequestPhrase() = default ;
    ModifyCloudNotePhrasesRequestPhrase& operator=(const ModifyCloudNotePhrasesRequestPhrase &) = default ;
    ModifyCloudNotePhrasesRequestPhrase& operator=(ModifyCloudNotePhrasesRequestPhrase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->wordWeights_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyCloudNotePhrasesRequestPhrase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyCloudNotePhrasesRequestPhrase& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyCloudNotePhrasesRequestPhrase& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // wordWeights Field Functions 
    bool hasWordWeights() const { return this->wordWeights_ != nullptr;};
    void deleteWordWeights() { this->wordWeights_ = nullptr;};
    inline const vector<Models::ModifyCloudNotePhrasesRequestPhraseWordWeights> & wordWeights() const { DARABONBA_PTR_GET_CONST(wordWeights_, vector<Models::ModifyCloudNotePhrasesRequestPhraseWordWeights>) };
    inline vector<Models::ModifyCloudNotePhrasesRequestPhraseWordWeights> wordWeights() { DARABONBA_PTR_GET(wordWeights_, vector<Models::ModifyCloudNotePhrasesRequestPhraseWordWeights>) };
    inline ModifyCloudNotePhrasesRequestPhrase& setWordWeights(const vector<Models::ModifyCloudNotePhrasesRequestPhraseWordWeights> & wordWeights) { DARABONBA_PTR_SET_VALUE(wordWeights_, wordWeights) };
    inline ModifyCloudNotePhrasesRequestPhrase& setWordWeights(vector<Models::ModifyCloudNotePhrasesRequestPhraseWordWeights> && wordWeights) { DARABONBA_PTR_SET_RVALUE(wordWeights_, wordWeights) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::ModifyCloudNotePhrasesRequestPhraseWordWeights>> wordWeights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
