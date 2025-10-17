// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDNOTEPHRASESRESPONSEBODYPHRASESWORDWEIGHTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDNOTEPHRASESRESPONSEBODYPHRASESWORDWEIGHTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights& obj) { 
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights& obj) { 
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights() = default ;
    DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights(const DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights &) = default ;
    DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights(DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights &&) = default ;
    DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights() = default ;
    DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights& operator=(const DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights &) = default ;
    DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights& operator=(DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->weight_ == nullptr
        && return this->word_ == nullptr; };
    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline DescribeCloudNotePhrasesResponseBodyPhrasesWordWeights& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    std::shared_ptr<int32_t> weight_ = nullptr;
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
