// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEWEBRTCSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEWEBRTCSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class SaveWebRTCStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveWebRTCStatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(GeneralInfo, generalInfo_);
      DARABONBA_PTR_TO_JSON(GoogAddress, googAddress_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ReceiverReport, receiverReport_);
      DARABONBA_PTR_TO_JSON(SenderReport, senderReport_);
    };
    friend void from_json(const Darabonba::Json& j, SaveWebRTCStatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(GeneralInfo, generalInfo_);
      DARABONBA_PTR_FROM_JSON(GoogAddress, googAddress_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ReceiverReport, receiverReport_);
      DARABONBA_PTR_FROM_JSON(SenderReport, senderReport_);
    };
    SaveWebRTCStatsRequest() = default ;
    SaveWebRTCStatsRequest(const SaveWebRTCStatsRequest &) = default ;
    SaveWebRTCStatsRequest(SaveWebRTCStatsRequest &&) = default ;
    SaveWebRTCStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveWebRTCStatsRequest() = default ;
    SaveWebRTCStatsRequest& operator=(const SaveWebRTCStatsRequest &) = default ;
    SaveWebRTCStatsRequest& operator=(SaveWebRTCStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callId_ != nullptr
        && this->generalInfo_ != nullptr && this->googAddress_ != nullptr && this->instanceId_ != nullptr && this->receiverReport_ != nullptr && this->senderReport_ != nullptr; };
    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline SaveWebRTCStatsRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // generalInfo Field Functions 
    bool hasGeneralInfo() const { return this->generalInfo_ != nullptr;};
    void deleteGeneralInfo() { this->generalInfo_ = nullptr;};
    inline string generalInfo() const { DARABONBA_PTR_GET_DEFAULT(generalInfo_, "") };
    inline SaveWebRTCStatsRequest& setGeneralInfo(string generalInfo) { DARABONBA_PTR_SET_VALUE(generalInfo_, generalInfo) };


    // googAddress Field Functions 
    bool hasGoogAddress() const { return this->googAddress_ != nullptr;};
    void deleteGoogAddress() { this->googAddress_ = nullptr;};
    inline string googAddress() const { DARABONBA_PTR_GET_DEFAULT(googAddress_, "") };
    inline SaveWebRTCStatsRequest& setGoogAddress(string googAddress) { DARABONBA_PTR_SET_VALUE(googAddress_, googAddress) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveWebRTCStatsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // receiverReport Field Functions 
    bool hasReceiverReport() const { return this->receiverReport_ != nullptr;};
    void deleteReceiverReport() { this->receiverReport_ = nullptr;};
    inline string receiverReport() const { DARABONBA_PTR_GET_DEFAULT(receiverReport_, "") };
    inline SaveWebRTCStatsRequest& setReceiverReport(string receiverReport) { DARABONBA_PTR_SET_VALUE(receiverReport_, receiverReport) };


    // senderReport Field Functions 
    bool hasSenderReport() const { return this->senderReport_ != nullptr;};
    void deleteSenderReport() { this->senderReport_ = nullptr;};
    inline string senderReport() const { DARABONBA_PTR_GET_DEFAULT(senderReport_, "") };
    inline SaveWebRTCStatsRequest& setSenderReport(string senderReport) { DARABONBA_PTR_SET_VALUE(senderReport_, senderReport) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> callId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> generalInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> googAddress_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> receiverReport_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> senderReport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
