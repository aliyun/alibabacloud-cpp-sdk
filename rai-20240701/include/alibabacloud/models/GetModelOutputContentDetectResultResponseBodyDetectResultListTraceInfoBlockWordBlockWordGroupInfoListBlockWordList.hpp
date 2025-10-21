// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELOUTPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFOBLOCKWORDBLOCKWORDGROUPINFOLISTBLOCKWORDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMODELOUTPUTCONTENTDETECTRESULTRESPONSEBODYDETECTRESULTLISTTRACEINFOBLOCKWORDBLOCKWORDGROUPINFOLISTBLOCKWORDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList& obj) { 
      DARABONBA_PTR_TO_JSON(Word, word_);
      DARABONBA_PTR_TO_JSON(WordLabel, wordLabel_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList& obj) { 
      DARABONBA_PTR_FROM_JSON(Word, word_);
      DARABONBA_PTR_FROM_JSON(WordLabel, wordLabel_);
    };
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList() = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList(const GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList &) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList(GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList &&) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList() = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList& operator=(const GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList &) = default ;
    GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList& operator=(GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->word_ == nullptr
        && return this->wordLabel_ == nullptr; };
    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


    // wordLabel Field Functions 
    bool hasWordLabel() const { return this->wordLabel_ != nullptr;};
    void deleteWordLabel() { this->wordLabel_ = nullptr;};
    inline string wordLabel() const { DARABONBA_PTR_GET_DEFAULT(wordLabel_, "") };
    inline GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList& setWordLabel(string wordLabel) { DARABONBA_PTR_SET_VALUE(wordLabel_, wordLabel) };


  protected:
    // Word
    std::shared_ptr<string> word_ = nullptr;
    // Label
    std::shared_ptr<string> wordLabel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
