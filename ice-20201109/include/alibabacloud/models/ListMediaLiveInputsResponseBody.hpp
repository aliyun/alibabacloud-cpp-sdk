// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVEINPUTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVEINPUTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveInputsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveInputsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveInputsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMediaLiveInputsResponseBody() = default ;
    ListMediaLiveInputsResponseBody(const ListMediaLiveInputsResponseBody &) = default ;
    ListMediaLiveInputsResponseBody(ListMediaLiveInputsResponseBody &&) = default ;
    ListMediaLiveInputsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveInputsResponseBody() = default ;
    ListMediaLiveInputsResponseBody& operator=(const ListMediaLiveInputsResponseBody &) = default ;
    ListMediaLiveInputsResponseBody& operator=(ListMediaLiveInputsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Inputs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Inputs& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelIds, channelIds_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InputId, inputId_);
        DARABONBA_PTR_TO_JSON(InputInfos, inputInfos_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Inputs& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelIds, channelIds_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InputId, inputId_);
        DARABONBA_PTR_FROM_JSON(InputInfos, inputInfos_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Inputs() = default ;
      Inputs(const Inputs &) = default ;
      Inputs(Inputs &&) = default ;
      Inputs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Inputs() = default ;
      Inputs& operator=(const Inputs &) = default ;
      Inputs& operator=(Inputs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InputInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputInfos& obj) { 
          DARABONBA_PTR_TO_JSON(DestHost, destHost_);
          DARABONBA_PTR_TO_JSON(FlowId, flowId_);
          DARABONBA_PTR_TO_JSON(FlowOutputName, flowOutputName_);
          DARABONBA_PTR_TO_JSON(MonitorUrl, monitorUrl_);
          DARABONBA_PTR_TO_JSON(SourceUrl, sourceUrl_);
          DARABONBA_PTR_TO_JSON(SrtLatency, srtLatency_);
          DARABONBA_PTR_TO_JSON(SrtMaxBitrate, srtMaxBitrate_);
          DARABONBA_PTR_TO_JSON(SrtPassphrase, srtPassphrase_);
          DARABONBA_PTR_TO_JSON(SrtPbKeyLen, srtPbKeyLen_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        };
        friend void from_json(const Darabonba::Json& j, InputInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(DestHost, destHost_);
          DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
          DARABONBA_PTR_FROM_JSON(FlowOutputName, flowOutputName_);
          DARABONBA_PTR_FROM_JSON(MonitorUrl, monitorUrl_);
          DARABONBA_PTR_FROM_JSON(SourceUrl, sourceUrl_);
          DARABONBA_PTR_FROM_JSON(SrtLatency, srtLatency_);
          DARABONBA_PTR_FROM_JSON(SrtMaxBitrate, srtMaxBitrate_);
          DARABONBA_PTR_FROM_JSON(SrtPassphrase, srtPassphrase_);
          DARABONBA_PTR_FROM_JSON(SrtPbKeyLen, srtPbKeyLen_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        };
        InputInfos() = default ;
        InputInfos(const InputInfos &) = default ;
        InputInfos(InputInfos &&) = default ;
        InputInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputInfos() = default ;
        InputInfos& operator=(const InputInfos &) = default ;
        InputInfos& operator=(InputInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->destHost_ == nullptr
        && this->flowId_ == nullptr && this->flowOutputName_ == nullptr && this->monitorUrl_ == nullptr && this->sourceUrl_ == nullptr && this->srtLatency_ == nullptr
        && this->srtMaxBitrate_ == nullptr && this->srtPassphrase_ == nullptr && this->srtPbKeyLen_ == nullptr && this->streamName_ == nullptr; };
        // destHost Field Functions 
        bool hasDestHost() const { return this->destHost_ != nullptr;};
        void deleteDestHost() { this->destHost_ = nullptr;};
        inline string getDestHost() const { DARABONBA_PTR_GET_DEFAULT(destHost_, "") };
        inline InputInfos& setDestHost(string destHost) { DARABONBA_PTR_SET_VALUE(destHost_, destHost) };


        // flowId Field Functions 
        bool hasFlowId() const { return this->flowId_ != nullptr;};
        void deleteFlowId() { this->flowId_ = nullptr;};
        inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
        inline InputInfos& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


        // flowOutputName Field Functions 
        bool hasFlowOutputName() const { return this->flowOutputName_ != nullptr;};
        void deleteFlowOutputName() { this->flowOutputName_ = nullptr;};
        inline string getFlowOutputName() const { DARABONBA_PTR_GET_DEFAULT(flowOutputName_, "") };
        inline InputInfos& setFlowOutputName(string flowOutputName) { DARABONBA_PTR_SET_VALUE(flowOutputName_, flowOutputName) };


        // monitorUrl Field Functions 
        bool hasMonitorUrl() const { return this->monitorUrl_ != nullptr;};
        void deleteMonitorUrl() { this->monitorUrl_ = nullptr;};
        inline string getMonitorUrl() const { DARABONBA_PTR_GET_DEFAULT(monitorUrl_, "") };
        inline InputInfos& setMonitorUrl(string monitorUrl) { DARABONBA_PTR_SET_VALUE(monitorUrl_, monitorUrl) };


        // sourceUrl Field Functions 
        bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
        void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
        inline string getSourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
        inline InputInfos& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


        // srtLatency Field Functions 
        bool hasSrtLatency() const { return this->srtLatency_ != nullptr;};
        void deleteSrtLatency() { this->srtLatency_ = nullptr;};
        inline int32_t getSrtLatency() const { DARABONBA_PTR_GET_DEFAULT(srtLatency_, 0) };
        inline InputInfos& setSrtLatency(int32_t srtLatency) { DARABONBA_PTR_SET_VALUE(srtLatency_, srtLatency) };


        // srtMaxBitrate Field Functions 
        bool hasSrtMaxBitrate() const { return this->srtMaxBitrate_ != nullptr;};
        void deleteSrtMaxBitrate() { this->srtMaxBitrate_ = nullptr;};
        inline int32_t getSrtMaxBitrate() const { DARABONBA_PTR_GET_DEFAULT(srtMaxBitrate_, 0) };
        inline InputInfos& setSrtMaxBitrate(int32_t srtMaxBitrate) { DARABONBA_PTR_SET_VALUE(srtMaxBitrate_, srtMaxBitrate) };


        // srtPassphrase Field Functions 
        bool hasSrtPassphrase() const { return this->srtPassphrase_ != nullptr;};
        void deleteSrtPassphrase() { this->srtPassphrase_ = nullptr;};
        inline string getSrtPassphrase() const { DARABONBA_PTR_GET_DEFAULT(srtPassphrase_, "") };
        inline InputInfos& setSrtPassphrase(string srtPassphrase) { DARABONBA_PTR_SET_VALUE(srtPassphrase_, srtPassphrase) };


        // srtPbKeyLen Field Functions 
        bool hasSrtPbKeyLen() const { return this->srtPbKeyLen_ != nullptr;};
        void deleteSrtPbKeyLen() { this->srtPbKeyLen_ = nullptr;};
        inline int32_t getSrtPbKeyLen() const { DARABONBA_PTR_GET_DEFAULT(srtPbKeyLen_, 0) };
        inline InputInfos& setSrtPbKeyLen(int32_t srtPbKeyLen) { DARABONBA_PTR_SET_VALUE(srtPbKeyLen_, srtPbKeyLen) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline InputInfos& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      protected:
        // The endpoint that the stream is pushed to. This parameter is returned for PUSH inputs.
        shared_ptr<string> destHost_ {};
        // The ID of the flow from MediaConnect.
        shared_ptr<string> flowId_ {};
        // The output name of the MediaConnect flow.
        shared_ptr<string> flowOutputName_ {};
        // The URL for input monitoring.
        shared_ptr<string> monitorUrl_ {};
        // The source URL where the stream is pulled from. This parameter is returned for PULL inputs.
        shared_ptr<string> sourceUrl_ {};
        shared_ptr<int32_t> srtLatency_ {};
        shared_ptr<int32_t> srtMaxBitrate_ {};
        shared_ptr<string> srtPassphrase_ {};
        shared_ptr<int32_t> srtPbKeyLen_ {};
        // The name of the pushed stream. This parameter is returned for PUSH inputs.
        shared_ptr<string> streamName_ {};
      };

      virtual bool empty() const override { return this->channelIds_ == nullptr
        && this->createTime_ == nullptr && this->inputId_ == nullptr && this->inputInfos_ == nullptr && this->name_ == nullptr && this->securityGroupIds_ == nullptr
        && this->type_ == nullptr; };
      // channelIds Field Functions 
      bool hasChannelIds() const { return this->channelIds_ != nullptr;};
      void deleteChannelIds() { this->channelIds_ = nullptr;};
      inline const vector<string> & getChannelIds() const { DARABONBA_PTR_GET_CONST(channelIds_, vector<string>) };
      inline vector<string> getChannelIds() { DARABONBA_PTR_GET(channelIds_, vector<string>) };
      inline Inputs& setChannelIds(const vector<string> & channelIds) { DARABONBA_PTR_SET_VALUE(channelIds_, channelIds) };
      inline Inputs& setChannelIds(vector<string> && channelIds) { DARABONBA_PTR_SET_RVALUE(channelIds_, channelIds) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Inputs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // inputId Field Functions 
      bool hasInputId() const { return this->inputId_ != nullptr;};
      void deleteInputId() { this->inputId_ = nullptr;};
      inline string getInputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
      inline Inputs& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


      // inputInfos Field Functions 
      bool hasInputInfos() const { return this->inputInfos_ != nullptr;};
      void deleteInputInfos() { this->inputInfos_ = nullptr;};
      inline const vector<Inputs::InputInfos> & getInputInfos() const { DARABONBA_PTR_GET_CONST(inputInfos_, vector<Inputs::InputInfos>) };
      inline vector<Inputs::InputInfos> getInputInfos() { DARABONBA_PTR_GET(inputInfos_, vector<Inputs::InputInfos>) };
      inline Inputs& setInputInfos(const vector<Inputs::InputInfos> & inputInfos) { DARABONBA_PTR_SET_VALUE(inputInfos_, inputInfos) };
      inline Inputs& setInputInfos(vector<Inputs::InputInfos> && inputInfos) { DARABONBA_PTR_SET_RVALUE(inputInfos_, inputInfos) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Inputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline Inputs& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline Inputs& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Inputs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The IDs of the channels associated with the input.
      shared_ptr<vector<string>> channelIds_ {};
      // The time when the input was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the input.
      shared_ptr<string> inputId_ {};
      // The input configurations.
      shared_ptr<vector<Inputs::InputInfos>> inputInfos_ {};
      // The name of the input.
      shared_ptr<string> name_ {};
      // The IDs of the security groups associated with the input.
      shared_ptr<vector<string>> securityGroupIds_ {};
      // The input type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->inputs_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const vector<ListMediaLiveInputsResponseBody::Inputs> & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<ListMediaLiveInputsResponseBody::Inputs>) };
    inline vector<ListMediaLiveInputsResponseBody::Inputs> getInputs() { DARABONBA_PTR_GET(inputs_, vector<ListMediaLiveInputsResponseBody::Inputs>) };
    inline ListMediaLiveInputsResponseBody& setInputs(const vector<ListMediaLiveInputsResponseBody::Inputs> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline ListMediaLiveInputsResponseBody& setInputs(vector<ListMediaLiveInputsResponseBody::Inputs> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMediaLiveInputsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMediaLiveInputsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaLiveInputsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMediaLiveInputsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The inputs.
    shared_ptr<vector<ListMediaLiveInputsResponseBody::Inputs>> inputs_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
