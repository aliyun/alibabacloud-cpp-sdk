// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYINFORESPONSEBODYSENSITIVEWORDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYINFORESPONSEBODYSENSITIVEWORDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetPolicyInfoResponseBodySensitiveWordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyInfoResponseBodySensitiveWordList& obj) { 
      DARABONBA_PTR_TO_JSON(InputOutputType, inputOutputType_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyInfoResponseBodySensitiveWordList& obj) { 
      DARABONBA_PTR_FROM_JSON(InputOutputType, inputOutputType_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    GetPolicyInfoResponseBodySensitiveWordList() = default ;
    GetPolicyInfoResponseBodySensitiveWordList(const GetPolicyInfoResponseBodySensitiveWordList &) = default ;
    GetPolicyInfoResponseBodySensitiveWordList(GetPolicyInfoResponseBodySensitiveWordList &&) = default ;
    GetPolicyInfoResponseBodySensitiveWordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyInfoResponseBodySensitiveWordList() = default ;
    GetPolicyInfoResponseBodySensitiveWordList& operator=(const GetPolicyInfoResponseBodySensitiveWordList &) = default ;
    GetPolicyInfoResponseBodySensitiveWordList& operator=(GetPolicyInfoResponseBodySensitiveWordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputOutputType_ == nullptr
        && return this->label_ == nullptr && return this->word_ == nullptr; };
    // inputOutputType Field Functions 
    bool hasInputOutputType() const { return this->inputOutputType_ != nullptr;};
    void deleteInputOutputType() { this->inputOutputType_ = nullptr;};
    inline int32_t inputOutputType() const { DARABONBA_PTR_GET_DEFAULT(inputOutputType_, 0) };
    inline GetPolicyInfoResponseBodySensitiveWordList& setInputOutputType(int32_t inputOutputType) { DARABONBA_PTR_SET_VALUE(inputOutputType_, inputOutputType) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetPolicyInfoResponseBodySensitiveWordList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline GetPolicyInfoResponseBodySensitiveWordList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    std::shared_ptr<int32_t> inputOutputType_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
