// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWINPUTRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWINPUTRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaConnectFlowInputResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConnectFlowInputResponseBodyContent& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetMediaConnectFlowInputResponseBodyContent& obj) { 
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
    GetMediaConnectFlowInputResponseBodyContent() = default ;
    GetMediaConnectFlowInputResponseBodyContent(const GetMediaConnectFlowInputResponseBodyContent &) = default ;
    GetMediaConnectFlowInputResponseBodyContent(GetMediaConnectFlowInputResponseBodyContent &&) = default ;
    GetMediaConnectFlowInputResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConnectFlowInputResponseBodyContent() = default ;
    GetMediaConnectFlowInputResponseBodyContent& operator=(const GetMediaConnectFlowInputResponseBodyContent &) = default ;
    GetMediaConnectFlowInputResponseBodyContent& operator=(GetMediaConnectFlowInputResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupCidrs_ == nullptr
        && return this->backupCreateTime_ == nullptr && return this->backupInputName_ == nullptr && return this->backupInputStatus_ == nullptr && return this->backupInputUrl_ == nullptr && return this->backupMaxBitrate_ == nullptr
        && return this->backupSrtLatency_ == nullptr && return this->backupSrtPassphrase_ == nullptr && return this->backupSrtPbkeyLen_ == nullptr && return this->cidrs_ == nullptr && return this->createTime_ == nullptr
        && return this->inputName_ == nullptr && return this->inputProtocol_ == nullptr && return this->inputStatus_ == nullptr && return this->inputUrl_ == nullptr && return this->maxBitrate_ == nullptr
        && return this->pairFlowId_ == nullptr && return this->pairOutputName_ == nullptr && return this->srtLatency_ == nullptr && return this->srtPassphrase_ == nullptr && return this->srtPbkeyLen_ == nullptr; };
    // backupCidrs Field Functions 
    bool hasBackupCidrs() const { return this->backupCidrs_ != nullptr;};
    void deleteBackupCidrs() { this->backupCidrs_ = nullptr;};
    inline string backupCidrs() const { DARABONBA_PTR_GET_DEFAULT(backupCidrs_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setBackupCidrs(string backupCidrs) { DARABONBA_PTR_SET_VALUE(backupCidrs_, backupCidrs) };


    // backupCreateTime Field Functions 
    bool hasBackupCreateTime() const { return this->backupCreateTime_ != nullptr;};
    void deleteBackupCreateTime() { this->backupCreateTime_ = nullptr;};
    inline string backupCreateTime() const { DARABONBA_PTR_GET_DEFAULT(backupCreateTime_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setBackupCreateTime(string backupCreateTime) { DARABONBA_PTR_SET_VALUE(backupCreateTime_, backupCreateTime) };


    // backupInputName Field Functions 
    bool hasBackupInputName() const { return this->backupInputName_ != nullptr;};
    void deleteBackupInputName() { this->backupInputName_ = nullptr;};
    inline string backupInputName() const { DARABONBA_PTR_GET_DEFAULT(backupInputName_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setBackupInputName(string backupInputName) { DARABONBA_PTR_SET_VALUE(backupInputName_, backupInputName) };


    // backupInputStatus Field Functions 
    bool hasBackupInputStatus() const { return this->backupInputStatus_ != nullptr;};
    void deleteBackupInputStatus() { this->backupInputStatus_ = nullptr;};
    inline string backupInputStatus() const { DARABONBA_PTR_GET_DEFAULT(backupInputStatus_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setBackupInputStatus(string backupInputStatus) { DARABONBA_PTR_SET_VALUE(backupInputStatus_, backupInputStatus) };


    // backupInputUrl Field Functions 
    bool hasBackupInputUrl() const { return this->backupInputUrl_ != nullptr;};
    void deleteBackupInputUrl() { this->backupInputUrl_ = nullptr;};
    inline string backupInputUrl() const { DARABONBA_PTR_GET_DEFAULT(backupInputUrl_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setBackupInputUrl(string backupInputUrl) { DARABONBA_PTR_SET_VALUE(backupInputUrl_, backupInputUrl) };


    // backupMaxBitrate Field Functions 
    bool hasBackupMaxBitrate() const { return this->backupMaxBitrate_ != nullptr;};
    void deleteBackupMaxBitrate() { this->backupMaxBitrate_ = nullptr;};
    inline int32_t backupMaxBitrate() const { DARABONBA_PTR_GET_DEFAULT(backupMaxBitrate_, 0) };
    inline GetMediaConnectFlowInputResponseBodyContent& setBackupMaxBitrate(int32_t backupMaxBitrate) { DARABONBA_PTR_SET_VALUE(backupMaxBitrate_, backupMaxBitrate) };


    // backupSrtLatency Field Functions 
    bool hasBackupSrtLatency() const { return this->backupSrtLatency_ != nullptr;};
    void deleteBackupSrtLatency() { this->backupSrtLatency_ = nullptr;};
    inline int32_t backupSrtLatency() const { DARABONBA_PTR_GET_DEFAULT(backupSrtLatency_, 0) };
    inline GetMediaConnectFlowInputResponseBodyContent& setBackupSrtLatency(int32_t backupSrtLatency) { DARABONBA_PTR_SET_VALUE(backupSrtLatency_, backupSrtLatency) };


    // backupSrtPassphrase Field Functions 
    bool hasBackupSrtPassphrase() const { return this->backupSrtPassphrase_ != nullptr;};
    void deleteBackupSrtPassphrase() { this->backupSrtPassphrase_ = nullptr;};
    inline string backupSrtPassphrase() const { DARABONBA_PTR_GET_DEFAULT(backupSrtPassphrase_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setBackupSrtPassphrase(string backupSrtPassphrase) { DARABONBA_PTR_SET_VALUE(backupSrtPassphrase_, backupSrtPassphrase) };


    // backupSrtPbkeyLen Field Functions 
    bool hasBackupSrtPbkeyLen() const { return this->backupSrtPbkeyLen_ != nullptr;};
    void deleteBackupSrtPbkeyLen() { this->backupSrtPbkeyLen_ = nullptr;};
    inline int32_t backupSrtPbkeyLen() const { DARABONBA_PTR_GET_DEFAULT(backupSrtPbkeyLen_, 0) };
    inline GetMediaConnectFlowInputResponseBodyContent& setBackupSrtPbkeyLen(int32_t backupSrtPbkeyLen) { DARABONBA_PTR_SET_VALUE(backupSrtPbkeyLen_, backupSrtPbkeyLen) };


    // cidrs Field Functions 
    bool hasCidrs() const { return this->cidrs_ != nullptr;};
    void deleteCidrs() { this->cidrs_ = nullptr;};
    inline string cidrs() const { DARABONBA_PTR_GET_DEFAULT(cidrs_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setCidrs(string cidrs) { DARABONBA_PTR_SET_VALUE(cidrs_, cidrs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // inputName Field Functions 
    bool hasInputName() const { return this->inputName_ != nullptr;};
    void deleteInputName() { this->inputName_ = nullptr;};
    inline string inputName() const { DARABONBA_PTR_GET_DEFAULT(inputName_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setInputName(string inputName) { DARABONBA_PTR_SET_VALUE(inputName_, inputName) };


    // inputProtocol Field Functions 
    bool hasInputProtocol() const { return this->inputProtocol_ != nullptr;};
    void deleteInputProtocol() { this->inputProtocol_ = nullptr;};
    inline string inputProtocol() const { DARABONBA_PTR_GET_DEFAULT(inputProtocol_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setInputProtocol(string inputProtocol) { DARABONBA_PTR_SET_VALUE(inputProtocol_, inputProtocol) };


    // inputStatus Field Functions 
    bool hasInputStatus() const { return this->inputStatus_ != nullptr;};
    void deleteInputStatus() { this->inputStatus_ = nullptr;};
    inline string inputStatus() const { DARABONBA_PTR_GET_DEFAULT(inputStatus_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setInputStatus(string inputStatus) { DARABONBA_PTR_SET_VALUE(inputStatus_, inputStatus) };


    // inputUrl Field Functions 
    bool hasInputUrl() const { return this->inputUrl_ != nullptr;};
    void deleteInputUrl() { this->inputUrl_ = nullptr;};
    inline string inputUrl() const { DARABONBA_PTR_GET_DEFAULT(inputUrl_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setInputUrl(string inputUrl) { DARABONBA_PTR_SET_VALUE(inputUrl_, inputUrl) };


    // maxBitrate Field Functions 
    bool hasMaxBitrate() const { return this->maxBitrate_ != nullptr;};
    void deleteMaxBitrate() { this->maxBitrate_ = nullptr;};
    inline int32_t maxBitrate() const { DARABONBA_PTR_GET_DEFAULT(maxBitrate_, 0) };
    inline GetMediaConnectFlowInputResponseBodyContent& setMaxBitrate(int32_t maxBitrate) { DARABONBA_PTR_SET_VALUE(maxBitrate_, maxBitrate) };


    // pairFlowId Field Functions 
    bool hasPairFlowId() const { return this->pairFlowId_ != nullptr;};
    void deletePairFlowId() { this->pairFlowId_ = nullptr;};
    inline string pairFlowId() const { DARABONBA_PTR_GET_DEFAULT(pairFlowId_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setPairFlowId(string pairFlowId) { DARABONBA_PTR_SET_VALUE(pairFlowId_, pairFlowId) };


    // pairOutputName Field Functions 
    bool hasPairOutputName() const { return this->pairOutputName_ != nullptr;};
    void deletePairOutputName() { this->pairOutputName_ = nullptr;};
    inline string pairOutputName() const { DARABONBA_PTR_GET_DEFAULT(pairOutputName_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setPairOutputName(string pairOutputName) { DARABONBA_PTR_SET_VALUE(pairOutputName_, pairOutputName) };


    // srtLatency Field Functions 
    bool hasSrtLatency() const { return this->srtLatency_ != nullptr;};
    void deleteSrtLatency() { this->srtLatency_ = nullptr;};
    inline int32_t srtLatency() const { DARABONBA_PTR_GET_DEFAULT(srtLatency_, 0) };
    inline GetMediaConnectFlowInputResponseBodyContent& setSrtLatency(int32_t srtLatency) { DARABONBA_PTR_SET_VALUE(srtLatency_, srtLatency) };


    // srtPassphrase Field Functions 
    bool hasSrtPassphrase() const { return this->srtPassphrase_ != nullptr;};
    void deleteSrtPassphrase() { this->srtPassphrase_ = nullptr;};
    inline string srtPassphrase() const { DARABONBA_PTR_GET_DEFAULT(srtPassphrase_, "") };
    inline GetMediaConnectFlowInputResponseBodyContent& setSrtPassphrase(string srtPassphrase) { DARABONBA_PTR_SET_VALUE(srtPassphrase_, srtPassphrase) };


    // srtPbkeyLen Field Functions 
    bool hasSrtPbkeyLen() const { return this->srtPbkeyLen_ != nullptr;};
    void deleteSrtPbkeyLen() { this->srtPbkeyLen_ = nullptr;};
    inline int32_t srtPbkeyLen() const { DARABONBA_PTR_GET_DEFAULT(srtPbkeyLen_, 0) };
    inline GetMediaConnectFlowInputResponseBodyContent& setSrtPbkeyLen(int32_t srtPbkeyLen) { DARABONBA_PTR_SET_VALUE(srtPbkeyLen_, srtPbkeyLen) };


  protected:
    std::shared_ptr<string> backupCidrs_ = nullptr;
    std::shared_ptr<string> backupCreateTime_ = nullptr;
    std::shared_ptr<string> backupInputName_ = nullptr;
    std::shared_ptr<string> backupInputStatus_ = nullptr;
    std::shared_ptr<string> backupInputUrl_ = nullptr;
    std::shared_ptr<int32_t> backupMaxBitrate_ = nullptr;
    std::shared_ptr<int32_t> backupSrtLatency_ = nullptr;
    std::shared_ptr<string> backupSrtPassphrase_ = nullptr;
    std::shared_ptr<int32_t> backupSrtPbkeyLen_ = nullptr;
    // The IP address whitelist in CIDR format. CIDR blocks are separated with commas (,).
    std::shared_ptr<string> cidrs_ = nullptr;
    // The time when the flow was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The source name.
    std::shared_ptr<string> inputName_ = nullptr;
    // The source type.
    // 
    // Valid values:
    // 
    // *   RTMP-PUSH
    // *   SRT-Caller
    // *   RTMP-PULL
    // *   SRT-Listener
    // *   Flow
    std::shared_ptr<string> inputProtocol_ = nullptr;
    std::shared_ptr<string> inputStatus_ = nullptr;
    // The source URL.
    std::shared_ptr<string> inputUrl_ = nullptr;
    // The maximum bitrate. Unit: bit/s.
    std::shared_ptr<int32_t> maxBitrate_ = nullptr;
    // The ID of the source flow. This parameter is returned when the source type is Flow.
    std::shared_ptr<string> pairFlowId_ = nullptr;
    // The output of the source flow. This parameter is returned when the source type is Flow.
    std::shared_ptr<string> pairOutputName_ = nullptr;
    // The latency for the SRT stream. Unit: milliseconds. This parameter is returned when the source type is SRT-Listener or SRT-Caller.
    std::shared_ptr<int32_t> srtLatency_ = nullptr;
    // The SRT key. This parameter is returned when the source type is SRT-Listener or SRT-Caller.
    std::shared_ptr<string> srtPassphrase_ = nullptr;
    // The encryption key length. This parameter is returned when the source type is SRT-Listener or SRT-Caller.
    // 
    // Valid values:
    // 
    // *   0
    // *   16
    // *   24
    // *   32
    std::shared_ptr<int32_t> srtPbkeyLen_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
