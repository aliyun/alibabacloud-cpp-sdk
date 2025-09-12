// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSCRIPTIONPHRASESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSCRIPTIONPHRASESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTranscriptionPhrasesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTranscriptionPhrasesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PhraseId, phraseId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTranscriptionPhrasesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PhraseId, phraseId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateTranscriptionPhrasesResponseBodyData() = default ;
    CreateTranscriptionPhrasesResponseBodyData(const CreateTranscriptionPhrasesResponseBodyData &) = default ;
    CreateTranscriptionPhrasesResponseBodyData(CreateTranscriptionPhrasesResponseBodyData &&) = default ;
    CreateTranscriptionPhrasesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTranscriptionPhrasesResponseBodyData() = default ;
    CreateTranscriptionPhrasesResponseBodyData& operator=(const CreateTranscriptionPhrasesResponseBodyData &) = default ;
    CreateTranscriptionPhrasesResponseBodyData& operator=(CreateTranscriptionPhrasesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->phraseId_ != nullptr && this->status_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateTranscriptionPhrasesResponseBodyData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateTranscriptionPhrasesResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // phraseId Field Functions 
    bool hasPhraseId() const { return this->phraseId_ != nullptr;};
    void deletePhraseId() { this->phraseId_ = nullptr;};
    inline string phraseId() const { DARABONBA_PTR_GET_DEFAULT(phraseId_, "") };
    inline CreateTranscriptionPhrasesResponseBodyData& setPhraseId(string phraseId) { DARABONBA_PTR_SET_VALUE(phraseId_, phraseId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateTranscriptionPhrasesResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> phraseId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
