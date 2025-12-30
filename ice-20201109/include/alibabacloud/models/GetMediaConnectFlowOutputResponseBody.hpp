// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWOUTPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWOUTPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaConnectFlowOutputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConnectFlowOutputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaConnectFlowOutputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
    };
    GetMediaConnectFlowOutputResponseBody() = default ;
    GetMediaConnectFlowOutputResponseBody(const GetMediaConnectFlowOutputResponseBody &) = default ;
    GetMediaConnectFlowOutputResponseBody(GetMediaConnectFlowOutputResponseBody &&) = default ;
    GetMediaConnectFlowOutputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConnectFlowOutputResponseBody() = default ;
    GetMediaConnectFlowOutputResponseBody& operator=(const GetMediaConnectFlowOutputResponseBody &) = default ;
    GetMediaConnectFlowOutputResponseBody& operator=(GetMediaConnectFlowOutputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
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
      virtual bool empty() const override { return this->cidrs_ == nullptr
        && this->createTime_ == nullptr && this->forbid_ == nullptr && this->outputName_ == nullptr && this->outputProtocol_ == nullptr && this->outputUrl_ == nullptr
        && this->pairFlowId_ == nullptr && this->pairInputName_ == nullptr && this->playerLimit_ == nullptr && this->srtLatency_ == nullptr && this->srtPassphrase_ == nullptr
        && this->srtPbkeyLen_ == nullptr; };
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


      // forbid Field Functions 
      bool hasForbid() const { return this->forbid_ != nullptr;};
      void deleteForbid() { this->forbid_ = nullptr;};
      inline string getForbid() const { DARABONBA_PTR_GET_DEFAULT(forbid_, "") };
      inline Content& setForbid(string forbid) { DARABONBA_PTR_SET_VALUE(forbid_, forbid) };


      // outputName Field Functions 
      bool hasOutputName() const { return this->outputName_ != nullptr;};
      void deleteOutputName() { this->outputName_ = nullptr;};
      inline string getOutputName() const { DARABONBA_PTR_GET_DEFAULT(outputName_, "") };
      inline Content& setOutputName(string outputName) { DARABONBA_PTR_SET_VALUE(outputName_, outputName) };


      // outputProtocol Field Functions 
      bool hasOutputProtocol() const { return this->outputProtocol_ != nullptr;};
      void deleteOutputProtocol() { this->outputProtocol_ = nullptr;};
      inline string getOutputProtocol() const { DARABONBA_PTR_GET_DEFAULT(outputProtocol_, "") };
      inline Content& setOutputProtocol(string outputProtocol) { DARABONBA_PTR_SET_VALUE(outputProtocol_, outputProtocol) };


      // outputUrl Field Functions 
      bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
      void deleteOutputUrl() { this->outputUrl_ = nullptr;};
      inline string getOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
      inline Content& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


      // pairFlowId Field Functions 
      bool hasPairFlowId() const { return this->pairFlowId_ != nullptr;};
      void deletePairFlowId() { this->pairFlowId_ = nullptr;};
      inline string getPairFlowId() const { DARABONBA_PTR_GET_DEFAULT(pairFlowId_, "") };
      inline Content& setPairFlowId(string pairFlowId) { DARABONBA_PTR_SET_VALUE(pairFlowId_, pairFlowId) };


      // pairInputName Field Functions 
      bool hasPairInputName() const { return this->pairInputName_ != nullptr;};
      void deletePairInputName() { this->pairInputName_ = nullptr;};
      inline string getPairInputName() const { DARABONBA_PTR_GET_DEFAULT(pairInputName_, "") };
      inline Content& setPairInputName(string pairInputName) { DARABONBA_PTR_SET_VALUE(pairInputName_, pairInputName) };


      // playerLimit Field Functions 
      bool hasPlayerLimit() const { return this->playerLimit_ != nullptr;};
      void deletePlayerLimit() { this->playerLimit_ = nullptr;};
      inline int32_t getPlayerLimit() const { DARABONBA_PTR_GET_DEFAULT(playerLimit_, 0) };
      inline Content& setPlayerLimit(int32_t playerLimit) { DARABONBA_PTR_SET_VALUE(playerLimit_, playerLimit) };


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
      // The IP address whitelist in CIDR format. CIDR blocks are separated with commas (,).
      shared_ptr<string> cidrs_ {};
      // The time when the flow was created.
      shared_ptr<string> createTime_ {};
      shared_ptr<string> forbid_ {};
      // The output name.
      shared_ptr<string> outputName_ {};
      // The output type.
      // 
      // Valid values:
      // 
      // *   RTMP-PUSH
      // *   SRT-Caller
      // *   RTMP-PULL
      // *   SRT-Listener
      // *   Flow
      shared_ptr<string> outputProtocol_ {};
      // The output URL.
      shared_ptr<string> outputUrl_ {};
      // The ID of the destination flow. This parameter is returned when the output type is Flow.
      shared_ptr<string> pairFlowId_ {};
      // The source name of the destination flow. This parameter is returned when the output type is Flow.
      shared_ptr<string> pairInputName_ {};
      // The maximum number of viewers.
      shared_ptr<int32_t> playerLimit_ {};
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
    inline const GetMediaConnectFlowOutputResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetMediaConnectFlowOutputResponseBody::Content) };
    inline GetMediaConnectFlowOutputResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetMediaConnectFlowOutputResponseBody::Content) };
    inline GetMediaConnectFlowOutputResponseBody& setContent(const GetMediaConnectFlowOutputResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetMediaConnectFlowOutputResponseBody& setContent(GetMediaConnectFlowOutputResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMediaConnectFlowOutputResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaConnectFlowOutputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t getRetCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline GetMediaConnectFlowOutputResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


  protected:
    // The response body.
    shared_ptr<GetMediaConnectFlowOutputResponseBody::Content> content_ {};
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
