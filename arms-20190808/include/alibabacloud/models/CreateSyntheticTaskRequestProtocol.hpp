// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTPROTOCOL_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTPROTOCOL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSyntheticTaskRequestProtocolRequestContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskRequestProtocol : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskRequestProtocol& obj) { 
      DARABONBA_PTR_TO_JSON(CharacterEncoding, characterEncoding_);
      DARABONBA_PTR_TO_JSON(CustomHost, customHost_);
      DARABONBA_PTR_TO_JSON(CustomHostIp, customHostIp_);
      DARABONBA_PTR_TO_JSON(ProtocolConnectionTime, protocolConnectionTime_);
      DARABONBA_PTR_TO_JSON(ProtocolMonitorTimeout, protocolMonitorTimeout_);
      DARABONBA_PTR_TO_JSON(ReceivedDataSize, receivedDataSize_);
      DARABONBA_PTR_TO_JSON(RequestContent, requestContent_);
      DARABONBA_PTR_TO_JSON(VerifyContent, verifyContent_);
      DARABONBA_PTR_TO_JSON(VerifyWay, verifyWay_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskRequestProtocol& obj) { 
      DARABONBA_PTR_FROM_JSON(CharacterEncoding, characterEncoding_);
      DARABONBA_PTR_FROM_JSON(CustomHost, customHost_);
      DARABONBA_PTR_FROM_JSON(CustomHostIp, customHostIp_);
      DARABONBA_PTR_FROM_JSON(ProtocolConnectionTime, protocolConnectionTime_);
      DARABONBA_PTR_FROM_JSON(ProtocolMonitorTimeout, protocolMonitorTimeout_);
      DARABONBA_PTR_FROM_JSON(ReceivedDataSize, receivedDataSize_);
      DARABONBA_PTR_FROM_JSON(RequestContent, requestContent_);
      DARABONBA_PTR_FROM_JSON(VerifyContent, verifyContent_);
      DARABONBA_PTR_FROM_JSON(VerifyWay, verifyWay_);
    };
    CreateSyntheticTaskRequestProtocol() = default ;
    CreateSyntheticTaskRequestProtocol(const CreateSyntheticTaskRequestProtocol &) = default ;
    CreateSyntheticTaskRequestProtocol(CreateSyntheticTaskRequestProtocol &&) = default ;
    CreateSyntheticTaskRequestProtocol(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskRequestProtocol() = default ;
    CreateSyntheticTaskRequestProtocol& operator=(const CreateSyntheticTaskRequestProtocol &) = default ;
    CreateSyntheticTaskRequestProtocol& operator=(CreateSyntheticTaskRequestProtocol &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->characterEncoding_ != nullptr
        && this->customHost_ != nullptr && this->customHostIp_ != nullptr && this->protocolConnectionTime_ != nullptr && this->protocolMonitorTimeout_ != nullptr && this->receivedDataSize_ != nullptr
        && this->requestContent_ != nullptr && this->verifyContent_ != nullptr && this->verifyWay_ != nullptr; };
    // characterEncoding Field Functions 
    bool hasCharacterEncoding() const { return this->characterEncoding_ != nullptr;};
    void deleteCharacterEncoding() { this->characterEncoding_ = nullptr;};
    inline int64_t characterEncoding() const { DARABONBA_PTR_GET_DEFAULT(characterEncoding_, 0L) };
    inline CreateSyntheticTaskRequestProtocol& setCharacterEncoding(int64_t characterEncoding) { DARABONBA_PTR_SET_VALUE(characterEncoding_, characterEncoding) };


    // customHost Field Functions 
    bool hasCustomHost() const { return this->customHost_ != nullptr;};
    void deleteCustomHost() { this->customHost_ = nullptr;};
    inline int64_t customHost() const { DARABONBA_PTR_GET_DEFAULT(customHost_, 0L) };
    inline CreateSyntheticTaskRequestProtocol& setCustomHost(int64_t customHost) { DARABONBA_PTR_SET_VALUE(customHost_, customHost) };


    // customHostIp Field Functions 
    bool hasCustomHostIp() const { return this->customHostIp_ != nullptr;};
    void deleteCustomHostIp() { this->customHostIp_ = nullptr;};
    inline string customHostIp() const { DARABONBA_PTR_GET_DEFAULT(customHostIp_, "") };
    inline CreateSyntheticTaskRequestProtocol& setCustomHostIp(string customHostIp) { DARABONBA_PTR_SET_VALUE(customHostIp_, customHostIp) };


    // protocolConnectionTime Field Functions 
    bool hasProtocolConnectionTime() const { return this->protocolConnectionTime_ != nullptr;};
    void deleteProtocolConnectionTime() { this->protocolConnectionTime_ = nullptr;};
    inline int64_t protocolConnectionTime() const { DARABONBA_PTR_GET_DEFAULT(protocolConnectionTime_, 0L) };
    inline CreateSyntheticTaskRequestProtocol& setProtocolConnectionTime(int64_t protocolConnectionTime) { DARABONBA_PTR_SET_VALUE(protocolConnectionTime_, protocolConnectionTime) };


    // protocolMonitorTimeout Field Functions 
    bool hasProtocolMonitorTimeout() const { return this->protocolMonitorTimeout_ != nullptr;};
    void deleteProtocolMonitorTimeout() { this->protocolMonitorTimeout_ = nullptr;};
    inline string protocolMonitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(protocolMonitorTimeout_, "") };
    inline CreateSyntheticTaskRequestProtocol& setProtocolMonitorTimeout(string protocolMonitorTimeout) { DARABONBA_PTR_SET_VALUE(protocolMonitorTimeout_, protocolMonitorTimeout) };


    // receivedDataSize Field Functions 
    bool hasReceivedDataSize() const { return this->receivedDataSize_ != nullptr;};
    void deleteReceivedDataSize() { this->receivedDataSize_ = nullptr;};
    inline int64_t receivedDataSize() const { DARABONBA_PTR_GET_DEFAULT(receivedDataSize_, 0L) };
    inline CreateSyntheticTaskRequestProtocol& setReceivedDataSize(int64_t receivedDataSize) { DARABONBA_PTR_SET_VALUE(receivedDataSize_, receivedDataSize) };


    // requestContent Field Functions 
    bool hasRequestContent() const { return this->requestContent_ != nullptr;};
    void deleteRequestContent() { this->requestContent_ = nullptr;};
    inline const Models::CreateSyntheticTaskRequestProtocolRequestContent & requestContent() const { DARABONBA_PTR_GET_CONST(requestContent_, Models::CreateSyntheticTaskRequestProtocolRequestContent) };
    inline Models::CreateSyntheticTaskRequestProtocolRequestContent requestContent() { DARABONBA_PTR_GET(requestContent_, Models::CreateSyntheticTaskRequestProtocolRequestContent) };
    inline CreateSyntheticTaskRequestProtocol& setRequestContent(const Models::CreateSyntheticTaskRequestProtocolRequestContent & requestContent) { DARABONBA_PTR_SET_VALUE(requestContent_, requestContent) };
    inline CreateSyntheticTaskRequestProtocol& setRequestContent(Models::CreateSyntheticTaskRequestProtocolRequestContent && requestContent) { DARABONBA_PTR_SET_RVALUE(requestContent_, requestContent) };


    // verifyContent Field Functions 
    bool hasVerifyContent() const { return this->verifyContent_ != nullptr;};
    void deleteVerifyContent() { this->verifyContent_ = nullptr;};
    inline string verifyContent() const { DARABONBA_PTR_GET_DEFAULT(verifyContent_, "") };
    inline CreateSyntheticTaskRequestProtocol& setVerifyContent(string verifyContent) { DARABONBA_PTR_SET_VALUE(verifyContent_, verifyContent) };


    // verifyWay Field Functions 
    bool hasVerifyWay() const { return this->verifyWay_ != nullptr;};
    void deleteVerifyWay() { this->verifyWay_ = nullptr;};
    inline int64_t verifyWay() const { DARABONBA_PTR_GET_DEFAULT(verifyWay_, 0L) };
    inline CreateSyntheticTaskRequestProtocol& setVerifyWay(int64_t verifyWay) { DARABONBA_PTR_SET_VALUE(verifyWay_, verifyWay) };


  protected:
    // The encoding format.
    // 
    // *   0: UTF-8
    // *   1: GBK
    // *   2: GB2312
    // *   3: Unicode
    std::shared_ptr<int64_t> characterEncoding_ = nullptr;
    // The custom host mode.
    // 
    // *   1: round robin
    // *   0: random
    std::shared_ptr<int64_t> customHost_ = nullptr;
    // The custom host IP address. You can enter multiple IP addresses. Separate the IP addresses with commas (,).
    std::shared_ptr<string> customHostIp_ = nullptr;
    // The connection timeout period of the protocol. Unit: seconds.
    std::shared_ptr<int64_t> protocolConnectionTime_ = nullptr;
    // The timeout period of API performance synthetic monitoring. Unit: seconds.
    std::shared_ptr<string> protocolMonitorTimeout_ = nullptr;
    // The size of the received data. This parameter is required when you set the value of the VerifyWay parameter to 2.
    std::shared_ptr<int64_t> receivedDataSize_ = nullptr;
    // The request content, including the request header and request body.
    std::shared_ptr<Models::CreateSyntheticTaskRequestProtocolRequestContent> requestContent_ = nullptr;
    // The verification string.
    std::shared_ptr<string> verifyContent_ = nullptr;
    // The method that is used to verify the response content.
    // 
    // *   0: no verification.
    // *   1: exact match with the verification string.
    // *   2: partial match with the verification string.
    // *   3: MD5 verification.
    std::shared_ptr<int64_t> verifyWay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
