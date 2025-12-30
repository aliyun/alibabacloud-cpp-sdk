// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONNECTFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaConnectFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConnectFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Retcode, retcode_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaConnectFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Retcode, retcode_);
    };
    GetMediaConnectFlowResponseBody() = default ;
    GetMediaConnectFlowResponseBody(const GetMediaConnectFlowResponseBody &) = default ;
    GetMediaConnectFlowResponseBody(GetMediaConnectFlowResponseBody &&) = default ;
    GetMediaConnectFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConnectFlowResponseBody() = default ;
    GetMediaConnectFlowResponseBody& operator=(const GetMediaConnectFlowResponseBody &) = default ;
    GetMediaConnectFlowResponseBody& operator=(GetMediaConnectFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FlowFailover, flowFailover_);
        DARABONBA_PTR_TO_JSON(FlowId, flowId_);
        DARABONBA_PTR_TO_JSON(FlowName, flowName_);
        DARABONBA_PTR_TO_JSON(FlowRegion, flowRegion_);
        DARABONBA_PTR_TO_JSON(FlowStatus, flowStatus_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FlowFailover, flowFailover_);
        DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
        DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
        DARABONBA_PTR_FROM_JSON(FlowRegion, flowRegion_);
        DARABONBA_PTR_FROM_JSON(FlowStatus, flowStatus_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->flowFailover_ == nullptr && this->flowId_ == nullptr && this->flowName_ == nullptr && this->flowRegion_ == nullptr && this->flowStatus_ == nullptr
        && this->startTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Content& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // flowFailover Field Functions 
      bool hasFlowFailover() const { return this->flowFailover_ != nullptr;};
      void deleteFlowFailover() { this->flowFailover_ = nullptr;};
      inline string getFlowFailover() const { DARABONBA_PTR_GET_DEFAULT(flowFailover_, "") };
      inline Content& setFlowFailover(string flowFailover) { DARABONBA_PTR_SET_VALUE(flowFailover_, flowFailover) };


      // flowId Field Functions 
      bool hasFlowId() const { return this->flowId_ != nullptr;};
      void deleteFlowId() { this->flowId_ = nullptr;};
      inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
      inline Content& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


      // flowName Field Functions 
      bool hasFlowName() const { return this->flowName_ != nullptr;};
      void deleteFlowName() { this->flowName_ = nullptr;};
      inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
      inline Content& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


      // flowRegion Field Functions 
      bool hasFlowRegion() const { return this->flowRegion_ != nullptr;};
      void deleteFlowRegion() { this->flowRegion_ = nullptr;};
      inline string getFlowRegion() const { DARABONBA_PTR_GET_DEFAULT(flowRegion_, "") };
      inline Content& setFlowRegion(string flowRegion) { DARABONBA_PTR_SET_VALUE(flowRegion_, flowRegion) };


      // flowStatus Field Functions 
      bool hasFlowStatus() const { return this->flowStatus_ != nullptr;};
      void deleteFlowStatus() { this->flowStatus_ = nullptr;};
      inline string getFlowStatus() const { DARABONBA_PTR_GET_DEFAULT(flowStatus_, "") };
      inline Content& setFlowStatus(string flowStatus) { DARABONBA_PTR_SET_VALUE(flowStatus_, flowStatus) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Content& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The time when the flow was created.
      shared_ptr<string> createTime_ {};
      shared_ptr<string> flowFailover_ {};
      // The flow ID.
      shared_ptr<string> flowId_ {};
      // The flow name.
      shared_ptr<string> flowName_ {};
      shared_ptr<string> flowRegion_ {};
      // The state of the flow.
      shared_ptr<string> flowStatus_ {};
      // The time when the flow is started.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->description_ == nullptr && this->requestId_ == nullptr && this->retcode_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetMediaConnectFlowResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetMediaConnectFlowResponseBody::Content) };
    inline GetMediaConnectFlowResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetMediaConnectFlowResponseBody::Content) };
    inline GetMediaConnectFlowResponseBody& setContent(const GetMediaConnectFlowResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetMediaConnectFlowResponseBody& setContent(GetMediaConnectFlowResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMediaConnectFlowResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaConnectFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retcode Field Functions 
    bool hasRetcode() const { return this->retcode_ != nullptr;};
    void deleteRetcode() { this->retcode_ = nullptr;};
    inline int32_t getRetcode() const { DARABONBA_PTR_GET_DEFAULT(retcode_, 0) };
    inline GetMediaConnectFlowResponseBody& setRetcode(int32_t retcode) { DARABONBA_PTR_SET_VALUE(retcode_, retcode) };


  protected:
    // The response body.
    shared_ptr<GetMediaConnectFlowResponseBody::Content> content_ {};
    // The call description.
    shared_ptr<string> description_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned code. A value of 0 indicates the call is successful.
    shared_ptr<int32_t> retcode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
