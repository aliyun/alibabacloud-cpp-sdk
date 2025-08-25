// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONVERSATIONDETAILRESPONSEBODYPHRASES_HPP_
#define ALIBABACLOUD_MODELS_GETCONVERSATIONDETAILRESPONSEBODYPHRASES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetConversationDetailResponseBodyPhrases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConversationDetailResponseBodyPhrases& obj) { 
      DARABONBA_PTR_TO_JSON(Begin, begin_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Finished, finished_);
      DARABONBA_PTR_TO_JSON(Identity, identity_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Words, words_);
    };
    friend void from_json(const Darabonba::Json& j, GetConversationDetailResponseBodyPhrases& obj) { 
      DARABONBA_PTR_FROM_JSON(Begin, begin_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Finished, finished_);
      DARABONBA_PTR_FROM_JSON(Identity, identity_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Words, words_);
    };
    GetConversationDetailResponseBodyPhrases() = default ;
    GetConversationDetailResponseBodyPhrases(const GetConversationDetailResponseBodyPhrases &) = default ;
    GetConversationDetailResponseBodyPhrases(GetConversationDetailResponseBodyPhrases &&) = default ;
    GetConversationDetailResponseBodyPhrases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConversationDetailResponseBodyPhrases() = default ;
    GetConversationDetailResponseBodyPhrases& operator=(const GetConversationDetailResponseBodyPhrases &) = default ;
    GetConversationDetailResponseBodyPhrases& operator=(GetConversationDetailResponseBodyPhrases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->begin_ != nullptr
        && this->end_ != nullptr && this->finished_ != nullptr && this->identity_ != nullptr && this->role_ != nullptr && this->words_ != nullptr; };
    // begin Field Functions 
    bool hasBegin() const { return this->begin_ != nullptr;};
    void deleteBegin() { this->begin_ = nullptr;};
    inline int32_t begin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
    inline GetConversationDetailResponseBodyPhrases& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int32_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
    inline GetConversationDetailResponseBodyPhrases& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline bool finished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
    inline GetConversationDetailResponseBodyPhrases& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // identity Field Functions 
    bool hasIdentity() const { return this->identity_ != nullptr;};
    void deleteIdentity() { this->identity_ = nullptr;};
    inline string identity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
    inline GetConversationDetailResponseBodyPhrases& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetConversationDetailResponseBodyPhrases& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // words Field Functions 
    bool hasWords() const { return this->words_ != nullptr;};
    void deleteWords() { this->words_ = nullptr;};
    inline string words() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
    inline GetConversationDetailResponseBodyPhrases& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


  protected:
    std::shared_ptr<int32_t> begin_ = nullptr;
    std::shared_ptr<int32_t> end_ = nullptr;
    std::shared_ptr<bool> finished_ = nullptr;
    std::shared_ptr<string> identity_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> words_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
