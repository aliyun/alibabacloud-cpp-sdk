// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NLURESPONSEBODYMESSAGESDIALOGHUBNLUINFOGLOBALDICTLIST_HPP_
#define ALIBABACLOUD_MODELS_NLURESPONSEBODYMESSAGESDIALOGHUBNLUINFOGLOBALDICTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class NluResponseBodyMessagesDialogHubNluInfoGlobalDictList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NluResponseBodyMessagesDialogHubNluInfoGlobalDictList& obj) { 
      DARABONBA_PTR_TO_JSON(StandardWord, standardWord_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, NluResponseBodyMessagesDialogHubNluInfoGlobalDictList& obj) { 
      DARABONBA_PTR_FROM_JSON(StandardWord, standardWord_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    NluResponseBodyMessagesDialogHubNluInfoGlobalDictList() = default ;
    NluResponseBodyMessagesDialogHubNluInfoGlobalDictList(const NluResponseBodyMessagesDialogHubNluInfoGlobalDictList &) = default ;
    NluResponseBodyMessagesDialogHubNluInfoGlobalDictList(NluResponseBodyMessagesDialogHubNluInfoGlobalDictList &&) = default ;
    NluResponseBodyMessagesDialogHubNluInfoGlobalDictList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NluResponseBodyMessagesDialogHubNluInfoGlobalDictList() = default ;
    NluResponseBodyMessagesDialogHubNluInfoGlobalDictList& operator=(const NluResponseBodyMessagesDialogHubNluInfoGlobalDictList &) = default ;
    NluResponseBodyMessagesDialogHubNluInfoGlobalDictList& operator=(NluResponseBodyMessagesDialogHubNluInfoGlobalDictList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->standardWord_ != nullptr
        && this->word_ != nullptr; };
    // standardWord Field Functions 
    bool hasStandardWord() const { return this->standardWord_ != nullptr;};
    void deleteStandardWord() { this->standardWord_ = nullptr;};
    inline string standardWord() const { DARABONBA_PTR_GET_DEFAULT(standardWord_, "") };
    inline NluResponseBodyMessagesDialogHubNluInfoGlobalDictList& setStandardWord(string standardWord) { DARABONBA_PTR_SET_VALUE(standardWord_, standardWord) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline NluResponseBodyMessagesDialogHubNluInfoGlobalDictList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    std::shared_ptr<string> standardWord_ = nullptr;
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
