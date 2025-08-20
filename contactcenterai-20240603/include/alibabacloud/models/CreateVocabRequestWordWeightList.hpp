// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVOCABREQUESTWORDWEIGHTLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVOCABREQUESTWORDWEIGHTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class CreateVocabRequestWordWeightList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVocabRequestWordWeightList& obj) { 
      DARABONBA_PTR_TO_JSON(weight, weight_);
      DARABONBA_PTR_TO_JSON(word, word_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVocabRequestWordWeightList& obj) { 
      DARABONBA_PTR_FROM_JSON(weight, weight_);
      DARABONBA_PTR_FROM_JSON(word, word_);
    };
    CreateVocabRequestWordWeightList() = default ;
    CreateVocabRequestWordWeightList(const CreateVocabRequestWordWeightList &) = default ;
    CreateVocabRequestWordWeightList(CreateVocabRequestWordWeightList &&) = default ;
    CreateVocabRequestWordWeightList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVocabRequestWordWeightList() = default ;
    CreateVocabRequestWordWeightList& operator=(const CreateVocabRequestWordWeightList &) = default ;
    CreateVocabRequestWordWeightList& operator=(CreateVocabRequestWordWeightList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->weight_ != nullptr
        && this->word_ != nullptr; };
    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateVocabRequestWordWeightList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline CreateVocabRequestWordWeightList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> weight_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
