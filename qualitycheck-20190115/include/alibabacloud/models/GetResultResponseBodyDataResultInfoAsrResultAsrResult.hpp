// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOASRRESULTASRRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOASRRESULTASRRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoAsrResultAsrResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoAsrResultAsrResult& obj) { 
      DARABONBA_PTR_TO_JSON(Begin, begin_);
      DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Identity, identity_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(Words, words_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoAsrResultAsrResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Begin, begin_);
      DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Identity, identity_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(Words, words_);
    };
    GetResultResponseBodyDataResultInfoAsrResultAsrResult() = default ;
    GetResultResponseBodyDataResultInfoAsrResultAsrResult(const GetResultResponseBodyDataResultInfoAsrResultAsrResult &) = default ;
    GetResultResponseBodyDataResultInfoAsrResultAsrResult(GetResultResponseBodyDataResultInfoAsrResultAsrResult &&) = default ;
    GetResultResponseBodyDataResultInfoAsrResultAsrResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoAsrResultAsrResult() = default ;
    GetResultResponseBodyDataResultInfoAsrResultAsrResult& operator=(const GetResultResponseBodyDataResultInfoAsrResultAsrResult &) = default ;
    GetResultResponseBodyDataResultInfoAsrResultAsrResult& operator=(GetResultResponseBodyDataResultInfoAsrResultAsrResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->begin_ != nullptr
        && this->emotionValue_ != nullptr && this->end_ != nullptr && this->identity_ != nullptr && this->role_ != nullptr && this->speechRate_ != nullptr
        && this->words_ != nullptr; };
    // begin Field Functions 
    bool hasBegin() const { return this->begin_ != nullptr;};
    void deleteBegin() { this->begin_ = nullptr;};
    inline int64_t begin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
    inline GetResultResponseBodyDataResultInfoAsrResultAsrResult& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


    // emotionValue Field Functions 
    bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
    void deleteEmotionValue() { this->emotionValue_ = nullptr;};
    inline int32_t emotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
    inline GetResultResponseBodyDataResultInfoAsrResultAsrResult& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline GetResultResponseBodyDataResultInfoAsrResultAsrResult& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // identity Field Functions 
    bool hasIdentity() const { return this->identity_ != nullptr;};
    void deleteIdentity() { this->identity_ = nullptr;};
    inline string identity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
    inline GetResultResponseBodyDataResultInfoAsrResultAsrResult& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetResultResponseBodyDataResultInfoAsrResultAsrResult& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline int32_t speechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
    inline GetResultResponseBodyDataResultInfoAsrResultAsrResult& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // words Field Functions 
    bool hasWords() const { return this->words_ != nullptr;};
    void deleteWords() { this->words_ = nullptr;};
    inline string words() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
    inline GetResultResponseBodyDataResultInfoAsrResultAsrResult& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


  protected:
    std::shared_ptr<int64_t> begin_ = nullptr;
    std::shared_ptr<int32_t> emotionValue_ = nullptr;
    std::shared_ptr<int64_t> end_ = nullptr;
    std::shared_ptr<string> identity_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<int32_t> speechRate_ = nullptr;
    std::shared_ptr<string> words_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
