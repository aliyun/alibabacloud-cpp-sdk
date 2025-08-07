// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNEXTRESULTTOVERIFYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETNEXTRESULTTOVERIFYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNextResultToVerifyResponseBodyDataDialogues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetNextResultToVerifyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNextResultToVerifyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AudioScheme, audioScheme_);
      DARABONBA_PTR_TO_JSON(AudioURL, audioURL_);
      DARABONBA_PTR_TO_JSON(Dialogues, dialogues_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(IncorrectWords, incorrectWords_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Precision, precision_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Verified, verified_);
      DARABONBA_PTR_TO_JSON(VerifiedCount, verifiedCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetNextResultToVerifyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioScheme, audioScheme_);
      DARABONBA_PTR_FROM_JSON(AudioURL, audioURL_);
      DARABONBA_PTR_FROM_JSON(Dialogues, dialogues_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(IncorrectWords, incorrectWords_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Precision, precision_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Verified, verified_);
      DARABONBA_PTR_FROM_JSON(VerifiedCount, verifiedCount_);
    };
    GetNextResultToVerifyResponseBodyData() = default ;
    GetNextResultToVerifyResponseBodyData(const GetNextResultToVerifyResponseBodyData &) = default ;
    GetNextResultToVerifyResponseBodyData(GetNextResultToVerifyResponseBodyData &&) = default ;
    GetNextResultToVerifyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNextResultToVerifyResponseBodyData() = default ;
    GetNextResultToVerifyResponseBodyData& operator=(const GetNextResultToVerifyResponseBodyData &) = default ;
    GetNextResultToVerifyResponseBodyData& operator=(GetNextResultToVerifyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioScheme_ != nullptr
        && this->audioURL_ != nullptr && this->dialogues_ != nullptr && this->duration_ != nullptr && this->fileId_ != nullptr && this->fileName_ != nullptr
        && this->incorrectWords_ != nullptr && this->index_ != nullptr && this->precision_ != nullptr && this->status_ != nullptr && this->totalCount_ != nullptr
        && this->updateTime_ != nullptr && this->verified_ != nullptr && this->verifiedCount_ != nullptr; };
    // audioScheme Field Functions 
    bool hasAudioScheme() const { return this->audioScheme_ != nullptr;};
    void deleteAudioScheme() { this->audioScheme_ = nullptr;};
    inline string audioScheme() const { DARABONBA_PTR_GET_DEFAULT(audioScheme_, "") };
    inline GetNextResultToVerifyResponseBodyData& setAudioScheme(string audioScheme) { DARABONBA_PTR_SET_VALUE(audioScheme_, audioScheme) };


    // audioURL Field Functions 
    bool hasAudioURL() const { return this->audioURL_ != nullptr;};
    void deleteAudioURL() { this->audioURL_ = nullptr;};
    inline string audioURL() const { DARABONBA_PTR_GET_DEFAULT(audioURL_, "") };
    inline GetNextResultToVerifyResponseBodyData& setAudioURL(string audioURL) { DARABONBA_PTR_SET_VALUE(audioURL_, audioURL) };


    // dialogues Field Functions 
    bool hasDialogues() const { return this->dialogues_ != nullptr;};
    void deleteDialogues() { this->dialogues_ = nullptr;};
    inline const Models::GetNextResultToVerifyResponseBodyDataDialogues & dialogues() const { DARABONBA_PTR_GET_CONST(dialogues_, Models::GetNextResultToVerifyResponseBodyDataDialogues) };
    inline Models::GetNextResultToVerifyResponseBodyDataDialogues dialogues() { DARABONBA_PTR_GET(dialogues_, Models::GetNextResultToVerifyResponseBodyDataDialogues) };
    inline GetNextResultToVerifyResponseBodyData& setDialogues(const Models::GetNextResultToVerifyResponseBodyDataDialogues & dialogues) { DARABONBA_PTR_SET_VALUE(dialogues_, dialogues) };
    inline GetNextResultToVerifyResponseBodyData& setDialogues(Models::GetNextResultToVerifyResponseBodyDataDialogues && dialogues) { DARABONBA_PTR_SET_RVALUE(dialogues_, dialogues) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline GetNextResultToVerifyResponseBodyData& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline GetNextResultToVerifyResponseBodyData& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetNextResultToVerifyResponseBodyData& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // incorrectWords Field Functions 
    bool hasIncorrectWords() const { return this->incorrectWords_ != nullptr;};
    void deleteIncorrectWords() { this->incorrectWords_ = nullptr;};
    inline int32_t incorrectWords() const { DARABONBA_PTR_GET_DEFAULT(incorrectWords_, 0) };
    inline GetNextResultToVerifyResponseBodyData& setIncorrectWords(int32_t incorrectWords) { DARABONBA_PTR_SET_VALUE(incorrectWords_, incorrectWords) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline GetNextResultToVerifyResponseBodyData& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // precision Field Functions 
    bool hasPrecision() const { return this->precision_ != nullptr;};
    void deletePrecision() { this->precision_ = nullptr;};
    inline float precision() const { DARABONBA_PTR_GET_DEFAULT(precision_, 0.0) };
    inline GetNextResultToVerifyResponseBodyData& setPrecision(float precision) { DARABONBA_PTR_SET_VALUE(precision_, precision) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetNextResultToVerifyResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetNextResultToVerifyResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetNextResultToVerifyResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // verified Field Functions 
    bool hasVerified() const { return this->verified_ != nullptr;};
    void deleteVerified() { this->verified_ = nullptr;};
    inline bool verified() const { DARABONBA_PTR_GET_DEFAULT(verified_, false) };
    inline GetNextResultToVerifyResponseBodyData& setVerified(bool verified) { DARABONBA_PTR_SET_VALUE(verified_, verified) };


    // verifiedCount Field Functions 
    bool hasVerifiedCount() const { return this->verifiedCount_ != nullptr;};
    void deleteVerifiedCount() { this->verifiedCount_ = nullptr;};
    inline int32_t verifiedCount() const { DARABONBA_PTR_GET_DEFAULT(verifiedCount_, 0) };
    inline GetNextResultToVerifyResponseBodyData& setVerifiedCount(int32_t verifiedCount) { DARABONBA_PTR_SET_VALUE(verifiedCount_, verifiedCount) };


  protected:
    std::shared_ptr<string> audioScheme_ = nullptr;
    std::shared_ptr<string> audioURL_ = nullptr;
    std::shared_ptr<Models::GetNextResultToVerifyResponseBodyDataDialogues> dialogues_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<int32_t> incorrectWords_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<float> precision_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<bool> verified_ = nullptr;
    std::shared_ptr<int32_t> verifiedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
