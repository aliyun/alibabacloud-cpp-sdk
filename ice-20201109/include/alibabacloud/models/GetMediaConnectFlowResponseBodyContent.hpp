// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaConnectFlowResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConnectFlowResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FlowFailover, flowFailover_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(FlowRegion, flowRegion_);
      DARABONBA_PTR_TO_JSON(FlowStatus, flowStatus_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaConnectFlowResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FlowFailover, flowFailover_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(FlowRegion, flowRegion_);
      DARABONBA_PTR_FROM_JSON(FlowStatus, flowStatus_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetMediaConnectFlowResponseBodyContent() = default ;
    GetMediaConnectFlowResponseBodyContent(const GetMediaConnectFlowResponseBodyContent &) = default ;
    GetMediaConnectFlowResponseBodyContent(GetMediaConnectFlowResponseBodyContent &&) = default ;
    GetMediaConnectFlowResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConnectFlowResponseBodyContent() = default ;
    GetMediaConnectFlowResponseBodyContent& operator=(const GetMediaConnectFlowResponseBodyContent &) = default ;
    GetMediaConnectFlowResponseBodyContent& operator=(GetMediaConnectFlowResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->flowFailover_ == nullptr && return this->flowId_ == nullptr && return this->flowName_ == nullptr && return this->flowRegion_ == nullptr && return this->flowStatus_ == nullptr
        && return this->startTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMediaConnectFlowResponseBodyContent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // flowFailover Field Functions 
    bool hasFlowFailover() const { return this->flowFailover_ != nullptr;};
    void deleteFlowFailover() { this->flowFailover_ = nullptr;};
    inline string flowFailover() const { DARABONBA_PTR_GET_DEFAULT(flowFailover_, "") };
    inline GetMediaConnectFlowResponseBodyContent& setFlowFailover(string flowFailover) { DARABONBA_PTR_SET_VALUE(flowFailover_, flowFailover) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline GetMediaConnectFlowResponseBodyContent& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline GetMediaConnectFlowResponseBodyContent& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // flowRegion Field Functions 
    bool hasFlowRegion() const { return this->flowRegion_ != nullptr;};
    void deleteFlowRegion() { this->flowRegion_ = nullptr;};
    inline string flowRegion() const { DARABONBA_PTR_GET_DEFAULT(flowRegion_, "") };
    inline GetMediaConnectFlowResponseBodyContent& setFlowRegion(string flowRegion) { DARABONBA_PTR_SET_VALUE(flowRegion_, flowRegion) };


    // flowStatus Field Functions 
    bool hasFlowStatus() const { return this->flowStatus_ != nullptr;};
    void deleteFlowStatus() { this->flowStatus_ = nullptr;};
    inline string flowStatus() const { DARABONBA_PTR_GET_DEFAULT(flowStatus_, "") };
    inline GetMediaConnectFlowResponseBodyContent& setFlowStatus(string flowStatus) { DARABONBA_PTR_SET_VALUE(flowStatus_, flowStatus) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetMediaConnectFlowResponseBodyContent& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time when the flow was created.
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> flowFailover_ = nullptr;
    // The flow ID.
    std::shared_ptr<string> flowId_ = nullptr;
    // The flow name.
    std::shared_ptr<string> flowName_ = nullptr;
    std::shared_ptr<string> flowRegion_ = nullptr;
    // The state of the flow.
    std::shared_ptr<string> flowStatus_ = nullptr;
    // The time when the flow is started.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
