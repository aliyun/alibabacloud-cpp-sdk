// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWOUTPUTRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWOUTPUTRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaConnectFlowOutputResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConnectFlowOutputResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Forbid, forbid_);
      DARABONBA_PTR_TO_JSON(OutputName, outputName_);
      DARABONBA_PTR_TO_JSON(OutputProtocol, outputProtocol_);
      DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_TO_JSON(PairFlowId, pairFlowId_);
      DARABONBA_PTR_TO_JSON(PairInputName, pairInputName_);
      DARABONBA_PTR_TO_JSON(PlayerLimit, playerLimit_);
      DARABONBA_PTR_TO_JSON(SrtLatency, srtLatency_);
      DARABONBA_PTR_TO_JSON(SrtPassphrase, srtPassphrase_);
      DARABONBA_PTR_TO_JSON(SrtPbkeyLen, srtPbkeyLen_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaConnectFlowOutputResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Forbid, forbid_);
      DARABONBA_PTR_FROM_JSON(OutputName, outputName_);
      DARABONBA_PTR_FROM_JSON(OutputProtocol, outputProtocol_);
      DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_FROM_JSON(PairFlowId, pairFlowId_);
      DARABONBA_PTR_FROM_JSON(PairInputName, pairInputName_);
      DARABONBA_PTR_FROM_JSON(PlayerLimit, playerLimit_);
      DARABONBA_PTR_FROM_JSON(SrtLatency, srtLatency_);
      DARABONBA_PTR_FROM_JSON(SrtPassphrase, srtPassphrase_);
      DARABONBA_PTR_FROM_JSON(SrtPbkeyLen, srtPbkeyLen_);
    };
    GetMediaConnectFlowOutputResponseBodyContent() = default ;
    GetMediaConnectFlowOutputResponseBodyContent(const GetMediaConnectFlowOutputResponseBodyContent &) = default ;
    GetMediaConnectFlowOutputResponseBodyContent(GetMediaConnectFlowOutputResponseBodyContent &&) = default ;
    GetMediaConnectFlowOutputResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConnectFlowOutputResponseBodyContent() = default ;
    GetMediaConnectFlowOutputResponseBodyContent& operator=(const GetMediaConnectFlowOutputResponseBodyContent &) = default ;
    GetMediaConnectFlowOutputResponseBodyContent& operator=(GetMediaConnectFlowOutputResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrs_ != nullptr
        && this->createTime_ != nullptr && this->forbid_ != nullptr && this->outputName_ != nullptr && this->outputProtocol_ != nullptr && this->outputUrl_ != nullptr
        && this->pairFlowId_ != nullptr && this->pairInputName_ != nullptr && this->playerLimit_ != nullptr && this->srtLatency_ != nullptr && this->srtPassphrase_ != nullptr
        && this->srtPbkeyLen_ != nullptr; };
    // cidrs Field Functions 
    bool hasCidrs() const { return this->cidrs_ != nullptr;};
    void deleteCidrs() { this->cidrs_ = nullptr;};
    inline string cidrs() const { DARABONBA_PTR_GET_DEFAULT(cidrs_, "") };
    inline GetMediaConnectFlowOutputResponseBodyContent& setCidrs(string cidrs) { DARABONBA_PTR_SET_VALUE(cidrs_, cidrs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMediaConnectFlowOutputResponseBodyContent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // forbid Field Functions 
    bool hasForbid() const { return this->forbid_ != nullptr;};
    void deleteForbid() { this->forbid_ = nullptr;};
    inline string forbid() const { DARABONBA_PTR_GET_DEFAULT(forbid_, "") };
    inline GetMediaConnectFlowOutputResponseBodyContent& setForbid(string forbid) { DARABONBA_PTR_SET_VALUE(forbid_, forbid) };


    // outputName Field Functions 
    bool hasOutputName() const { return this->outputName_ != nullptr;};
    void deleteOutputName() { this->outputName_ = nullptr;};
    inline string outputName() const { DARABONBA_PTR_GET_DEFAULT(outputName_, "") };
    inline GetMediaConnectFlowOutputResponseBodyContent& setOutputName(string outputName) { DARABONBA_PTR_SET_VALUE(outputName_, outputName) };


    // outputProtocol Field Functions 
    bool hasOutputProtocol() const { return this->outputProtocol_ != nullptr;};
    void deleteOutputProtocol() { this->outputProtocol_ = nullptr;};
    inline string outputProtocol() const { DARABONBA_PTR_GET_DEFAULT(outputProtocol_, "") };
    inline GetMediaConnectFlowOutputResponseBodyContent& setOutputProtocol(string outputProtocol) { DARABONBA_PTR_SET_VALUE(outputProtocol_, outputProtocol) };


    // outputUrl Field Functions 
    bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
    void deleteOutputUrl() { this->outputUrl_ = nullptr;};
    inline string outputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
    inline GetMediaConnectFlowOutputResponseBodyContent& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    // pairFlowId Field Functions 
    bool hasPairFlowId() const { return this->pairFlowId_ != nullptr;};
    void deletePairFlowId() { this->pairFlowId_ = nullptr;};
    inline string pairFlowId() const { DARABONBA_PTR_GET_DEFAULT(pairFlowId_, "") };
    inline GetMediaConnectFlowOutputResponseBodyContent& setPairFlowId(string pairFlowId) { DARABONBA_PTR_SET_VALUE(pairFlowId_, pairFlowId) };


    // pairInputName Field Functions 
    bool hasPairInputName() const { return this->pairInputName_ != nullptr;};
    void deletePairInputName() { this->pairInputName_ = nullptr;};
    inline string pairInputName() const { DARABONBA_PTR_GET_DEFAULT(pairInputName_, "") };
    inline GetMediaConnectFlowOutputResponseBodyContent& setPairInputName(string pairInputName) { DARABONBA_PTR_SET_VALUE(pairInputName_, pairInputName) };


    // playerLimit Field Functions 
    bool hasPlayerLimit() const { return this->playerLimit_ != nullptr;};
    void deletePlayerLimit() { this->playerLimit_ = nullptr;};
    inline int32_t playerLimit() const { DARABONBA_PTR_GET_DEFAULT(playerLimit_, 0) };
    inline GetMediaConnectFlowOutputResponseBodyContent& setPlayerLimit(int32_t playerLimit) { DARABONBA_PTR_SET_VALUE(playerLimit_, playerLimit) };


    // srtLatency Field Functions 
    bool hasSrtLatency() const { return this->srtLatency_ != nullptr;};
    void deleteSrtLatency() { this->srtLatency_ = nullptr;};
    inline int32_t srtLatency() const { DARABONBA_PTR_GET_DEFAULT(srtLatency_, 0) };
    inline GetMediaConnectFlowOutputResponseBodyContent& setSrtLatency(int32_t srtLatency) { DARABONBA_PTR_SET_VALUE(srtLatency_, srtLatency) };


    // srtPassphrase Field Functions 
    bool hasSrtPassphrase() const { return this->srtPassphrase_ != nullptr;};
    void deleteSrtPassphrase() { this->srtPassphrase_ = nullptr;};
    inline string srtPassphrase() const { DARABONBA_PTR_GET_DEFAULT(srtPassphrase_, "") };
    inline GetMediaConnectFlowOutputResponseBodyContent& setSrtPassphrase(string srtPassphrase) { DARABONBA_PTR_SET_VALUE(srtPassphrase_, srtPassphrase) };


    // srtPbkeyLen Field Functions 
    bool hasSrtPbkeyLen() const { return this->srtPbkeyLen_ != nullptr;};
    void deleteSrtPbkeyLen() { this->srtPbkeyLen_ = nullptr;};
    inline int32_t srtPbkeyLen() const { DARABONBA_PTR_GET_DEFAULT(srtPbkeyLen_, 0) };
    inline GetMediaConnectFlowOutputResponseBodyContent& setSrtPbkeyLen(int32_t srtPbkeyLen) { DARABONBA_PTR_SET_VALUE(srtPbkeyLen_, srtPbkeyLen) };


  protected:
    // The IP address whitelist in CIDR format. CIDR blocks are separated with commas (,).
    std::shared_ptr<string> cidrs_ = nullptr;
    // The time when the flow was created.
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> forbid_ = nullptr;
    // The output name.
    std::shared_ptr<string> outputName_ = nullptr;
    // The output type.
    // 
    // Valid values:
    // 
    // *   RTMP-PUSH
    // *   SRT-Caller
    // *   RTMP-PULL
    // *   SRT-Listener
    // *   Flow
    std::shared_ptr<string> outputProtocol_ = nullptr;
    // The output URL.
    std::shared_ptr<string> outputUrl_ = nullptr;
    // The ID of the destination flow. This parameter is returned when the output type is Flow.
    std::shared_ptr<string> pairFlowId_ = nullptr;
    // The source name of the destination flow. This parameter is returned when the output type is Flow.
    std::shared_ptr<string> pairInputName_ = nullptr;
    // The maximum number of viewers.
    std::shared_ptr<int32_t> playerLimit_ = nullptr;
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
