// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPAGENTTEMPLATEREQUESTASRCONFIGWORDWEIGHTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPAGENTTEMPLATEREQUESTASRCONFIGWORDWEIGHTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppAgentTemplateRequestAsrConfigWordWeights : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppAgentTemplateRequestAsrConfigWordWeights& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppAgentTemplateRequestAsrConfigWordWeights& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    CreateAppAgentTemplateRequestAsrConfigWordWeights() = default ;
    CreateAppAgentTemplateRequestAsrConfigWordWeights(const CreateAppAgentTemplateRequestAsrConfigWordWeights &) = default ;
    CreateAppAgentTemplateRequestAsrConfigWordWeights(CreateAppAgentTemplateRequestAsrConfigWordWeights &&) = default ;
    CreateAppAgentTemplateRequestAsrConfigWordWeights(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppAgentTemplateRequestAsrConfigWordWeights() = default ;
    CreateAppAgentTemplateRequestAsrConfigWordWeights& operator=(const CreateAppAgentTemplateRequestAsrConfigWordWeights &) = default ;
    CreateAppAgentTemplateRequestAsrConfigWordWeights& operator=(CreateAppAgentTemplateRequestAsrConfigWordWeights &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->weight_ == nullptr && return this->word_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateAppAgentTemplateRequestAsrConfigWordWeights& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateAppAgentTemplateRequestAsrConfigWordWeights& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline CreateAppAgentTemplateRequestAsrConfigWordWeights& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> weight_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
