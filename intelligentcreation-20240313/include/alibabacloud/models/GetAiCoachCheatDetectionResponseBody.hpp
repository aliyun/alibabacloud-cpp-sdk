// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAICoachCheatDetectionResponseBodyImageCheat.hpp>
#include <alibabacloud/models/GetAICoachCheatDetectionResponseBodyVoiceCheat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachCheatDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachCheatDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cheatId, cheatId_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(imageCheat, imageCheat_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(voiceCheat, voiceCheat_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachCheatDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cheatId, cheatId_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(imageCheat, imageCheat_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(voiceCheat, voiceCheat_);
    };
    GetAICoachCheatDetectionResponseBody() = default ;
    GetAICoachCheatDetectionResponseBody(const GetAICoachCheatDetectionResponseBody &) = default ;
    GetAICoachCheatDetectionResponseBody(GetAICoachCheatDetectionResponseBody &&) = default ;
    GetAICoachCheatDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachCheatDetectionResponseBody() = default ;
    GetAICoachCheatDetectionResponseBody& operator=(const GetAICoachCheatDetectionResponseBody &) = default ;
    GetAICoachCheatDetectionResponseBody& operator=(GetAICoachCheatDetectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cheatId_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->gmtCreate_ == nullptr && return this->imageCheat_ == nullptr && return this->requestId_ == nullptr
        && return this->status_ == nullptr && return this->success_ == nullptr && return this->voiceCheat_ == nullptr; };
    // cheatId Field Functions 
    bool hasCheatId() const { return this->cheatId_ != nullptr;};
    void deleteCheatId() { this->cheatId_ = nullptr;};
    inline string cheatId() const { DARABONBA_PTR_GET_DEFAULT(cheatId_, "") };
    inline GetAICoachCheatDetectionResponseBody& setCheatId(string cheatId) { DARABONBA_PTR_SET_VALUE(cheatId_, cheatId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetAICoachCheatDetectionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAICoachCheatDetectionResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetAICoachCheatDetectionResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // imageCheat Field Functions 
    bool hasImageCheat() const { return this->imageCheat_ != nullptr;};
    void deleteImageCheat() { this->imageCheat_ = nullptr;};
    inline const GetAICoachCheatDetectionResponseBodyImageCheat & imageCheat() const { DARABONBA_PTR_GET_CONST(imageCheat_, GetAICoachCheatDetectionResponseBodyImageCheat) };
    inline GetAICoachCheatDetectionResponseBodyImageCheat imageCheat() { DARABONBA_PTR_GET(imageCheat_, GetAICoachCheatDetectionResponseBodyImageCheat) };
    inline GetAICoachCheatDetectionResponseBody& setImageCheat(const GetAICoachCheatDetectionResponseBodyImageCheat & imageCheat) { DARABONBA_PTR_SET_VALUE(imageCheat_, imageCheat) };
    inline GetAICoachCheatDetectionResponseBody& setImageCheat(GetAICoachCheatDetectionResponseBodyImageCheat && imageCheat) { DARABONBA_PTR_SET_RVALUE(imageCheat_, imageCheat) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAICoachCheatDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetAICoachCheatDetectionResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAICoachCheatDetectionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // voiceCheat Field Functions 
    bool hasVoiceCheat() const { return this->voiceCheat_ != nullptr;};
    void deleteVoiceCheat() { this->voiceCheat_ = nullptr;};
    inline const GetAICoachCheatDetectionResponseBodyVoiceCheat & voiceCheat() const { DARABONBA_PTR_GET_CONST(voiceCheat_, GetAICoachCheatDetectionResponseBodyVoiceCheat) };
    inline GetAICoachCheatDetectionResponseBodyVoiceCheat voiceCheat() { DARABONBA_PTR_GET(voiceCheat_, GetAICoachCheatDetectionResponseBodyVoiceCheat) };
    inline GetAICoachCheatDetectionResponseBody& setVoiceCheat(const GetAICoachCheatDetectionResponseBodyVoiceCheat & voiceCheat) { DARABONBA_PTR_SET_VALUE(voiceCheat_, voiceCheat) };
    inline GetAICoachCheatDetectionResponseBody& setVoiceCheat(GetAICoachCheatDetectionResponseBodyVoiceCheat && voiceCheat) { DARABONBA_PTR_SET_RVALUE(voiceCheat_, voiceCheat) };


  protected:
    std::shared_ptr<string> cheatId_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<GetAICoachCheatDetectionResponseBodyImageCheat> imageCheat_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    // true
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<GetAICoachCheatDetectionResponseBodyVoiceCheat> voiceCheat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
