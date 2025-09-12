// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCRIPTIONPHRASESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCRIPTIONPHRASESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTranscriptionPhrasesResponseBodyDataPhrases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class ListTranscriptionPhrasesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscriptionPhrasesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Phrases, phrases_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscriptionPhrasesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Phrases, phrases_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListTranscriptionPhrasesResponseBodyData() = default ;
    ListTranscriptionPhrasesResponseBodyData(const ListTranscriptionPhrasesResponseBodyData &) = default ;
    ListTranscriptionPhrasesResponseBodyData(ListTranscriptionPhrasesResponseBodyData &&) = default ;
    ListTranscriptionPhrasesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscriptionPhrasesResponseBodyData() = default ;
    ListTranscriptionPhrasesResponseBodyData& operator=(const ListTranscriptionPhrasesResponseBodyData &) = default ;
    ListTranscriptionPhrasesResponseBodyData& operator=(ListTranscriptionPhrasesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->phrases_ != nullptr && this->status_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTranscriptionPhrasesResponseBodyData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTranscriptionPhrasesResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // phrases Field Functions 
    bool hasPhrases() const { return this->phrases_ != nullptr;};
    void deletePhrases() { this->phrases_ = nullptr;};
    inline const vector<Models::ListTranscriptionPhrasesResponseBodyDataPhrases> & phrases() const { DARABONBA_PTR_GET_CONST(phrases_, vector<Models::ListTranscriptionPhrasesResponseBodyDataPhrases>) };
    inline vector<Models::ListTranscriptionPhrasesResponseBodyDataPhrases> phrases() { DARABONBA_PTR_GET(phrases_, vector<Models::ListTranscriptionPhrasesResponseBodyDataPhrases>) };
    inline ListTranscriptionPhrasesResponseBodyData& setPhrases(const vector<Models::ListTranscriptionPhrasesResponseBodyDataPhrases> & phrases) { DARABONBA_PTR_SET_VALUE(phrases_, phrases) };
    inline ListTranscriptionPhrasesResponseBodyData& setPhrases(vector<Models::ListTranscriptionPhrasesResponseBodyDataPhrases> && phrases) { DARABONBA_PTR_SET_RVALUE(phrases_, phrases) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTranscriptionPhrasesResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<vector<Models::ListTranscriptionPhrasesResponseBodyDataPhrases>> phrases_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
