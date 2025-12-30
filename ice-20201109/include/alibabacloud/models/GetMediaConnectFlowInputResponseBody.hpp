// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWINPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWINPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaConnectFlowInputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConnectFlowInputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaConnectFlowInputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
    };
    GetMediaConnectFlowInputResponseBody() = default ;
    GetMediaConnectFlowInputResponseBody(const GetMediaConnectFlowInputResponseBody &) = default ;
    GetMediaConnectFlowInputResponseBody(GetMediaConnectFlowInputResponseBody &&) = default ;
    GetMediaConnectFlowInputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConnectFlowInputResponseBody() = default ;
    GetMediaConnectFlowInputResponseBody& operator=(const GetMediaConnectFlowInputResponseBody &) = default ;
    GetMediaConnectFlowInputResponseBody& operator=(GetMediaConnectFlowInputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(BackupCidrs, backupCidrs_);
        DARABONBA_PTR_TO_JSON(BackupCreateTime, backupCreateTime_);
        DARABONBA_PTR_TO_JSON(BackupInputName, backupInputName_);
        DARABONBA_PTR_TO_JSON(BackupInputStatus, backupInputStatus_);
        DARABONBA_PTR_TO_JSON(BackupInputUrl, backupInputUrl_);
        DARABONBA_PTR_TO_JSON(BackupMaxBitrate, backupMaxBitrate_);
        DARABONBA_PTR_TO_JSON(BackupSrtLatency, backupSrtLatency_);
        DARABONBA_PTR_TO_JSON(BackupSrtPassphrase, backupSrtPassphrase_);
        DARABONBA_PTR_TO_JSON(BackupSrtPbkeyLen, backupSrtPbkeyLen_);
        DARABONBA_PTR_TO_JSON(Cidrs, cidrs_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InputName, inputName_);
        DARABONBA_PTR_TO_JSON(InputProtocol, inputProtocol_);
        DARABONBA_PTR_TO_JSON(InputStatus, inputStatus_);
        DARABONBA_PTR_TO_JSON(InputUrl, inputUrl_);
        DARABONBA_PTR_TO_JSON(MaxBitrate, maxBitrate_);
        DARABONBA_PTR_TO_JSON(PairFlowId, pairFlowId_);
        DARABONBA_PTR_TO_JSON(PairOutputName, pairOutputName_);
        DARABONBA_PTR_TO_JSON(SrtLatency, srtLatency_);
        DARABONBA_PTR_TO_JSON(SrtPassphrase, srtPassphrase_);
        DARABONBA_PTR_TO_JSON(SrtPbkeyLen, srtPbkeyLen_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupCidrs, backupCidrs_);
        DARABONBA_PTR_FROM_JSON(BackupCreateTime, backupCreateTime_);
        DARABONBA_PTR_FROM_JSON(BackupInputName, backupInputName_);
        DARABONBA_PTR_FROM_JSON(BackupInputStatus, backupInputStatus_);
        DARABONBA_PTR_FROM_JSON(BackupInputUrl, backupInputUrl_);
        DARABONBA_PTR_FROM_JSON(BackupMaxBitrate, backupMaxBitrate_);
        DARABONBA_PTR_FROM_JSON(BackupSrtLatency, backupSrtLatency_);
        DARABONBA_PTR_FROM_JSON(BackupSrtPassphrase, backupSrtPassphrase_);
        DARABONBA_PTR_FROM_JSON(BackupSrtPbkeyLen, backupSrtPbkeyLen_);
        DARABONBA_PTR_FROM_JSON(Cidrs, cidrs_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InputName, inputName_);
        DARABONBA_PTR_FROM_JSON(InputProtocol, inputProtocol_);
        DARABONBA_PTR_FROM_JSON(InputStatus, inputStatus_);
        DARABONBA_PTR_FROM_JSON(InputUrl, inputUrl_);
        DARABONBA_PTR_FROM_JSON(MaxBitrate, maxBitrate_);
        DARABONBA_PTR_FROM_JSON(PairFlowId, pairFlowId_);
        DARABONBA_PTR_FROM_JSON(PairOutputName, pairOutputName_);
        DARABONBA_PTR_FROM_JSON(SrtLatency, srtLatency_);
        DARABONBA_PTR_FROM_JSON(SrtPassphrase, srtPassphrase_);
        DARABONBA_PTR_FROM_JSON(SrtPbkeyLen, srtPbkeyLen_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupCidrs_ == nullptr
        && this->backupCreateTime_ == nullptr && this->backupInputName_ == nullptr && this->backupInputStatus_ == nullptr && this->backupInputUrl_ == nullptr && this->backupMaxBitrate_ == nullptr
        && this->backupSrtLatency_ == nullptr && this->backupSrtPassphrase_ == nullptr && this->backupSrtPbkeyLen_ == nullptr && this->cidrs_ == nullptr && this->createTime_ == nullptr
        && this->inputName_ == nullptr && this->inputProtocol_ == nullptr && this->inputStatus_ == nullptr && this->inputUrl_ == nullptr && this->maxBitrate_ == nullptr
        && this->pairFlowId_ == nullptr && this->pairOutputName_ == nullptr && this->srtLatency_ == nullptr && this->srtPassphrase_ == nullptr && this->srtPbkeyLen_ == nullptr; };
      // backupCidrs Field Functions 
      bool hasBackupCidrs() const { return this->backupCidrs_ != nullptr;};
      void deleteBackupCidrs() { this->backupCidrs_ = nullptr;};
      inline string getBackupCidrs() const { DARABONBA_PTR_GET_DEFAULT(backupCidrs_, "") };
      inline Content& setBackupCidrs(string backupCidrs) { DARABONBA_PTR_SET_VALUE(backupCidrs_, backupCidrs) };


      // backupCreateTime Field Functions 
      bool hasBackupCreateTime() const { return this->backupCreateTime_ != nullptr;};
      void deleteBackupCreateTime() { this->backupCreateTime_ = nullptr;};
      inline string getBackupCreateTime() const { DARABONBA_PTR_GET_DEFAULT(backupCreateTime_, "") };
      inline Content& setBackupCreateTime(string backupCreateTime) { DARABONBA_PTR_SET_VALUE(backupCreateTime_, backupCreateTime) };


      // backupInputName Field Functions 
      bool hasBackupInputName() const { return this->backupInputName_ != nullptr;};
      void deleteBackupInputName() { this->backupInputName_ = nullptr;};
      inline string getBackupInputName() const { DARABONBA_PTR_GET_DEFAULT(backupInputName_, "") };
      inline Content& setBackupInputName(string backupInputName) { DARABONBA_PTR_SET_VALUE(backupInputName_, backupInputName) };


      // backupInputStatus Field Functions 
      bool hasBackupInputStatus() const { return this->backupInputStatus_ != nullptr;};
      void deleteBackupInputStatus() { this->backupInputStatus_ = nullptr;};
      inline string getBackupInputStatus() const { DARABONBA_PTR_GET_DEFAULT(backupInputStatus_, "") };
      inline Content& setBackupInputStatus(string backupInputStatus) { DARABONBA_PTR_SET_VALUE(backupInputStatus_, backupInputStatus) };


      // backupInputUrl Field Functions 
      bool hasBackupInputUrl() const { return this->backupInputUrl_ != nullptr;};
      void deleteBackupInputUrl() { this->backupInputUrl_ = nullptr;};
      inline string getBackupInputUrl() const { DARABONBA_PTR_GET_DEFAULT(backupInputUrl_, "") };
      inline Content& setBackupInputUrl(string backupInputUrl) { DARABONBA_PTR_SET_VALUE(backupInputUrl_, backupInputUrl) };


      // backupMaxBitrate Field Functions 
      bool hasBackupMaxBitrate() const { return this->backupMaxBitrate_ != nullptr;};
      void deleteBackupMaxBitrate() { this->backupMaxBitrate_ = nullptr;};
      inline int32_t getBackupMaxBitrate() const { DARABONBA_PTR_GET_DEFAULT(backupMaxBitrate_, 0) };
      inline Content& setBackupMaxBitrate(int32_t backupMaxBitrate) { DARABONBA_PTR_SET_VALUE(backupMaxBitrate_, backupMaxBitrate) };


      // backupSrtLatency Field Functions 
      bool hasBackupSrtLatency() const { return this->backupSrtLatency_ != nullptr;};
      void deleteBackupSrtLatency() { this->backupSrtLatency_ = nullptr;};
      inline int32_t getBackupSrtLatency() const { DARABONBA_PTR_GET_DEFAULT(backupSrtLatency_, 0) };
      inline Content& setBackupSrtLatency(int32_t backupSrtLatency) { DARABONBA_PTR_SET_VALUE(backupSrtLatency_, backupSrtLatency) };


      // backupSrtPassphrase Field Functions 
      bool hasBackupSrtPassphrase() const { return this->backupSrtPassphrase_ != nullptr;};
      void deleteBackupSrtPassphrase() { this->backupSrtPassphrase_ = nullptr;};
      inline string getBackupSrtPassphrase() const { DARABONBA_PTR_GET_DEFAULT(backupSrtPassphrase_, "") };
      inline Content& setBackupSrtPassphrase(string backupSrtPassphrase) { DARABONBA_PTR_SET_VALUE(backupSrtPassphrase_, backupSrtPassphrase) };


      // backupSrtPbkeyLen Field Functions 
      bool hasBackupSrtPbkeyLen() const { return this->backupSrtPbkeyLen_ != nullptr;};
      void deleteBackupSrtPbkeyLen() { this->backupSrtPbkeyLen_ = nullptr;};
      inline int32_t getBackupSrtPbkeyLen() const { DARABONBA_PTR_GET_DEFAULT(backupSrtPbkeyLen_, 0) };
      inline Content& setBackupSrtPbkeyLen(int32_t backupSrtPbkeyLen) { DARABONBA_PTR_SET_VALUE(backupSrtPbkeyLen_, backupSrtPbkeyLen) };


      // cidrs Field Functions 
      bool hasCidrs() const { return this->cidrs_ != nullptr;};
      void deleteCidrs() { this->cidrs_ = nullptr;};
      inline string getCidrs() const { DARABONBA_PTR_GET_DEFAULT(cidrs_, "") };
      inline Content& setCidrs(string cidrs) { DARABONBA_PTR_SET_VALUE(cidrs_, cidrs) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Content& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // inputName Field Functions 
      bool hasInputName() const { return this->inputName_ != nullptr;};
      void deleteInputName() { this->inputName_ = nullptr;};
      inline string getInputName() const { DARABONBA_PTR_GET_DEFAULT(inputName_, "") };
      inline Content& setInputName(string inputName) { DARABONBA_PTR_SET_VALUE(inputName_, inputName) };


      // inputProtocol Field Functions 
      bool hasInputProtocol() const { return this->inputProtocol_ != nullptr;};
      void deleteInputProtocol() { this->inputProtocol_ = nullptr;};
      inline string getInputProtocol() const { DARABONBA_PTR_GET_DEFAULT(inputProtocol_, "") };
      inline Content& setInputProtocol(string inputProtocol) { DARABONBA_PTR_SET_VALUE(inputProtocol_, inputProtocol) };


      // inputStatus Field Functions 
      bool hasInputStatus() const { return this->inputStatus_ != nullptr;};
      void deleteInputStatus() { this->inputStatus_ = nullptr;};
      inline string getInputStatus() const { DARABONBA_PTR_GET_DEFAULT(inputStatus_, "") };
      inline Content& setInputStatus(string inputStatus) { DARABONBA_PTR_SET_VALUE(inputStatus_, inputStatus) };


      // inputUrl Field Functions 
      bool hasInputUrl() const { return this->inputUrl_ != nullptr;};
      void deleteInputUrl() { this->inputUrl_ = nullptr;};
      inline string getInputUrl() const { DARABONBA_PTR_GET_DEFAULT(inputUrl_, "") };
      inline Content& setInputUrl(string inputUrl) { DARABONBA_PTR_SET_VALUE(inputUrl_, inputUrl) };


      // maxBitrate Field Functions 
      bool hasMaxBitrate() const { return this->maxBitrate_ != nullptr;};
      void deleteMaxBitrate() { this->maxBitrate_ = nullptr;};
      inline int32_t getMaxBitrate() const { DARABONBA_PTR_GET_DEFAULT(maxBitrate_, 0) };
      inline Content& setMaxBitrate(int32_t maxBitrate) { DARABONBA_PTR_SET_VALUE(maxBitrate_, maxBitrate) };


      // pairFlowId Field Functions 
      bool hasPairFlowId() const { return this->pairFlowId_ != nullptr;};
      void deletePairFlowId() { this->pairFlowId_ = nullptr;};
      inline string getPairFlowId() const { DARABONBA_PTR_GET_DEFAULT(pairFlowId_, "") };
      inline Content& setPairFlowId(string pairFlowId) { DARABONBA_PTR_SET_VALUE(pairFlowId_, pairFlowId) };


      // pairOutputName Field Functions 
      bool hasPairOutputName() const { return this->pairOutputName_ != nullptr;};
      void deletePairOutputName() { this->pairOutputName_ = nullptr;};
      inline string getPairOutputName() const { DARABONBA_PTR_GET_DEFAULT(pairOutputName_, "") };
      inline Content& setPairOutputName(string pairOutputName) { DARABONBA_PTR_SET_VALUE(pairOutputName_, pairOutputName) };


      // srtLatency Field Functions 
      bool hasSrtLatency() const { return this->srtLatency_ != nullptr;};
      void deleteSrtLatency() { this->srtLatency_ = nullptr;};
      inline int32_t getSrtLatency() const { DARABONBA_PTR_GET_DEFAULT(srtLatency_, 0) };
      inline Content& setSrtLatency(int32_t srtLatency) { DARABONBA_PTR_SET_VALUE(srtLatency_, srtLatency) };


      // srtPassphrase Field Functions 
      bool hasSrtPassphrase() const { return this->srtPassphrase_ != nullptr;};
      void deleteSrtPassphrase() { this->srtPassphrase_ = nullptr;};
      inline string getSrtPassphrase() const { DARABONBA_PTR_GET_DEFAULT(srtPassphrase_, "") };
      inline Content& setSrtPassphrase(string srtPassphrase) { DARABONBA_PTR_SET_VALUE(srtPassphrase_, srtPassphrase) };


      // srtPbkeyLen Field Functions 
      bool hasSrtPbkeyLen() const { return this->srtPbkeyLen_ != nullptr;};
      void deleteSrtPbkeyLen() { this->srtPbkeyLen_ = nullptr;};
      inline int32_t getSrtPbkeyLen() const { DARABONBA_PTR_GET_DEFAULT(srtPbkeyLen_, 0) };
      inline Content& setSrtPbkeyLen(int32_t srtPbkeyLen) { DARABONBA_PTR_SET_VALUE(srtPbkeyLen_, srtPbkeyLen) };


    protected:
      shared_ptr<string> backupCidrs_ {};
      shared_ptr<string> backupCreateTime_ {};
      shared_ptr<string> backupInputName_ {};
      shared_ptr<string> backupInputStatus_ {};
      shared_ptr<string> backupInputUrl_ {};
      shared_ptr<int32_t> backupMaxBitrate_ {};
      shared_ptr<int32_t> backupSrtLatency_ {};
      shared_ptr<string> backupSrtPassphrase_ {};
      shared_ptr<int32_t> backupSrtPbkeyLen_ {};
      // The IP address whitelist in CIDR format. CIDR blocks are separated with commas (,).
      shared_ptr<string> cidrs_ {};
      // The time when the flow was created.
      shared_ptr<string> createTime_ {};
      // The source name.
      shared_ptr<string> inputName_ {};
      // The source type.
      // 
      // Valid values:
      // 
      // *   RTMP-PUSH
      // *   SRT-Caller
      // *   RTMP-PULL
      // *   SRT-Listener
      // *   Flow
      shared_ptr<string> inputProtocol_ {};
      shared_ptr<string> inputStatus_ {};
      // The source URL.
      shared_ptr<string> inputUrl_ {};
      // The maximum bitrate. Unit: bit/s.
      shared_ptr<int32_t> maxBitrate_ {};
      // The ID of the source flow. This parameter is returned when the source type is Flow.
      shared_ptr<string> pairFlowId_ {};
      // The output of the source flow. This parameter is returned when the source type is Flow.
      shared_ptr<string> pairOutputName_ {};
      // The latency for the SRT stream. Unit: milliseconds. This parameter is returned when the source type is SRT-Listener or SRT-Caller.
      shared_ptr<int32_t> srtLatency_ {};
      // The SRT key. This parameter is returned when the source type is SRT-Listener or SRT-Caller.
      shared_ptr<string> srtPassphrase_ {};
      // The encryption key length. This parameter is returned when the source type is SRT-Listener or SRT-Caller.
      // 
      // Valid values:
      // 
      // *   0
      // *   16
      // *   24
      // *   32
      shared_ptr<int32_t> srtPbkeyLen_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->description_ == nullptr && this->requestId_ == nullptr && this->retCode_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetMediaConnectFlowInputResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetMediaConnectFlowInputResponseBody::Content) };
    inline GetMediaConnectFlowInputResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetMediaConnectFlowInputResponseBody::Content) };
    inline GetMediaConnectFlowInputResponseBody& setContent(const GetMediaConnectFlowInputResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetMediaConnectFlowInputResponseBody& setContent(GetMediaConnectFlowInputResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMediaConnectFlowInputResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaConnectFlowInputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t getRetCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline GetMediaConnectFlowInputResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


  protected:
    // The response body.
    shared_ptr<GetMediaConnectFlowInputResponseBody::Content> content_ {};
    // The call description.
    shared_ptr<string> description_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned error code. A value of 0 indicates the call is successful.
    shared_ptr<int32_t> retCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
